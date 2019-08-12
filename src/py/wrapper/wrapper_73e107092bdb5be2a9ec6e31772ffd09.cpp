#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::ExponentialSchedule, struct ::statiskit::Schedule > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::ExponentialSchedule, struct ::statiskit::Schedule >::PolymorphicCopy;


        public:
            typedef double  return_type_004876688c73571590d218338cd011b5;
            typedef double const & param_004876688c73571590d218338cd011b5_0_type;
            virtual return_type_004876688c73571590d218338cd011b5 operator()(param_004876688c73571590d218338cd011b5_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_004876688c73571590d218338cd011b5, class_type, operator(), param_0); };
    };
}


namespace autowig {
}

void wrapper_73e107092bdb5be2a9ec6e31772ffd09(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::ExponentialSchedule, struct ::statiskit::Schedule >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::ExponentialSchedule, struct ::statiskit::Schedule > >::Type, struct ::statiskit::Schedule > class_73e107092bdb5be2a9ec6e31772ffd09(module, "_PolymorphicCopy_73e107092bdb5be2a9ec6e31772ffd09", "");
    class_73e107092bdb5be2a9ec6e31772ffd09.def(pybind11::init<  >());

}