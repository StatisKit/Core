#include "_core.h"

namespace autowig
{
    typedef ::statiskit::CategoricalEvent class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::CategoricalEvent::CategoricalEvent;


        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  return_type_963689b729ca55bb9ee4a8fbb5e871c0;
            virtual return_type_963689b729ca55bb9ee4a8fbb5e871c0 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_963689b729ca55bb9ee4a8fbb5e871c0, class_type, copy, ); };

        public:
            typedef enum ::statiskit::censoring_type  return_type_e27fd4219e44503fa91f650545c9af28;
            virtual return_type_e27fd4219e44503fa91f650545c9af28 get_censoring() const override { PYBIND11_OVERLOAD_PURE(return_type_e27fd4219e44503fa91f650545c9af28, class_type, get_censoring, ); };
    };
}


namespace autowig {
}

void wrapper_cf0179fb6c94524589e450e5bcacc532(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::CategoricalEvent, autowig::Trampoline, autowig::HolderType< struct ::statiskit::CategoricalEvent >::Type, struct ::statiskit::UnivariateEvent > class_cf0179fb6c94524589e450e5bcacc532(module, "CategoricalEvent", "");

}