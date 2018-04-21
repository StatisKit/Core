#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const volatile * get_pointer<class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const volatile >(class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_36adf88112dd5312b6c5fe75ebbc5559()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::ShiftedDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_d31c0f8ae5c6576ab7341adafae58204)() const = &::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::get_shift;
    void  (::statiskit::ShiftedDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_3829f8cabc7a5081ba815a079cec005a)(double const &) = &::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::set_shift;
    struct ::statiskit::ContinuousUnivariateDistribution const * (::statiskit::ShiftedDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_eb0fdbe131005691a64c86bae8006d56)() const = &::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::get_distribution;
    void  (::statiskit::ShiftedDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_9ca523943e8652e0a38ae46c2875b593)(struct ::statiskit::ContinuousUnivariateDistribution const &) = &::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::set_distribution;
    boost::python::class_< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, autowig::Held< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistribution > > > class_36adf88112dd5312b6c5fe75ebbc5559("_ShiftedDistribution_36adf88112dd5312b6c5fe75ebbc5559", "", boost::python::no_init);
    class_36adf88112dd5312b6c5fe75ebbc5559.def(boost::python::init< struct ::statiskit::ContinuousUnivariateDistribution const &, double const & >(""));
    class_36adf88112dd5312b6c5fe75ebbc5559.def(boost::python::init< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const & >(""));
    class_36adf88112dd5312b6c5fe75ebbc5559.def("get_shift", method_pointer_d31c0f8ae5c6576ab7341adafae58204, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_36adf88112dd5312b6c5fe75ebbc5559.def("set_shift", method_pointer_3829f8cabc7a5081ba815a079cec005a, "");
    class_36adf88112dd5312b6c5fe75ebbc5559.def("get_distribution", method_pointer_eb0fdbe131005691a64c86bae8006d56, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_36adf88112dd5312b6c5fe75ebbc5559.def("set_distribution", method_pointer_9ca523943e8652e0a38ae46c2875b593, "");

    if(autowig::Held< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
    }

}