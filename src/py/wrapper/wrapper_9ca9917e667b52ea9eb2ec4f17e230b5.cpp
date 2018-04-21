#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::UnivariateHistogramDistribution const volatile * get_pointer<class ::statiskit::UnivariateHistogramDistribution const volatile >(class ::statiskit::UnivariateHistogramDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9ca9917e667b52ea9eb2ec4f17e230b5()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const & (::statiskit::UnivariateHistogramDistribution::*method_pointer_0adabf56e3155b9b81c68457b36cddd8)() const = &::statiskit::UnivariateHistogramDistribution::get_bins;
    class ::std::vector< double, class ::std::allocator< double > > const & (::statiskit::UnivariateHistogramDistribution::*method_pointer_0b6a988d603c5ef98804c95ebb1d6552)() const = &::statiskit::UnivariateHistogramDistribution::get_densities;
    boost::python::class_< class ::statiskit::UnivariateHistogramDistribution, autowig::Held< class ::statiskit::UnivariateHistogramDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > > class_9ca9917e667b52ea9eb2ec4f17e230b5("UnivariateHistogramDistribution", "", boost::python::no_init);
    class_9ca9917e667b52ea9eb2ec4f17e230b5.def(boost::python::init< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const &, class ::std::vector< double, class ::std::allocator< double > > const & >(""));
    class_9ca9917e667b52ea9eb2ec4f17e230b5.def(boost::python::init< class ::statiskit::UnivariateHistogramDistribution const & >(""));
    class_9ca9917e667b52ea9eb2ec4f17e230b5.def("get_bins", method_pointer_0adabf56e3155b9b81c68457b36cddd8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9ca9917e667b52ea9eb2ec4f17e230b5.def("get_densities", method_pointer_0b6a988d603c5ef98804c95ebb1d6552, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::UnivariateHistogramDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::UnivariateHistogramDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
    }

}