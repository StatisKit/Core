from .controls import controls

def unused_warning(**kwargs):
    pass

def float_str(value):
    float_str = str(value)
    return float_str[:float_str.index('.') + controls.precision + 1]

def remove_latex(string):
    return string.replace('$', '')

import difflib

a = "PoissonDistributionEstimator"
b = "PoissonDistributionMLEstimator"
c = "PoissonDistributionMMEstimator"

def compute_diff(a, b):
    diff = ""
    for char in difflib.ndiff(a,b):
        if char.startswith('+ '):
            diff += char[2:]
    return diff

compute_diff(a,b)
compute_diff(a,c)