#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::UnivariateMeanEstimation const volatile * get_pointer<class ::statiskit::UnivariateMeanEstimation const volatile >(class ::statiskit::UnivariateMeanEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c5daab4ee3ac55c89ee2ee06a88fb23c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::UnivariateMeanEstimation, autowig::Held< class ::statiskit::UnivariateMeanEstimation >::Type, boost::python::bases< struct ::statiskit::UnivariateLocationEstimation > > class_c5daab4ee3ac55c89ee2ee06a88fb23c("UnivariateMeanEstimation", "", boost::python::no_init);
    class_c5daab4ee3ac55c89ee2ee06a88fb23c.def(boost::python::init< double const & >(""));
    class_c5daab4ee3ac55c89ee2ee06a88fb23c.def(boost::python::init< class ::statiskit::UnivariateMeanEstimation const & >(""));

    if(autowig::Held< class ::statiskit::UnivariateMeanEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::UnivariateMeanEstimation >::Type, autowig::Held< struct ::statiskit::UnivariateLocationEstimation >::Type >();
    }

}