#include "_core.h"



namespace autowig
{
    class Wrap_58960b7597495bb78bb15e0b1e8c9de8 : public ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator > >
    {
        public:
            

        protected:
            
            virtual double  scoring(struct ::statiskit::MultivariateConditionalDistribution const * param_0, class ::statiskit::MultivariateConditionalData const & param_1) const
            { return this->get_override("scoring")(param_0, param_1); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_58960b7597495bb78bb15e0b1e8c9de8 const volatile * get_pointer<autowig::Wrap_58960b7597495bb78bb15e0b1e8c9de8 const volatile >(autowig::Wrap_58960b7597495bb78bb15e0b1e8c9de8 const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_58960b7597495bb78bb15e0b1e8c9de8()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_58960b7597495bb78bb15e0b1e8c9de8, autowig::Held< autowig::Wrap_58960b7597495bb78bb15e0b1e8c9de8 >::Type, boost::python::bases< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator >, boost::noncopyable > class_58960b7597495bb78bb15e0b1e8c9de8("_PolymorphicCopy_58960b7597495bb78bb15e0b1e8c9de8", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_58960b7597495bb78bb15e0b1e8c9de8 >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator > >::Type, autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Estimator >::Type >();
    }

}