from test_distribution import AbstractTestContinuousUnivariateDistribution

from statiskit import core

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestGompertz(unittest.TestCase, AbstractTestContinuousUnivariateDistribution):

    @classmethod
    def setUpClass(cls):
        cls._dist = core.GompertzDistribution(-1., 1.5)

    def test_moments(self):
        data = self._dist.simulation(1000)
        self.assertAlmostEqual(abs(data.location - self._dist.mean), self._epsilon, delta=self._delta)
        self.assertAlmostEqual(abs(data.dispersion - self._dist.variance) / data.dispersion, self._epsilon, delta=self._delta)

    @classmethod
    def tearDownClass(cls):
        del cls._dist