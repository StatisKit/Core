import os
import warnings

from collections import Iterable

from . import _core

from .__core.statiskit import (_ShiftedDistributionEstimation,
                               _UnivariateFrequencyDistributionEstimation,
                               BinomialDistributionEstimation,
                               BinomialDistributionMLEstimation,
                               BinomialDistributionMMEstimation,
                               GeometricDistributionEstimation,
                               GeometricDistributionMLEstimation,
                               LogarithmicDistributionEstimation,
                               LogarithmicDistributionMLEstimation,
                               MultivariateDistributionEstimation,
                               NegativeBinomialDistributionEstimation,
                               NegativeBinomialDistributionMLEstimation,
                               NegativeBinomialDistributionMMEstimation,
                               NegativeMultinomialDistributionEstimation,
                               NegativeMultinomialDistributionWZ99Estimation,
                               NormalDistributionEstimation,
                               NormalDistributionMLEstimation,
                               PoissonDistributionEstimation,
                               PoissonDistributionMLEstimation,
                               UnivariateDistributionEstimation,
                               UnivariateHistogramDistributionEstimation,
                               UnivariateHistogramDistributionClassicEstimation,
                               UnivariateHistogramDistributionIrregularEstimation,
                               UnivariateHistogramDistributionRegularEstimation)

__all__ = []

class _Estimation(object):

    def __init__(self, cls, name=None, subclass=None):
        self._cls = cls
        if name is None:
            self._name = self._cls.__name__
        else:
            self._name = name
        self._subclass = subclass
        self._algorithms = dict()
        self._seen = set()
        self.__update()

    def _subclasses(self, cls=None, estimator=False):
        subclasses = []
        if cls is None and isinstance(self._cls, Iterable):
            for cls in self._cls:
                if estimator:
                    cls = cls.Estimator
                if cls not in self._seen:
                    self._seen.add(cls)
                    subclasses.append(cls)
                    subclasses.extend(self._subclasses(cls=cls, estimator=estimator))
        else:
            if cls is None:
                if estimator:
                  cls = self._cls.Estimator
                else:
                  cls = self._cls
            for subclass in cls.__subclasses__():
                if subclass not in self._seen:
                    self._seen.add(subclass)
                    subclasses.append(subclass)
                    subclasses.extend(self._subclasses(cls=subclass, estimator=estimator))
        if self._subclass:
            if estimator:
                return [subclass for subclass in subclasses if issubclass(subclass, self._subclass.Estimator)]
            else:
                return [subclass for subclass in subclasses if issubclass(subclass, self._subclass)]
        else:
            return subclasses

    def __replace(self, name):
        for replace in ["Distribution", "Univariate", "Multivariate", "Estimator", "Estimation", "Selection"]:
            name = name.replace(replace, "")
        return name

    def __update(self):
        basename = self.__replace(self._name)
        for cls in self._subclasses(cls=None):
            if hasattr(cls, "Estimator") and not cls.Estimator.__abstract__:
              algorithm = getattr(cls, "__alias__", cls.__name__)
              algorithm = self.__replace(algorithm)
              algorithm = algorithm.replace(os.path.commonprefix([basename, algorithm]), "")
              algorithm = algorithm.replace(os.path.commonprefix([basename[-1::-1], algorithm[-1::-1]])[-1::-1], "")
              if algorithm:
                  if sum(c.isupper() for c in algorithm) == 1 and sum(c.isdigit() for c in algorithm) == 0:
                      algorithm = algorithm.lower()
                  if algorithm in self._algorithms and not self._algorithms[algorithm] == cls.Estimator:
                      warnings.warn("Multiple possible algorithms for '" + algorithm + "' algorithm's name")
                  self._algorithms[algorithm] = cls.Estimator
        for cls in self._subclasses(cls=None, estimator=True):
            if not cls.__abstract__:
              algorithm = getattr(cls, "__alias__", cls.__name__)
              algorithm = self.__replace(algorithm)
              algorithm = algorithm.replace(os.path.commonprefix([basename, algorithm]), "")
              algorithm = algorithm.replace(os.path.commonprefix([basename[-1::-1], algorithm[-1::-1]])[-1::-1], "")
              if algorithm:
                  if sum(c.isupper() for c in algorithm) == 1 and sum(c.isdigit() for c in algorithm) == 0:
                      algorithm = algorithm.lower()
                  if algorithm in self._algorithms and not self._algorithms[algorithm] == cls:
                      warnings.warn("Multiple possible algorithms for '" + algorithm + "' algorithm's name")
                  self._algorithms[algorithm] = cls

    def __algorithm(self, algorithm):
        if algorithm not in self._algorithms:
            self.__update()
        if algorithm not in self._algorithms:
            if algorithm.lower() not in self._algorithms:
              raise KeyError("Undefinided '" + algorithm + "' algorithm")
            else:
              algorithm = algorithm.lower()
        return self._algorithms[algorithm]()

    def __call__(self, algorithm, data=None, **kwargs):
        try:
            if "outcome" in kwargs:
                algorithm = kwargs.pop("outcome").capitalize() + algorithm.capitalize()
            algorithm = self.__algorithm(algorithm)
        except KeyError:
            raise ValueError('\'algorithm\' parameter, possible values are ' + ', '.join('"' + algorithm + '"' for algorithm in sorted(self._algorithms.keys())))
        except:
            raise
        for attr in list(kwargs.keys()):
            if hasattr(algorithm, attr):
                setattr(algorithm, attr, kwargs.pop(attr))
            else:
                raise AttributeError("'" + algorithm.__class__.__name__ + "' object has no attribute '" + attr + "'")
        if data:
            if 'variable' in kwargs:
                return algorithm(data, kwargs.pop('variable'))
            elif 'variables' in kwargs:
                return algorithm(data, kwargs.pop('variables'))
            else:
                return algorithm(data)
        else:
            return algorithm

shifted_estimation = _Estimation(_ShiftedDistributionEstimation,
                                 name="ShiftedDistributionEstimationEstimation")
__all__ += ["shifted_estimation"]

def shifted_estimator_decorator(cls):

  cls.shift = property(cls.get_shift, cls.set_shift)
  del cls.get_shift, cls.set_shift

  cls.estimator = property(cls.get_estimator, cls.set_estimator)
  del cls.get_estimator, cls.set_estimator

frequency_estimation = _Estimation(_UnivariateFrequencyDistributionEstimation,
                                   name="UnivariateFrequencyDistributionEstimation")
__all__ += ["frequency_estimation"]

binomial_estimation = _Estimation(BinomialDistributionEstimation)
__all__ += ["binomial_estimation"]

BinomialDistributionMLEstimation.Estimator.force = property(BinomialDistributionMLEstimation.Estimator.get_force, BinomialDistributionMLEstimation.Estimator.set_force)
del BinomialDistributionMLEstimation.Estimator.get_force, BinomialDistributionMLEstimation.Estimator.set_force

BinomialDistributionMMEstimation.Estimator.location = property(BinomialDistributionMMEstimation.Estimator.get_location, BinomialDistributionMMEstimation.Estimator.set_location)
del BinomialDistributionMMEstimation.Estimator.get_location, BinomialDistributionMMEstimation.Estimator.set_location

BinomialDistributionMMEstimation.Estimator.dispersion = property(BinomialDistributionMMEstimation.Estimator.get_dispersion, BinomialDistributionMMEstimation.Estimator.set_dispersion)
del BinomialDistributionMMEstimation.Estimator.get_dispersion, BinomialDistributionMMEstimation.Estimator.set_dispersion

geometric_estimation = _Estimation(GeometricDistributionEstimation)
__all__ += ["geometric_estimation"]

logarithmic_estimation = _Estimation(LogarithmicDistributionEstimation)
__all__ += ["logarithmic_estimation"]

multivariate_estimation = _Estimation(MultivariateDistributionEstimation)
__all__ += ["multivariate_estimation"]

negative_binomial_estimation = _Estimation(NegativeBinomialDistributionEstimation)
__all__ += ["negative_binomial_estimation"]

NegativeBinomialDistributionMLEstimation.Estimator.force = property(NegativeBinomialDistributionMLEstimation.Estimator.get_force, NegativeBinomialDistributionMLEstimation.Estimator.set_force)
del NegativeBinomialDistributionMLEstimation.Estimator.get_force, NegativeBinomialDistributionMLEstimation.Estimator.set_force

NegativeBinomialDistributionMMEstimation.Estimator.location = property(NegativeBinomialDistributionMMEstimation.Estimator.get_location, NegativeBinomialDistributionMMEstimation.Estimator.set_location)
del NegativeBinomialDistributionMMEstimation.Estimator.get_location, NegativeBinomialDistributionMMEstimation.Estimator.set_location

NegativeBinomialDistributionMMEstimation.Estimator.dispersion = property(NegativeBinomialDistributionMMEstimation.Estimator.get_dispersion, NegativeBinomialDistributionMMEstimation.Estimator.set_dispersion)
del NegativeBinomialDistributionMMEstimation.Estimator.get_dispersion, NegativeBinomialDistributionMMEstimation.Estimator.set_dispersion

negative_multinomial_estimation = _Estimation(NegativeMultinomialDistributionEstimation)
__all__ += ["negative_multinomial_estimation"]

normal_estimation = _Estimation(NormalDistributionEstimation)
__all__ += ["normal_estimation"]

poisson_estimation = _Estimation(PoissonDistributionEstimation)
__all__ += ["poisson_estimation"]

univariate_estimation = _Estimation(UnivariateDistributionEstimation)
__all__ += ["univariate_estimation"]

histogram_estimation = _Estimation(UnivariateHistogramDistributionEstimation)
__all__ += ["histogram_estimation"]

UnivariateHistogramDistributionClassicEstimation.Estimator.nb_bins = property(UnivariateHistogramDistributionClassicEstimation.Estimator.get_nb_bins, UnivariateHistogramDistributionClassicEstimation.Estimator.set_nb_bins)
del UnivariateHistogramDistributionClassicEstimation.Estimator.get_nb_bins, UnivariateHistogramDistributionClassicEstimation.Estimator.set_nb_bins

UnivariateHistogramDistributionIrregularEstimation.maxbins = property(UnivariateHistogramDistributionIrregularEstimation.Estimator.get_maxbins, UnivariateHistogramDistributionIrregularEstimation.Estimator.set_maxbins)
del UnivariateHistogramDistributionIrregularEstimation.Estimator.get_maxbins, UnivariateHistogramDistributionIrregularEstimation.Estimator.set_maxbins

UnivariateHistogramDistributionIrregularEstimation.constant = property(UnivariateHistogramDistributionIrregularEstimation.Estimator.get_constant, UnivariateHistogramDistributionIrregularEstimation.Estimator.set_constant)
del UnivariateHistogramDistributionIrregularEstimation.Estimator.get_constant, UnivariateHistogramDistributionIrregularEstimation.Estimator.set_constant

UnivariateHistogramDistributionRegularEstimation.maxbins = property(UnivariateHistogramDistributionRegularEstimation.Estimator.get_maxbins, UnivariateHistogramDistributionRegularEstimation.Estimator.set_maxbins)
del UnivariateHistogramDistributionRegularEstimation.Estimator.get_maxbins, UnivariateHistogramDistributionRegularEstimation.Estimator.set_maxbins