# from test_distribution import AbstractTestDiscreteMultivariateDistribution

# from statiskit import linalg
# from statiskit import core

# import unittest
# from nose.plugins.attrib import attr

# @attr(linux=True,
#       osx=True,
#       win=True,
#       level=1)
# class TestDirichletMultinomialSplitting(unittest.TestCase, AbstractTestDiscreteMultivariateDistribution):

#     @classmethod
#     def setUpClass(cls):
#         cls._dist = core.SplittingDistribution(core.PoissonDistribution(15.),
#                                                core.DirichletMultinomialSingularDistribution(linalg.Vector([2., 1.])))
#     def test_estimation(self):
#         data = self._dist.simulation(10)
#         mle = core.splitting_estimation(sum=core.poisson_estimation('ML'),
#                                         singular=core.singular_selection('DM'),
#                                         data=data)
#         self.assertGreaterEqual(mle.estimated.loglikelihood(data), self._dist.loglikelihood(data))

# @attr(linux=True,
#       osx=True,
#       win=True,
#       level=1)
# class TestMultinomialSplitting(unittest.TestCase, AbstractTestDiscreteMultivariateDistribution):

#     @classmethod
#     def setUpClass(cls):
#         cls._dist = core.SplittingDistribution(core.BinomialDistribution(5, .5),
#                                                core.MultinomialSingularDistribution(linalg.Vector([.25, .75])))

#     def test_estimation(self):
#         data = self._dist.simulation(10)
#         mle = core.splitting_estimation(sum=core.binomial_estimation('ML'),
#                                         singular=core.singular_selection('MN'),
#                                         data=data)
#         self.assertGreaterEqual(mle.estimated.loglikelihood(data), self._dist.loglikelihood(data))
