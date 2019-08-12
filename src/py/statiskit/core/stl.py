from statiskit.stl.vector import decorator as vector_decorator

from . import _core
from .__core.std import (_Vector)

__all__ = []

for _vector in (_Vector,):
    vector_decorator(_vector)