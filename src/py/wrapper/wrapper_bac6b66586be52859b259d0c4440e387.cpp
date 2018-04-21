#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::MultivariateMeanEstimation const volatile * get_pointer<class ::statiskit::MultivariateMeanEstimation const volatile >(class ::statiskit::MultivariateMeanEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_bac6b66586be52859b259d0c4440e387()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::MultivariateMeanEstimation, autowig::Held< class ::statiskit::MultivariateMeanEstimation >::Type, boost::python::bases< struct ::statiskit::MultivariateLocationEstimation > > class_bac6b66586be52859b259d0c4440e387("MultivariateMeanEstimation", "", boost::python::no_init);
    class_bac6b66586be52859b259d0c4440e387.def(boost::python::init< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_bac6b66586be52859b259d0c4440e387.def(boost::python::init< class ::statiskit::MultivariateMeanEstimation const & >(""));

    if(autowig::Held< class ::statiskit::MultivariateMeanEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MultivariateMeanEstimation >::Type, autowig::Held< struct ::statiskit::MultivariateLocationEstimation >::Type >();
    }

}