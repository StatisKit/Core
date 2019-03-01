from test_distribution import AbstractTestContinuousUnivariateDistribution

from statiskit import core

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestLogistic(unittest.TestCase, AbstractTestContinuousUnivariateDistribution):

    @classmethod
    def setUpClass(cls):
        """Test Laplace distribution construction"""
        cls._dist = core.LaplaceDistribution(1.,1.)

    @classmethod
    def tearDownClass(cls):
        """Test Lapace distribution deletion"""
        del cls._dist