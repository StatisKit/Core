#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::UnivariateVarianceEstimation const volatile * get_pointer<class ::statiskit::UnivariateVarianceEstimation const volatile >(class ::statiskit::UnivariateVarianceEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a8fb4974396a5f4ca5779c02d0f58b37()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    bool const & (::statiskit::UnivariateVarianceEstimation::*method_pointer_82667d41ae9658d3b19c94ed2fb3aeda)() const = &::statiskit::UnivariateVarianceEstimation::get_bias;
    boost::python::class_< class ::statiskit::UnivariateVarianceEstimation, autowig::Held< class ::statiskit::UnivariateVarianceEstimation >::Type, boost::python::bases< class ::statiskit::UnivariateDispersionEstimation > > class_a8fb4974396a5f4ca5779c02d0f58b37("UnivariateVarianceEstimation", "", boost::python::no_init);
    class_a8fb4974396a5f4ca5779c02d0f58b37.def(boost::python::init< double const &, bool const &, double const & >(""));
    class_a8fb4974396a5f4ca5779c02d0f58b37.def(boost::python::init< class ::statiskit::UnivariateVarianceEstimation const & >(""));
    class_a8fb4974396a5f4ca5779c02d0f58b37.def("get_bias", method_pointer_82667d41ae9658d3b19c94ed2fb3aeda, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::UnivariateVarianceEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::UnivariateVarianceEstimation >::Type, autowig::Held< class ::statiskit::UnivariateDispersionEstimation >::Type >();
    }

}