#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Schedule class_type;

    class Trampoline : public class_type
    {
        public:

            typedef class ::std::unique_ptr< struct ::statiskit::Schedule, struct ::std::default_delete< struct ::statiskit::Schedule > >  return_type_7b1ce88d04fc5ffb8e9402122cfa4883;
            virtual return_type_7b1ce88d04fc5ffb8e9402122cfa4883 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_7b1ce88d04fc5ffb8e9402122cfa4883, class_type, copy, ); };
            typedef double  return_type_004876688c73571590d218338cd011b5;
            typedef double const & param_004876688c73571590d218338cd011b5_0_type;
            virtual return_type_004876688c73571590d218338cd011b5 operator()(param_004876688c73571590d218338cd011b5_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_004876688c73571590d218338cd011b5, class_type, operator(), param_0); };
    };
}

double  (::statiskit::Schedule::*method_pointer_004876688c73571590d218338cd011b5)(double const &)const= &::statiskit::Schedule::operator();
class ::std::unique_ptr< struct ::statiskit::Schedule, struct ::std::default_delete< struct ::statiskit::Schedule > >  (::statiskit::Schedule::*method_pointer_7b1ce88d04fc5ffb8e9402122cfa4883)()const= &::statiskit::Schedule::copy;

namespace autowig {
}

void wrapper_3ca8ff4e14d1580fa17364607bc956c4(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::Schedule, autowig::Trampoline, autowig::HolderType< struct ::statiskit::Schedule >::Type > class_3ca8ff4e14d1580fa17364607bc956c4(module, "Schedule", "");
    class_3ca8ff4e14d1580fa17364607bc956c4.def("__call__", method_pointer_004876688c73571590d218338cd011b5, "");
    class_3ca8ff4e14d1580fa17364607bc956c4.def("copy", method_pointer_7b1ce88d04fc5ffb8e9402122cfa4883, "");

}