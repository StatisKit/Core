#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::NominalDistribution, ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::NominalDistribution, ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >::PolymorphicCopy;


        public:
            typedef double  return_type_ffbd4b9cbee7579795e0ce6676ff252f;
            typedef int const & param_ffbd4b9cbee7579795e0ce6676ff252f_0_type;
            virtual return_type_ffbd4b9cbee7579795e0ce6676ff252f pdf(param_ffbd4b9cbee7579795e0ce6676ff252f_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_ffbd4b9cbee7579795e0ce6676ff252f, class_type, pdf, param_0); };
    };
}


namespace autowig {
}

void wrapper_6fac6a71bec1544eaecb1b57399ee5ec(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::NominalDistribution, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::NominalDistribution, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > >::Type, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > class_6fac6a71bec1544eaecb1b57399ee5ec(module, "_PolymorphicCopy_6fac6a71bec1544eaecb1b57399ee5ec", "");
    class_6fac6a71bec1544eaecb1b57399ee5ec.def(pybind11::init<  >());

}