#include "_core.h"



namespace autowig
{
    class Wrap_09fa62065c8f5098af0f7db57ad3e6a9 : public ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator > >
    {
        public:
            

        protected:
            
            virtual double  scoring(struct ::statiskit::SingularDistribution const * param_0, struct ::statiskit::MultivariateData const & param_1) const
            { return this->get_override("scoring")(param_0, param_1); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_09fa62065c8f5098af0f7db57ad3e6a9 const volatile * get_pointer<autowig::Wrap_09fa62065c8f5098af0f7db57ad3e6a9 const volatile >(autowig::Wrap_09fa62065c8f5098af0f7db57ad3e6a9 const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_09fa62065c8f5098af0f7db57ad3e6a9()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_09fa62065c8f5098af0f7db57ad3e6a9, autowig::Held< autowig::Wrap_09fa62065c8f5098af0f7db57ad3e6a9 >::Type, boost::python::bases< class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >, boost::noncopyable > class_09fa62065c8f5098af0f7db57ad3e6a9("_PolymorphicCopy_09fa62065c8f5098af0f7db57ad3e6a9", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_09fa62065c8f5098af0f7db57ad3e6a9 >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator > >::Type, autowig::Held< class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >::Type >();
    }

}