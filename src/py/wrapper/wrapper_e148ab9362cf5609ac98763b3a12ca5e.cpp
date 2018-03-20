#include "_core.h"



namespace autowig
{
    class Wrap_e148ab9362cf5609ac98763b3a12ca5e : public ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, ::statiskit::NonStandardStudentDistribution, struct ::statiskit::ContinuousUnivariateDistribution >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::NonStandardStudentDistribution, struct ::statiskit::ContinuousUnivariateDistribution > >
    {
        public:
            
            virtual double  get_variance() const
            { return this->get_override("get_variance")(); }
                        
            virtual double  get_mean() const
            { return this->get_override("get_mean")(); }
                        
            virtual double  quantile(double const & param_0) const
            { return this->get_override("quantile")(param_0); }
                        
            virtual double  cdf(double const & param_0) const
            { return this->get_override("cdf")(param_0); }
                        
            virtual double  pdf(double const & param_0) const
            { return this->get_override("pdf")(param_0); }
                        
            virtual double  ldf(double const & param_0) const
            { return this->get_override("ldf")(param_0); }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  simulate() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > ::element_type* result = this->get_override("simulate")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > (result);
            }
                        
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_e148ab9362cf5609ac98763b3a12ca5e const volatile * get_pointer<autowig::Wrap_e148ab9362cf5609ac98763b3a12ca5e const volatile >(autowig::Wrap_e148ab9362cf5609ac98763b3a12ca5e const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::NonStandardStudentDistribution, struct ::statiskit::ContinuousUnivariateDistribution > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::NonStandardStudentDistribution, struct ::statiskit::ContinuousUnivariateDistribution > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::NonStandardStudentDistribution, struct ::statiskit::ContinuousUnivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e148ab9362cf5609ac98763b3a12ca5e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  (::statiskit::PolymorphicCopy< ::statiskit::UnivariateDistribution, ::statiskit::NonStandardStudentDistribution, ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_1149c8b9c3b4558dac0f58ae74742b4f)() const = &::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::NonStandardStudentDistribution, struct ::statiskit::ContinuousUnivariateDistribution >::copy;
    boost::python::class_< autowig::Wrap_e148ab9362cf5609ac98763b3a12ca5e, autowig::Held< autowig::Wrap_e148ab9362cf5609ac98763b3a12ca5e >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistribution >, boost::noncopyable > class_e148ab9362cf5609ac98763b3a12ca5e("_PolymorphicCopy_e148ab9362cf5609ac98763b3a12ca5e", "", boost::python::no_init);
    class_e148ab9362cf5609ac98763b3a12ca5e.def("copy", method_pointer_1149c8b9c3b4558dac0f58ae74742b4f, "");

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::NonStandardStudentDistribution, struct ::statiskit::ContinuousUnivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_e148ab9362cf5609ac98763b3a12ca5e >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::NonStandardStudentDistribution, struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::NonStandardStudentDistribution, struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::NonStandardStudentDistribution, struct ::statiskit::ContinuousUnivariateDistribution > >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistribution >::Type >();
    }

}