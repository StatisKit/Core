import types
from functools import wraps

from . import _core
from .__core.statiskit import (get_nn,
                               get_zz,
                               get_rr,
                               get_nr,
                               get_pr,
                               set_seed)

__all__ = ['controls']

class Controls(types.ModuleType):

    head = 10
    tail = 10

def wrapper_set_seed(f):
    @wraps(f)
    def set_seed(self, seed):
        return f(seed)
    return set_seed

Controls.set_seed = wrapper_set_seed(set_seed)
del wrapper_set_seed, set_seed

def wrapper_get_NN(f):
    @wraps(f)
    def get_NN(self):
        return f()
    return get_NN

Controls.NN = property(wrapper_get_NN(get_nn))
del wrapper_get_NN, get_nn

def wrapper_get_ZZ(f):
    @wraps(f)
    def get_ZZ(self):
        return f()
    return get_ZZ

Controls.ZZ = property(wrapper_get_ZZ(get_zz))
del wrapper_get_ZZ, get_zz

def wrapper_get_RR(f):
    @wraps(f)
    def get_RR(self):
        return f()
    return get_RR

Controls.RR = property(wrapper_get_RR(get_rr))
del wrapper_get_RR, get_rr

def wrapper_get_NR(f):
    @wraps(f)
    def get_NR(self):
        return f()
    return get_NR

Controls.NR = property(wrapper_get_NR(get_nr))
del wrapper_get_NR, get_nr

def wrapper_get_PR(f):
    @wraps(f)
    def get_PR(self):
        return f()
    return get_PR

Controls.PR = property(wrapper_get_PR(get_pr))
del wrapper_get_PR, get_pr

def get_precision(self):
    return self._precision

def set_precision(self, precision):
    if not precision >= 0:
        raise ValueError('\'precision\' parameter')
    self._precision = precision

Controls._precision = 2
Controls.precision = property(get_precision, set_precision)
del get_precision, set_precision

controls = Controls('controls')
del Controls