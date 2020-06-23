from functools import wraps

from . import _core
from .__core.statiskit import (_LazyEstimation,
                                             _ActiveEstimation,
                                             _OptimizationEstimationImpl,
                                             _Selection,
                                             _OptimizationEstimation,
                                             _ShiftedDistributionEstimation,
                                             UnivariateDistributionEstimation,
                                                CategoricalUnivariateDistributionEstimation,
                                                    CategoricalUnivariateDistributionSelection,
                                                    CategoricalUnivariateMixtureDistributionEMEstimation,
                                                DiscreteUnivariateDistributionEstimation, 
                                                    DiscreteUnivariateFrequencyDistributionEstimation,
                                                    DiscreteUnivariateDistributionSelection,
                                                    PoissonDistributionMLEstimation,# PoissonDistributionMMEstimation,
                                                    BinomialDistributionMLEstimation, BinomialDistributionMMEstimation,
                                                    LogarithmicDistributionMLEstimation,
                                                    GeometricDistributionMLEstimation,
                                                    NegativeBinomialDistributionMLEstimation, NegativeBinomialDistributionMMEstimation,
                                                    DiscreteUnivariateMixtureDistributionEMEstimation,
                                                    DiscreteUnivariateShiftedDistributionEstimation,
                                                ContinuousUnivariateDistributionEstimation,
                                                    ContinuousUnivariateDistributionSelection,
                                                    ContinuousUnivariateFrequencyDistributionEstimation,
                                                    NormalDistributionMLEstimation,
                                                    UnivariateHistogramDistributionEstimation,
                                                    RegularUnivariateHistogramDistributionSlopeHeuristicSelection,
                                                    IrregularUnivariateHistogramDistributionSlopeHeuristicSelection,
                                                    ContinuousUnivariateMixtureDistributionEMEstimation,
                                                    ContinuousUnivariateShiftedDistributionEstimation,
                                             MultivariateDistributionEstimation,
                                                 MixedMultivariateDistributionSelection,
                                                # _IndependentMultivariateDistributionEstimation,
                                                # MixedIndependentMultivariateDistributionEstimation,
                                                CategoricalMultivariateDistributionEstimation,
                                                    CategoricalMultivariateDistributionSelection,
                                                    # CategoricalIndependentMultivariateDistributionEstimation,
                                                    CategoricalMultivariateMixtureDistributionEMEstimation,
                                                DiscreteMultivariateDistributionEstimation,
                                                    DiscreteMultivariateDistributionSelection,
                                                    SplittingDistributionEstimation,
                                                    NegativeMultinomialDistributionEstimation,
                                                    # DiscreteIndependentMultivariateDistributionEstimation,
                                                    DiscreteMultivariateMixtureDistributionEMEstimation,
                                                ContinuousMultivariateDistributionEstimation,
                                                    ContinuousMultivariateDistributionSelection,
                                                    # ContinuousIndependentMultivariateDistributionEstimation,
                                                    ContinuousMultivariateMixtureDistributionEMEstimation,
                                             SingularDistributionEstimation,
                                                 MultinomialSingularDistributionEstimation,
                                                 DirichletMultinomialSingularDistributionEstimation,
                                                 MixtureSingularDistributionEMEstimation,
                                             SingularDistributionSelection,
                                             _MixtureDistributionEMEstimation,
                                             UnivariateConditionalDistributionEstimation,
                                                CategoricalUnivariateConditionalDistributionEstimation,
                                                    CategoricalUnivariateConditionalDistributionSelection,
                                                DiscreteUnivariateConditionalDistributionEstimation,
                                                    DiscreteUnivariateConditionalDistributionSelection,
                                                ContinuousUnivariateConditionalDistributionEstimation,
                                                    ContinuousUnivariateConditionalDistributionSelection,
                                             MultivariateConditionalDistributionEstimation,
                                                MixedMultivariateConditionalDistributionSelection,
                                                CategoricalMultivariateConditionalDistributionEstimation,
                                                    CategoricalMultivariateConditionalDistributionSelection,
                                                DiscreteMultivariateConditionalDistributionEstimation,
                                                    DiscreteMultivariateConditionalDistributionSelection,
                                                ContinuousMultivariateConditionalDistributionEstimation,
                                                    ContinuousMultivariateConditionalDistributionSelection)

from .event import outcome_type
from .data import (UnivariateData,
                   MultivariateData,
                   UnivariateConditionalData,
                   MultivariateConditionalData)
from .optionals import pyplot
from ._tools import unused_warning

__all__ = ['frequency_estimation',
           'binomial_estimation',
           'poisson_estimation',
           'logarithmic_estimation',
           'geometric_estimation',
           'negative_binomial_estimation',
           'normal_estimation',
           'histogram_estimation',
           'singular_selection',
           'splitting_estimation',
           'negative_multinomial_estimation',
           # 'independent_estimation',
           'mixture_estimation',
           'shifted_estimation',
           'selection']

UnivariateDistributionEstimation.estimated = property(UnivariateDistributionEstimation.get_estimated)
del UnivariateDistributionEstimation.get_estimated

def active_estimation_decorator(cls):

    cls.data = property(cls.get_data)
    del cls.get_data

    def pdf_plot(self, axes=None, norm=False, **kwargs):
        axes = self.data.pdf_plot(axes=axes, norm=norm, **kwargs.pop('data', dict(fmt='|')))
        if isinstance(norm, bool):
            if not norm:
                norm = self.data.total
            else:
                norm = 1.
        return self.estimated.pdf_plot(axes=axes, norm=norm, **kwargs.pop('estimated', dict(fmt='-')))

    cls.pdf_plot = pdf_plot
    del pdf_plot

    def cdf_plot(self, axes=None, norm=False, **kwargs):
        axes = self.data.cdf_plot(axes=axes, norm=norm, **kwargs.pop('data', dict(fmt='|')))
        if isinstance(norm, bool):
            if not norm:
                norm = self.data.total
            else:
                norm = 1.
        return self.estimated.cdf_plot(axes=axes, norm=norm, **kwargs.pop('estimated', dict(fmt='-')))

    cls.cdf_plot = cdf_plot
    del cdf_plot

    def box_plot(self, axes=None, norm=False, **kwargs):
        axes = self.data.box_plot(axes=axes, norm=norm, **kwargs.pop('data', dict(fmt='|')))
        if isinstance(norm, bool):
            if not norm:
                norm = self.data.total
            else:
                norm = 1.
        return self.estimated.box_plot(axes=axes, norm=norm, **kwargs.pop('estimated', dict(fmt='-')))

    cls.box_plot = box_plot
    del box_plot

for cls in _ActiveEstimation:
    active_estimation_decorator(cls)

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

for cls in _Selection:
    selection_decorator(cls)

def optimization_estimation_decorator(cls):

    class Iterations(object):

        def __init__(self, estimation):
            self._estimation = estimation

    def wrapper_iterations(f0, f1):

        @wraps(f0)
        def __len__(self):
            return f0(self._estimation)

        @wraps(f1)
        def __getitem__(self, index):
            if isinstance(index, slice):
                return [self[index] for index in range(*index.indices(len(self)))]
            else:
                if index < 0:
                    index += len(self)
                if not 0 <= index < len(self):
                    raise IndexError(self._estimation.__class__.__name__ + " index out of range")
                return f1(self._estimation, index)

        return __len__, __getitem__

    try:        
        Iterations.__len__, Iterations.__getitem__ = wrapper_iterations(cls.__len__, cls.get_iteration)
        del cls.get_iteration
    except:
        pass

    cls.iterations = property(Iterations)

for cls in _OptimizationEstimation:
    optimization_estimation_decorator(cls)

def optimization_estimation_impl_decorator(cls):

    del cls.__len__

for cls in _OptimizationEstimationImpl:
    optimization_estimation_impl_decorator(cls)

def _estimation(algo, data, mapping, **kwargs):
    try:
        algo = mapping[algo]()
    except KeyError:
        raise ValueError('\'algo\' parameter, possible values are ' + ', '.join('"' + algo + '"' for algo in mapping.keys()))
    except:
        raise
    if data:
        lazy = kwargs.pop('lazy', False)
    for attr in list(kwargs.keys()):
        if hasattr(algo, attr):
            setattr(algo, attr, kwargs.pop(attr))
        else:
            raise AttributeError("'" + algo.__class__.__name__ + "' object has no attribute '" + attr + "'")
    if data:
        return algo(data, lazy)
    else:
        return algo

def frequency_estimation(data, **kwargs):
    if isinstance(data, UnivariateData):
        outcome = data.sample_space.outcome
        kwargs['mult'] = False
    elif isinstance(data, MultivariateData):
        if all(component.sample_space.outcome == outcome_type.CATEGORICAL for component in data.components):
            outcome = outcome_type.CATEGORICAL
        elif all(component.sample_space.outcome == outcome_type.DISCRETE for component in data.components):
            outcome = outcome_type.DISCRETE
        elif all(component.sample_space.outcome == outcome_type.CONTINUOUS for component in data.components):
            outcome = outcome_type.CONTINUOUS
        else:
            outcome = outcome_type.MIXED
        kwargs['mult'] = True
    elif isinstance(data, outcome_type):
        outcome = data
        data = None
    else:
        raise TypeError('\'data\' parameter')
    mult = kwargs.pop('mult', outcome == outcome_type.MIXED)
    if mult:
        raise NotImplementedError()
    else:
        if outcome == outcome_type.CATEGORICAL:
            mapping = dict(ml = CategoricalUnivariateDistributionEstimation.Estimator)
        elif outcome == outcome_type.DISCRETE:
            mapping = dict(ml = DiscreteUnivariateFrequencyDistributionEstimation.Estimator)
        elif outcome == outcome_type.CONTINUOUS:
            mapping = dict(ml = ContinuousUnivariateFrequencyDistributionEstimation.Estimator)
        else:
            raise ValueError('\'outcome\' parameter')
    return _estimation('ml', data, mapping, **kwargs)

BinomialDistributionMLEstimation.Estimator.force = property(BinomialDistributionMLEstimation.Estimator.get_force, BinomialDistributionMLEstimation.Estimator.set_force)
del BinomialDistributionMLEstimation.Estimator.get_force, BinomialDistributionMLEstimation.Estimator.set_force

def binomial_estimation(algo='ml', data=None, **kwargs):
    """
    """
    return _estimation(algo, 
                       data,
                       dict(ml = BinomialDistributionMLEstimation.Estimator,
                            mm = BinomialDistributionMMEstimation.Estimator),
                       **kwargs)

def poisson_estimation(algo='ml', data=None, **kwargs):
    """
    """
    return _estimation(algo, 
                       data,
                       dict(ml = PoissonDistributionMLEstimation.Estimator,
                            #mme = BinomialDistributionMMEstimation.Estimator),
                            ),
                       **kwargs)

def logarithmic_estimation(algo='ml', data=None, **kwargs):
    """
    """
    return _estimation(algo, 
                       data,
                       dict(ml = LogarithmicDistributionMLEstimation.Estimator),
                       **kwargs)

def geometric_estimation(algo='ml', data=None, **kwargs):
    """
    """
    return _estimation(algo, 
                       data,
                       dict(ml = GeometricDistributionMLEstimation.Estimator),
                       **kwargs)

NegativeBinomialDistributionMLEstimation.Estimator.force = property(NegativeBinomialDistributionMLEstimation.Estimator.get_force, NegativeBinomialDistributionMLEstimation.Estimator.set_force)
del NegativeBinomialDistributionMLEstimation.Estimator.get_force, NegativeBinomialDistributionMLEstimation.Estimator.set_force

def negative_binomial_estimation(algo='ml', data=None, **kwargs):
    """
    """
    return _estimation(algo, 
                       data,
                       dict(ml = NegativeBinomialDistributionMLEstimation.Estimator,
                            mm = NegativeBinomialDistributionMMEstimation.Estimator),
                       **kwargs)

def normal_estimation(algo='ml', data=None, **kwargs):
    """
    """
    return _estimation(algo, 
                       data,
                       dict(ml = NormalDistributionMLEstimation.Estimator),
                       **kwargs)

UnivariateHistogramDistributionEstimation.Estimator.nb_bins = property(UnivariateHistogramDistributionEstimation.Estimator.get_nb_bins, UnivariateHistogramDistributionEstimation.Estimator.set_nb_bins)
del UnivariateHistogramDistributionEstimation.Estimator.get_nb_bins, UnivariateHistogramDistributionEstimation.Estimator.set_nb_bins

IrregularUnivariateHistogramDistributionSlopeHeuristicSelection.Estimator.maxbins = property(IrregularUnivariateHistogramDistributionSlopeHeuristicSelection.Estimator.get_maxbins, IrregularUnivariateHistogramDistributionSlopeHeuristicSelection.Estimator.set_maxbins)
del IrregularUnivariateHistogramDistributionSlopeHeuristicSelection.Estimator.get_maxbins, IrregularUnivariateHistogramDistributionSlopeHeuristicSelection.Estimator.set_maxbins

RegularUnivariateHistogramDistributionSlopeHeuristicSelection.Estimator.maxbins = property(RegularUnivariateHistogramDistributionSlopeHeuristicSelection.Estimator.get_maxbins, RegularUnivariateHistogramDistributionSlopeHeuristicSelection.Estimator.set_maxbins)
del RegularUnivariateHistogramDistributionSlopeHeuristicSelection.Estimator.get_maxbins, RegularUnivariateHistogramDistributionSlopeHeuristicSelection.Estimator.set_maxbins

def histogram_estimation(data, algo='reg', **kwargs):
    """
    """
    if isinstance(data, UnivariateData):
        mult = False
    elif isinstance(data, MultivariateData):
        mult = True
    elif isinstance(data, bool):
        mult = data
    else:
        raise TypeError('\'data\' parameter')
    if mult:
        raise NotImplementedError()
    else:
        mapping = dict(reg = RegularUnivariateHistogramDistributionSlopeHeuristicSelection.Estimator,
                       irr = IrregularUnivariateHistogramDistributionSlopeHeuristicSelection.Estimator,
                       cla = UnivariateHistogramDistributionEstimation.Estimator)
    return _estimation(algo, data, mapping, **kwargs)

MultivariateDistributionEstimation.estimated = property(MultivariateDistributionEstimation.get_estimated)
del MultivariateDistributionEstimation.get_estimated

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

SingularDistributionEstimation.estimated = property(SingularDistributionEstimation.get_estimated)
del SingularDistributionEstimation.get_estimated

def negative_multinomial_estimation(data=None, **kwargs):
    mapping = dict(WZ99 = NegativeMultinomialDistributionEstimation.WZ99Estimator)
    return _estimation('WZ99', data, mapping, **kwargs)

def independent_multivariate_distribution_estimation_decorator(cls):

    pass    
    # cls.marginals = property(cls.get_marginal)
    # del cls.get_marginals

# for cls in _IndependentMultivariateDistributionEstimation:
#     independent_multivariate_distribution_estimation_decorator(cls)

# def independent_estimation(data, **kwargs):
#     if isinstance(data, MultivariateData):
#         if all(component.sample_space.outcome == outcome_type.CATEGORICAL for component in data.components):
#             mapping = dict(dflt = CategoricalIndependentMultivariateDistributionEstimation.Estimator)
#         elif all(component.sample_space.outcome == outcome_type.DISCRETE for component in data.components):
#             mapping = dict(dflt = DiscreteIndependentMultivariateDistributionEstimation.Estimator)
#         elif all(component.sample_space.outcome == outcome_type.CONTINUOUS for component in data.components):
#             mapping = dict(dflt = ContinuousIndependentMultivariateDistributionEstimation.Estimator)
#         else:
#             mapping = dict(dflt = MixedIndependentMultivariateDistributionEstimation.Estimator)
#     elif isinstance(data, outcome_type):
#         if data is outcome_type.MIXED:
#             mapping = dict(dflt = MixedIndependentMultivariateDistributionEstimation.Estimator)
#         elif data is outcome_type.CATEGORICAL:
#             mapping = dict(dflt = CategoricalIndependentMultivariateDistributionEstimation.Estimator)
#         elif data is outcome_type.DISCRETE:
#             mapping = dict(dflt = DiscreteIndependentMultivariateDistributionEstimation.Estimator)
#         elif data is outcome_type.CONTINUOUS:
#             mapping = dict(dflt = ContinuousIndependentMultivariateDistributionEstimation.Estimator)
#         else:
#             raise ValueError('\'data\' parameter')
#     else:
#         raise TypeError('\'data\' parameter')
#     return _estimation('dflt', data, mapping, **kwargs)

def mixture_distribution_em_estimator_decorator(cls):

    cls.default_estimator = property(cls.get_default_estimator, cls.set_default_estimator)
    del cls.get_default_estimator, cls.set_default_estimator

    cls.initializator = property(cls.get_initializator, cls.set_initializator)
    del cls.get_initializator, cls.set_initializator

for cls in _MixtureDistributionEMEstimation:
    mixture_distribution_em_estimator_decorator(cls.Estimator)

def mixture_estimation(data, algo='em', **kwargs):
    if isinstance(data, UnivariateData):
        outcome = data.sample_space.outcome
        kwargs['mult'] = False
    elif isinstance(data, MultivariateData):
        if all(component.sample_space.outcome == outcome_type.CATEGORICAL for component in data.components):
            outcome = outcome_type.CATEGORICAL
        elif all(component.sample_space.outcome == outcome_type.DISCRETE for component in data.components):
            outcome = outcome_type.DISCRETE
        elif all(component.sample_space.outcome == outcome_type.CONTINUOUS for component in data.components):
            outcome = outcome_type.CONTINUOUS
        else:
            outcome = outcome_type.MIXED
        kwargs['mult'] = True
    elif isinstance(data, outcome_type):
        outcome = data
        data = None
    else:
        raise TypeError('\'data\' parameter')
    mult = kwargs.pop('mult', outcome == outcome_type.MIXED)
    if mult:
        if outcome == outcome_type.MIXED:
            mapping = dict(em = MixedMultivariateMixtureDistributionEMEstimation.Estimator)
        elif outcome == outcome_type.CATEGORICAL:
            mapping = dict(em = CategoricalMultivariateMixtureDistributionEMEstimation.Estimator)
        elif outcome == outcome_type.DISCRETE:
            if kwargs.pop('singular', False):
                mapping = dict(em = MixtureSingularDistributionEMEstimation.Estimator)
            else:
                mapping = dict(em = DiscreteMultivariateMixtureDistributionEMEstimation.Estimator)
        elif outcome == outcome_type.CONTINUOUS:
            mapping = dict(em = ContinuousMultivariateMixtureDistributionEMEstimation.Estimator)
    else:
        if outcome == outcome_type.MIXED:
            raise ValueError('\'mult\' parameter')
        elif outcome == outcome_type.CATEGORICAL:
            mapping = dict(em = CategoricalUnivariateMixtureDistributionEMEstimation.Estimator)
        elif outcome == outcome_type.DISCRETE:
            mapping = dict(em = DiscreteUnivariateMixtureDistributionEMEstimation.Estimator)
        elif outcome == outcome_type.CONTINUOUS:
            mapping = dict(em = MixedMultivariateMixtureDistributionEMEstimation.Estimator)
    return _estimation(algo, data, mapping, **kwargs)

def shifted_estimation(data, **kwargs):
    if isinstance(data, UnivariateData):
        outcome = data.sample_space.outcome
    elif isinstance(data, outcome_type):
        outcome = data
        data = None
    else:
        raise TypeError('\'data\' parameter')
    if outcome in [outcome_type.MIXED, outcome_type.CATEGORICAL]:
        raise ValueError('\'mult\' parameter')
    elif outcome == outcome_type.DISCRETE:
        mapping = dict(a = DiscreteUnivariateShiftedDistributionEstimation.Estimator)
    elif outcome == outcome_type.CONTINUOUS:
        mapping = dict(a = ContinuousUnivariateShiftedDistributionEstimation.Estimator)
    return _estimation('a', data, mapping, **kwargs)

def shifted_distribution_estimator_decorator(cls):

    cls.shift = property(cls.get_shift, cls.set_shift)
    del cls.get_shift, cls.set_shift

    cls.estimator = property(cls.get_estimator, cls.set_estimator)
    del cls.get_estimator, cls.set_estimator

def shifted_distribution_estimation_decorator(cls):

    cls.estimation = property(cls.get_estimation)
    del cls.get_estimation
    
for cls in _ShiftedDistributionEstimation:
    shifted_distribution_estimator_decorator(cls.Estimator)

def selection(data, algo="criterion", *args, **kwargs):
    if isinstance(data, UnivariateData):
        outcome = data.sample_space.outcome
        kwargs['multivariate'] = False
    elif isinstance(data, MultivariateData):
        if all(sample_space.outcome == outcome_type.CATEGORICAL for sample_space in data.sample_space):
            outcome = outcome_type.CATEGORICAL
        elif all(sample_space.outcome == outcome_type.DISCRETE for sample_space in data.sample_space):
            outcome = outcome_type.DISCRETE
        elif all(sample_space.outcome == outcome_type.CONTINUOUS for sample_space in data.sample_space):
            outcome = outcome_type.CONTINUOUS
        else:
            outcome = outcome_type.MIXED
        kwargs['multivariate'] = True
    elif isinstance(data, UnivariateConditionalData):
        outcome = data.response.sample_space.outcome
        kwargs['multivariate'] = False
        kwargs['conditional'] = True
    elif isinstance(data, MultivariateConditionalData):
        if all(sample_space.outcome == outcome_type.CATEGORICAL for sample_space in data.responses.sample_space):
            outcome = outcome_type.CATEGORICAL
        elif all(sample_space.outcome == outcome_type.DISCRETE for sample_space in data.responses.sample_space):
            outcome = outcome_type.DISCRETE
        elif all(sample_space.outcome == outcome_type.CONTINUOUS for sample_space in data.responses.sample_space):
            outcome = outcome_type.CONTINUOUS
        else:
            outcome = outcome_type.MIXED
        kwargs['multivariate'] = True
        kwargs['conditional'] = True
    elif isinstance(data, outcome_type):
        outcome = data
        data = None
    else:
        raise TypeError('\'data\' parameter')
    multivariate = kwargs.pop('multivariate', outcome == outcome_type.MIXED)
    conditional = kwargs.pop('conditional', False)
    if multivariate:
        if conditional:
            if outcome == outcome_type.MIXED:
                mapping = dict(criterion = MixedMultivariateConditionalDistributionSelection.CriterionEstimator)
            elif outcome == outcome_type.CATEGORICAL:
                mapping = dict(criterion = CategoricalMultivariateConditionalDistributionSelection.CriterionEstimator)
            elif outcome == outcome_type.DISCRETE:
                mapping = dict(criterion = DiscreteMultivariateConditionalDistributionSelection.CriterionEstimator)
            elif outcome == outcome_type.CONTINUOUS:
                mapping = dict(criterion = ContinuousMultivariateConditionalDistributionSelection.CriterionEstimator)
        else:
            if outcome == outcome_type.MIXED:
                mapping = dict(criterion = MixedMultivariateDistributionSelection.CriterionEstimator)
            elif outcome == outcome_type.CATEGORICAL:
                mapping = dict(criterion = CategoricalMultivariateDistributionSelection.CriterionEstimator)
            elif outcome == outcome_type.DISCRETE:
                mapping = dict(criterion = DiscreteMultivariateDistributionSelection.CriterionEstimator)
            elif outcome == outcome_type.CONTINUOUS:
                mapping = dict(criterion = ContinuousMultivariateDistributionSelection.CriterionEstimator)
    else:
        if conditional:
            if outcome == outcome_type.MIXED:
                raise ValueError('\'multivariate\' parameter')
            elif outcome == outcome_type.CATEGORICAL:
                mapping = dict(criterion = CategoricalUnivariateConditionalDistributionSelection.CriterionEstimator)
            elif outcome == outcome_type.DISCRETE:
                mapping = dict(criterion = DiscreteUnivariateConditionalDistributionSelection.CriterionEstimator)
            elif outcome == outcome_type.CONTINUOUS:
                mapping = dict(criterion = ContinuousUnivariateConditionalDistributionSelection.CriterionEstimator)
        else:
            if outcome == outcome_type.MIXED:
                raise ValueError('\'multivariate\' parameter')
            elif outcome == outcome_type.CATEGORICAL:
                mapping = dict(criterion = CategoricalUnivariateDistributionSelection.CriterionEstimator)
            elif outcome == outcome_type.DISCRETE:
                mapping = dict(criterion = DiscreteUnivariateDistributionSelection.CriterionEstimator)
            elif outcome == outcome_type.CONTINUOUS:
                mapping = dict(criterion = ContinuousUnivariateDistributionSelection.CriterionEstimator)
    return _estimation(algo, data, mapping, **kwargs)

UnivariateConditionalDistributionEstimation.estimated = property(UnivariateConditionalDistributionEstimation.get_estimated)
del UnivariateConditionalDistributionEstimation.get_estimated

MultivariateConditionalDistributionEstimation.estimated = property(MultivariateConditionalDistributionEstimation.get_estimated)
del MultivariateConditionalDistributionEstimation.get_estimated
