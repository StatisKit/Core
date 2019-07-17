#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::VectorEvent, struct ::statiskit::MultivariateEvent > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::VectorEvent, struct ::statiskit::MultivariateEvent >::PolymorphicCopy;


        public:
            typedef struct ::statiskit::UnivariateEvent const * return_type_09d1fd5db58a5234abee68232835e76b;
            typedef ::statiskit::Index const & param_09d1fd5db58a5234abee68232835e76b_0_type;
            virtual return_type_09d1fd5db58a5234abee68232835e76b get_event(param_09d1fd5db58a5234abee68232835e76b_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_09d1fd5db58a5234abee68232835e76b, class_type, get_event, param_0); };

        public:
            typedef ::statiskit::Index  return_type_b16ba67d442357de95884c2b80cd9413;
            virtual return_type_b16ba67d442357de95884c2b80cd9413 size() const override { PYBIND11_OVERLOAD_PURE(return_type_b16ba67d442357de95884c2b80cd9413, class_type, size, ); };
    };
}


namespace autowig {
}

void wrapper_7466a1a79edf5312955ff663594f561b(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::VectorEvent, struct ::statiskit::MultivariateEvent >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::VectorEvent, struct ::statiskit::MultivariateEvent > >::Type, struct ::statiskit::MultivariateEvent > class_7466a1a79edf5312955ff663594f561b(module, "_PolymorphicCopy_7466a1a79edf5312955ff663594f561b", "");
    class_7466a1a79edf5312955ff663594f561b.def(pybind11::init<  >());

}