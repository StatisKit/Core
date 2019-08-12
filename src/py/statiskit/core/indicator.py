from functools import wraps

from . import _core
from .__core.statiskit import (UnivariateLocationEstimation,
                               UnivariateMeanEstimation,
                               MultivariateLocationEstimation,
                               MultivariateMeanEstimation,
                               UnivariateDispersionEstimation,
                               UnivariateVarianceEstimation,
                               MultivariateDispersionEstimation,
                               MultivariateVarianceEstimation)
from .data import (UnivariateData,
                   MultivariateData)
__all__ = []

UnivariateLocationEstimation.location = property(UnivariateLocationEstimation.get_location)
del UnivariateLocationEstimation.get_location

MultivariateLocationEstimation.location = property(MultivariateLocationEstimation.get_location)
del MultivariateLocationEstimation.get_location

UnivariateDispersionEstimation.location = property(UnivariateDispersionEstimation.get_location)
del UnivariateDispersionEstimation.get_location

MultivariateDispersionEstimation.location = property(MultivariateDispersionEstimation.get_location)
del MultivariateDispersionEstimation.get_location

UnivariateDispersionEstimation.dispersion = property(UnivariateDispersionEstimation.get_dispersion)
del UnivariateDispersionEstimation.get_dispersion

MultivariateDispersionEstimation.dispersion = property(MultivariateDispersionEstimation.get_dispersion)
del MultivariateDispersionEstimation.get_dispersion

def __str__(self):
    return str(self.location)

UnivariateLocationEstimation.__str__ = __str__
del __str__

def __repr__(self):
    return repr(self.location)

UnivariateLocationEstimation.__repr__ = __repr__
del __repr__

def __str__(self):
    return str(self.location)

MultivariateLocationEstimation.__str__ = __str__
del __str__

def __repr__(self):
    return repr(self.location)

MultivariateLocationEstimation.__repr__ = __repr__
del __repr__

def __str__(self):
    return str(self.dispersion)

UnivariateDispersionEstimation.__str__ = __str__
del __str__

def __repr__(self):
    return repr(self.dispersion)

UnivariateDispersionEstimation.__repr__ = __repr__
del __repr__

def __str__(self):
    return str(self.dispersion)

MultivariateDispersionEstimation.__str__ = __str__
del __str__

def __repr__(self):
    return repr(self.dispersion)

MultivariateDispersionEstimation.__repr__ = __repr__
del __repr__


def location_estimation(algo='mean', data="univariate", **kwargs):
    """
    """
    if isinstance(data, MultivariateData) or data == "multivariate":
        mapping = dict(mean = MultivariateMeanEstimation.Estimator)
        try:
            algo = mapping[algo]()
        except KeyError:
            raise ValueError('\'algo\' parameter, possible values are ' + ', '.join('"' + algo + '"' for algo in mapping.keys()))
        except:
            raise
        for attr in list(kwargs.keys()):
            if hasattr(algo, attr):
                setattr(algo, attr, kwargs.pop(attr))
        if data:
            return algo(data)
        else:
            return algo
    elif isinstance(data, UnivariateData) or data == "univariate":
        mapping = dict(mean = UnivariateMeanEstimation.Estimator)
        try:
            algo = mapping[algo]()
        except KeyError:
            raise ValueError('\'algo\' parameter, possible values are ' + ', '.join('"' + algo + '"' for algo in mapping.keys()))
        except:
            raise
        for attr in list(kwargs.keys()):
            if hasattr(algo, attr):
                setattr(algo, attr, kwargs.pop(attr))
        if isinstance(data, UnivariateData):
            return algo(data)
        else:
            return algo
    else:
        raise ValueError("'data' parameter")

def dispersion__call__(f):
    @wraps(f)
    def __call__(self, data, location=None):
        if location is None:
            location = data.location
        return f(self, data, location)
    return __call__

UnivariateDispersionEstimation.Estimator.__call__ = dispersion__call__(UnivariateDispersionEstimation.Estimator.__call__)
UnivariateVarianceEstimation.Estimator.__call__ = dispersion__call__(UnivariateVarianceEstimation.Estimator.__call__)
MultivariateDispersionEstimation.Estimator.__call__ = dispersion__call__(MultivariateDispersionEstimation.Estimator.__call__)
MultivariateVarianceEstimation.Estimator.__call__ = dispersion__call__(MultivariateVarianceEstimation.Estimator.__call__)
del dispersion__call__

UnivariateVarianceEstimation.Estimator.bias = property(UnivariateVarianceEstimation.Estimator.get_bias, UnivariateVarianceEstimation.Estimator.set_bias)
del UnivariateVarianceEstimation.Estimator.get_bias, UnivariateVarianceEstimation.Estimator.set_bias

MultivariateVarianceEstimation.Estimator.bias = property(MultivariateVarianceEstimation.Estimator.get_bias, MultivariateVarianceEstimation.Estimator.set_bias)
del MultivariateVarianceEstimation.Estimator.get_bias, MultivariateVarianceEstimation.Estimator.set_bias

def dispersion_estimation(algo='variance', data="univariate", **kwargs):
    """
    """
    location = kwargs.pop('location', None)
    if isinstance(data, MultivariateData) or data == "multivariate":
        mapping = dict(variance = MultivariateVarianceEstimation.Estimator)
        try:
            algo = mapping[algo]()
        except KeyError:
            raise ValueError('\'algo\' parameter, possible values are ' + ', '.join('"' + algo + '"' for algo in mapping.keys()))
        except:
            raise
        for attr in list(kwargs.keys()):
            if hasattr(algo, attr):
                setattr(algo, attr, kwargs.pop(attr))
        if data:
            return algo(data, location=location)
        else:
            return algo
    elif isinstance(data, UnivariateData) or data == "univariate":
        mapping = dict(variance = UnivariateVarianceEstimation.Estimator)
        try:
            algo = mapping[algo]()
        except KeyError:
            raise ValueError('\'algo\' parameter, possible values are ' + ', '.join('"' + algo + '"' for algo in mapping.keys()))
        except:
            raise
        for attr in list(kwargs.keys()):
            if hasattr(algo, attr):
                setattr(algo, attr, kwargs.pop(attr))
        if isinstance(data, UnivariateData):
            return algo(data, location=location)
        else:
            return algo
    else:
        raise ValueError("'data' parameter")