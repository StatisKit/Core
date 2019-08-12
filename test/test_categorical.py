from test_distribution import AbstractTestUnivariateDistribution

from statiskit import core
from statiskit import linalg

import unittest
from nose.plugins.attrib import attr

import math

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestBinary(unittest.TestCase, AbstractTestUnivariateDistribution):

    @classmethod
    def setUpClass(cls):
        cls._dist1 = core.BinaryDistribution('B', 'A')
        cls._dist2 = core.BinaryDistribution('B', 'A', 0.3)

    def test_pdf(self):
        self.assertEqual(self._dist1.pdf('B'), 0.5)
        self.assertEqual(self._dist1.pdf('A'), 0.5)
        self.assertEqual(self._dist2.pdf('B'), 0.3)
        self.assertEqual(self._dist2.pdf('A'), 0.7)

    @classmethod
    def tearDownClass(cls):
        del cls._dist1
        del cls._dist2


@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestNominal(unittest.TestCase, AbstractTestUnivariateDistribution):

    _algorithm = "nominal"
    
    @classmethod
    def setUpClass(cls):
        cls._dist = core.NominalDistribution('A', 'B', 'C',
                                              pi = linalg.Vector([2., 1., 3.]))
    def test_mle(self):
        data = self._dist.simulation(10)
        mle = core.frequency_estimation(self._algorithm,
                                        data = data)
        self.assertGreaterEqual(mle.distribution.loglikelihood(data), 
                                self._dist.loglikelihood(data))

    @classmethod
    def tearDownClass(cls):
        del cls._dist

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestOrdinal(TestNominal):

    @classmethod
    def setUpClass(cls):
        cls._dist_unif = core.OrdinalDistribution('C', 'B', 'A')
        cls._dist = core.OrdinalDistribution('C', 'B', 'A',
                                             ordered_pi = linalg.Vector([2., 1., 3.]))

    def test_get_set(self):
        self.assertEqual(self._dist_unif.pdf('B'), 1/3.)
        self.assertEqual(self._dist_unif.cdf('B'), 2/3.)
        self.assertEqual(self._dist_unif.ldf('B'), math.log(1/3.))
        self.assertEqual(tuple(self._dist.ordered_values), ('C', 'B', 'A'))
        self.assertEqual(self._dist.ordered_pi, linalg.Vector([1/3., 1/6., 0.5]))
        self.assertEqual(self._dist.pi, linalg.Vector([0.5, 1/6., 1/3.]))    
        self.assertEqual(self._dist.pdf('B'), 1/6.)
        self.assertEqual(self._dist.cdf('B'), 1/2.)
        self.assertEqual(self._dist.ldf('B'), math.log(1/6.))

    @classmethod
    def tearDownClass(cls):
        del cls._dist_unif
        del cls._dist

# @attr(linux=True,
#       osx=True,
#       win=True,
#       level=1)
# class TestHierarchical(unittest.TestCase, AbstractTestUnivariateDistribution):
    
#     _ordinal_space = core.OrdinalSampleSpace('C', 'B', 'A')
#     _nominal_space = core.NominalSampleSpace('Ba', 'Bb', 'Bc')
#     _hierarchical_space = core.HierarchicalSampleSpace(_ordinal_space)
#     _hierarchical_space.partition('B', _nominal_space)
#     _places = 10

#     @classmethod
#     def setUpClass(cls):
#         cls._dist = core.HierarchicalDistribution(cls._hierarchical_space)

#     def test_internal_ldf(self):
#         self.assertAlmostEqual(self._dist.pdf('C'), float(1/3), places=self._places)
#         self.assertAlmostEqual(self._dist.pdf('Ba'), float(1/9), places=self._places)
#         self.assertAlmostEqual(self._dist.internal_pdf('B'), float(1/3), places=self._places)

#     @classmethod
#     def tearDownClass(cls):
#         del cls._dist