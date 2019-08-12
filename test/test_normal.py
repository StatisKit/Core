from test_distribution import AbstractTestContinuousUnivariateDistribution

from statiskit import core

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestNormal(unittest.TestCase, AbstractTestContinuousUnivariateDistribution):

    @classmethod
    def setUpClass(cls):
        cls._dist = core.NormalDistribution(1., 2.)

    def test_mle(self):
        data = self._dist.simulation(20)
        mle = core.normal_estimation('ML', data)
        self.assertGreaterEqual(mle.distribution.loglikelihood(data), self._dist.loglikelihood(data))

    @classmethod
    def tearDownClass(cls):
        del cls._dist