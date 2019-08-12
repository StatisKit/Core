from test_distribution import AbstractTestDiscreteUnivariateDistribution

from statiskit import core

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestBinomial(unittest.TestCase, AbstractTestDiscreteUnivariateDistribution):

    @classmethod
    def setUpClass(cls):
        cls._dist = core.PoissonDistribution(5.)

    def test_mle(self):
        data = self._dist.simulation(10)
        mle = core.poisson_estimation('ML', data)
        self.assertGreaterEqual(mle.distribution.loglikelihood(data), self._dist.loglikelihood(data))