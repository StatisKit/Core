import matplotlib
matplotlib.use('Agg')

from statiskit import core
from statiskit.data import core as data

import unittest
from nose.plugins.attrib import attr

import os
from tempfile import NamedTemporaryFile
import math

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestData(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        """Test multivariate data construction"""
        cls._data = data.load('capushe')

    def test_copy(self):
        """Test multivariate data copy"""
        data = self._data.copy()
        del self.__class__._data
        self.__class__._data = data

    def test_access(self):
        """Test named data access"""
        for uevent, mevent in zip(self._data.pen.events, self._data.events):
            self.assertEqual(uevent.value, mevent[1].value)

    def test_repr(self):
        """Test univariate and multivariate data string representation"""
        for component in self._data.components:
            repr(component)
        repr(self._data)

    def test_repr_html(self):
        """Test univariate and multivariate data HTML representation"""
        for component in self._data.components:
            component._repr_html_()
        self._data._repr_html_()

    def test_pdf_plot(self):
        """Test univariate and multivariate data pdf plot"""
        for component in self._data.components:
            component.pdf_plot()

    def test_location(self):
        """Test univariate and multivariate data location"""
        location = self._data.location
        for index, component in enumerate(self._data.components):
            if index == 0:
                self.assertTrue(math.isnan(location[index]))
                self.assertTrue(math.isnan(component.location))
            else:
                self.assertAlmostEqual(location[index], component.location)

    def test_dispersion(self):
        """Test univariate and multivariate data dispersion"""
        dispersion = self._data.dispersion
        for index, component in enumerate(self._data.components):
            if index == 0:
                self.assertTrue(math.isnan(dispersion[index, index]))
                self.assertTrue(math.isnan(component.dispersion))
            else:
                self.assertAlmostEqual(dispersion[index, index], component.dispersion)

    def test_extract(self):
        """Test multivariate data extraction"""
        data = self._data.extract(0, 1)
        self.assertEqual(len(data), len(self._data))

    @attr(osx = False)
    def test_cdf_plot(self):
        """Test univariate data cdf plot"""
        for component in self._data.components:
            component.cdf_plot()

    @attr(win = False)
    def test_write_csv(self):
        """Test write data to csv"""
        tmp = NamedTemporaryFile()
        self._data.write_csv(tmp.name, header=True)
        data = core.read_csv(tmp.name, header=True)
        self.assertEqual(repr(data), repr(self._data))

    @classmethod
    def tearDownClass(cls):
        """Test multivariate data deletion"""
        del cls._data
