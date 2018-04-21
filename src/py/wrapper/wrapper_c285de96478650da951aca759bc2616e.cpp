#include "_core.h"



namespace autowig
{
    class Wrap_c285de96478650da951aca759bc2616e : public ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > >
    {
        public:
            
            virtual double  quantile(double const & param_0) const
            { return this->get_override("quantile")(param_0); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_c285de96478650da951aca759bc2616e const volatile * get_pointer<autowig::Wrap_c285de96478650da951aca759bc2616e const volatile >(autowig::Wrap_c285de96478650da951aca759bc2616e const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c285de96478650da951aca759bc2616e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_c285de96478650da951aca759bc2616e, autowig::Held< autowig::Wrap_c285de96478650da951aca759bc2616e >::Type, boost::python::bases< struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >, boost::noncopyable > class_c285de96478650da951aca759bc2616e("_PolymorphicCopy_c285de96478650da951aca759bc2616e", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_c285de96478650da951aca759bc2616e >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > >::Type, autowig::Held< struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
    }

}