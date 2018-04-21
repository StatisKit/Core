import math
from functools import wraps

from . import _core
from .__core.statiskit import (encoding_type,
                                             UnivariateSampleSpace,
                                                 CategoricalSampleSpace,
                                                    NominalSampleSpace,
                                                    OrdinalSampleSpace,
                                                 DiscreteSampleSpace,
                                                    IntegerSampleSpace,
                                                 ContinuousSampleSpace,
                                                    RealSampleSpace,
                                              UnivariateEvent,
                                                 CategoricalEvent,
                                                 DiscreteEvent,
                                                 ContinuousEvent,
                                              MultivariateSampleSpace,
                                                 VectorSampleSpace)

from .controls import *
from .event import *
from ._tools import remove_latex

__all__ = ['NominalSampleSpace', 'OrdinalSampleSpace',
           'IntegerSampleSpace',
           'RealSampleSpace',
           'VectorSampleSpace']

UnivariateSampleSpace.outcome = property(UnivariateSampleSpace.get_outcome)
del UnivariateSampleSpace.get_outcome

def wrapper(f):
    @wraps(f)
    def __contains__(self, event):
        if not isinstance(event, UnivariateEvent):
            event = self(event)
        return f(self, event)
    return __contains__

UnivariateSampleSpace.__contains__ = wrapper(UnivariateSampleSpace.is_compatible)
del wrapper, UnivariateSampleSpace.is_compatible

def __call__(self, event):
    """Convert a representation of an event into a categorical event

    :Parameter:
        `event` (None|:class:`statiskit.core._core.statiskit.CategoricalEvent`|basestring) - The event representation to be converted. If the event is already a categorical event or a missing event (reprensented by None), nothings is done. Otherwise, the basestring is interpreted as a categorical event.

    :Returns:
        The interpreted categorical event

    :Returns Type:
        :class:`statiskit.core._core.statiskit.CategoricalEvent`
    """
    if event is None or isinstance(event, CategoricalEvent):
        return event
    elif isinstance(event, str):
        event = event.strip()
        if event in ['', '?']:
            return None
        elif event.startswith('{') and event.endswith('}'):
            return CategoricalSetCensoredEvent(*[str(values) for values in event[1:-1].split(',')])
        else:
            return CategoricalElementaryEvent(str(event))
    else:
        raise TypeError('\'event\' parameter')

CategoricalSampleSpace.__call__ = __call__
del __call__

def __str__(self):
    return "{" + ", ".join(str(value) for value in self.values) + "}"

CategoricalSampleSpace.__str__ = __str__
del __str__

def __repr__(self):
    return "{" + ", ".join(repr(value) for value in self.values) + "}"

CategoricalSampleSpace.__repr__ = __repr__
del __repr__

def _repr_latex_(self):
    return r"$\left\{" + (", ").join(remove_latex(value._repr_latex_()) for value in self.values) + r"\right\}$"

CategoricalSampleSpace._repr_latex_ = _repr_latex_
del _repr_latex_

def wrapper(f):
    @wraps(f)
    def get_values(self):
        return [CategoricalElementaryEvent(value) for value in f(self)]
    return get_values

CategoricalSampleSpace.values = property(wrapper(CategoricalSampleSpace.get_values))

CategoricalSampleSpace.ordering = property(CategoricalSampleSpace.get_ordering)

def wrapper_encoding(f, g):

    @wraps(f)
    def getter(self):
        return str(f(self))

    @wraps(g)
    def setter(self, encoding):
        if isinstance(encoding, str):
            encoding = encoding_type.names[encoding.upper()]
        g(self, encoding)

    return getter, setter

CategoricalSampleSpace.encoding = property(*wrapper_encoding(CategoricalSampleSpace.get_encoding, CategoricalSampleSpace.set_encoding))
del CategoricalSampleSpace.get_encoding, CategoricalSampleSpace.set_encoding, wrapper_encoding

NominalSampleSpace.reference = property(NominalSampleSpace.get_reference, NominalSampleSpace.set_reference)
del NominalSampleSpace.get_reference, NominalSampleSpace.set_reference

# def wrapper(f):
#     @wraps(f)
#     def get_ordered(self):
#         return [CategoricalElementaryEvent(value) for value in f(self)]
#     return get_ordered

# OrdinalSampleSpace.ordered = property(wrapper(OrdinalSampleSpace.get_ordered))
# del wrapper, OrdinalSampleSpace.get_ordered

OrdinalSampleSpace.ordered = property(OrdinalSampleSpace.get_ordered, OrdinalSampleSpace.set_ordered)
del OrdinalSampleSpace.get_ordered, OrdinalSampleSpace.set_ordered

def __call__(self, event):
    """Convert a representation of an event into a discrete event

    :Parameter:
        `event` (None|:class:`statiskit.core._core.statiskit.DiscreteEvent`|basestring|int) - The event representation to be converted. If the event is already a discrete event or a missing event (reprensented by None), nothings is done. Otherwise, the basestring is interpreted as a discrete event.

    :Returns:
        The interpreted discrete event

    :Returns Type:
        :class:`statiskit.core._core.statiskit.DiscreteEvent`
    """
    if event is None or isinstance(event, DiscreteEvent):
        return event
    elif isinstance(event, int):
        return DiscreteElementaryEvent(event)
    elif isinstance(event, str):
        event = event.replace('\n', '').strip(' ')
        if event in ['', '?']:
            return None
        elif event.endswith('-'):
            return DiscreteLeftCensoredEvent(int(event[:-1]))
        elif event.endswith('+'):
            return DiscreteRightCensoredEvent(int(event[:-1]))
        elif event.startswith('{') and event.endswith('}'):
            return DiscreteSetCensoredEvent(*[int(values) for values in event[1:-1].split(',')])
        elif event.startswith('[') and event.endswith(']'):
            return DiscreteIntervalCensoredEvent(*[int(values) for values in event[1:-1].split(',')])
        else:
            return DiscreteElementaryEvent(int(event))
    else:
        raise TypeError('\'event\' parameter')

DiscreteSampleSpace.__call__ = __call__
del __call__

def wrapper(f):
    @wraps(f)
    def get_lower_bound(self):
        return DiscreteElementaryEvent(f(self))
    return get_lower_bound

IntegerSampleSpace.lower_bound = property(wrapper(IntegerSampleSpace.get_lower_bound))
del wrapper, IntegerSampleSpace.get_lower_bound

def wrapper(f):
    @wraps(f)
    def get_upper_bound(self):
        return DiscreteElementaryEvent(f(self))
    return get_upper_bound

IntegerSampleSpace.upper_bound = property(wrapper(IntegerSampleSpace.get_upper_bound))
del IntegerSampleSpace.get_upper_bound

#def __repr__(self):
#    string = ""
#    if self.lower_bound == controls.IMIN:
#        string += ']-infinity'
#    else:
#        string += '[' + str(self.lower_bound)
#    string += ', '
#    if self.upper_bound == controls.IMAX:
#        string += '+infinity['
#    else:
#        string += str(self.upper_bound) + ']'
#    return string
#
#IntegerSampleSpace.__str__ = IntegerSampleSpace.__repr__
#IntegerSampleSpace.__repr__ = __repr__
#del __repr__
#
#def _repr_latex_(self):
#    if self.lower_bound == controls.IMIN and self.upper_bound == controls.IMAX:
#        return r"$\mathbb{Z}$"
#    elif self.lower_bound in [0, 1] and self.upper_bound == controls.IMAX:
#        if self.lower_bound == 0:
#            return r"$\mathbb{N}$"
#        else:
#            return r"$\mathbb{N}^{*}$"
#    else:
#        string = r"$"
#        if self.lower_bound == controls.IMIN:
#            string += r"\left]-\infty"
#        else:
#            string += r"\left[" + str(self.lower_bound)
#        string += ", "
#        if self.upper_bound == controls.IMAX:
#            string += r"\infty\right["
#        else:
#            string += str(self.upper_bound) + r"\right]"
#        string += r"$"
#    return string
#
#IntegerSampleSpace._repr_latex_ = _repr_latex_
#del _repr_latex_

def __call__(self, event):
    """Convert a representation of an event into a continuous event

    :Parameter:
        `event` (None|:class:`statiskit.core._core.statiskit.ContinuousEvent`|basestring|float) - The event representation to be converted. If the event is already a continuous event or a missing event (reprensented by None), nothings is done. Otherwise, the basestring is interpreted as a continuous event.

    :Returns:
        The interpreted continuous event

    :Returns Type:
        :class:`statiskit.core._core.statiskit.ContinuousEvent`
    """
    if event is None or isinstance(event, ContinuousEvent):
        return event
    elif isinstance(event, float):
        if not math.isnan(event):
            return ContinuousElementaryEvent(event)
        else:
            return None
    elif isinstance(event, str):
        event = event.replace('\n', '').strip(' ')
        if event in ['', '?']:
            return None
        elif event.endswith('-'):
            return ContinuousLeftCensoredEvent(float(event[:-1]))
        elif event.endswith('+'):
            return ContinuousRightCensoredEvent(float(event[:-1]))
        elif event.startswith('{') and event.endswith('}'):
            return ContinuousSetCensoredEvent(*[float(values) for values in event[1:-1].split(',')])
        elif event.startswith(']') and event.endswith('['):
            return ContinuousIntervalCensoredEvent(*[float(values) for values in event[1:-1].split(',')])
        else:
            return ContinuousElementaryEvent(float(event))
    else:
        raise TypeError

ContinuousSampleSpace.__call__ = __call__
del __call__

def wrapper(f):
    @wraps(f)
    def get_lower_bound(self):
        return ContinuousElementaryEvent(f(self))
    return get_lower_bound

RealSampleSpace.lower_bound = property(wrapper(RealSampleSpace.get_lower_bound))
del RealSampleSpace.get_lower_bound

def wrapper(f):
    @wraps(f)
    def get_upper_bound(self):
        return ContinuousElementaryEvent(f(self))
    return get_upper_bound

RealSampleSpace.upper_bound = property(wrapper(RealSampleSpace.get_upper_bound))
del RealSampleSpace.get_upper_bound

#def __repr__(self):
#    string = ""
#    if self.left_closed:
#        string += "["
#    else:
#        string += "]"
#    if self.lower_bound == -1 * controls.INF:
#        string += '-infinity'
#    else:
#        string += controls.float_str(self.lower_bound)
#    string +=  ", "
#    if self.upper_bound == controls.INF:
#        string += '+infinity'
#    else:
#        string += controls.float_str(self.upper_bound)
#    if self.right_closed:
#        string += "]"
#    else:
#        string += "["
#    return string
#
#RealSampleSpace.__str__ = RealSampleSpace.__repr__
#RealSampleSpace.__repr__ = __repr__
#del __repr__
#
#def _repr_latex_(self):
#    if self.lower_bound == -1 * controls.INF and self.upper_bound == controls.INF:
#        return "$\mathbb{R}$"
#    elif self.lower_bound == 0.0 and self.upper_bound == controls.INF:
#        if self.left_closed:
#            return "$\mathbb{R}_{+}$"
#        else:
#            return "$\mathbb{R}_{+}^{*}$"
#    elif self.lower_bound == -1 * controls.INF and self.upper_bound == 0.0:
#        if self.right_closed:
#            return "$\mathbb{R}_{-}$"
#        else:
#            return "$\mathbb{R}_{-}^{*}$"
#    else:
#        string = r"$\left"
#        if self.left_closed:
#            string += "["
#        else:
#            string += "]"
#        string += controls.float_str(self.lower_bound) + ", " + controls.float_str(self.upper_bound) + r"\right"
#        if self.right_closed:
#            string += "]"
#        else:
#            string += "["
#        string += "$"
#    return string
#
#RealSampleSpace._repr_latex_ = _repr_latex_
#del _repr_latex_

#def __contains__(self, args):
#    events = UnivariateEventVector()
#    for index, arg in args:
#        try:
#            events.push_back(self.sample_space[index](arg))
#        except:
#            raise
#    return f(self, events)
#
#MultivariateSampleSpace.__contains__ = __contains__
#del __contains__

def wrapper_get(f):
    @wraps(f)
    def __getitem__(self, index):
        if index < 0:
            index += len(self)
        if not 0 <= index < len(self):
            raise IndexError(self.__class__.__name__ + " index out of range")
        return f(self, index)

    return __getitem__
    
MultivariateSampleSpace.__getitem__ = wrapper_get(MultivariateSampleSpace.get)
del MultivariateSampleSpace.get

def wrapper_set(f):
    @wraps(f)
    def __setitem__(self, index, value):
        if index < 0:
            index += len(self)
        if not 0 <= index < len(self):
            raise IndexError(self.__class__.__name__ + " index out of range")
        return f(self, index, value)

    return __setitem__

VectorSampleSpace.__setitem__ = wrapper_set(VectorSampleSpace.set)
del VectorSampleSpace.set
