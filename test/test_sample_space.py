# import matplotlib
# matplotlib.use('Agg')

# from statiskit import stl
# from statiskit import core
# from statiskit.data import core as data

# import unittest
# from nose.plugins.attrib import attr

# import os
# from tempfile import NamedTemporaryFile
# import math

# @attr(linux=True,
#       osx=True,
#       win=True,
#       level=1)
# class TestSampleSpace(unittest.TestCase):

#     @classmethod
#     def setUpClass(cls):
#         cls._data = data.load('capushe')

#     def test_encode(self):
#         for event in self._data.events:
#             self._data.sample_space.encode(event)
            
#     @classmethod
#     def tearDownClass(cls):
#         del cls._data

# @attr(linux=True,
#       osx=False,
#       win=True,
#       level=1)
# class TestNominalSampleSpace(unittest.TestCase):

#     @classmethod
#     def setUpClass(cls):
#         cls._space = core.NominalSampleSpace('C', 'B', 'A')

#     def test_values(self):
#         self.assertEqual(self._space.values, ['A', 'B', 'C']) # list of (lexicographically ordered) values

#     def test_reference(self):
#         self.assertEqual(self._space.reference, 'C')
#         self._space.reference = 'B'
#         self.assertEqual(self._space.reference, 'B')

#     @classmethod
#     def tearDownClass(cls):
#         del cls._space

# @attr(linux=True,
#       osx=False,
#       win=True,
#       level=1)
# class TestOrdinalSampleSpace(unittest.TestCase):

#     @classmethod
#     def setUpClass(cls):
#         cls._space = core.OrdinalSampleSpace('C', 'B', 'A')

#     def test_values(self):
#         self.assertEqual(self._space.values, ['A', 'B', 'C']) # list of (lexicographically ordered) values
#         self.assertEqual(list(self._space.ordered), ['C', 'B', 'A']) # list of ordered values
#         self._space.ordered = ['A', 'B', 'C']
#         self.assertEqual(list(self._space.ordered), ['A', 'B', 'C'])

#     @classmethod
#     def tearDownClass(cls):
#         del cls._space

# @attr(linux=True,
#       osx=False,
#       win=True,
#       level=1)
# class TestHierarchicalSampleSpace(unittest.TestCase):
#     _sample_space1 = core.OrdinalSampleSpace('C', 'B', 'A')
#     _sample_space2 = core.NominalSampleSpace('Ba', 'Bb', 'Bc')
#     _sample_space3 = core.NominalSampleSpace('Bca', 'Bcb')


#     @classmethod
#     def setUpClass(cls):
#         cls._space = core.HierarchicalSampleSpace(cls._sample_space1)

#     def test_partition(self):
#         self.assertEqual(self._space.values, ['A', 'B', 'C'])  # list of (lexicographically ordered) values
#         self._space.partition('B', self._sample_space2)
#         self.assertEqual(self._space.values, ['A', 'Ba', 'Bb', 'Bc', 'C'])  # list of (lexicographically ordered) values after partition
#         self._space.partition('Bc', self._sample_space3)
#         self.assertEqual(self._space.values, ['A', 'Ba', 'Bb', 'Bca', 'Bcb', 'C'])  # list of (lexicographically ordered) values after partition        

#     @classmethod
#     def tearDownClass(cls):
#         del cls._space
