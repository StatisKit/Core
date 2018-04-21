#include "_core.h"



namespace autowig
{
    class Wrap_a4463e49d7865a6497ec20612e342cbe : public ::statiskit::UnivariateFrequencyDistribution< ::statiskit::CategoricalUnivariateDistribution >, public boost::python::wrapper< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >
    {
        public:
            
            virtual double  pdf(int const & param_0) const
            { return this->get_override("pdf")(param_0); }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_a4463e49d7865a6497ec20612e342cbe const volatile * get_pointer<autowig::Wrap_a4463e49d7865a6497ec20612e342cbe const volatile >(autowig::Wrap_a4463e49d7865a6497ec20612e342cbe const volatile *c) { return c; }
    template <> class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > const volatile * get_pointer<class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > const volatile >(class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a4463e49d7865a6497ec20612e342cbe()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::UnivariateFrequencyDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_85fc76a68b3c58e3b87ac05d423a43f9)() const = &::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::get_pi;
    void  (::statiskit::UnivariateFrequencyDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_6583c7196adb5fbb80c8a38e716c6dff)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::set_pi;
    boost::python::class_< autowig::Wrap_a4463e49d7865a6497ec20612e342cbe, autowig::Held< autowig::Wrap_a4463e49d7865a6497ec20612e342cbe >::Type, boost::python::bases< struct ::statiskit::CategoricalUnivariateDistribution >, boost::noncopyable > class_a4463e49d7865a6497ec20612e342cbe("_UnivariateFrequencyDistribution_a4463e49d7865a6497ec20612e342cbe", "", boost::python::no_init);
    class_a4463e49d7865a6497ec20612e342cbe.def("get_pi", method_pointer_85fc76a68b3c58e3b87ac05d423a43f9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a4463e49d7865a6497ec20612e342cbe.def("set_pi", method_pointer_6583c7196adb5fbb80c8a38e716c6dff, "");

    if(autowig::Held< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_a4463e49d7865a6497ec20612e342cbe >::Type, autowig::Held< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >::Type, autowig::Held< struct ::statiskit::CategoricalUnivariateDistribution >::Type >();
    }

}