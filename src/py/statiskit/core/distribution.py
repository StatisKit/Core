from functools import wraps
import math

from statiskit import linalg
from statiskit import stl

from . import _core
from .__core.statiskit import (_ShiftedDistribution,
                               UnivariateDistribution,
                               _UnivariateFrequencyDistribution,
                               _QuantitativeUnivariateFrequencyDistribution,
                               CategoricalUnivariateDistribution,
                               BinaryDistribution,
                               NominalDistribution,
                               OrdinalDistribution,
                               HierarchicalDistribution,
                               DiscreteUnivariateDistribution,
                               DiscreteUnivariateFrequencyDistribution,
                               PoissonDistribution,
                               BinomialDistribution,
                               LogarithmicDistribution,
                               GeometricDistribution,
                               NegativeBinomialDistribution,
                               BetaCompoundDiscreteUnivariateDistribution,
                               BetaBinomialDistribution,
                               BetaNegativeBinomialDistribution,
                               ContinuousUnivariateDistribution,
                               ContinuousUnivariateFrequencyDistribution,
                               UnivariateHistogramDistribution,
                               NormalDistribution,
                               LogisticDistribution,
                               LaplaceDistribution,
                               CauchyDistribution,
                               StudentDistribution,
                               NonStandardStudentDistribution,
                               GumbelDistribution,
                               GompertzDistribution,
                               ExponentialDistribution,
                               GammaDistribution,
                               BetaDistribution,
                               MultivariateDistribution,
                               CategoricalMultivariateDistribution,
                               DiscreteMultivariateDistribution,
                               SplittingDistribution,
                               ContinuousMultivariateDistribution,
                               MultinormalDistribution,
                               DirichletDistribution,
                               UnivariateConditionalDistribution,
                               CategoricalUnivariateConditionalDistribution,
                               DiscreteUnivariateConditionalDistribution,
                               ContinuousUnivariateConditionalDistribution,
                               MultivariateConditionalDistribution,
                               CategoricalMultivariateConditionalDistribution,
                               DiscreteMultivariateConditionalDistribution,
                               ContinuousMultivariateConditionalDistribution)

from .optionals import pyplot, numpy
from .io import from_list
from .controls import controls
from .event import (UnivariateEvent,
                       CategoricalEvent,
                           CategoricalElementaryEvent,
                       DiscreteEvent,
                           DiscreteElementaryEvent,
                       ContinuousEvent,
                           ContinuousElementaryEvent,
                    MultivariateEvent,
                       VectorEvent,
                    type_to_event,
                    types_to_event)
from .data import (UnivariateData,
                       UnivariateDataFrame,
                   MultivariateData,
                       MultivariateDataFrame)
from .sample_space import (NominalSampleSpace,
                           OrdinalSampleSpace)
from ._tools import float_str, remove_latex

__all__ = ['BinaryDistribution',
           'NominalDistribution',
           'OrdinalDistribution',
           'HierarchicalDistribution',
           'DiscreteUnivariateFrequencyDistribution',
           'PoissonDistribution',
           'BinomialDistribution',
           'LogarithmicDistribution',
           'GeometricDistribution',
           'NegativeBinomialDistribution',
           'BetaBinomialDistribution',
           'BetaNegativeBinomialDistribution',
           'ContinuousUnivariateFrequencyDistribution',
           'UnivariateHistogramDistribution',
           'NormalDistribution',
           'LogisticDistribution',
           'LaplaceDistribution',
           'CauchyDistribution',
           'StudentDistribution',
           'NonStandardStudentDistribution',
           'GumbelDistribution',
           'GompertzDistribution',
           'ExponentialDistribution',
           'GammaDistribution',
           'BetaDistribution',
           'SplittingDistribution',
           'MultinormalDistribution',
           'DirichletDistribution']

def shifted_distribution_decorator(cls):

    cls.distribution = property(cls.get_distribution, cls.set_distribution)
    del cls.get_distribution, cls.set_distribution

    cls.shift = property(cls.get_shift, cls.set_shift)
    cls.get_shift, cls.set_shift

    def __str__(self):
        return self.distribution.__str__()[:-1] + ", " + str(self.shift) + ")"

    cls.__str__ = __str__
    cls.__repr__ = __str__

    def _repr_latex_(self):
        return self.distribution._repr_latex_()[:-8] + ", " + str(self.shift) + r"\right)$"

    cls._repr_latex_ = _repr_latex_

for cls in _ShiftedDistribution:
    shifted_distribution_decorator(cls)

UnivariateDistribution.nb_parameters = property(UnivariateDistribution.get_nb_parameters)
del UnivariateDistribution.get_nb_parameters

def wrapper_probability(f):
    @wraps(f)
    def probability(self, event, **kwargs):
        if isinstance(event, str):
            event = CategoricalElementaryEvent(event)
        elif isinstance(event, int):
            event = DiscreteElementaryEvent(event)
        elif isinstance(event, float):
            event = ContinuousElementaryEvent(event)
        elif not isinstance(event, UnivariateEvent):
            raise TypeError('\'event\' parameter')
        return f(self, event, kwargs.pop('log', False))
    return probability

UnivariateDistribution.probability = wrapper_probability(UnivariateDistribution.probability)

def simulation(self, size):
    if isinstance(self, NominalDistribution):
        data = UnivariateDataFrame(NominalSampleSpace(self.values))
    elif isinstance(self, OrdinalDistribution):
        data = UnivariateDataFrame(OrdinalSampleSpace(self.ordered_values))
    elif isinstance(self, DiscreteUnivariateDistribution):
        data = UnivariateDataFrame(controls.ZZ)
    elif isinstance(self, ContinuousUnivariateDistribution):
        data = UnivariateDataFrame(controls.RR)
    else:
        raise NotImplementedError()
    for index in range(size):
        data.add_event(self.simulate())
    return data

UnivariateDistribution.simulation = simulation
del simulation

def pdf_plot(self, axes=None, fmt='|', **kwargs):
    if axes is None:
        axes = pyplot.subplot(1,1,1)
    labels = getattr(self, 'ordered_values', getattr(self, 'values'))
    x, labels = list(zip(*[(index, label) for index, label in enumerate(labels)]))
    y = [self.probability(label, log=False) for label in labels]
    if 'norm' in kwargs:
        norm = kwargs.pop('norm')
        y = [norm * p for p in y]
    else:
        y = [p for p in y]
    if fmt == 'pie':
        if not 'autopct' in kwargs:
            kwargs['autopct'] = '%.2f'
        axes.pie(y, labels=labels, **kwargs)
    else:
        if '|' in fmt:
            fmt = fmt.replace('|', '')
            width = kwargs.pop('width', .8)
            if not 0 < width <= 1.:
                raise ValueError('\'width\' parameter must be strictly superior to 0. and inferior to 1.')
            axes.bar([q-width/2. for q in x], y, width, align='center', **kwargs)
        if len(fmt) > 0:
            axes.plot(x, y, fmt, **kwargs)
        axes.set_xticks(x)
        axes.set_xticklabels(labels)
    return axes

CategoricalUnivariateDistribution.pdf_plot = pdf_plot
del pdf_plot

CategoricalUnivariateDistribution.values = property(CategoricalUnivariateDistribution.get_values)
del CategoricalUnivariateDistribution.get_values

def wrapper(f):
    @wraps(f)
    def __init__(self, *args, **kwargs):
        f(self, stl.SetLessString(*args))
        for attr in list(kwargs.keys()):
            if hasattr(self, attr):
                setattr(self, attr, kwargs.pop(attr))
            else:
                raise AttributeError("'" + self.__class__.__name__ + "' object has no attribute '" + attr + "'")
    return __init__

NominalDistribution.__init__ = wrapper(NominalDistribution.__init__)

def wrapper(f):
    @wraps(f)
    def __init__(self, *args, **kwargs):
        f(self, stl.VectorString(*args))
        for attr in list(kwargs.keys()):
            if hasattr(self, attr):
                setattr(self, attr, kwargs.pop(attr))
            else:
                raise AttributeError("'" + self.__class__.__name__ + "' object has no attribute '" + attr + "'")
    return __init__

OrdinalDistribution.__init__ = wrapper(OrdinalDistribution.__init__)
#HierarchicalDistribution.__init__ = wrapper(HierarchicalDistribution.__init__)

BinaryDistribution.pi = property(BinaryDistribution.get_pi, BinaryDistribution.set_pi)
del BinaryDistribution.get_pi, BinaryDistribution.set_pi

OrdinalDistribution.rank = property(OrdinalDistribution.get_rank, OrdinalDistribution.set_rank)
del OrdinalDistribution.get_rank, OrdinalDistribution.set_rank

# def wrapper(f):
#     @wraps(f)
#     def get_ordered(self):
#         values = f(self)
#         return [CategoricalElementaryEvent(value) for value in values]
#     return get_ordered

OrdinalDistribution.ordered_values = property(OrdinalDistribution.get_ordered_values, OrdinalDistribution.set_ordered_values)
del OrdinalDistribution.get_ordered_values, OrdinalDistribution.set_ordered_values

OrdinalDistribution.ordered_pi = property(OrdinalDistribution.get_ordered_pi, OrdinalDistribution.set_ordered_pi)
del OrdinalDistribution.get_ordered_pi, OrdinalDistribution.set_ordered_pi

def cdf_plot(self, axes=None, fmt='|', **kwargs):
    if axes is None:
        axes = pyplot.subplot(1,1,1)
    labels = self.ordered_values
    x, labels = list(zip(*[(index, label) for index, label in enumerate(labels)]))
    y = self.pi
    if 'norm' in kwargs:
        norm = kwargs.pop('norm')
        y = [norm * p for p in y]
    else:
        y = [p for p in y]
    y = [y[i] for i in self.rank]
    y = [sum(y[:i]) for i in range(1, len(y)+1)]
    if '|' in fmt:
        fmt = fmt.replace('|', '')
        width = kwargs.pop('width', .8)
        if not 0 < width <= 1.:
            raise ValueError('\'width\' parameter must be strictly superior to 0. and inferior to 1.')
        kwargs.pop('pmin', None)
        kwargs.pop('pmax', None)
        axes.bar([q-width/2. for q in x], y, width, align='center', **kwargs)
    else:
        axes.plot(x, y, fmt, **kwargs)
    axes.set_xticks(x)
    axes.set_xticklabels(labels)
    return axes

OrdinalDistribution.cdf_plot = cdf_plot
del cdf_plot

def box_plot(self, axes=None, edgecolor="k", width=.5, vert=True, whiskers=(.09,0.91), pos=1, **kwargs):
    if axes is None:
        axes = pyplot.subplot(1,1,1)
    elif not isinstance(axes, pyplot.Axes):
        raise TypeError('`axes` parameter')
    if not len(whiskers) == 2:
        raise IndexError('`whiskers` parameter')
    if not all([isinstance(i, float) for i in whiskers]):
        raise TypeError('`whiskers` parameter')
    if not all([0. <= i <= 1. for i in whiskers]):
        raise ValueError('`whiskers` parameter')
    values = [value.value for value in self.ordered]
    qb = values.index(self.quantile(min(whiskers)))
    q1 = values.index(self.quantile(.25))
    q2 = values.index(self.quantile(.5))
    q3 = values.index(self.quantile(.75))
    qe = values.index(self.quantile(max(whiskers)))
    facecolor = kwargs.pop('facecolor', next(axes._get_lines.prop_cycler)['color'])
    # facecolor = kwargs.pop('facecolor', axes._get_lines.get_next_color())
    if not(qb <= q1 <= q2 <= q3 <= qe):
        raise ValueError('`whiskers` parameter')
    if vert:
        axes.bar(pos, q3-q1, width, q1, facecolor=facecolor, edgecolor=edgecolor, align='center')
        axes.plot([pos-width/2., pos+width/2.], [q2, q2], color=edgecolor)
        axes.plot([pos-width/2., pos+width/2.], [qb, qb], color=edgecolor)
        axes.plot([pos-width/2., pos+width/2.], [qe, qe], color=edgecolor)
        axes.plot([pos, pos], [qb, q1], color=edgecolor)
        axes.plot([pos, pos], [q3, qe], color=edgecolor)
        axes.set_yticks(list(range(len(values))))
        axes.set_yticklabels(values)
    else:
        axes.bar(q1, width, q3-q1, pos-width/2., facecolor=facecolor, edgecolor=edgecolor)
        axes.plot([q2, q2], [pos-width/2., pos+width/2.], color=edgecolor)
        axes.plot([qb, qb], [pos-width/2., pos+width/2.], color=edgecolor)
        axes.plot([qe, qe], [pos-width/2., pos+width/2.], color=edgecolor)
        axes.plot([qb, q1], [pos, pos], color=edgecolor)
        axes.plot([q3, qe], [pos, pos], color=edgecolor)
        axes.set_xticks(list(range(len(values))))
        axes.set_xticklabels(values)
    return axes

OrdinalDistribution.box_plot = box_plot
del box_plot

def quantitative_univariate_frequency_distribution_decorator(cls):

    # cls.mean = property(cls.get_mean)
    # del cls.get_mean

    # cls.variance = property(cls.get_variance)
    # del cls.get_variance

    pass

for cls in _QuantitativeUnivariateFrequencyDistribution:
    quantitative_univariate_frequency_distribution_decorator(cls)

DiscreteUnivariateDistribution.mean = property(DiscreteUnivariateDistribution.get_mean)
del DiscreteUnivariateDistribution.get_mean

DiscreteUnivariateDistribution.variance = property(DiscreteUnivariateDistribution.get_variance)
del DiscreteUnivariateDistribution.get_variance

def pdf_plot(self, axes=None, fmt='|', **kwargs):
    if axes is None:
        axes = pyplot.subplot(1,1,1)
    else:
        qmin, qmax = axes.get_xlim()
        if 'qmin' not in kwargs and 'pmin' not in kwargs:
            kwargs['qmin'] = int(qmin)
        if 'qmax' not in kwargs and 'pmax' not in kwargs:
            kwargs['qmax'] = int(qmax)
    x = kwargs.pop('quantiles', list(range(kwargs.pop('qmin', self.quantile(kwargs.pop('pmin', 0.025))), kwargs.pop('qmax', self.quantile(kwargs.pop('pmax', 0.975)))+1)))
    y = [self.pdf(q) for q in x]
    if 'norm' in kwargs:
        norm = kwargs.pop('norm')
        y = [norm * p for p in y]
    if '|' in fmt:
        fmt = fmt.replace('|', '')
        width = kwargs.pop('width', .2)
        if not 0 < width <= 1.:
            raise ValueError('\'width\' parameter must be strictly superior to 0. and inferior to 1.')
        axes.bar([q-width/2. for q in x], y, width, align='center', **kwargs)
    if len(fmt) > 0:
        axes.plot(x, y, fmt, **kwargs)
    return axes

DiscreteUnivariateDistribution.pdf_plot = pdf_plot
del pdf_plot

def cdf_plot(self, axes=None, fmt='o-', **kwargs):
    if axes is None:
        axes = pyplot.subplot(1,1,1)
    else:
        qmin, qmax = axes.get_xlim()
        if 'qmin' not in kwargs and 'pmin' not in kwargs:
            kwargs['qmin'] = int(qmin)
        if 'qmax' not in kwargs and 'pmax' not in kwargs:
            kwargs['qmax'] = int(qmax)
    x = kwargs.pop('quantiles', list(range(kwargs.pop('qmin', self.quantile(kwargs.pop('pmin', 0.025))), kwargs.pop('qmax', self.quantile(kwargs.pop('pmax', 0.975)))+1)))
    y = [self.cdf(q) for q in x]
    if 'norm' in kwargs:
        norm = kwargs.pop('norm')
        y = [norm * p for p in y]
    if 'o' in fmt:
        axes.plot(x, y, 'o', **kwargs)
        fmt = fmt.replace('o', '')
    if len(fmt) > 0:
        for i, j in enumerate(x):
            axes.plot([j, j+1], [y[i], y[i]], fmt, **kwargs)
    return axes

DiscreteUnivariateDistribution.cdf_plot = cdf_plot
del cdf_plot

def box_plot(self, axes=None, edgecolor="k", width=.5, vert=True, whiskers=(.09,0.91), pos=1, mean=None, sd=None, marker='o', **kwargs):
    if axes is None:
        axes = pyplot.subplot(1,1,1)
    elif not isinstance(axes, pyplot.Axes):
        raise TypeError('`axes` parameter')
    if not len(whiskers) == 2:
        raise IndexError('`whiskers` parameter')
    if not all([isinstance(i, float) for i in whiskers]):
        raise TypeError('`whiskers` parameter')
    if not all([0. <= i <= 1. for i in whiskers]):
        raise ValueError('`whiskers` parameter')
    qb = self.quantile(min(whiskers))
    q1 = self.quantile(.25)
    q2 = self.quantile(.5)
    q3 = self.quantile(.75)
    qe = self.quantile(max(whiskers))
    facecolor = kwargs.pop('facecolor', next(axes._get_lines.prop_cycler)['color'])
    # facecolor = kwargs.pop('facecolor', axes._get_lines.get_next_color())
    if vert:
        axes.bar(pos, q3-q1, width, q1, facecolor=facecolor, edgecolor=edgecolor, align='center')
        axes.plot([pos-width/2., pos+width/2.], [q2, q2], color=edgecolor)
        axes.plot([pos-width/2., pos+width/2.], [qb, qb], color=edgecolor)
        axes.plot([pos-width/2., pos+width/2.], [qe, qe], color=edgecolor)
        axes.plot([pos, pos], [qb, q1], color=edgecolor)
        axes.plot([pos, pos], [q3, qe], color=edgecolor)
    else:
        axes.bar(q1, width, q3-q1, pos-width/2., facecolor=facecolor, edgecolor=edgecolor)
        axes.plot([q2, q2], [pos-width/2., pos+width/2.], color=edgecolor)
        axes.plot([qb, qb], [pos-width/2., pos+width/2.], color=edgecolor)
        axes.plot([qe, qe], [pos-width/2., pos+width/2.], color=edgecolor)
        axes.plot([qb, q1], [pos, pos], color=edgecolor)
        axes.plot([q3, qe], [pos, pos], color=edgecolor)
    if mean is None:
        mean = self.mean
        if not qb <= mean <= qe:
            mean = False
    elif mean is True:
        mean = self.mean
    if mean:
        if vert:
            axes.plot([pos], [mean], linestyle='None', marker=marker, markeredgecolor=edgecolor, markerfacecolor=facecolor)
        else:
            axes.plot([mean], [pos], linestyle='None', marker=marker, markeredgecolor=edgecolor, markerfacecolor=facecolor)
    if not mean and sd is not False:
        mean = q2
    if sd is None:
        sd = math.sqrt(self.variance)
        if not qb <= mean - sd and mean + sd <= qe:
            sd = False
    elif sd is True:
        sd = math.sqrt(self.variance)
    if sd:
        if vert:
            axes.plot([pos, pos], [mean - sd, mean + sd], linestyle='None', marker=marker, markeredgecolor=edgecolor, markerfacecolor=facecolor)
        else:
            axes.plot([mean - sd, mean + sd], [pos, pos], linestyle='None', marker=marker, markeredgecolor=edgecolor, markerfacecolor=facecolor)
    return axes

DiscreteUnivariateDistribution.box_plot = box_plot
ContinuousUnivariateDistribution.box_plot = box_plot
del box_plot

#def lorenz_plot(self, axes=None, fmt='o-', color='r', alpha=1., equality=True, **kwargs):
#    if axes is None:
#        axes = pyplot.subplot(1,1,1)
#    else:
#        qmin, qmax = axes.get_xlim()
#        if 'qmin' not in kwargs and 'pmin' not in kwargs:
#            kwargs['qmin'] = int(qmin)
#        if 'qmax' not in kwargs and 'pmax' not in kwargs:
#            kwargs['qmax'] = int(qmax)
#    x = range(kwargs.pop('qmin', self.quantile(kwargs.pop('pmin', 0.025))), kwargs.pop('qmax', self.quantile(kwargs.pop('pmax', 0.975)))+1)
#    x, y = [self.cdf(q) for q in x], [self.pdf(q) * q for q in x]
#    y = [sum(y[:i+1]) for i in range(len(y))]
#    y = [i/y[-1] for i in y]
#    axes.plot(x, y, fmt, color=color, alpha=alpha)
#    if equality:
#        axes.plot([0., 1.], [0., 1.], kwargs.pop('efmt', '--'), color=kwargs.pop('ecolor', color), alpha=kwargs.pop('ealpha', alpha))
#    return axes
#
#DiscreteUnivariateDistribution.lorenz_plot = lorenz_plot
#del lorenz_plot

def __repr__(self):
    return "P(" + str(self.theta) + ")"

PoissonDistribution.__str__ = __repr__
PoissonDistribution.__repr__ = __repr__
del __repr__

def _repr_latex_(self):
    return r"$\mathcal{P}\left(" + str(self.theta) + r"\right)$"

PoissonDistribution._repr_latex_ = _repr_latex_
del _repr_latex_

PoissonDistribution.theta = property(PoissonDistribution.get_theta, PoissonDistribution.set_theta)
del PoissonDistribution.get_theta, PoissonDistribution.set_theta

def __repr__(self):
    return "B(" + str(self.kappa) + ", " + str(self.pi) + ")"

BinomialDistribution.__str__ = __repr__
BinomialDistribution.__repr__ = __repr__
del __repr__

def _repr_latex_(self):
    return r"$\mathcal{B}\left(" + str(self.kappa) + ", " + str(self.pi) + r"\right)$"

BinomialDistribution._repr_latex_ = _repr_latex_
del _repr_latex_

BinomialDistribution.kappa = property(BinomialDistribution.get_kappa, BinomialDistribution.set_kappa)
del BinomialDistribution.get_kappa, BinomialDistribution.set_kappa

BinomialDistribution.pi = property(BinomialDistribution.get_pi, BinomialDistribution.set_pi)
del BinomialDistribution.get_pi, BinomialDistribution.set_pi

def __repr__(self):
    return "Log(" + str(self.theta) + ")"

LogarithmicDistribution.__str__ = __repr__
LogarithmicDistribution.__repr__ = __repr__
del __repr__

def _repr_latex_(self):
    return r"$\mathrm{Log}\left(" + str(self.theta) + r"\right)$"

LogarithmicDistribution._repr_latex_ = _repr_latex_
del _repr_latex_

LogarithmicDistribution.theta = property(LogarithmicDistribution.get_theta, LogarithmicDistribution.set_theta)
del LogarithmicDistribution.get_theta, LogarithmicDistribution.set_theta

def __repr__(self):
    return "G(" + str(self.pi) + ")"

GeometricDistribution.__str__ = __repr__
GeometricDistribution.__repr__ = __repr__
del __repr__

def _repr_latex_(self):
    return r"$\mathcal{G}\left(" + str(self.pi) + r"\right)$"

GeometricDistribution._repr_latex_ = _repr_latex_
del _repr_latex_

GeometricDistribution.pi = property(GeometricDistribution.get_pi, GeometricDistribution.set_pi)
del GeometricDistribution.get_pi, GeometricDistribution.set_pi

def __repr__(self):
    return "NB(" + str(self.kappa) + ", " + str(self.pi) + ")"

NegativeBinomialDistribution.__str__ = __repr__
NegativeBinomialDistribution.__repr__ = __repr__
del __repr__

def _repr_latex_(self):
    return r"$\mathcal{NB}\left(" + str(self.kappa) + ", " + str(self.pi) + r"\right)$"

NegativeBinomialDistribution._repr_latex_ = _repr_latex_
del _repr_latex_

NegativeBinomialDistribution.kappa = property(NegativeBinomialDistribution.get_kappa, NegativeBinomialDistribution.set_kappa)
del NegativeBinomialDistribution.get_kappa, NegativeBinomialDistribution.set_kappa

NegativeBinomialDistribution.pi = property(NegativeBinomialDistribution.get_pi, NegativeBinomialDistribution.set_pi)
del NegativeBinomialDistribution.get_pi, NegativeBinomialDistribution.set_pi

BetaCompoundDiscreteUnivariateDistribution.alpha = property(BetaCompoundDiscreteUnivariateDistribution.get_alpha, BetaCompoundDiscreteUnivariateDistribution.set_alpha)
del BetaCompoundDiscreteUnivariateDistribution.get_alpha, BetaCompoundDiscreteUnivariateDistribution.set_alpha

BetaCompoundDiscreteUnivariateDistribution.gamma = property(BetaCompoundDiscreteUnivariateDistribution.get_gamma, BetaCompoundDiscreteUnivariateDistribution.set_gamma)
del BetaCompoundDiscreteUnivariateDistribution.get_gamma, BetaCompoundDiscreteUnivariateDistribution.set_gamma

def __repr__(self):
    return "BetaB(" + str(self.kappa) + ", " + str(self.alpha) + ", " + str(self.gamma) + ")"

BetaBinomialDistribution.__str__ = __repr__
BetaBinomialDistribution.__repr__ = __repr__
del __repr__

def _repr_latex_(self):
    return r"$\beta\mathcal{B}\left(" + str(self.kappa) + ", " + str(self.alpha) + ", " + str(self.gamma) + r"\right)$"

BetaBinomialDistribution._repr_latex_ = _repr_latex_
del _repr_latex_

BetaBinomialDistribution.kappa = property(BetaBinomialDistribution.get_kappa, BetaBinomialDistribution.set_kappa)
del BetaBinomialDistribution.get_kappa, BetaBinomialDistribution.set_kappa

def __repr__(self):
    return "BetaNB(" + str(self.kappa) + ", " + str(self.alpha) + ", " + str(self.gamma) + ")"

BetaNegativeBinomialDistribution.__str__ = __repr__
BetaNegativeBinomialDistribution.__repr__ = __repr__
del __repr__

def _repr_latex_(self):
    return r"$\beta\mathcal{NB}\left(" + str(self.kappa) + ", " + str(self.alpha) + ", " + str(self.gamma) + r"\right)$"

BetaNegativeBinomialDistribution._repr_latex_ = _repr_latex_
del _repr_latex_

BetaNegativeBinomialDistribution.kappa = property(BetaNegativeBinomialDistribution.get_kappa, BetaNegativeBinomialDistribution.set_kappa)
del BetaNegativeBinomialDistribution.get_kappa, BetaNegativeBinomialDistribution.set_kappa

ContinuousUnivariateDistribution.mean = property(ContinuousUnivariateDistribution.get_mean)
del ContinuousUnivariateDistribution.get_mean

ContinuousUnivariateDistribution.variance = property(ContinuousUnivariateDistribution.get_variance)
del ContinuousUnivariateDistribution.get_variance

def pdf_plot(self, axes=None, fmt='-', num=100, **kwargs):
    if axes is None:
        axes = pyplot.subplot(1,1,1)
    else:
        qmin, qmax = axes.get_xlim()
        if 'qmin' not in kwargs and 'pmin' not in kwargs:
            kwargs['qmin'] = qmin
        if 'qmax' not in kwargs and 'pmax' not in kwargs:
            kwargs['qmax'] = qmax
    x = kwargs.pop('quantiles', numpy.linspace(kwargs.pop('qmin', self.quantile(kwargs.pop('pmin', 0.025))), kwargs.pop('qmax', self.quantile(kwargs.pop('pmax', 0.975))), num=num))
    y = [self.pdf(q) for q in x]
    if 'norm' in kwargs:
        norm = kwargs.pop('norm')
        y = [norm * p for p in y]
    if '|' in fmt:
        fmt = fmt.replace('|', '')
        axes.vlines(x, 0, y, **kwargs)
    if len(fmt) > 0:
        axes.plot(x, y, fmt, **kwargs)
    return axes

ContinuousUnivariateDistribution.pdf_plot = pdf_plot
del pdf_plot

def cdf_plot(self, axes=None, fmt='-', num=100, **kwargs):
    if axes is None:
        axes = pyplot.subplot(1,1,1)
    else:
        qmin, qmax = axes.get_xlim()
        if 'qmin' not in kwargs and 'pmin' not in kwargs:
            kwargs['qmin'] = qmin
        if 'qmax' not in kwargs and 'pmax' not in kwargs:
            kwargs['qmax'] = qmax
    x = kwargs.pop('quantiles', numpy.linspace(kwargs.pop('qmin', self.quantile(kwargs.pop('pmin', 0.025))), kwargs.pop('qmax', self.quantile(kwargs.pop('pmax', 0.975))), num=num))
    y = [self.cdf(q) for q in x]
    if 'norm' in kwargs:
        norm = kwargs.pop('norm')
        y = [norm * p for p in y]
    axes.plot(x, y, fmt, **kwargs)
    return axes

ContinuousUnivariateDistribution.cdf_plot = cdf_plot
del cdf_plot

def statiskit_univariate_frequency_distribution_decorator(cls):

    cls.pi = property(cls.get_pi, cls.set_pi)
    del cls.get_pi, cls.set_pi

    if cls.EventType == DiscreteEvent:

        def wrapper(f):
            @wraps(f)
            def get_values(self):
                values = f(self)
                return [DiscreteElementaryEvent(value) for value in values]
            return get_values

        cls.values = property(wrapper(cls.get_values))
        del wrapper, cls.get_values

    elif cls.EventType == ContinuousEvent:

        def wrapper(f):
            @wraps(f)
            def get_values(self):
                values = f(self)
                return [ContinuousElementaryEvent(value) for value in values]
            return get_values

        cls.values = property(wrapper(cls.get_values))
        del wrapper, cls.get_values

    def _repr_latex_(self):
        pi = self.pi
        string = []
        etc = False
        for i, j in enumerate(self.values):
            if i < controls.head or i >= max(controls.head, len(pi) - controls.tail):
                string.append("\\pi_{" + remove_latex(j._repr_latex_()) + "} &= " + float_str(pi[i]))
            elif not etc:
                etc = True
                string.append('\\dots &= \\dots')
        return '$\\begin{align}\n\t' + ',\\\\\n\t'.join(string) + '.\n\\end{align}$'

    cls._repr_latex_ = _repr_latex_
    del _repr_latex_

    if not cls.EventType == CategoricalEvent:

        def wrapper(f):
            @wraps(f)
            def pdf_plot(self, fmt='|', **kwargs):
                if 'quantiles' not in kwargs and 'qmin' not in kwargs and 'pmin' not in kwargs and not 'qmax' in kwargs and 'pmax' not in kwargs:
                    kwargs['quantiles'] = [value.value for value in self.values]
                return f(self, fmt=fmt, **kwargs)
            return pdf_plot

        cls.pdf_plot = wrapper(cls.pdf_plot)
        del wrapper

        def wrapper(f):
            @wraps(f)
            def cdf_plot(self, **kwargs):
                if 'quantiles' not in kwargs:
                    if 'qmin' not in kwargs and 'pmin' not in kwargs:
                        kwargs['pmin'] = 0.
                    if 'qmax' not in kwargs and 'pmax' not in kwargs:
                        kwargs['pmax'] = 1.
                return f(self, **kwargs)
            return cdf_plot

        cls.cdf_plot = wrapper(cls.cdf_plot)
        del wrapper

        def wrapper(f):
            @wraps(f)
            def box_plot(self, axes=None, extrema=True, vert=True, pos=1, edgecolor="k", **kwargs):
                if axes is None:
                    axes = pyplot.subplot(1, 1, 1)
                facecolor = kwargs.pop('facecolor', next(axes._get_lines.prop_cycler)['color'])
                # facecolor = kwargs.pop('facecolor', axes._get_lines.get_next_color())
                axes = f(self, axes=axes, vert=vert, pos=pos, facecolor=facecolor, edgecolor=edgecolor, **kwargs)
                if extrema:
                    values = self.values
                    values = [values[0].value, values[-1].value]
                    if vert:
                        axes.scatter([pos]*len(values), values, c=facecolor, edgecolors=edgecolor)
                    else:
                        axes.scatter(values, [pos]*len(values), c=facecolor, edgecolors=edgecolor)
                return axes
            return box_plot

        cls.box_plot = wrapper(cls.box_plot)
        del wrapper


for cls in _UnivariateFrequencyDistribution:
    statiskit_univariate_frequency_distribution_decorator(cls)

def statiskit_quantitative_univariate_frequency_distribution_decorator(cls):
    pass

for cls in _QuantitativeUnivariateFrequencyDistribution:
    statiskit_quantitative_univariate_frequency_distribution_decorator(cls)

def __repr__(self):
    return "Univariate Histogram Distribution"

UnivariateHistogramDistribution.__str__ = NormalDistribution.__repr__
UnivariateHistogramDistribution.__repr__ = __repr__
del __repr__

def _repr_latex_(self):
    bins = [x for x in self.bins]
    densities = self.densities
    string = []
    etc = False
    for i, j in enumerate([(i, j) for i, j in zip(bins[:-1], bins[1:])]):
        if i < controls.head or i >= max(controls.head, len(densities) - controls.tail):
            string.append("\\pi_{[" + float_str(j[0]) + ', ' + float_str(j[-1]) + "[} &= " + float_str(densities[i]*(j[-1]-j[0])))
        elif not etc:
            etc = True
            string.append('\\dots &= \\dots')
    return '$\\begin{align}\n\t' + ',\\\\\n\t'.join(string) + '.\n\\end{align}$'

UnivariateHistogramDistribution._repr_latex_ = _repr_latex_
del _repr_latex_

UnivariateHistogramDistribution.bins = property(UnivariateHistogramDistribution.get_bins)

UnivariateHistogramDistribution.densities = property(UnivariateHistogramDistribution.get_densities)

def pdf_plot(self, axes=None, fmt='|', fill=True, **kwargs):
    if axes is None:
        axes = pyplot.subplot(1,1,1)
        xmin, xmax = float("inf"), -1 * float("inf")
        ymin, ymax = float("inf"), -1 * float("inf")
    else:
        xmin, xmax = axes.get_xlim()
        ymin, ymax = axes.get_ylim()
    bins = self.bins
    bins = [x for x in bins]
    densities = self.densities
    densities = [d for d in densities]
    if 'norm' in kwargs:
        norm = kwargs.pop('norm')
        densities = [norm * d for d in densities]
    color = kwargs.pop('color', next(axes._get_lines.prop_cycler)['color'])
    # color = kwargs.pop('color', axes._get_lines.get_next_color())
    if '|' in fmt:
        for lc, rc, d in zip(bins[:-1], bins[1:], densities):
            axes.bar(x=lc, height=d, width=rc-lc, bottom=0., facecolor=color, edgecolor=kwargs.pop('edgecolor', 'k'), align='edge', **kwargs)
        fmt = fmt.replace('|', '')
    if 'o' in fmt:
        axes.plot(bins[:-1], densities, 'o', color=color, alpha=alpha)
        axes.plot([bins[-1]], [densities[-1]], 'o', color=color, **kwargs)
        fmt = fmt.replace('o', '')
    if len(fmt) > 0:
        for lc, rc, d in zip(bins[:-1], bins[1:], densities):
            axes.plot([lc, rc], [d, d], fmt, color=color, **kwargs)
    return axes

UnivariateHistogramDistribution.pdf_plot = pdf_plot
del pdf_plot

def wrapper(f):
    @wraps(f)
    def cdf_plot(self, **kwargs):
        if 'quantiles' not in kwargs:
            if 'qmin' not in kwargs and 'pmin' not in kwargs:
                kwargs['pmin'] = 0.
            if 'qmax' not in kwargs and 'pmax' not in kwargs:
                kwargs['pmax'] = 1.
        return f(self, **kwargs)
    return cdf_plot

UnivariateHistogramDistribution.cdf_plot = wrapper(UnivariateHistogramDistribution.cdf_plot)
del wrapper

def __repr__(self):
    return "N(" + float_str(self.mu) + ', ' + float_str(self.sigma) + ')'

NormalDistribution.__str__ = __repr__
NormalDistribution.__repr__ = __repr__
del __repr__

def _repr_latex_(self):
    return r"$\mathcal{N}\left(" + float_str(self.mu) + ', ' + float_str(self.sigma) + r'\right)$'

NormalDistribution._repr_latex_ = _repr_latex_
del _repr_latex_

NormalDistribution.mu = property(NormalDistribution.get_mu, NormalDistribution.set_mu)
del NormalDistribution.get_mu, NormalDistribution.set_mu

NormalDistribution.sigma = property(NormalDistribution.get_sigma, NormalDistribution.set_sigma)
del NormalDistribution.get_sigma, NormalDistribution.set_sigma

def __repr__(self):
    return "Lo(" + float_str(self.mu) + ', ' + float_str(self.sigma) + ')'

LogisticDistribution.__str__ = __repr__
LogisticDistribution.__repr__ = __repr__
del __repr__

def _repr_latex_(self):
    return r"$\mathcal{Lo}\left(" + float_str(self.mu) + ', ' + float_str(self.sigma) + r'\right)$'

LogisticDistribution._repr_latex_ = _repr_latex_
del _repr_latex_

LogisticDistribution.mu = property(LogisticDistribution.get_mu, LogisticDistribution.set_mu)
del LogisticDistribution.get_mu, LogisticDistribution.set_mu

LogisticDistribution.sigma = property(LogisticDistribution.get_sigma, LogisticDistribution.set_sigma)
del LogisticDistribution.get_sigma, LogisticDistribution.set_sigma

def __repr__(self):
    return "La(" + float_str(self.mu) + ', ' + float_str(self.sigma) + ')'

LaplaceDistribution.__str__ = __repr__
LaplaceDistribution.__repr__ = __repr__
del __repr__

def _repr_latex_(self):
    return r"$\mathcal{La}\left(" + float_str(self.mu) + ', ' + float_str(self.sigma) + r'\right)$'

LaplaceDistribution._repr_latex_ = _repr_latex_
del _repr_latex_

LaplaceDistribution.mu = property(LaplaceDistribution.get_mu, LaplaceDistribution.set_mu)
del LaplaceDistribution.get_mu, LaplaceDistribution.set_mu

LaplaceDistribution.sigma = property(LaplaceDistribution.get_sigma, LaplaceDistribution.set_sigma)
del LaplaceDistribution.get_sigma, LaplaceDistribution.set_sigma

def __repr__(self):
    return "C(" + float_str(self.mu) + ', ' + float_str(self.sigma) + ')'

CauchyDistribution.__str__ = __repr__
CauchyDistribution.__repr__ = __repr__
del __repr__

def _repr_latex_(self):
    return r"$\mathcal{C}\left(" + float_str(self.mu) + ', ' + float_str(self.sigma) + r'\right)$'

CauchyDistribution._repr_latex_ = _repr_latex_
del _repr_latex_

CauchyDistribution.mu = property(CauchyDistribution.get_mu, CauchyDistribution.set_mu)
del CauchyDistribution.get_mu, CauchyDistribution.set_mu

CauchyDistribution.sigma = property(CauchyDistribution.get_sigma, CauchyDistribution.set_sigma)
del CauchyDistribution.get_sigma, CauchyDistribution.set_sigma

def __repr__(self):
    return "T(" + float_str(self.nu) + ')'

StudentDistribution.__str__ = __repr__
StudentDistribution.__repr__ = __repr__
del __repr__

def _repr_latex_(self):
    return r"$\mathcal{T}\left(" + float_str(self.nu) + r'\right)$'

StudentDistribution._repr_latex_ = _repr_latex_
del _repr_latex_

StudentDistribution.nu = property(StudentDistribution.get_nu, StudentDistribution.set_nu)
del StudentDistribution.get_nu, StudentDistribution.set_nu

def __repr__(self):
    return "nsT(" + float_str(self.mu) + ', ' + float_str(self.sigma) + ', ' + float_str(self.nu) + ')'

NonStandardStudentDistribution.__str__ = __repr__
NonStandardStudentDistribution.__repr__ = __repr__
del __repr__

def _repr_latex_(self):
    return r"$\mathcal{nsT}\left(" + float_str(self.mu) + ', ' + float_str(self.sigma) + ', ' + float_str(self.nu) + r'\right)$'

NonStandardStudentDistribution._repr_latex_ = _repr_latex_
del _repr_latex_

NonStandardStudentDistribution.mu = property(NonStandardStudentDistribution.get_mu, NonStandardStudentDistribution.set_mu)
del NonStandardStudentDistribution.get_mu, NonStandardStudentDistribution.set_mu

NonStandardStudentDistribution.sigma = property(NonStandardStudentDistribution.get_sigma, NonStandardStudentDistribution.set_sigma)
del NonStandardStudentDistribution.get_sigma, NonStandardStudentDistribution.set_sigma

#########################################################
# bla bla                                               #
#########################################################

def __repr__(self):
    return "Gu(" + float_str(self.mu) + ', ' + float_str(self.sigma) + ')'

GumbelDistribution.__str__ = __repr__
GumbelDistribution.__repr__ = __repr__
del __repr__

def _repr_latex_(self):
    return r"$\mathcal{C}\left(" + float_str(self.mu) + ', ' + float_str(self.sigma) + r'\right)$'

GumbelDistribution._repr_latex_ = _repr_latex_
del _repr_latex_

GumbelDistribution.mu = property(GumbelDistribution.get_mu, GumbelDistribution.set_mu)
del GumbelDistribution.get_mu, GumbelDistribution.set_mu

GumbelDistribution.sigma = property(GumbelDistribution.get_sigma, GumbelDistribution.set_sigma)
del GumbelDistribution.get_sigma, GumbelDistribution.set_sigma

def __repr__(self):
    return "Go(" + float_str(self.mu) + ', ' + float_str(self.sigma) + ')'

GompertzDistribution.__str__ = __repr__
GompertzDistribution.__repr__ = __repr__
del __repr__

def _repr_latex_(self):
    return r"$\mathcal{C}\left(" + float_str(self.mu) + ', ' + float_str(self.sigma) + r'\right)$'

GompertzDistribution._repr_latex_ = _repr_latex_
del _repr_latex_

GompertzDistribution.mu = property(GompertzDistribution.get_mu, GompertzDistribution.set_mu)
del GompertzDistribution.get_mu, GompertzDistribution.set_mu

GompertzDistribution.sigma = property(GompertzDistribution.get_sigma, GompertzDistribution.set_sigma)
del GompertzDistribution.get_sigma, GompertzDistribution.set_sigma
def __repr__(self):
    return "Gamma(" + float_str(self.alpha) + ', ' + float_str(self.beta) + ')'

GammaDistribution.__str__ = __repr__
GammaDistribution.__repr__ = __repr__
del __repr__

def _repr_latex_(self):
    return r"$\Gamma\left(" + float_str(self.alpha) + ', ' + float_str(self.beta) + r'\right)$'

GammaDistribution._repr_latex_ = _repr_latex_
del _repr_latex_

GammaDistribution.alpha = property(GammaDistribution.get_alpha, GammaDistribution.set_alpha)
del GammaDistribution.get_alpha, GammaDistribution.set_alpha

GammaDistribution.beta = property(GammaDistribution.get_beta, GammaDistribution.set_beta)
del GammaDistribution.get_beta, GammaDistribution.set_beta

def __repr__(self):
    return "Beta(" + float_str(self.alpha) + ', ' + float_str(self.beta) + ')'

BetaDistribution.__str__ = __repr__
BetaDistribution.__repr__ = __repr__
del __repr__

def _repr_latex_(self):
    return r"$\Beta\left(" + float_str(self.alpha) + ', ' + float_str(self.beta) + r'\right)$'

BetaDistribution._repr_latex_ = _repr_latex_
del _repr_latex_

BetaDistribution.alpha = property(BetaDistribution.get_alpha, BetaDistribution.set_alpha)
del BetaDistribution.get_alpha, BetaDistribution.set_alpha

BetaDistribution.beta = property(BetaDistribution.get_beta, BetaDistribution.set_beta)
del BetaDistribution.get_beta, BetaDistribution.set_beta

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
    
MultivariateDistribution.probability = wrapper_probability(MultivariateDistribution.probability)

def simulation(self, size):
    return from_list(*list(map(list, list(zip(*[self.simulate() for index in range(size)])))))

MultivariateDistribution.simulation = simulation
del simulation

MultivariateDistribution.nb_parameters = property(MultivariateDistribution.get_nb_parameters)
del MultivariateDistribution.get_nb_parameters

SplittingDistribution.sum = property(SplittingDistribution.get_sum, SplittingDistribution.set_sum)
del SplittingDistribution.get_sum, SplittingDistribution.set_sum

SplittingDistribution.singular = property(SplittingDistribution.get_singular, SplittingDistribution.set_singular)
del SplittingDistribution.get_singular, SplittingDistribution.set_singular

def __str__(self):
    return self.singular.__str__() + " /\\ " + self.sum.__str__()

SplittingDistribution.__str__ = __str__
SplittingDistribution.__repr__ = __str__
del __str__

def _repr_latex_(self):
    return self.singular._repr_latex_()[:-1] + r" \underset{S}{\wedge} " + self.sum._repr_latex_()[1:]

SplittingDistribution._repr_latex_ = _repr_latex_
del _repr_latex_

def __repr__(self):
    return "Dir(" + str(self.alpha) + ')'

DirichletDistribution.__repr__ = __repr__
del __repr__

def _repr_latex_(self):
    return "r$\mathrm{Dir}\left(" + _tools.remove_latex(self.alpha._repr_latex_()) + r'\right)$'

DirichletDistribution._repr_latex_ = _repr_latex_
del _repr_latex_


DirichletDistribution.alpha = property(DirichletDistribution.get_alpha, DirichletDistribution.set_alpha)
del DirichletDistribution.get_alpha, DirichletDistribution.set_alpha

# def statiskit_independent_Multivariate_distribution_decorator(cls):
#     pass

# for cls in _IndependentMultivariateDistribution:
#     statiskit_independent_Multivariate_distribution_decorator(cls)

# def IndependentMultivariateDistribution(*args):
#     if all(isinstance(arg, CategoricalUnivariateDistribution) for arg in args):
#         return CategoricalIndependentMultivariateDistribution(args)
#     elif all(isinstance(arg, DiscreteUnivariateDistribution) for arg in args):
#         return DiscreteIndependentMultivariateDistribution(args)
#     elif all(isinstance(arg, ContinuousUnivariateDistribution) for arg in args):
#         return ContinuousIndependentMultivariateDistribution(args)
#     elif all(isinstance(arg, UnivariateDistribution) for arg in args):
#         return MixedIndependentMultivariateDistribution(args)
#     else:
#         raise TypeError('\'args\' parameter')

UnivariateConditionalDistribution.nb_parameters = property(UnivariateConditionalDistribution.get_nb_parameters)
del UnivariateConditionalDistribution.get_nb_parameters

UnivariateConditionalDistribution.explanatory_space = property(UnivariateConditionalDistribution.get_explanatory_space)
del UnivariateConditionalDistribution.get_explanatory_space

def wrapper_call(f):
    @wraps(f)
    def __call__(self, *events):
        if len(events) == 1:
            event = events[-1]
        else:
            event = None
        if not isinstance(event, MultivariateEvent):
            event = VectorEvent(len(events))
            for index, component in enumerate(events):
                event[index] = self.explanatory_space[index](component)
        if not isinstance(event, MultivariateEvent):
            raise TypeError('\'event\' parameter') 
        return f(self, event)
    return __call__

UnivariateConditionalDistribution.__call__ = wrapper_call(UnivariateConditionalDistribution.__call__)