#include "_core.h"



namespace autowig
{
    class Wrap_d6970cd0a37451cfbcd48d316b17aaa0 : public ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, ::statiskit::SplittingDistributionEstimation::Estimator, struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::SplittingDistributionEstimation::Estimator, struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > >  operator()(::statiskit::MultivariateDistributionEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_d6970cd0a37451cfbcd48d316b17aaa0 const volatile * get_pointer<autowig::Wrap_d6970cd0a37451cfbcd48d316b17aaa0 const volatile >(autowig::Wrap_d6970cd0a37451cfbcd48d316b17aaa0 const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::SplittingDistributionEstimation::Estimator, struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::SplittingDistributionEstimation::Estimator, struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::SplittingDistributionEstimation::Estimator, struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d6970cd0a37451cfbcd48d316b17aaa0()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_d6970cd0a37451cfbcd48d316b17aaa0, autowig::Held< autowig::Wrap_d6970cd0a37451cfbcd48d316b17aaa0 >::Type, boost::python::bases< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >, boost::noncopyable > class_d6970cd0a37451cfbcd48d316b17aaa0("_PolymorphicCopy_d6970cd0a37451cfbcd48d316b17aaa0", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::SplittingDistributionEstimation::Estimator, struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_d6970cd0a37451cfbcd48d316b17aaa0 >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::SplittingDistributionEstimation::Estimator, struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::SplittingDistributionEstimation::Estimator, struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::SplittingDistributionEstimation::Estimator, struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > >::Type, autowig::Held< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::Type >();
    }

}