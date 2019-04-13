from statiskit import linalg, core

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestMultinormal(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        cls._dist = core.MultinormalDistribution(linalg.Vector([0., 0., 0.]), linalg.Matrix([[1.0, 0.0, 0.0],
                                                                                             [0.0, 1.0, 0.0],
                                                                                             [0.0, 0.0, 1.0]]))

    def test_simulation(self):
        data = self._dist.simulation(20)

    @classmethod
    def tearDownClass(cls):
        del cls._dist