#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::UnivariateMeanEstimation::Estimator const volatile * get_pointer<struct ::statiskit::UnivariateMeanEstimation::Estimator const volatile >(struct ::statiskit::UnivariateMeanEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e2d3df06414058178eb5fc957e8fd6d9()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_c5daab4ee3ac55c89ee2ee06a88fb23c = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._univariate_mean_estimation");
    boost::python::object module_c5daab4ee3ac55c89ee2ee06a88fb23c(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_c5daab4ee3ac55c89ee2ee06a88fb23c.c_str()))));
    boost::python::scope().attr("_univariate_mean_estimation") = module_c5daab4ee3ac55c89ee2ee06a88fb23c;
    boost::python::scope scope_c5daab4ee3ac55c89ee2ee06a88fb23c = module_c5daab4ee3ac55c89ee2ee06a88fb23c;
    boost::python::class_< struct ::statiskit::UnivariateMeanEstimation::Estimator, autowig::Held< struct ::statiskit::UnivariateMeanEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::UnivariateLocationEstimation::Estimator > > class_e2d3df06414058178eb5fc957e8fd6d9("Estimator", "", boost::python::no_init);
    class_e2d3df06414058178eb5fc957e8fd6d9.def(boost::python::init<  >(""));
    class_e2d3df06414058178eb5fc957e8fd6d9.def(boost::python::init< struct ::statiskit::UnivariateMeanEstimation::Estimator const & >(""));

    if(autowig::Held< struct ::statiskit::UnivariateMeanEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::UnivariateMeanEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::UnivariateLocationEstimation::Estimator >::Type >();
    }

}