from functools import wraps
import warnings
import re
import ast

from . import _core
from .__core.statiskit import (UnivariateData,
                               MultivariateData,
                               NamedData,
                               UnivariateDataFrame,
                               MultivariateDataFrame,
                               _WeightedData,
                               WeightedUnivariateData,
                               WeightedMultivariateData,
                               Indices)

from .controls import controls
from .event import outcome_type
from .indicator import (location_estimation,
                        dispersion_estimation)

__all__ = ['UnivariateDataFrame',
           'WeightedUnivariateData',
           'MultivariateDataFrame',
           'WeightedMultivariateData']

for cls in _WeightedData:
    cls.origin = property(cls.origin)

UnivariateData.sample_space = property(UnivariateData.get_sample_space)
MultivariateData.sample_space = property(MultivariateData.get_sample_space)
del UnivariateData.get_sample_space

UnivariateData.total = property(UnivariateData.compute_total)
del UnivariateData.compute_total

UnivariateData.min = property(UnivariateData.compute_minimum)
del UnivariateData.compute_minimum

UnivariateData.max = property(UnivariateData.compute_maximum)
del UnivariateData.compute_maximum

def get_location(self):
    if not hasattr(self, '_location'):
        return location_estimation('mean', data=self).location
    else:
        return self._location(self).location

def set_location(self, location):
    self._location = location_estimation(location, data="univariate")

UnivariateData.location = property(get_location, set_location)
del get_location, set_location

def get_dispersion(self):
    if not hasattr(self, '_dispersion'):
        return dispersion_estimation('variance', data=self).dispersion
    else:
        return self._dispersion(self, location=self.location).dispersion

def set_dispersion(self, dispersion):
    self._dispersion = dispersion_estimation(dispersion, data="univariate")

UnivariateData.dispersion = property(get_dispersion, set_dispersion)
del get_dispersion, set_dispersion

def wrapper_set_name(f):
    @wraps(f)
    def set_name(self, name):
        if not isinstance(name, str):
            raise TypeError('expected basestring, but got {!r}'.format(type(name)))
        is_name = True
        try:
            root = ast.parse(name)
        except SyntaxError:
            is_name = False
        else:
            if not isinstance(root, ast.Module):
                is_name = False
            if len(root.body) != 1:
                is_name = False
            if not isinstance(root.body[0], ast.Expr):
                is_name = False
            if not isinstance(root.body[0].value, ast.Name):
                is_name = False
            if root.body[0].value.id != name:
                is_name = False
        if not is_name:
            warn = "invalid identifier " + name
            name = re.sub('[^0-9a-zA-Z_]', '', name)
            name = re.sub('^[^a-zA-Z_]+', '', name)
            warnings.warn(warn + " converted to " + name, SyntaxWarning)

        f(self, name)
        

    return set_name

NamedData.name = property(NamedData.get_name, wrapper_set_name(NamedData.set_name))
del wrapper_set_name, NamedData.get_name, NamedData.set_name

UnivariateDataFrame.sample_space = property(UnivariateData.sample_space.fget, UnivariateDataFrame.set_sample_space)
del UnivariateDataFrame.set_sample_space

def __str__(self):
    return ""
    # events = self.events
    # if len(events) > controls.head:
    #     rows = [("", str(self.name))] + [(str(index), str(event)) if event is not None else (repr(index), '?') for index, event in enumerate(events) if index < controls.head] + [('...', '...')] + [(repr(index), repr(event)) if event is not None else (repr(index), '?') for index, event in enumerate(events) if index > max(len(events) - controls.tail, controls.head)]
    # else:
    #     rows = [("", str(self.name))] + [(str(index), str(event)) if event is not None else (repr(index), '?') for index, event in enumerate(events)]
    # columns = list(zip(*rows))
    # maxima = [max(max(*[len(row) for row in column]), 3) + 2 for column in columns]
    # string = []
    # for index, row in enumerate(rows):
    #     string.append(' '.join(('{:<' + repr(maximum) + '}').format(row[index]) for index, maximum in enumerate(maxima)))
    # return '\n'.join(string)

UnivariateDataFrame.__str__ = UnivariateDataFrame.__str__
UnivariateDataFrame.__repr__ = __str__
del __str__

def _repr_html_(self):
    sample_space = self.sample_space
    string = '<table style="max-width: 100%;">\n\t\t<tr>\n\t\t\t<th></th>\n\t\t\t<th>$'+ r'\mathbf{' + self.name + '}$</th>\n\t\t</tr>'
    events = self.events
    for index, event in enumerate(events):
        string += '\n\t\t<tr>\n\t\t\t<th>' + repr(index) + '</th>\n'
        string += '\n\t\t\t<td>'
        if event is not None:
            string += event._repr_latex_()
        else:
            string += sample_space._repr_latex_()
        string += '</td>'
    string += '\n\t</table>'
    return string

UnivariateDataFrame._repr_html_ = _repr_html_
del _repr_html_

def pdf_plot(self, axes=None, **kwargs):
    from .estimation import frequency_estimation, histogram_estimation
    sample_space = self.sample_space
    norm = kwargs.pop('norm', False)
    if isinstance(norm, bool):
        if not norm:
            kwargs['norm'] = self.total
    elif isinstance(norm, (int, float)):
        if norm <= 0:
            raise ValueError('\'norm\' parameter')
        kwargs['norm'] = norm
    else:
        raise TypeError('\'norm\' parameter')
    if sample_space.outcome == outcome_type.CATEGORICAL:
        estimation = frequency_estimation(data = self, **kwargs.pop('frequency', dict(lazy=True)))
        axes = estimation.estimated.pdf_plot(axes=axes, **kwargs)
    elif sample_space.outcome == outcome_type.DISCRETE:
        estimation = frequency_estimation(data = self, **kwargs.pop('frequency', dict(lazy=True)))
        axes = estimation.estimated.pdf_plot(axes=axes, pmin=0., pmax=1., **kwargs)
    elif sample_space.outcome == outcome_type.CONTINUOUS:
        fmt = kwargs.pop('fmt', '|')
        if fmt == '|':
            estimation = histogram_estimation(self, **kwargs.pop('histogram', dict(algo='irr' if self.total > 700. else 'reg', lazy=True)))
            axes = estimation.estimated.pdf_plot(axes=axes, fmt=fmt, **kwargs)
        elif fmt == '-':
            raise NotImplementedError
    else:
        raise NotImplementedError
    return axes

UnivariateDataFrame.pdf_plot = pdf_plot
del pdf_plot

def cdf_plot(self, axes=None, **kwargs):
    from .estimation import frequency_estimation
    sample_space = self.sample_space
    norm = kwargs.pop('norm', False)
    if isinstance(norm, bool):
        if not norm:
            kwargs['norm'] = self.total
    elif isinstance(norm, (int, float)):
        if norm <= 0:
            raise ValueError('\'norm\' parameter')
        kwargs['norm'] = norm
    else:
        raise TypeError('\'norm\' parameter')
    estimation = frequency_estimation(data = self, **kwargs.pop('frequency', dict(lazy=True)))
    if not sample_space.outcome is outcome_type.CATEGORICAL:
        if not 'pmin' in kwargs:
            kwargs['pmin'] = 0.
        if not 'pmax' in kwargs:
            kwargs['pmax'] = 1.
    return estimation.estimated.cdf_plot(axes=axes, **kwargs)

UnivariateDataFrame.cdf_plot = cdf_plot
del cdf_plot

def box_plot(self, axes=None, **kwargs):
    from .estimation import frequency_estimation
    sample_space = self.sample_space
    norm = kwargs.pop('norm', False)
    if isinstance(norm, bool):
        if not norm:
            kwargs['norm'] = self.total
    elif isinstance(norm, (int, float)):
        if norm <= 0:
            raise ValueError('\'norm\' parameter')
        kwargs['norm'] = norm
    else:
        raise TypeError('\'norm\' parameter')
    estimation = frequency_estimation(data = self, **kwargs.pop('frequency', dict(lazy=True)))
    return estimation.estimated.box_plot(axes=axes, **kwargs)

UnivariateDataFrame.box_plot = box_plot
del box_plot

MultivariateData.total = property(MultivariateData.compute_total)
del MultivariateData.compute_total

def wrapper_select(f):

    @wraps(f)
    def select(self, *args):
        args = [index if index >= 0 else index + len(self.components) for index in args]
        if len(args) == 1:
            args = args.pop()
            return f(self, args)
        else:
            return f(self, Indices(*args))
    return select

MultivariateData.select = wrapper_select(MultivariateData.select)
del wrapper_select

def get_location(self):
    if not hasattr(self, '_location'):
        return location_estimation('mean', data=self).location
    else:
        return self._location(self).location

def set_location(self, location):
    self._location = location_estimation(location, data="multivariate")

MultivariateData.location = property(get_location, set_location)
del get_location, set_location

def get_dispersion(self):
    if not hasattr(self, '_dispersion'):
        return dispersion_estimation('variance', location=self.location, data=self).dispersion
    else:
        return self._dispersion(self, location=self.location).dispersion

def set_dispersion(self, dispersion):
    self._dispersion = dispersion_estimation(dispersion)

MultivariateData.dispersion = property(get_dispersion, set_dispersion)
del get_dispersion, set_dispersion

class Components(object):

    def __init__(self, data):
        self._data = data

    def __len__(self):
        return len(self._data.sample_space)

    def __iter__(self):

        class Iterator(object):

            def __init__(self, components):
                self._components = components
                self._index = 0

            def __next__(self):
                if self._index < len(self._components):
                    component = self._components.select(self._index)
                    self._index += 1
                    return component
                else:
                    raise StopIteration()

        return Iterator(self)
        
def wrapper_components(f):

    @wraps(f)
    def __getitem__(self, index):
        if index < 0:
            index += len(self)
        if not 0 <= index < len(self):
            raise IndexError(self._dataframe.__class__.__name__ + " component index out of range")
        return f(self._data, index)

    return __getitem__
Components.__getitem__ = wrapper_components(MultivariateData.select)
del wrapper_components,
MultivariateData.components = property(Components)

# MultivariateData.min = property(MultivariateData.compute_minimum)
# del MultivariateData.compute_minimum

# MultivariateData.max = property(MultivariateData.compute_maximum)
# del MultivariateData.compute_maximum

def names(self):
    return [str(component.name) for component in self.components]

MultivariateDataFrame.names = property(names)
del names

def __dir__(self):
    return sorted(self.names) 

MultivariateDataFrame.__dir__ = __dir__
del __dir__

def __getattr__(self, attr):
    try:
        names = self.names
        index = names.index(attr)
        return self.components[index]
    except:
        raise AttributeError("'" + self.__class__.__name__ + "' object has no attribute '" + attr + "'")

MultivariateDataFrame.__getattr__ = __getattr__
del __getattr__

def __repr__(self):
    events = self.events
    if len(events) > controls.head:
        rows = [[""] + [repr(component.name) for component in self.components]] + [[repr(index)] + [repr(uevent) if uevent is not None else '?' for uevent in mevent] for index, mevent in enumerate(events) if index < controls.head] + [['...'] + ['...'] * len(self.components)] + [[repr(index)] + [repr(uevent) if uevent is not None else '?' for uevent in mevent] for index, mevent in enumerate(events) if index > max(len(events) - controls.tail, controls.head)]
    else:
        rows = [[""] + [repr(component.name) for component in self.components]] + [[repr(index)] + [repr(uevent) if uevent is not None else '?' for uevent in mevent] for index, mevent in enumerate(events)]
    columns = list(zip(*rows))
    maxima = [max(max(*[len(row) for row in column]), 3) + 2 for column in columns]
    string = []
    for index, row in enumerate(rows):
        string.append(' '.join(('{:<' + repr(maximum) + '}').format(row[index]) for index, maximum in enumerate(maxima)))
    return '\n'.join(string)

MultivariateDataFrame.__str__ = MultivariateDataFrame.__repr__
MultivariateDataFrame.__repr__ = __repr__
del __repr__

def _repr_html_(self):
    string = '<table style="max-width: 100%;">'
    string += '\n\t\t<tr>\n\t\t\t<th></th>'
    for component in self.components:
        string += '\n\t\t\t<th>'+ component.name + '</th>'
    string += '\n\t\t</tr>'
    events = self.events
    for i, event in enumerate(events):
        string += '\n\t\t<tr>\n\t\t\t<th>' + repr(i) + '</th>' + '\n\t\t\t<td>'
        string += '</td>\n\t\t\t<td>'.join(event[k]._repr_latex_() if event[k] is not None else self.sample_space[k]._repr_latex_() for k in range(len(event)))
        string += '</td>'
    string += '\n\t</table>'
    return string

MultivariateDataFrame._repr_html_ = _repr_html_
del _repr_html_

#def lorenz_plot(self, axes=None, fmt='-', color='b', alpha=1., **kwargs):
#    sample_space = self.sample_space
#    norm = kwargs.pop('norm', False)
#    if isinstance(norm, bool):
#        if not norm:
#            kwargs['norm'] = self.compute_total(True)
#    elif isinstance(norm, (int, float)):
#        if norm <= 0:
#            raise ValueError('\'norm\' parameter')
#        kwargs['norm'] = norm
#    else:
#        raise TypeError('\'norm\' parameter')
#    estimation = frequency_estimation(data = self, **kwargs.pop('frequency', dict(lazy=True)))
#    if not sample_space.outcome is outcome_type.CATEGORICAL:
#        if not 'pmin' in kwargs:
#            kwargs['pmin'] = 0.
#        if not 'pmax' in kwargs:
#            kwargs['pmax'] = 1.
#    return estimation.estimated.lorenz_plot(axes=axes, fmt=fmt, color=color, alpha=alpha, **kwargs)
#
#UnivariateDataFrame.lorenz_plot = lorenz_plot
#del lorenz_plot