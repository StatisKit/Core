#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const volatile * get_pointer<class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const volatile >(class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_85102754beff532db66ca292ea3a6486()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    int const & (::statiskit::ShiftedDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_79ecaaf3284e534fbcf899fbbc0fd104)() const = &::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::get_shift;
    void  (::statiskit::ShiftedDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_2eda684e77215972afb88b49ca57feaf)(int const &) = &::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::set_shift;
    struct ::statiskit::DiscreteUnivariateDistribution const * (::statiskit::ShiftedDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_1af1d1186ab55b50aa305ae608cec380)() const = &::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::get_distribution;
    void  (::statiskit::ShiftedDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_260f8141d2b0502b852fab135b7fb186)(struct ::statiskit::DiscreteUnivariateDistribution const &) = &::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::set_distribution;
    boost::python::class_< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, autowig::Held< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistribution > > > class_85102754beff532db66ca292ea3a6486("_ShiftedDistribution_85102754beff532db66ca292ea3a6486", "", boost::python::no_init);
    class_85102754beff532db66ca292ea3a6486.def(boost::python::init< struct ::statiskit::DiscreteUnivariateDistribution const &, int const & >(""));
    class_85102754beff532db66ca292ea3a6486.def(boost::python::init< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const & >(""));
    class_85102754beff532db66ca292ea3a6486.def("get_shift", method_pointer_79ecaaf3284e534fbcf899fbbc0fd104, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_85102754beff532db66ca292ea3a6486.def("set_shift", method_pointer_2eda684e77215972afb88b49ca57feaf, "");
    class_85102754beff532db66ca292ea3a6486.def("get_distribution", method_pointer_1af1d1186ab55b50aa305ae608cec380, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_85102754beff532db66ca292ea3a6486.def("set_distribution", method_pointer_260f8141d2b0502b852fab135b7fb186, "");

    if(autowig::Held< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistribution > >::Type >();
    }

}