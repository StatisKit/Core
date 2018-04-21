#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::MultivariateVarianceEstimation const volatile * get_pointer<class ::statiskit::MultivariateVarianceEstimation const volatile >(class ::statiskit::MultivariateVarianceEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8f6b8d601b265537abfca5a924ae495d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    bool const & (::statiskit::MultivariateVarianceEstimation::*method_pointer_c09df8176bf655ddbb0dc17cf26df734)() const = &::statiskit::MultivariateVarianceEstimation::get_bias;
    boost::python::class_< class ::statiskit::MultivariateVarianceEstimation, autowig::Held< class ::statiskit::MultivariateVarianceEstimation >::Type, boost::python::bases< class ::statiskit::MultivariateDispersionEstimation > > class_8f6b8d601b265537abfca5a924ae495d("MultivariateVarianceEstimation", "", boost::python::no_init);
    class_8f6b8d601b265537abfca5a924ae495d.def(boost::python::init< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &, bool const & >(""));
    class_8f6b8d601b265537abfca5a924ae495d.def(boost::python::init< class ::statiskit::MultivariateVarianceEstimation const & >(""));
    class_8f6b8d601b265537abfca5a924ae495d.def("get_bias", method_pointer_c09df8176bf655ddbb0dc17cf26df734, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::MultivariateVarianceEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MultivariateVarianceEstimation >::Type, autowig::Held< class ::statiskit::MultivariateDispersionEstimation >::Type >();
    }

}