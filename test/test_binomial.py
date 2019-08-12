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
        mle = core.binomial_estimation('ML', data)
        self.assertGreaterEqual(mle.distribution.loglikelihood(data), self._dist.loglikelihood(data))

    def test_mme(self):
        data = self._dist.simulation(20)
        mme = core.binomial_estimation('MM', data)
        self.assertAlmostEqual(mme.distribution.mean, data.location)
        self.assertLessEqual(mme.distribution.variance, data.dispersion)
        dist = mme.distribution
        dist.kappa = dist.kappa + 1
        dist.pi = dist.pi * dist.kappa / float(dist.kappa + 1)
        self.assertGreaterEqual(dist.variance, data.dispersion)

    @classmethod
    def tearDownClass(cls):
        del cls._dist