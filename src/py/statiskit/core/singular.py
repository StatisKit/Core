from functools import wraps
import math

from . import _core
from .__core.statiskit import (SingularDistribution,
                               MultinomialSingularDistribution,
                               DirichletMultinomialSingularDistribution)

__all__ = ['MultinomialSingularDistribution',
           'DirichletMultinomialSingularDistribution']

def wrapper_probability(f):
    @wraps(f)
    def probability(self, *events, **kwargs):
        if len(events) == 1:
            event = events[-1]
        else:
            event = None
        if not isinstance(event, MultivariateEvent):
            event = VectorEvent(len(events))
            for index, component in enumerate(events):
                if isinstance(component, str):
                    event[index] = CategoricalElementaryEvent(component)
                elif isinstance(component, int):
                    event[index] = DiscreteElementaryEvent(component)
                elif isinstance(component, float):
                    event[index] = ContinuousElementaryEvent(component)
                elif isinstance(component, UnivariateEvent):
                    event[index] = component
                else:
                    raise TypeError('\'events\' parameters')                
            # event = VectorEvent(event)
        if not isinstance(event, MultivariateEvent):
            raise TypeError('\'event\' parameter')
        return f(self, event, kwargs.pop('log', False))
    return probability
    
SingularDistribution.probability = wrapper_probability(SingularDistribution.probability)

SingularDistribution.nb_parameters = property(SingularDistribution.get_nb_parameters)
del SingularDistribution.get_nb_parameters

SingularDistribution.nb_components = property(SingularDistribution.get_nb_components)
del SingularDistribution.get_nb_components

MultinomialSingularDistribution.pi = property(MultinomialSingularDistribution.get_pi, MultinomialSingularDistribution.set_pi)
del MultinomialSingularDistribution.get_pi, MultinomialSingularDistribution.set_pi

def __str__(self):
    return "M(S, " + str(self.pi) + ")"

MultinomialSingularDistribution.__str__ = __str__
MultinomialSingularDistribution.__repr__ = __str__
del __str__

def _repr_latex_(self):
    return r"$\mathcal{M}\left(S, " + self.pi._repr_latex_()[1:-1] + r"\right)$"

MultinomialSingularDistribution._repr_latex_ = _repr_latex_
del _repr_latex_

DirichletMultinomialSingularDistribution.alpha = property(DirichletMultinomialSingularDistribution.get_alpha, DirichletMultinomialSingularDistribution.set_alpha)
del DirichletMultinomialSingularDistribution.get_alpha, DirichletMultinomialSingularDistribution.set_alpha

def __str__(self):
    return "DM(S, " + str(self.alpha) + ")"

DirichletMultinomialSingularDistribution.__str__ = __str__
DirichletMultinomialSingularDistribution.__repr__ = __str__
del __str__

def _repr_latex_(self):
    return r"$\mathcal{DM}\left(S, " + self.alpha._repr_latex_()[1:-1] + r"\right)$"

DirichletMultinomialSingularDistribution._repr_latex_ = _repr_latex_
del _repr_latex_

SplittingDistributionEstimation.Estimator.sum = property(SplittingDistributionEstimation.Estimator.get_sum, SplittingDistributionEstimation.Estimator.set_sum)
del SplittingDistributionEstimation.Estimator.get_sum, SplittingDistributionEstimation.Estimator.set_sum

SplittingDistributionEstimation.Estimator.singular = property(SplittingDistributionEstimation.Estimator.get_singular, SplittingDistributionEstimation.Estimator.set_singular)
del SplittingDistributionEstimation.Estimator.get_singular, SplittingDistributionEstimation.Estimator.set_singular

SplittingDistributionEstimation.sum = property(SplittingDistributionEstimation.get_sum)
del SplittingDistributionEstimation.get_sum

SplittingDistributionEstimation.get_singular = property(SplittingDistributionEstimation.get_singular)
del SplittingDistributionEstimation.get_singular

def singular_selection(*args, **kwargs):
    data = kwargs.pop('data', None)
    if len(args) == 0:
        raise ValueError()
    elif len(args) == 1:
        arg = args[0]
        if arg == 'MN':
            algo = kwargs.pop('algo', 'default')
            mapping = dict(default = MultinomialSingularDistributionEstimation.Estimator)
            return _estimation(algo, data, mapping, **kwargs)
        elif arg == 'DM':
            algo = kwargs.pop('algo', 'default')
            mapping = dict(default = DirichletMultinomialSingularDistributionEstimation.Estimator)
            return _estimation(algo, data, mapping, **kwargs)
        else:
            raise ValueError("'args' parameter")
    else:
        algo = kwargs.pop('algo', 'criterion')
        mapping = dict(criterion = SingularDistributionSelection.CriterionEstimator)
        estimators = []
        for arg in args:
            estimators.append(singular_selection(arg, **dict((key, value) for (key, value) in kwargs.items() if key == "sum")))
        kwargs.pop('sum', None)
        return _estimation(algo, data, mapping, estimators=estimators, **kwargs)

def splitting_estimation(data=None, **kwargs):
    mapping = dict(default = SplittingDistributionEstimation.Estimator)
    return _estimation('default', data, mapping, **kwargs)

SingularDistributionEstimation.distribution = property(SingularDistributionEstimation.get_distribution)
del SingularDistributionEstimation.get_distribution