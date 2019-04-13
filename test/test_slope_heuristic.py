import matplotlib
matplotlib.use('Agg')

from statiskit import core
from statiskit.data import core as data

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestSlopeHeuristic(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        cls._data = data.load('capushe')

    @attr(win=False)
    def test_slope_heuristic(self):
        sh = core.SlopeHeuristic([pen.value for pen in self._data.pen.events], [-contrast.value for contrast in self._data.contrast.events])
        sh.plot()

    @classmethod
    def tearDownClass(cls):
        del cls._data