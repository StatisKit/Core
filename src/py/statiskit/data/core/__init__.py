import os
from statiskit.core import OrdinalSampleSpace, read_csv

def load(*args):
    """Load data used in the statiskit.core package"""

    if len(args) == 0:
        args = [arg for arg in os.listdir(os.path.join(os.path.dirname(__file__))) if arg.endswith('.csv')]
    else:
        args = [arg + '.csv' if not arg.endswith('.csv') else arg for arg in args]

    kwargs = {arg : None for arg in args}    
    if 'capushe.csv' in kwargs or len(args) == 0:
        filepath = os.path.join(os.path.dirname(__file__), "capushe.csv")
        capushe = read_csv(filepath, header=True, sep=',')
        component = capushe.components[0]
        component.sample_space = component.sample_space.as_ordinal()
        kwargs['capushe.csv'] = capushe

    for arg in list(kwargs.keys()):
        if kwargs[arg] is None:
            kwargs[arg] = read_csv(os.path.join(os.path.dirname(__file__), arg),
                                   header=True,
                                   sep=',')

    if len(kwargs) == 1:
        return kwargs.popitem()[-1]
    else:
        return kwargs