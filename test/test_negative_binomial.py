from test_distribution import AbstractTestDiscreteUnivariateDistribution

from statiskit import core

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestNegativeBinomial(unittest.TestCase, AbstractTestDiscreteUnivariateDistribution):

    @classmethod
    def setUpClass(cls):
        cls._dist = core.NegativeBinomialDistribution(2., .5)

    def test_mle(self):
        data = self._dist.simulation(90)
        mle = core.negative_binomial_estimation('ml', data)
        self.assertGreaterEqual(mle.estimated.loglikelihood(data), self._dist.loglikelihood(data))


    def test_mme(self):
        data = self._dist.simulation(100)
        mme = core.negative_binomial_estimation('mm', data)
        self.assertAlmostEqual(mme.estimated.mean, float(data.location))
        self.assertAlmostEqual(mme.estimated.variance, float(data.dispersion))

    @classmethod
    def tearDownClass(cls):
        del cls._dist