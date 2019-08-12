import matplotlib
matplotlib.use('Agg')

import unittest
from nose.plugins.attrib import attr

import numpy
import math

class AbstractTestDistribution(object):

    pass

class AbstractTestUnivariateDistribution(AbstractTestDistribution):

    _num = 10
    _pmin = 0.025
    _pmax = 0.975
    _epsilon = 1e-7
    _delta = .25

class AbstractTestDiscreteUnivariateDistribution(AbstractTestUnivariateDistribution):

    _num = 10
    _pmin = 0.025
    _pmax = 0.975
    _simulate = 10000

    def test_pdf_ldf_cdf(self):
        for v in numpy.linspace(self._dist.quantile(self._pmin),
                                self._dist.quantile(self._pmax) + 1,
                                num=self._num,
                                dtype=numpy.int):
            v = int(v)
            self.assertAlmostEqual(self._dist.cdf(v - 1) + self._dist.pdf(v), self._dist.cdf(v))
            if not self._dist.pdf(v) == 0:
                self.assertAlmostEqual(math.log(self._dist.pdf(v)), self._dist.ldf(v))

    def test_quantile(self):
        for p in numpy.linspace(self._pmin, self._pmax, num=self._num):
            p = float(p)
            q = self._dist.quantile(p)
            self.assertGreaterEqual(self._dist.cdf(q), p)
            self.assertLess(self._dist.cdf(q - 1), p)

    def test_moments(self):
        data = self._dist.simulation(self._simulate)
        self.assertAlmostEqual(abs(data.location - self._dist.mean) / data.location, self._epsilon, delta=self._delta)
        self.assertAlmostEqual(abs(data.dispersion - self._dist.variance) / data.dispersion, self._epsilon, delta=self._delta)

class AbstractTestContinuousUnivariateDistribution(AbstractTestUnivariateDistribution):

    _places = 7

    def test_pdf_ldf_cdf(self):
        for v in numpy.linspace(self._dist.quantile(self._pmin),
                                self._dist.quantile(self._pmax),
                                num=self._num,
                                dtype=numpy.double):
            v = float(v)
            self.assertAlmostEqual(self._dist.cdf(v + self._epsilon), self._dist.cdf(v) + self._epsilon * self._dist.pdf(v), places=self._places)
            if not self._dist.pdf(v) == 0:
                self.assertAlmostEqual(math.log(self._dist.pdf(v)), self._dist.ldf(v))

    def test_quantile(self):
        for p in numpy.linspace(self._pmin, self._pmax, num=self._num):
            p = float(p)
            q = self._dist.quantile(p)
            self.assertGreaterEqual(self._dist.cdf(q + self._epsilon), p)
            self.assertLessEqual(self._dist.cdf(q - self._epsilon), p)

    def test_moments(self):
        data = self._dist.simulation(1000)
        self.assertAlmostEqual(abs(data.location - self._dist.mean) / data.location, self._epsilon, delta=self._delta)
        self.assertAlmostEqual(abs(data.dispersion - self._dist.variance) / data.dispersion, self._epsilon, delta=self._delta)

class AbstractTestMultivariateDistribution(AbstractTestDistribution):

    pass

class AbstractTestDiscreteMultivariateDistribution(AbstractTestMultivariateDistribution):

    pass