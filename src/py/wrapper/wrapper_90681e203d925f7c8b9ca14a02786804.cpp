#include "_core.h"



namespace autowig
{
    class Wrap_90681e203d925f7c8b9ca14a02786804 : public ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  operator()(::statiskit::UnivariateDistributionEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_90681e203d925f7c8b9ca14a02786804 const volatile * get_pointer<autowig::Wrap_90681e203d925f7c8b9ca14a02786804 const volatile >(autowig::Wrap_90681e203d925f7c8b9ca14a02786804 const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_90681e203d925f7c8b9ca14a02786804()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_90681e203d925f7c8b9ca14a02786804, autowig::Held< autowig::Wrap_90681e203d925f7c8b9ca14a02786804 >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >, boost::noncopyable > class_90681e203d925f7c8b9ca14a02786804("_PolymorphicCopy_90681e203d925f7c8b9ca14a02786804", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_90681e203d925f7c8b9ca14a02786804 >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::Type >();
    }

}