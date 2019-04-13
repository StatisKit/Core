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
        cls._dist = core.BinomialDistribution(2, .5)

    def test_mle(self):
        data = self._dist.simulation(20)
        mle = core.binomial_estimation('ml', data)
        self.assertGreaterEqual(mle.estimated.loglikelihood(data), self._dist.loglikelihood(data))

    def test_mme(self):
        data = self._dist.simulation(20)
        mme = core.binomial_estimation('mm', data)
        self.assertAlmostEqual(mme.estimated.mean, data.location)
        # self.assertAlmostEqual(mme.estimated.variance, float(data.variance))

    @classmethod
    def tearDownClass(cls):
        del cls._dist