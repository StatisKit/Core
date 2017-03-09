import os
from statiskit.core import OrdinalSampleSpace, read_csv

def load(*args):
    """Load data used in the statiskit.core package"""

    kwargs = {arg : None for arg in args}
    
    if 'capushe' in kwargs or len(args) == 0:
        filepath = os.path.join(os.path.dirname(__file__), "capushe.csv")
        capushe = read_csv(filepath, header=True)
        variable = capushe.get_variable(0)
        variable.sample_space = variable.sample_space.as_ordinal()
        kwargs['capushe'] = capushe

    args = [kwargs[arg] for arg in args]

    if len(args) == 1:
        return args.pop()
    else:
        return args