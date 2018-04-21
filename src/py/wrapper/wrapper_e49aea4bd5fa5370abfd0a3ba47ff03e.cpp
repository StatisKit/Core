#include "_core.h"



namespace autowig
{
    class Wrap_e49aea4bd5fa5370abfd0a3ba47ff03e : public ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > >
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
    template <> autowig::Wrap_e49aea4bd5fa5370abfd0a3ba47ff03e const volatile * get_pointer<autowig::Wrap_e49aea4bd5fa5370abfd0a3ba47ff03e const volatile >(autowig::Wrap_e49aea4bd5fa5370abfd0a3ba47ff03e const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e49aea4bd5fa5370abfd0a3ba47ff03e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_e49aea4bd5fa5370abfd0a3ba47ff03e, autowig::Held< autowig::Wrap_e49aea4bd5fa5370abfd0a3ba47ff03e >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >, boost::noncopyable > class_e49aea4bd5fa5370abfd0a3ba47ff03e("_PolymorphicCopy_e49aea4bd5fa5370abfd0a3ba47ff03e", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_e49aea4bd5fa5370abfd0a3ba47ff03e >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::Type >();
    }

}