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
                    if isinstance(states, (list, tuple)):
                        skwargs = states
                    else:
                        skwargs = [{}] * self.nb_states
                    for index, (pi, observation) in enumerate(zip(self.pi, self.observations)):
                        for key, value in kwargs.items():
                            if not key in skwargs[index]:
                                skwargs[index][key] = value
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

    def wrapper_assignment(f):
        @wraps(f)
        def assignment(self, event):
            return f(self, type_to_event(event))
        return assignment

    cls.assignment = wrapper_assignment(cls.assignment)

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

def statiskit_Multivariate_mixture_distribution_decorator(cls):

    def wrapper_posterior(f):
        @wraps(f)
        def posterior(self, *event, **kwargs):
            return f(self, types_to_event(*events), kwargs.pop('log', False))
        return posterior

    cls.posterior = wrapper_posterior(cls.posterior)

    def wrapper_assignment(f):
        @wraps(f)
        def assignment(self, *event):
            if len(event) == 1 and isinstance(event[0], (UnivariateData, MultivariateData)):
                event = event[0]
            else:
                event = types_to_event(*event)
            return f(self, event)
        return assignment

    cls.assignment = wrapper_assignment(cls.assignment)
    
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
    statiskit_Multivariate_mixture_distribution_decorator(cls)

def MixtureDistribution(*args, **kwargs):
    if 'pi' in kwargs:
        pi = kwargs.pop('pi')
    else:
        pi = [1. for arg in args]
    if not isinstance(pi, linalg.Vector):
        pi = linalg.Vector(pi)
    if all(isinstance(arg, CategoricalUnivariateDistribution) for arg in args):
        return CategoricalUnivariateMixtureDistribution(CategoricalUnivariateDistributionVector(*args), pi)
    elif all(isinstance(arg, DiscreteUnivariateDistribution) for arg in args):
        return DiscreteUnivariateMixtureDistribution(DiscreteUnivariateDistributionVector(*args), pi)
    elif all(isinstance(arg, ContinuousUnivariateDistribution) for arg in args):
        return ContinuousUnivariateMixtureDistribution(ContinuousUnivariateDistributionVector(*args), pi)
    elif all(isinstance(arg, MultivariateDistribution) for arg in args):
        if all(isinstance(arg, CategoricalMultivariateDistribution) for arg in args):
            return CategoricalMultivariateMixtureDistribution(CategoricalMultivariateDistributionVector(*args), pi)
        elif all(isinstance(arg, DiscreteMultivariateDistribution) for arg in args):
            return DiscreteMultivariateMixtureDistribution(DiscreteMultivariateDistributionVector(*args), pi)
        elif all(isinstance(arg, ContinuousMultivariateDistribution) for arg in args):
            return ContinuousMultivariateMixtureDistribution(ContinuousMultivariateDistributionVector(*args), pi)
        else:
            return MixedMultivariateMixtureDistribution(MultivariateDistributionVector(*args), pi)
    else:
        raise TypeError('\'args\' parameter')



def mixture_distribution_em_estimator_decorator(cls):

    cls.default_estimator = property(cls.get_default_estimator, cls.set_default_estimator)
    del cls.get_default_estimator, cls.set_default_estimator

    cls.initializator = property(cls.get_initializator, cls.set_initializator)
    del cls.get_initializator, cls.set_initializator

for cls in _MixtureDistributionEMEstimation:
    mixture_distribution_em_estimator_decorator(cls.Estimator)


def mixture_estimation(data, algo='em', **kwargs):
    if isinstance(data, UnivariateData):
        outcome = data.sample_space.outcome
        kwargs['mult'] = False
    elif isinstance(data, MultivariateData):
        if all(component.sample_space.outcome == outcome_type.CATEGORICAL for component in data.components):
            outcome = outcome_type.CATEGORICAL
        elif all(component.sample_space.outcome == outcome_type.DISCRETE for component in data.components):
            outcome = outcome_type.DISCRETE
        elif all(component.sample_space.outcome == outcome_type.CONTINUOUS for component in data.components):
            outcome = outcome_type.CONTINUOUS
        else:
            outcome = outcome_type.MIXED
        kwargs['mult'] = True
    elif isinstance(data, outcome_type):
        outcome = data
        data = None
    else:
        raise TypeError('\'data\' parameter')
    mult = kwargs.pop('mult', outcome == outcome_type.MIXED)
    if mult:
        if outcome == outcome_type.MIXED:
            mapping = dict(em = MixedMultivariateMixtureDistributionEMEstimation.Estimator)
        elif outcome == outcome_type.CATEGORICAL:
            mapping = dict(em = CategoricalMultivariateMixtureDistributionEMEstimation.Estimator)
        elif outcome == outcome_type.DISCRETE:
            if kwargs.pop('singular', False):
                mapping = dict(em = MixtureSingularDistributionEMEstimation.Estimator)
        elif outcome == outcome_type.CONTINUOUS:
            mapping = dict(em = ContinuousMultivariateMixtureDistributionEMEstimation.Estimator)
    else:
        if outcome == outcome_type.MIXED:
            raise ValueError('\'mult\' parameter')
        elif outcome == outcome_type.CATEGORICAL:
            mapping = dict(em = CategoricalUnivariateMixtureDistributionEMEstimation.Estimator)
        elif outcome == outcome_type.DISCRETE:
            mapping = dict(em = DiscreteUnivariateMixtureDistributionEMEstimation.Estimator)
        elif outcome == outcome_type.CONTINUOUS:
            mapping = dict(em = MixedMultivariateMixtureDistributionEMEstimation.Estimator)
    return _estimation(algo, data, mapping, **kwargs)
