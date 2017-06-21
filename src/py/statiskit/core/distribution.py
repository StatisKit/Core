##################################################################################
#                                                                                #
# StatisKit-CoreThis software is distributed under the CeCILL-C license. You     #
# should have received a copy of the legalcode along with this work. If not, see #
# <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 #
#                                                                                #
##################################################################################

from functools import wraps
import math

from optionals import pyplot, numpy
from io import from_list

import _core
from __core.statiskit import (UnivariateDistribution,
                                _UnivariateFrequencyDistribution,
                                _QuantitativeUnivariateFrequencyDistribution,
                                CategoricalUnivariateDistribution,
                                    NominalDistribution,
                                    OrdinalDistribution,
                                    CategoricalUnivariateMixtureDistribution,
                                DiscreteUnivariateDistribution,
                                    DiscreteUnivariateFrequencyDistribution,
                                    PoissonDistribution,
                                    BinomialDistribution,
                                    NegativeBinomialDistribution,
                                    DiscreteUnivariateMixtureDistribution,
                                ContinuousUnivariateDistribution,
                                    ContinuousUnivariateFrequencyDistribution,
                                    UnivariateHistogramDistribution,
                                    NormalDistribution,
                                    LogisticDistribution,
                                    GammaDistribution,
                                    BetaDistribution,
                                    ContinuousUnivariateMixtureDistribution,
                              MultivariateDistribution,
                                _IndependentMultivariateDistribution,
                                MixedMultivariateMixtureDistribution,
                                CategoricalMultivariateDistribution,
                                    CategoricalIndependentMultivariateDistribution,
                                    CategoricalMultivariateMixtureDistribution,
                                DiscreteMultivariateDistribution,
                                    MultinomialSplittingDistribution,
                                    DiscreteIndependentMultivariateDistribution,
                                    DiscreteMultivariateMixtureDistribution,
                                ContinuousMultivariateDistribution,
                                    MultinormalDistribution,
                                    DirichletDistribution,
                                    ContinuousIndependentMultivariateDistribution,
                                    ContinuousMultivariateMixtureDistribution,
                              _MixtureDistribution, _UnivariateMixtureDistribution, _QuantitativeUnivariateMixtureDistribution, _MultivariateMixtureDistribution,
                              UnivariateConditionalDistribution)

from controls import controls
from event import (UnivariateEvent,
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
from data import (UnivariateData,
                      UnivariateDataFrame,
                  MultivariateData,
                      MultivariateDataFrame)
from sample_space import (NominalSampleSpace,
                          OrdinalSampleSpace)
from _tools import float_str, remove_latex

from statiskit import linalg

__all__ = ['NominalDistribution',
           'OrdinalDistribution',
           'DiscreteUnivariateFrequencyDistribution',
           'PoissonDistribution',
           'BinomialDistribution',
           'NegativeBinomialDistribution',
           'ContinuousUnivariateFrequencyDistribution',
           'UnivariateHistogramDistribution',
           'NormalDistribution',
           'LogisticDistribution',
           'GammaDistribution',
           'BetaDistribution',
           'MultinomialSplittingDistribution',
           'MultinormalDistribution',
           'DirichletDistribution',
           'IndependentMultivariateDistribution',
           'MixtureDistribution']

UnivariateDistribution.nb_parameters = property(UnivariateDistribution.get_nb_parameters)
del UnivariateDistribution.get_nb_parameters

def wrapper_probability(f):
    @wraps(f)
    def probability(self, event, **kwargs):
        if isinstance(event, basestring):
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
    x, labels = zip(*[(index, label) for index, label in enumerate(labels)])
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
        f(self, args)
        for attr in kwargs.keys():
            if hasattr(self, attr):
                setattr(self, attr, kwargs.pop(attr))
            else:
                raise AttributeError("'" + self.__class__.__name__ + "' object has no attribute '" + attr + "'")
    return __init__

NominalDistribution.__init__ = wrapper(NominalDistribution.__init__)
OrdinalDistribution.__init__ = wrapper(OrdinalDistribution.__init__)
del wrapper

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
    x, labels = zip(*[(index, label) for index, label in enumerate(labels)])
    y = self.pi
    if 'norm' in kwargs:
        norm = kwargs.pop('norm')
        y = [norm * p for p in y]
    else:
        y = [p for p in y]
    y = [y[i] for i in self.rank]
    y = [sum(y[:i]) for i in xrange(1, len(y)+1)]
    if '|' in fmt:
        fmt = fmt.replace('|', '')
        width = kwargs.pop('width', .8)
        if not 0 < width <= 1.:
            raise ValueError('\'width\' parameter must be strictly superior to 0. and inferior to 1.')
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
    facecolor = kwargs.pop('facecolor', axes._get_lines.get_next_color())
    if not(qb <= q1 <= q2 <= q3 <= qe):
        raise ValueError('`whiskers` parameter')
    if vert:
        axes.bar(pos, q3-q1, width, q1, facecolor=facecolor, edgecolor=edgecolor, align='center')
        axes.plot([pos-width/2., pos+width/2.], [q2, q2], color=edgecolor)
        axes.plot([pos-width/2., pos+width/2.], [qb, qb], color=edgecolor)
        axes.plot([pos-width/2., pos+width/2.], [qe, qe], color=edgecolor)
        axes.plot([pos, pos], [qb, q1], color=edgecolor)
        axes.plot([pos, pos], [q3, qe], color=edgecolor)
        axes.set_yticks(range(len(values)))
        axes.set_yticklabels(values)
    else:
        axes.bar(q1, width, q3-q1, pos-width/2., facecolor=facecolor, edgecolor=edgecolor)
        axes.plot([q2, q2], [pos-width/2., pos+width/2.], color=edgecolor)
        axes.plot([qb, qb], [pos-width/2., pos+width/2.], color=edgecolor)
        axes.plot([qe, qe], [pos-width/2., pos+width/2.], color=edgecolor)
        axes.plot([qb, q1], [pos, pos], color=edgecolor)
        axes.plot([q3, qe], [pos, pos], color=edgecolor)
        axes.set_xticks(range(len(values)))
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
    x = kwargs.pop('quantiles', range(kwargs.pop('qmin', self.quantile(kwargs.pop('pmin', 0.025))), kwargs.pop('qmax', self.quantile(kwargs.pop('pmax', 0.975)))+1))
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
    x = kwargs.pop('quantiles', range(kwargs.pop('qmin', self.quantile(kwargs.pop('pmin', 0.025))), kwargs.pop('qmax', self.quantile(kwargs.pop('pmax', 0.975)))+1))
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
    facecolor = kwargs.pop('facecolor', axes._get_lines.get_next_color())
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

PoissonDistribution.theta = property(PoissonDistribution.get_theta, PoissonDistribution.set_theta)
del PoissonDistribution.get_theta, PoissonDistribution.set_theta

BinomialDistribution.kappa = property(BinomialDistribution.get_kappa, BinomialDistribution.set_kappa)
del BinomialDistribution.get_kappa, BinomialDistribution.set_kappa

BinomialDistribution.pi = property(BinomialDistribution.get_pi, BinomialDistribution.set_pi)
del BinomialDistribution.get_pi, BinomialDistribution.set_pi

NegativeBinomialDistribution.kappa = property(NegativeBinomialDistribution.get_kappa, NegativeBinomialDistribution.set_kappa)
del NegativeBinomialDistribution.get_kappa, NegativeBinomialDistribution.set_kappa

NegativeBinomialDistribution.pi = property(NegativeBinomialDistribution.get_pi, NegativeBinomialDistribution.set_pi)
del NegativeBinomialDistribution.get_pi, NegativeBinomialDistribution.set_pi

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
                facecolor = kwargs.pop('facecolor', axes._get_lines.get_next_color())
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
    color = kwargs.pop('color', axes._get_lines.get_next_color())
    if '|' in fmt:
        for lc, rc, d in zip(bins[:-1], bins[1:], densities):
            axes.bar(left=lc, height=d, width=rc-lc, bottom=0., facecolor=color, edgecolor=kwargs.pop('edgecolor', 'k'), align='edge', **kwargs)
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
    return "r$\mathcal{N}\left(" + float_str(self.mu) + ', ' + float_str(self.sigma) + r'\right)$'

NormalDistribution._repr_latex_ = _repr_latex_
del _repr_latex_

NormalDistribution.mu = property(NormalDistribution.get_mu, NormalDistribution.set_mu)
del NormalDistribution.get_mu, NormalDistribution.set_mu

NormalDistribution.sigma = property(NormalDistribution.get_sigma, NormalDistribution.set_sigma)
del NormalDistribution.get_sigma, NormalDistribution.set_sigma

def __repr__(self):
    return "L(" + float_str(self.mu) + ', ' + float_str(self.sigma) + ')'

LogisticDistribution.__str__ = __repr__
LogisticDistribution.__repr__ = __repr__
del __repr__

def _repr_latex_(self):
    return "r$\mathcal{L}\left(" + float_str(self.mu) + ', ' + float_str(self.sigma) + r'\right)$'

LogisticDistribution._repr_latex_ = _repr_latex_
del _repr_latex_

LogisticDistribution.mu = property(LogisticDistribution.get_mu, LogisticDistribution.set_mu)
del LogisticDistribution.get_mu, LogisticDistribution.set_mu

LogisticDistribution.sigma = property(LogisticDistribution.get_sigma, LogisticDistribution.set_sigma)
del LogisticDistribution.get_sigma, LogisticDistribution.set_sigma

def __repr__(self):
    return "Gamma(" + float_str(self.alpha) + ', ' + float_str(self.beta) + ')'

GammaDistribution.__str__ = __repr__
GammaDistribution.__repr__ = __repr__
del __repr__

def _repr_latex_(self):
    return "r$\Gamma\left(" + float_str(self.alpha) + ', ' + float_str(self.beta) + r'\right)$'

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
    return "r$\Beta\left(" + float_str(self.alpha) + ', ' + float_str(self.beta) + r'\right)$'

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
                if isinstance(component, basestring):
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
    return from_list(*map(list, zip(*[self.simulate() for index in range(size)])))

MultivariateDistribution.simulation = simulation
del simulation

MultivariateDistribution.nb_parameters = property(MultivariateDistribution.get_nb_parameters)
del MultivariateDistribution.get_nb_parameters

MultinomialSplittingDistribution.sum = property(MultinomialSplittingDistribution.get_sum, MultinomialSplittingDistribution.set_sum)
del MultinomialSplittingDistribution.get_sum, MultinomialSplittingDistribution.set_sum

MultinomialSplittingDistribution.pi = property(MultinomialSplittingDistribution.get_pi, MultinomialSplittingDistribution.set_pi)
del MultinomialSplittingDistribution.get_pi, MultinomialSplittingDistribution.set_pi

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

def statiskit_independent_multivariate_distribution_decorator(cls):
    pass

for cls in _IndependentMultivariateDistribution:
    statiskit_independent_multivariate_distribution_decorator(cls)

def IndependentMultivariateDistribution(*args):
    if all(isinstance(arg, CategoricalUnivariateDistribution) for arg in args):
        return CategoricalIndependentMultivariateDistribution(args)
    elif all(isinstance(arg, DiscreteUnivariateDistribution) for arg in args):
        return DiscreteIndependentMultivariateDistribution(args)
    elif all(isinstance(arg, ContinuousUnivariateDistribution) for arg in args):
        return ContinuousIndependentMultivariateDistribution(args)
    elif all(isinstance(arg, UnivariateDistribution) for arg in args):
        return MixedIndependentMultivariateDistribution(args)
    else:
        raise TypeError('\'args\' parameter')

def statiskit_mixture_distribution_decorator(cls):
    
    cls.nb_states = property(cls.get_nb_states)
    del cls.get_nb_states

    cls.pi = property(cls.get_pi, cls.set_pi)
    del cls.get_pi, cls.set_pi

    class Observations(object):

        def __init__(self, distribution):
            self._distribution = distribution

        def __len__(self):
            return self._distribution.nb_states

    def wrapper_observations(f0, f1):

        @wraps(f0)
        def __getitem__(self, index):
            if index < 0:
                index += len(self)
            if not 0 <= index < len(self):
                raise IndexError(self._distribution.__class__.__name__ + " index out of range")
            return f0(self._distribution, index)

        @wraps(f1)
        def __setitem__(self, index, value):
            if index < 0:
                index += len(self)
            if not 0 <= index < len(self):
                raise IndexError(self._distribution.__class__.__name__ + " index out of range")
            return f1(self._distribution, index, value)

        return __getitem__, __setitem__
        
    Observations.__getitem__, Observations.__setitem__ = wrapper_observations(cls.get_observation, cls.set_observation)
    del cls.get_observation, cls.set_observation

    cls.observations = property(Observations)

    if hasattr(cls, 'pdf_plot'):

        def wrapper_pdf_plot(f):
            @wraps(f)
            def pdf_plot(self, axes=None, *args, **kwargs):
                norm = kwargs.pop('norm', 1.)
                states = kwargs.pop('states', True)
                if states:
                    if isinstance(states, list):
                        skwargs = states
                    else:
                        skwargs = [{}] * self.nb_states
                    for index, (pi, observation) in enumerate(zip(self.pi, self.observations)):
                        skwargs[index].update(kwargs)
                        axes = observation.pdf_plot(axes=axes, norm=pi*norm, *args, **skwargs[index])
                return f(self, axes=axes, *args, norm=norm, **kwargs)
            return pdf_plot

        cls.pdf_plot = wrapper_pdf_plot(cls.pdf_plot)

for cls in _MixtureDistribution:
    statiskit_mixture_distribution_decorator(cls)

def statiskit_univariate_mixture_distribution_decorator(cls):

    def wrapper_posterior(f):
        @wraps(f)
        def posterior(self, event, **kwargs):
            return f(self, type_to_event(event), kwargs.pop('log', False))
        return posterior

    cls.posterior = wrapper_posterior(cls.posterior)

    def wrapper_assignement(f):
        @wraps(f)
        def assignement(self, event):
            return f(self, type_to_event(event))
        return assignement

    cls.assignement = wrapper_assignement(cls.assignement)

    def wrapper_uncertainty(f):
        @wraps(f)
        def uncertainty(self, arg):
            if isinstance(arg, UnivariateData):
                return f(self, arg)
            else:
                return f(self, types_to_event(arg))
        return uncertainty

    cls.uncertainty = wrapper_uncertainty(cls.uncertainty)

for cls in _UnivariateMixtureDistribution:
    statiskit_univariate_mixture_distribution_decorator(cls)

def statiskit_multivariate_mixture_distribution_decorator(cls):

    def wrapper_posterior(f):
        @wraps(f)
        def posterior(self, *event, **kwargs):
            return f(self, types_to_event(*events), kwargs.pop('log', False))
        return posterior

    cls.posterior = wrapper_posterior(cls.posterior)

    def wrapper_assignement(f):
        @wraps(f)
        def assignement(self, *event):
            return f(self, types_to_event(*event))
        return assignement

    cls.assignement = wrapper_assignement(cls.assignement)
    
    def wrapper_uncertainty(f):
        @wraps(f)
        def uncertainty(self, *args):
            if len(args) == 1 and isinstance(args[0], MultivariateData):
                return f(self, args[0])
            else:
                return f(self, types_to_event(*args))
        return uncertainty

    cls.uncertainty = wrapper_uncertainty(cls.uncertainty)

for cls in _MultivariateMixtureDistribution:
    statiskit_multivariate_mixture_distribution_decorator(cls)

def MixtureDistribution(*args, **kwargs):
    if 'pi' in kwargs:
        pi = kwargs.pop('pi')
    else:
        pi = [1. for arg in args]
    if not isinstance(pi, linalg.Vector):
        pi = linalg.Vector(pi)
    if all(isinstance(arg, CategoricalUnivariateDistribution) for arg in args):
        return CategoricalUnivariateMixtureDistribution(args, pi)
    elif all(isinstance(arg, DiscreteUnivariateDistribution) for arg in args):
        return DiscreteUnivariateMixtureDistribution(args, pi)
    elif all(isinstance(arg, ContinuousUnivariateDistribution) for arg in args):
        return ContinuousUnivariateMixtureDistribution(args, pi)
    elif all(isinstance(arg, MultivariateDistribution) for arg in args):
        if all(isinstance(arg, CategoricalMultivariateDistribution) for arg in args):
            return CategoricalMultivariateMixtureDistribution(args, pi)
        elif all(isinstance(arg, DiscreteMultivariateDistribution) for arg in args):
            return DiscreteMultivariateMixtureDistribution(args, pi)
        elif all(isinstance(arg, ContinuousMultivariateDistribution) for arg in args):
            return ContinuousMultivariateMixtureDistribution(args, pi)
        else:
            return MixedMultivariateMixtureDistribution(args, pi)
    else:
        raise TypeError('\'args\' parameter')

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