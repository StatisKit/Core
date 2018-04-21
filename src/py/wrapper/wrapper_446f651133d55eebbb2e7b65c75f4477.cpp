#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_446f651133d55eebbb2e7b65c75f4477()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_1b793d6dd01553ae939c99e3743fa436 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__mixture_distribution_em_estimation_1b793d6dd01553ae939c99e3743fa436");
    boost::python::object module_1b793d6dd01553ae939c99e3743fa436(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_1b793d6dd01553ae939c99e3743fa436.c_str()))));
    boost::python::scope().attr("__mixture_distribution_em_estimation_1b793d6dd01553ae939c99e3743fa436") = module_1b793d6dd01553ae939c99e3743fa436;
    boost::python::scope scope_1b793d6dd01553ae939c99e3743fa436 = module_1b793d6dd01553ae939c99e3743fa436;
    bool  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::CategoricalUnivariateMixtureDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_48331612c6b050d297a965bc08d631e3)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::get_pi;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::CategoricalUnivariateMixtureDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_e5bb55005097548cb43c61526b3fe4f3)(bool const &) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::set_pi;
    struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator const * (::statiskit::MixtureDistributionEMEstimation< ::statiskit::CategoricalUnivariateMixtureDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_bbe4939ea1255cb4a7d50a7a7f59d9dc)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::get_default_estimator;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::CategoricalUnivariateMixtureDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_c81eb4cebb5e59838ebccc17b5caff5d)(struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator const *) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::set_default_estimator;
    struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator const * (::statiskit::MixtureDistributionEMEstimation< ::statiskit::CategoricalUnivariateMixtureDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_aa6ef24a31ff5f168defe1f7d18eba74)(::statiskit::Index const &) const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::get_estimator;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::CategoricalUnivariateMixtureDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_5b98ab0e08715fbbb37a547541a919e2)(::statiskit::Index const &, struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator const *) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::set_estimator;
    struct ::statiskit::CategoricalUnivariateMixtureDistribution const * (::statiskit::MixtureDistributionEMEstimation< ::statiskit::CategoricalUnivariateMixtureDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_fa34b875735c576889b76188583fbdeb)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::get_initializator;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::CategoricalUnivariateMixtureDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_f6577bcc0efd58f68abf9c4d0e57e6fa)(struct ::statiskit::CategoricalUnivariateMixtureDistribution const &) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::set_initializator;
    bool  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::CategoricalUnivariateMixtureDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_5eb2a331eb3b53f38545cac4bf37c385)() const = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::get_limit;
    void  (::statiskit::MixtureDistributionEMEstimation< ::statiskit::CategoricalUnivariateMixtureDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_1670b3a1a1b15e52808578df65548524)(bool const &) = &::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::set_limit;
    boost::python::class_< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator, autowig::Held< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator > > class_446f651133d55eebbb2e7b65c75f4477("Estimator", "", boost::python::no_init);
    class_446f651133d55eebbb2e7b65c75f4477.def(boost::python::init<  >(""));
    class_446f651133d55eebbb2e7b65c75f4477.def(boost::python::init< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator const & >(""));
    class_446f651133d55eebbb2e7b65c75f4477.def("get_pi", method_pointer_48331612c6b050d297a965bc08d631e3, "");
    class_446f651133d55eebbb2e7b65c75f4477.def("set_pi", method_pointer_e5bb55005097548cb43c61526b3fe4f3, "");
    class_446f651133d55eebbb2e7b65c75f4477.def("get_default_estimator", method_pointer_bbe4939ea1255cb4a7d50a7a7f59d9dc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_446f651133d55eebbb2e7b65c75f4477.def("set_default_estimator", method_pointer_c81eb4cebb5e59838ebccc17b5caff5d, "");
    class_446f651133d55eebbb2e7b65c75f4477.def("get_estimator", method_pointer_aa6ef24a31ff5f168defe1f7d18eba74, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_446f651133d55eebbb2e7b65c75f4477.def("set_estimator", method_pointer_5b98ab0e08715fbbb37a547541a919e2, "");
    class_446f651133d55eebbb2e7b65c75f4477.def("get_initializator", method_pointer_fa34b875735c576889b76188583fbdeb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_446f651133d55eebbb2e7b65c75f4477.def("set_initializator", method_pointer_f6577bcc0efd58f68abf9c4d0e57e6fa, "");
    class_446f651133d55eebbb2e7b65c75f4477.def("get_limit", method_pointer_5eb2a331eb3b53f38545cac4bf37c385, "");
    class_446f651133d55eebbb2e7b65c75f4477.def("set_limit", method_pointer_1670b3a1a1b15e52808578df65548524, "");

    if(autowig::Held< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >::Type >();
    }

}