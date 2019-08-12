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
