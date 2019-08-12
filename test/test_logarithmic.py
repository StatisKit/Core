from test_distribution import AbstractTestDiscreteUnivariateDistribution

from statiskit import core

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestLogarithmic(unittest.TestCase, AbstractTestDiscreteUnivariateDistribution):

    @classmethod
    def setUpClass(cls):
        cls._dist = core.LogarithmicDistribution()

    def test_mle(self):
        data = self._dist.simulation(20)
        mle = core.logarithmic_estimation('ML', data)
        self.assertGreaterEqual(mle.distribution.loglikelihood(data), self._dist.loglikelihood(data))

    @classmethod
    def tearDownClass(cls):
        del cls._dist