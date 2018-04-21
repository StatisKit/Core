#include "_core.h"



namespace autowig
{
    class Wrap_603c48a232f0549ab95e7c0325f6f159 : public ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator > >
    {
        public:
            

        protected:
            
            virtual double  scoring(struct ::statiskit::UnivariateDistribution const * param_0, struct ::statiskit::UnivariateData const & param_1) const
            { return this->get_override("scoring")(param_0, param_1); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_603c48a232f0549ab95e7c0325f6f159 const volatile * get_pointer<autowig::Wrap_603c48a232f0549ab95e7c0325f6f159 const volatile >(autowig::Wrap_603c48a232f0549ab95e7c0325f6f159 const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_603c48a232f0549ab95e7c0325f6f159()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_603c48a232f0549ab95e7c0325f6f159, autowig::Held< autowig::Wrap_603c48a232f0549ab95e7c0325f6f159 >::Type, boost::python::bases< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >, boost::noncopyable > class_603c48a232f0549ab95e7c0325f6f159("_PolymorphicCopy_603c48a232f0549ab95e7c0325f6f159", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_603c48a232f0549ab95e7c0325f6f159 >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator > >::Type, autowig::Held< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >::Type >();
    }

}