#include "_core.h"

namespace autowig
{
    typedef ::statiskit::DiscreteMultivariateDistribution class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::DiscreteMultivariateDistribution::DiscreteMultivariateDistribution;


        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  return_type_bfcc78e34f6259b6a33f959f459c73aa;
            virtual return_type_bfcc78e34f6259b6a33f959f459c73aa copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_bfcc78e34f6259b6a33f959f459c73aa, class_type, copy, ); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  return_type_4ea4050829d754ffad293bbb7a971a31;
            virtual return_type_4ea4050829d754ffad293bbb7a971a31 simulate() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_4ea4050829d754ffad293bbb7a971a31, class_type, simulate, ); };

        public:
            typedef double  return_type_1b1aa04affe25769a45aa61f808a0a19;
            typedef struct ::statiskit::MultivariateEvent const * param_1b1aa04affe25769a45aa61f808a0a19_0_type;
            typedef bool const & param_1b1aa04affe25769a45aa61f808a0a19_1_type;
            virtual return_type_1b1aa04affe25769a45aa61f808a0a19 probability(param_1b1aa04affe25769a45aa61f808a0a19_0_type param_0, param_1b1aa04affe25769a45aa61f808a0a19_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_1b1aa04affe25769a45aa61f808a0a19, class_type, probability, param_0, param_1); };

        public:
            typedef unsigned int  return_type_d6b37eb7a2815c508032d7111fe27b25;
            virtual return_type_d6b37eb7a2815c508032d7111fe27b25 get_nb_parameters() const override { PYBIND11_OVERLOAD_PURE(return_type_d6b37eb7a2815c508032d7111fe27b25, class_type, get_nb_parameters, ); };

        public:
            typedef ::statiskit::Index  return_type_6bbdbd5137365f409e51be059aaa5dec;
            virtual return_type_6bbdbd5137365f409e51be059aaa5dec get_nb_components() const override { PYBIND11_OVERLOAD_PURE(return_type_6bbdbd5137365f409e51be059aaa5dec, class_type, get_nb_components, ); };
    };
}


namespace autowig {
}

void wrapper_31aa0a631312549a9cf4cb8740b55a7f(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::DiscreteMultivariateDistribution, autowig::Trampoline, autowig::HolderType< struct ::statiskit::DiscreteMultivariateDistribution >::Type, struct ::statiskit::MultivariateDistribution > class_31aa0a631312549a9cf4cb8740b55a7f(module, "DiscreteMultivariateDistribution", "");
    class_31aa0a631312549a9cf4cb8740b55a7f.def(pybind11::init<  >());

}