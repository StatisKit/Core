#include "_core.h"

namespace autowig
{
    typedef ::statiskit::UnivariateDispersionEstimation class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::UnivariateDispersionEstimation::UnivariateDispersionEstimation;


        public:
            typedef double const & return_type_a18c7d90bacb538d9895cf5c0091b871;
            virtual return_type_a18c7d90bacb538d9895cf5c0091b871 get_dispersion() const override { PYBIND11_OVERLOAD_PURE(return_type_a18c7d90bacb538d9895cf5c0091b871, class_type, get_dispersion, ); };
    };
}

double const & (::statiskit::UnivariateDispersionEstimation::*method_pointer_0301fbd58a7a5c1388ceb1e5f1396915)()const= &::statiskit::UnivariateDispersionEstimation::get_location;
double const & (::statiskit::UnivariateDispersionEstimation::*method_pointer_a18c7d90bacb538d9895cf5c0091b871)()const= &::statiskit::UnivariateDispersionEstimation::get_dispersion;

namespace autowig {
}

void wrapper_87b566a692cb54b18914b54eb295ef9a(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::UnivariateDispersionEstimation, autowig::Trampoline, autowig::HolderType< class ::statiskit::UnivariateDispersionEstimation >::Type > class_87b566a692cb54b18914b54eb295ef9a(module, "UnivariateDispersionEstimation", "");
    class_87b566a692cb54b18914b54eb295ef9a.def(pybind11::init< double const & >());
    class_87b566a692cb54b18914b54eb295ef9a.def("get_location", method_pointer_0301fbd58a7a5c1388ceb1e5f1396915, pybind11::return_value_policy::copy, "");
    class_87b566a692cb54b18914b54eb295ef9a.def("get_dispersion", method_pointer_a18c7d90bacb538d9895cf5c0091b871, pybind11::return_value_policy::copy, "");

}