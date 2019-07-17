#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::DirichletDistribution, struct ::statiskit::ContinuousMultivariateDistribution > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::DirichletDistribution, struct ::statiskit::ContinuousMultivariateDistribution >::PolymorphicCopy;


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

void wrapper_0f491a898d6251e1851339f286f0358c(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::DirichletDistribution, struct ::statiskit::ContinuousMultivariateDistribution >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::DirichletDistribution, struct ::statiskit::ContinuousMultivariateDistribution > >::Type, struct ::statiskit::ContinuousMultivariateDistribution > class_0f491a898d6251e1851339f286f0358c(module, "_PolymorphicCopy_0f491a898d6251e1851339f286f0358c", "");
    class_0f491a898d6251e1851339f286f0358c.def(pybind11::init<  >());

}