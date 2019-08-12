from functools import wraps

from . import _core

from .__core.statiskit import (_Selection,
                               MultivariateDistributionEstimation,
                               UnivariateDistributionEstimation)
from  .estimator import _Estimation

__all__ = ["univariate_selection",
           "multivariate_selection"]

univariate_selection = _Estimation(_Selection,
                                   name="Selection",
                                   subclass=UnivariateDistributionEstimation)
multivariate_selection = _Estimation(_Selection,
                                     name="Selection",
                                     subclass=MultivariateDistributionEstimation)
def selection_decorator(cls):

    class Estimations(object):

        def __init__(self, estimation):
            self._estimation = estimation

    class Scores(object):

        def __init__(self, estimation):
            self._estimation = estimation

        def __str__(self):
          return str(self[:])
        
        def __repr__(self):
          return repr(self[:])
        
        def plot(self, axes=None):
            if axes is None:
                axes = pyplot.subplot(1,1,1)
            axes.plot(self[:])
            return axes

    def wrapper__len__(f):
        @wraps(f)
        def __len__(self):
            return f(self._estimation)
        return __len__

    Estimations.__len__ = wrapper__len__(cls.__len__)
    Scores.__len__ = wrapper__len__(cls.__len__)
    del cls.__len__

    def wrapper__getitem__(f):
        @wraps(f)
        def __getitem__(self, index):
            if isinstance(index, slice):
                return [self[index] for index in range(*index.indices(len(self)))]
            else:
                if index < 0:
                    index += len(self)
                if not 0 <= index < len(self):
                    raise IndexError(self.__class__.__name__ + " index out of range")
                return f(self._estimation, index)
        return __getitem__

    Estimations.__getitem__ = wrapper__getitem__(cls.get_estimation)
    del cls.get_estimation
    Scores.__getitem__ = wrapper__getitem__(cls.get_score)
    del cls.get_score

    cls.estimations = property(Estimations)
    cls.scores = property(Scores)

    def estimator_decorator(cls):

        class Estimators(object):

            def __init__(self, estimator):
                self._estimator = estimator

        def wrapper__len__(f):
            @wraps(f)
            def __len__(self):
                return f(self._estimator)
            return __len__

        Estimators.__len__ = wrapper__len__(cls.__len__)
        del cls.__len__

        def wrapper_add(f):
            @wraps(f)
            def add(self, estimator):
                f(self._estimator, estimator)
            return add

        Estimators.add = wrapper_add(cls.add_estimator)
        del cls.add_estimator

        def wrapper_remove(f):
            @wraps(f)
            def remove(self, index):
                if index < 0:
                    index += len(self)
                if not 0 <= index < len(index):
                    raise IndexError("'index' parameter")
                f(self._estimator, index)
            return remove

        Estimators.remove = wrapper_add(cls.remove_estimator)
        del cls.remove_estimator

        def wrapper__getitem__(f):
            @wraps(f)
            def __getitem__(self, index):
                if isinstance(index, slice):
                    return [self[index] for index in range(*index.indices(len(self)))]
                else:
                    if index < 0:
                        index += len(self)
                    if not 0 <= index < len(self):
                        raise IndexError(self.__class__.__name__ + " index out of range")
                    return f(self._estimator, index)
            return __getitem__

        Estimators.__getitem__ = wrapper__getitem__(cls.get_estimator)
        del cls.get_estimator

        def wrapper__setitem__(f):
            @wraps(f)
            def __setitem__(self, index, estimator):
                if isinstance(index, slice):
                    return [self[index] for index in range(*index.indices(len(self)))]
                else:
                    if index < 0:
                        index += len(self)
                    if not 0 <= index < len(self):
                        raise IndexError(self.__class__.__name__ + " index out of range")
                    return f(self._estimator, index, estimator)
            return __setitem__

        Estimators.__setitem__ = wrapper__setitem__(cls.set_estimator)
        del cls.set_estimator


        def set_estimators(self, estimators):
            # _estimators = self.estimators[:]
            try:
                while len(self.estimators) > 0:
                    self.estimators.remove(0)
                for estimator in estimators:
                    self.estimators.add(estimator)
            except:
                raise
                self.estimators = _estimators
                
        cls.estimators = property(Estimators, set_estimators)

    estimator_decorator(cls.Estimator)

    def cirterion_estimator_decorator(cls):

        cls.criterion_type.AICc = cls.criterion_type.AI_CC
        del cls.criterion_type.AI_CC

        def wrapper_set_criterion(f):
            @wraps(f)
            def set_criterion(self, criterion):
                if isinstance(criterion, str):
                    criterion = getattr(cls.criterion_type, criterion)
                f(self, criterion)
            return set_criterion

        cls.criterion = property(cls.get_criterion, wrapper_set_criterion(cls.set_criterion))

    cirterion_estimator_decorator(cls.CriterionEstimator)

for cls in _Selection:
    selection_decorator(cls)
