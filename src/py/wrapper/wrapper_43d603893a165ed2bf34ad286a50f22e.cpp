#include "_core.h"



namespace autowig
{
    class Wrap_43d603893a165ed2bf34ad286a50f22e : public ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, struct ::statiskit::SingularDistributionEstimation::Estimator >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, struct ::statiskit::SingularDistributionEstimation::Estimator > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation > >  operator()(::statiskit::SingularDistributionEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_43d603893a165ed2bf34ad286a50f22e const volatile * get_pointer<autowig::Wrap_43d603893a165ed2bf34ad286a50f22e const volatile >(autowig::Wrap_43d603893a165ed2bf34ad286a50f22e const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, struct ::statiskit::SingularDistributionEstimation::Estimator > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, struct ::statiskit::SingularDistributionEstimation::Estimator > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, struct ::statiskit::SingularDistributionEstimation::Estimator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_43d603893a165ed2bf34ad286a50f22e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_43d603893a165ed2bf34ad286a50f22e, autowig::Held< autowig::Wrap_43d603893a165ed2bf34ad286a50f22e >::Type, boost::python::bases< struct ::statiskit::SingularDistributionEstimation::Estimator >, boost::noncopyable > class_43d603893a165ed2bf34ad286a50f22e("_PolymorphicCopy_43d603893a165ed2bf34ad286a50f22e", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, struct ::statiskit::SingularDistributionEstimation::Estimator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_43d603893a165ed2bf34ad286a50f22e >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, struct ::statiskit::SingularDistributionEstimation::Estimator > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, struct ::statiskit::SingularDistributionEstimation::Estimator > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, struct ::statiskit::SingularDistributionEstimation::Estimator > >::Type, autowig::Held< struct ::statiskit::SingularDistributionEstimation::Estimator >::Type >();
    }

}