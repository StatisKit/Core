from statiskit import core

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestCriteria(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        cls._dist = core.BinomialDistribution(10, .5)
        cls._data = cls._dist.simulation(100)

    def test_aic(self):
        aic = core.univariate_selection("criterion",
                                        outcome="discrete",
                                        data=self._data,
                                        criterion="AIC",
                                        estimators=[core.binomial_estimation("ML"),
                                                    core.poisson_estimation("ML"),
                                                    core.negative_binomial_estimation("ML")])
        self.assertGreaterEqual(aic.distribution.loglikelihood(self._data),
                                self._dist.loglikelihood(self._data))

    def test_aicc(self):
        aicc = core.univariate_selection("criterion",
                                         outcome="discrete",
                                         data=self._data,
                                         criterion="AICc",
                                         estimators=[core.binomial_estimation("ML"),
                                                     core.poisson_estimation("ML"),
                                                     core.negative_binomial_estimation("ML")])
        self.assertGreaterEqual(aicc.distribution.loglikelihood(self._data),
                                self._dist.loglikelihood(self._data))

    def test_bic(self):
        bic = core.univariate_selection("criterion",
                                        outcome="discrete",
                                        data=self._data,
                                        criterion="BIC",
                                        estimators=[core.binomial_estimation("ML"),
                                                    core.poisson_estimation("ML"),
                                                    core.negative_binomial_estimation("ML")])
        self.assertGreaterEqual(bic.distribution.loglikelihood(self._data),
                                self._dist.loglikelihood(self._data))

    def test_hqic(self):
        hqic = core.univariate_selection("criterion",
                                         outcome="discrete",
                                         data=self._data,
                                         criterion="HQIC",
                                         estimators=[core.binomial_estimation("ML"),
                                                     core.poisson_estimation("ML"),
                                                     core.negative_binomial_estimation("ML")])
        self.assertGreaterEqual(hqic.distribution.loglikelihood(self._data),
                                self._dist.loglikelihood(self._data))

    @classmethod
    def tearDownClass(cls):
        del cls._data
