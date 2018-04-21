from functools import wraps

from . import _core
from .__core.statiskit import SlopeHeuristic, _SlopeHeuristicSelection

from .optionals import pyplot

__all__ = ['SlopeHeuristic']

class Proxy(object):

    def __init__(self, obj):
        self._obj = obj

def wrapper(f):
    @wraps(f)
    def __len__(self):
        return f(self._obj)
    return __len__

Proxy.__len__ = wrapper(SlopeHeuristic.__len__)
del SlopeHeuristic.__len__

def wrapper(f):
    @wraps(f)
    def __getitem__(self, index):
        if isinstance(index, slice):
            return [self[index] for index in range(*index.indices(len(self)))]
        else:
            if index < 0:
                index += len(self)
            if not 0 <= index < len(self):
                raise IndexError
            return f(self._obj, index)
    return __getitem__

class ScoresProxy(Proxy):
    
    def plot(self, axes=None, fmt='o', predicted=True, *args, **kwargs):
        if axes is None:
            axes = pyplot.subplot(1,1,1)
        if predicted:
            index = self._obj.selector(self._obj)
            alpha, beta = self._obj.intercepts[index], self._obj.slopes[index]
            axes.plot(*list(zip(*[(extremum, alpha + beta * extremum) for extremum in (self._obj.penshapes[index], self._obj.penshapes[-1])])))
            pass
        axes.plot(self._obj.penshapes[:], self[:], fmt, *args, **kwargs)
        axes.set_xlabel('Penality shape')
        axes.set_ylabel('Contrast')
        return axes

ScoresProxy.__getitem__ = wrapper(SlopeHeuristic.get_score)
del SlopeHeuristic.get_score
SlopeHeuristic.scores = property(ScoresProxy)

class PenshapesProxy(Proxy):
    
    def plot(self, axes=None, fmt='-', *args, **kwargs):
        if axes is None:
            axes = pyplot.subplot(1,1,1)
        axes.plot(self[:], fmt, *args, **kwargs)
        axes.set_xlabel('Point considered')
        axes.set_ylabel('Penshape value')
        return axes

PenshapesProxy.__getitem__ = wrapper(SlopeHeuristic.get_penshape)
del SlopeHeuristic.get_penshape
SlopeHeuristic.penshapes = property(PenshapesProxy)

class InterceptsProxy(Proxy):

    def plot(self, axes=None, fmt='-', *args, **kwargs):
        if axes is None:
            axes = pyplot.subplot(1,1,1)
        axes.plot(self[:], fmt, *args, **kwargs)
        axes.set_xlabel('Number of points considered')
        axes.set_ylabel('Intercept value')
        return axes

InterceptsProxy.__getitem__ = wrapper(SlopeHeuristic.get_intercept)
del SlopeHeuristic.get_intercept
SlopeHeuristic.intercepts = property(InterceptsProxy)

class SlopesProxy(Proxy):

    def plot(self, axes=None, fmt='-', *args, **kwargs):
        if axes is None:
            axes = pyplot.subplot(1,1,1)
        axes.plot(self[:], fmt, *args, **kwargs)
        axes.set_xlabel('Number of points considered')
        axes.set_ylabel('Slope value')
        return axes

SlopesProxy.__getitem__ = wrapper(SlopeHeuristic.get_slope)
del SlopeHeuristic.get_slope
SlopeHeuristic.slopes = property(SlopesProxy)

SlopeHeuristic.solver = property(SlopeHeuristic.get_solver, SlopeHeuristic.set_solver)
del SlopeHeuristic.get_solver, SlopeHeuristic.set_solver

SlopeHeuristic.selector = property(SlopeHeuristic.get_selector, SlopeHeuristic.set_selector)
del SlopeHeuristic.get_selector, SlopeHeuristic.set_selector

def wrapper(f):
    @wraps(f)
    def __getitem__(self, index):
        if isinstance(index, slice):
            return [self[index] for index in range(*index.indices(len(self)))]
        else:
            if index < 0:
                index += len(self)
            if not 0 <= index < len(self):
                raise IndexError
            item = f(self._obj, index)
            if item < len(self):
                return item
    return __getitem__

class SelectedProxy(Proxy):

    def plot(self, axes=None, fmt='-', *args, **kwargs):
        if axes is None:
            axes = pyplot.subplot(1,1,1)
        axes.plot(self[:], fmt, *args, **kwargs)
        axes.set_xlabel('Number of points considered')
        axes.set_ylabel('Index of selected model')
        return axes

SelectedProxy.__getitem__ = wrapper(SlopeHeuristic.get_selected)
del SlopeHeuristic.get_selected
SlopeHeuristic.selected = property(SelectedProxy)

class RSquaredProxy(Proxy):
    
    def plot(self, axes=None, fmt='-', *args, **kwargs):
        if axes is None:
            axes = pyplot.subplot(1,1,1)
        axes.plot(self[:], fmt, *args, **kwargs)
        axes.set_xlabel('Number of points considered')
        axes.set_ylabel('R squared')
        return axes


RSquaredProxy.__getitem__ = wrapper(SlopeHeuristic.compute_r_squared)
del SlopeHeuristic.compute_r_squared
SlopeHeuristic.r_squared = property(RSquaredProxy)

def plot(self, axes=None, **kwargs):
    if axes is None:
        axes = pyplot.subplot(2, 1, 1), pyplot.subplot(2, 1, 2)
    else:
        divider = make_axes_locatable(axes)
        axes = axes, divider.append_axes('bottom', size='50%')
    self.scores.plot(axes=axes[0], **kwargs.pop('scores', dict()))
    self.slopes.plot(axes=axes[1], **kwargs.pop('slopes', dict(color = 'b')))
    self.selected.plot(axes=axes[1].twinx(), **kwargs.pop('selected', dict(color = 'r')))
    return axes

SlopeHeuristic.plot = plot
del plot

def slope_heuristic_selection_decorator(cls):

    class Proposals(Proxy):
        
        pass

    def wrapper(f):
        @wraps(f)
        def __getitem__(self, index):
            if isinstance(index, slice):
                return [self[index] for index in range(*index.indices(len(self)))]
            else:
                if index < 0:
                    index += len(self)
                if not 0 <= index < len(self):
                    raise IndexError
                return f(self._obj, index)
        return __getitem__
        
    Proposals.__getitem__ = wrapper(cls.get_proposal)
    del cls.get_proposal
    cls.proposals = property(Proposals)

for cls in (_SlopeHeuristicSelection,):
    slope_heuristic_selection_decorator(cls)