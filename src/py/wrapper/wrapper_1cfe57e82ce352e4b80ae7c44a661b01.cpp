#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const volatile * get_pointer<struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const volatile >(struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_1cfe57e82ce352e4b80ae7c44a661b01()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, autowig::Held< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > > > class_1cfe57e82ce352e4b80ae7c44a661b01("_QuantitativeUnivariateFrequencyDistribution_1cfe57e82ce352e4b80ae7c44a661b01", "", boost::python::no_init);
    class_1cfe57e82ce352e4b80ae7c44a661b01.def(boost::python::init< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const & >(""));
    class_1cfe57e82ce352e4b80ae7c44a661b01.def(boost::python::init< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_1cfe57e82ce352e4b80ae7c44a661b01.def(boost::python::init< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const & >(""));

    if(autowig::Held< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > >::Type >();
    }

}