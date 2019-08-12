import warnings
from tempfile import NamedTemporaryFile
import os
import six

from statiskit import stl

from . import _core

from .controls import controls
from .data import (UnivariateDataFrame,
                   MultivariateDataFrame,
                   WeightedUnivariateData,
                   WeightedMultivariateData)
from .sample_space import NominalSampleSpace
from .event import outcome_type

__all__ = ['read_csv', 'from_list', 'from_pandas']

def read_csv(filepath, sep=None, header=False, weights = False, **kwargs):
    """
    """
    if sep and not isinstance(sep, str):
        raise TypeError('\'sep\' parameter')
    with open(filepath, 'r') as filehandler:
        lines = filehandler.readlines()
    if header:
        names = [name.strip().strip('"').strip("'").strip() for name in lines.pop(0).split(sep)]
        data = [[] for name in names]
    else:
        data = [[] for event in lines[0].split(sep)]
    for line in lines:
        for index, event in enumerate(line.split(sep)):
            data[index].append(str(event.strip().strip('"').strip("'")))
    if weights:
        weights = stl.VectorDouble(*[float(weight) for weight in data.pop(-1)])
        if header:
            names.pop(-1)
    data = from_list(*data, **kwargs)
    if header:
        if isinstance(data, UnivariateDataFrame):
            data.name = names.pop()
        elif isinstance(data, MultivariateDataFrame):
                for i, j in enumerate(names):
                    data.components[i].name = str(j)
    if weights:
        if isinstance(data, UnivariateDataFrame):
            data = WeightedUnivariateData(data, weights)
        elif isinstance(data, MultivariateDataFrame):
            data = WeightedMultivariateData(data, weights)
    return data

def write_csv(data, filepath, sep=' ', header=False, censored=True):
    """
    """
    if not isinstance(data, MultivariateDataFrame):
        raise TypeError('\'data\' parameter')
    if not isinstance(sep, str):
        raise TypeError('\'sep\' parameter')
    with open(filepath, 'w') as filehandler:
        if header:
            if six.PY2:
                filehandler.write(unicode(sep.join(component.name for component in data.components)+'\n'))
            else:
                filehandler.write(sep.join(component.name for component in data.components)+'\n')
        if censored:
            for mevent in data.events:
                line = []
                for uevent in mevent:
                    if uevent is None:
                        line.append('?')
                    else:
                        if isinstance(uevent, _core.__core.statiskit._ElementaryEvent):
                            line.append(str(uevent.value))
                        elif isinstance(uevent, _core.__core.statiskit._SetCensoredEvent):
                            line.append('{' + ', '.join(str(value) for value in uevent.values) + '}')
                        elif isinstance(uevent, _core.__core.statiskit._LeftCensoredEvent):
                            line.append(str(uevent.upper_bound)+'-')
                        elif isinstance(uevent, _core.__core.statiskit._RightCensoredEvent):
                            line.append(str(uevent.lower_bound)+'+')
                        elif isinstance(uevent, _core.__core.statiskit._IntervalCensoredEvent):
                            if isinstance(uevent, _core.__core.statiskit.DiscreteEvent):
                                line.append('[' + str(uevent.lower_bound) + ', ' + str(uevent.upper_bound)+']')
                            elif isinstance(uevent, _core.__core.statiskit.ContinuousEvent):
                                line.append(']' + str(uevent.lower_bound) + ', ' + str(uevent.upper_bound)+'[')
                            else:
                                raise NotImplementedError
                        else:
                            raise NotImplementedError
                if six.PY2:
                    filehandler.write(unicode(sep.join(line)+'\n'))
                else:
                    filehandler.write(sep.join(line)+'\n')
        else:
            for mevent in data.events:
                line = []
                for uevent in mevent:
                    if uevent is None or not isinstance(uevent, __statiskit_core._ElementaryEvent):
                        warnings.warn('\'data\' parameter contains non-atomic event')
                        line.append('?')
                    else:
                        line.append(str(uevent.value))
                filehandler.write(sep.join(line) + '\n')

MultivariateDataFrame.write_csv = write_csv
del write_csv

def from_list(*data, **kwargs):
    if 'sample_spaces' in kwargs:
        sample_spaces = kwargs.pop('sample_spaces')
    else:
        sample_spaces = []
        outcomes = kwargs.pop('outcomes', [None] * len(data))
        outcomes = [outcome if outcome is None or isinstance(outcome, outcome_type) else getattr(outcome_type, outcome) for outcome in outcomes]
        for index, _data in enumerate(data):
            nbstr = 0
            nbint = 0
            nbflt = 0
            if outcomes[index] is None:
                for event in _data:
                    try:
                        controls.ZZ(event)
                        nbint += 1
                    except:
                        try:
                            controls.RR(event)
                            nbflt += 1
                        except:
                            nbstr += 1
            elif outcomes[index] is outcome_type.CATEGORICAL:
                nbstr = float("inf")
            elif outcomes[index] is outcome_type.DISCRETE:
                nbint = float("inf")
            elif outcomes[index] is outcome_type.CONTINUOUS:
                nbflt = float("inf")
            else:
                raise ValueError("'outcomes' parameter")
            if nbstr > nbint + nbflt:
                sample_spaces.append(NominalSampleSpace(stl.SetLessString(*[value.strip() for value in _data])))
            elif nbint > nbstr + nbflt:
                sample_spaces.append(controls.ZZ)
            elif nbflt > nbstr + nbint:
                sample_spaces.append(controls.RR)
            else:
                raise NotImplementedError("cannot determine sample space")
    if len(sample_spaces) == 1:
        sample_space = sample_spaces.pop()
        dataframe = UnivariateDataFrame(sample_space)
        for event in data[-1]:
            dataframe.add_event(sample_space(event))
    else:
        dataframe = MultivariateDataFrame()
        for index, sample_space in enumerate(sample_spaces):
            _dataframe = UnivariateDataFrame(sample_space)
            for event in data[index]:
                _dataframe.add_event(sample_space(event))
            dataframe.add_component(_dataframe)
    return dataframe

def from_pandas(data):
    """
    """
    filehandler = NamedTemporaryFile(delete=False)
    filehandler.close()
    data.to_csv(filehandler.name, sep=';', na_rep='?', index=False)
    data = read_csv(filehandler.name, header=True, sep=';')
    os.unlink(filehandler.name)
    return data

def to_pandas(data):
    """
    """
    filehandler = NamedTemporaryFile(delete=False)
    filehandler.close()
    write_csv(data, filehandler.name, sep=';', header=True, censored=False)
    return read_csv(filehandler.name, sep=';', header=0, na_values=['?', ''])

MultivariateDataFrame.to_pandas = to_pandas
del to_pandas
