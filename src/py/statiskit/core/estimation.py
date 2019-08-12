from . import _core

from .__core.statiskit import (_DistributionEstimation)

def distribution_estimation_decorator(cls):

    cls.distribution = property(cls.get_distribution)
    del cls.get_distribution

    cls.data = property(cls.get_data)
    del cls.get_data

    if hasattr(cls.DistributionType, "pdf_plot"):
        def pdf_plot(self, axes=None, norm=False, **kwargs):
            axes = self.data.pdf_plot(axes=axes, norm=norm, **kwargs.pop('data', dict(fmt='|')))
            if isinstance(norm, bool):
                if not norm:
                    norm = self.data.total
                else:
                    norm = 1.
            return self.distribution.pdf_plot(axes=axes, norm=norm, **kwargs.pop('distribution', dict(fmt='-')))
        cls.pdf_plot = pdf_plot

    if hasattr(cls.DistributionType, "cdf_plot"):
        def cdf_plot(self, axes=None, norm=False, **kwargs):
            axes = self.data.cdf_plot(axes=axes, norm=norm, **kwargs.pop('data', dict(fmt='|')))
            if isinstance(norm, bool):
                if not norm:
                    norm = self.data.total
                else:
                    norm = 1.
            return self.distribution.cdf_plot(axes=axes, norm=norm, **kwargs.pop('distribution', dict(fmt='-')))
        cls.cdf_plot = cdf_plot
    
    if hasattr(cls.DistributionType, "box_plot"):
        def box_plot(self, axes=None, norm=False, **kwargs):
            axes = self.data.box_plot(axes=axes, norm=norm, **kwargs.pop('data', dict(fmt='|')))
            if isinstance(norm, bool):
                if not norm:
                    norm = self.data.total
                else:
                    norm = 1.
            return self.distribution.box_plot(axes=axes, norm=norm, **kwargs.pop('distribution', dict(fmt='-')))
        cls.box_plot = box_plot

for cls in _DistributionEstimation:
    distribution_estimation_decorator(cls)