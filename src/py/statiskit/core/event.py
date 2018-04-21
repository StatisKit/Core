from functools import wraps

from . import _core
from .__core.statiskit import (outcome_type, event_type,
                               UnivariateEvent, CategoricalEvent, DiscreteEvent, ContinuousEvent,
                               _ElementaryEvent, _CensoredEvent, _LeftCensoredEvent, _RightCensoredEvent, _IntervalCensoredEvent,
                               CategoricalElementaryEvent, CategoricalCensoredEvent,
                               DiscreteElementaryEvent, DiscreteCensoredEvent, DiscreteLeftCensoredEvent, DiscreteRightCensoredEvent, DiscreteIntervalCensoredEvent,
                               ContinuousElementaryEvent, ContinuousCensoredEvent, ContinuousLeftCensoredEvent, ContinuousRightCensoredEvent,ContinuousIntervalCensoredEvent,
                               MultivariateEvent, VectorEvent)

from .controls import controls
from ._tools import float_str, remove_latex

__all__ = ['outcome_type', 'event_type',
           'CategoricalElementaryEvent', 'CategoricalCensoredEvent',
           'DiscreteElementaryEvent', 'DiscreteCensoredEvent', 'DiscreteLeftCensoredEvent', 'DiscreteRightCensoredEvent', 'DiscreteIntervalCensoredEvent',
           'ContinuousElementaryEvent', 'ContinuousCensoredEvent', 'ContinuousLeftCensoredEvent', 'ContinuousRightCensoredEvent', 'ContinuousIntervalCensoredEvent',
           'VectorEvent']

UnivariateEvent.outcome = property(UnivariateEvent.get_outcome)
del UnivariateEvent.get_outcome

UnivariateEvent.event = property(UnivariateEvent.get_event)
del UnivariateEvent.get_event

def type_to_event(event):
    if isinstance(event, str):
        event = CategoricalElementaryEvent(event)
    elif isinstance(event, int):
        event = DiscreteElementaryEvent(event)
    elif isinstance(event, float):
        event = ContinuousElementaryEvent(event)
    elif not isinstance(event, UnivariateEvent):
        raise TypeError('\'event\' parameter')
    return event

def types_to_event(*event):
    if len(event) == 1:
        event = event[-1]
    else:
        _event = VectorEvent(len(event))
        for index, component in enumerate(event):
            _event[index] = type_to_event(component)
        event = _event
    if not isinstance(event, MultivariateEvent):
        raise TypeError('\'event\' parameter')
    return event

def statiskit_elementary_event_decorator(cls):

    def __str__(self):
        return str(self.value)

    cls.__str__ = __str__
    del __str__

    def _repr_latex_(self):
        return "$" + repr(self) + "$"

    cls._repr_latex_ = _repr_latex_
    del _repr_latex_

    cls.value = property(cls.get_value)
    del cls.get_value

for cls in _ElementaryEvent:
    statiskit_elementary_event_decorator(cls)

def __repr__(self):
    return str(self.value)

CategoricalElementaryEvent.__repr__ = __repr__
del __repr__

def __repr__(self):
    return str(self.value)

DiscreteElementaryEvent.__repr__ = __repr__
del __repr__

def __repr__(self):
    return float_str(self.value)

ContinuousElementaryEvent.__repr__ = __repr__
del __repr__

def statiskit_censored_event_decorator(cls):

    def __str__(self):
        return "{" + ", ".join(str(value) for value in self.values) + "}"

    cls.__str__ = __str__
    del __str__

    def __repr__(self):
        return "{" + ", ".join(repr(value) for value in self.values) + "}"

    cls.__repr__ = __repr__
    del __repr__

    def _repr_latex_(self):
        return r"$\left\{" + ", ".join(remove_latex(value._repr_latex_()) for value in self.values) + r"}\right\}$"

    cls._repr_latex_ = _repr_latex_
    del _repr_latex_

def wrapper(f):
    @wraps(f)
    def get_values(self):
        values = f(self)
        return [CategoricalElementaryEvent(value) for value in values]

CategoricalCensoredEvent.values = wrapper(CategoricalCensoredEvent.get_values)
del CategoricalCensoredEvent.get_values

def wrapper(f):
    @wraps(f)
    def get_values(self):
        values = f(self)
        return [DiscreteElementaryEvent(value) for value in values]

DiscreteCensoredEvent.values = wrapper(DiscreteCensoredEvent.get_values)
del DiscreteCensoredEvent.get_values

def wrapper(f):
    @wraps(f)
    def get_values(self):
        values = f(self)
        return [ContinuousElementaryEvent(value) for value in values]

ContinuousCensoredEvent.values = wrapper(ContinuousCensoredEvent.get_values)
del ContinuousCensoredEvent.get_values

for cls in _CensoredEvent:
    statiskit_censored_event_decorator(cls)

def statiskit_left_censored_event_decorator(cls):

    def __str__(self):
        return str(self.upper_bound) + "-"

    cls.__str__ = __str__
    del __str__

    def __repr__(self):
        return repr(self.upper_bound) + "-"

    cls.__repr__ = __repr__
    del __repr__

    def _repr_latex_(self):
        return r"$\left] -\infty, " + str(self.upper_bound) + r" \right]$"

    cls._repr_latex_ = _repr_latex_
    del _repr_latex_

def wrapper(f):
    @wraps(f)
    def get_upper_bound(self):
        return DiscreteElementaryEvent(f(self))

DiscreteLeftCensoredEvent.upper_bound = property(wrapper(DiscreteLeftCensoredEvent.get_upper_bound))
del DiscreteLeftCensoredEvent.get_upper_bound

def wrapper(f):
    @wraps(f)
    def get_upper_bound(self):
        return ContinuousElementaryEvent(f(self))

ContinuousLeftCensoredEvent.upper_bound = property(wrapper(ContinuousLeftCensoredEvent.get_upper_bound))
del ContinuousLeftCensoredEvent.get_upper_bound

def statiskit_right_censorted_event_decorator(cls):

    def __str__(self):
        return str(self.lower_bound) + "+"

    cls.__str__ = __str__
    del __str__

    def __repr__(self):
        return repr(self.lower_bound) + "+"

    cls.__repr__ = __repr__
    del __repr__

    def _repr_latex_(self):
        return r"$\left[" + remove_latex(self.lower_bound._repr_latex_()) + r", \infty \right[$"

    cls._repr_latex_ = _repr_latex_
    del _repr_latex_

def wrapper(f):
    @wraps(f)
    def get_lower_bound(self):
        return DiscreteElementaryEvent(f(self))

DiscreteRightCensoredEvent.lower_bound = property(wrapper(DiscreteRightCensoredEvent.get_lower_bound))
del DiscreteRightCensoredEvent.get_lower_bound

def wrapper(f):
    @wraps(f)
    def get_lower_bound(self):
        return ContinuousElementaryEvent(f(self))

ContinuousRightCensoredEvent.lower_bound = property(wrapper(ContinuousRightCensoredEvent.get_lower_bound))
del ContinuousRightCensoredEvent.get_lower_bound

def statiskit_interval_censorted_event_decorator(cls):

    def __str__(self):
        return "[" + str(self.lower_bound) + ", " + str(self.upper_bound) + "]"

    cls.__str__ = __str__
    del __str__

    def __repr__(self):
        return "[" + repr(self.lower_bound) + ", " + repr(self.upper_bound) + "]"

    cls.__repr__ = __repr__
    del __repr__

    def _repr_latex_(self):
        return r"$\left[" + remove_latex(self.lower_bound._repr_latex_()) + ", " + remove_latex(self.upper_bound._repr_latex_()) + r"\right]$"

    cls._repr_latex_ = _repr_latex_
    del _repr_latex_

def wrapper(f):
    @wraps(f)
    def get_upper_bound(self):
        return DiscreteElementaryEvent(f(self))

DiscreteIntervalCensoredEvent.upper_bound = property(wrapper(DiscreteIntervalCensoredEvent.get_upper_bound))
del DiscreteIntervalCensoredEvent.get_upper_bound

def wrapper(f):
    @wraps(f)
    def get_upper_bound(self):
        return ContinuousElementaryEvent(f(self))

ContinuousIntervalCensoredEvent.upper_bound = property(wrapper(ContinuousIntervalCensoredEvent.get_upper_bound))
del ContinuousIntervalCensoredEvent.get_upper_bound

def wrapper(f):
    @wraps(f)
    def get_lower_bound(self):
        return DiscreteElementaryEvent(f(self))

DiscreteIntervalCensoredEvent.lower_bound = property(wrapper(DiscreteIntervalCensoredEvent.get_lower_bound))
del DiscreteIntervalCensoredEvent.get_lower_bound

def wrapper(f):
    @wraps(f)
    def get_lower_bound(self):
        return ContinuousElementaryEvent(f(self))

ContinuousIntervalCensoredEvent.lower_bound = property(wrapper(ContinuousIntervalCensoredEvent.get_lower_bound))
del ContinuousIntervalCensoredEvent.get_lower_bound

def wrapper(f):
    @wraps(f)
    def __getitem__(self, index):
        if isinstance(index, slice):
            return [self[_index] for _index in range(*index.indices(len(self)))]
        else:
            if index < 0:
                index += len(self)
            if not 0 <= index < len(self):
                raise IndexError
            return f(self, index)
    return __getitem__

MultivariateEvent.__getitem__ = wrapper(MultivariateEvent.get)
del wrapper, MultivariateEvent.get

def __str__(self):
    return '(' + ', '.join(str(event) if not event is None else '?' for event in self) + ')'

MultivariateEvent.__str__ = __str__
del __str__

def __repr__(self):
    return '(' + ', '.join(repr(event) if not event is None else '?' for event in self) + ')'

MultivariateEvent.__repr__ = __repr__
del __repr__

def wrapper(f):
    @wraps(f)
    def __setitem__(self, index, event):
        if isinstance(index, slice):
            for _index, _event in zip(range(*index.indices(len(self))), event):
                self[_index] = _event
        if index < 0:
            index += len(self)
        if not 0 <= index < len(self):
            raise IndexError
        f(self, index, event)
    return __setitem__

VectorEvent.__setitem__ = wrapper(VectorEvent.set)
del wrapper, VectorEvent.set