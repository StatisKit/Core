#include "_core.h"



namespace autowig
{
    class Wrap_b014379d48a45dac9f7ee65cf09afac7 : public ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::NominalDistribution, ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::NominalDistribution, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > >
    {
        public:
            
            virtual double  pdf(int const & param_0) const
            { return this->get_override("pdf")(param_0); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_b014379d48a45dac9f7ee65cf09afac7 const volatile * get_pointer<autowig::Wrap_b014379d48a45dac9f7ee65cf09afac7 const volatile >(autowig::Wrap_b014379d48a45dac9f7ee65cf09afac7 const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::NominalDistribution, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::NominalDistribution, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::NominalDistribution, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b014379d48a45dac9f7ee65cf09afac7()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_b014379d48a45dac9f7ee65cf09afac7, autowig::Held< autowig::Wrap_b014379d48a45dac9f7ee65cf09afac7 >::Type, boost::python::bases< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >, boost::noncopyable > class_b014379d48a45dac9f7ee65cf09afac7("_PolymorphicCopy_b014379d48a45dac9f7ee65cf09afac7", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::NominalDistribution, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_b014379d48a45dac9f7ee65cf09afac7 >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::NominalDistribution, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::NominalDistribution, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::NominalDistribution, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > >::Type, autowig::Held< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >::Type >();
    }

}