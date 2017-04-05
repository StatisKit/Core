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
        """Test Poisson distribution construction"""
        cls._dist = core.PoissonDistribution(5.)

    def test_mle(self):
        """Test Poisson ML estimation"""
        data = self._dist.simulation(10)
        mle = core.poisson_estimation('ml', data)
        self.assertGreaterEqual(mle.estimated.loglikelihood(data), self._dist.loglikelihood(data))