from test_distribution import AbstractTestDiscreteUnivariateDistribution

from statiskit import linalg
from statiskit import core

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestMixture(unittest.TestCase, AbstractTestDiscreteUnivariateDistribution):

    @classmethod
    def setUpClass(cls):
        """Test mixture distribution construction"""
        cls._dist = core.MixtureDistribution(core.PoissonDistribution(.5),
                                             core.PoissonDistribution(10.),
                                             pi = linalg.Vector([.25, .75]))

    def test_estimation_em(self):
        """Test mixture estimation using the EM algorithm"""
        data = self._dist.simulation(100)
        em = core.mixture_estimation(data, 'em',
                                     initializator = core.MixtureDistribution(core.PoissonDistribution(3.),
                                                                              core.PoissonDistribution(5.),
                                                                              pi = linalg.Vector([.5, .5])),
                                     default_estimator = core.poisson_estimation('mle'))
        curr = -float("inf")
        for dist in em:
            prev = curr
            curr = dist.loglikelihood(data)
            self.assertGreaterEqual(curr, prev)
