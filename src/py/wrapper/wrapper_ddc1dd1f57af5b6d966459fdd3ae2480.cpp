#include "_core.h"



namespace autowig
{
    class Wrap_ddc1dd1f57af5b6d966459fdd3ae2480 : public ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator > >
    {
        public:
            

        protected:
            
            virtual double  scoring(struct ::statiskit::MultivariateDistribution const * param_0, struct ::statiskit::MultivariateData const & param_1) const
            { return this->get_override("scoring")(param_0, param_1); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_ddc1dd1f57af5b6d966459fdd3ae2480 const volatile * get_pointer<autowig::Wrap_ddc1dd1f57af5b6d966459fdd3ae2480 const volatile >(autowig::Wrap_ddc1dd1f57af5b6d966459fdd3ae2480 const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ddc1dd1f57af5b6d966459fdd3ae2480()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_ddc1dd1f57af5b6d966459fdd3ae2480, autowig::Held< autowig::Wrap_ddc1dd1f57af5b6d966459fdd3ae2480 >::Type, boost::python::bases< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >, boost::noncopyable > class_ddc1dd1f57af5b6d966459fdd3ae2480("_PolymorphicCopy_ddc1dd1f57af5b6d966459fdd3ae2480", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_ddc1dd1f57af5b6d966459fdd3ae2480 >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator > >::Type, autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type >();
    }

}