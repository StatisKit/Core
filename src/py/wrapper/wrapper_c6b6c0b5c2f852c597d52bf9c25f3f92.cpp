#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::UnivariateMeanEstimation, struct ::statiskit::UnivariateLocationEstimation > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::UnivariateMeanEstimation, struct ::statiskit::UnivariateLocationEstimation >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation > >  return_type_3b1255d2b09e573ab8ecbd0ac2ed228e;
            virtual return_type_3b1255d2b09e573ab8ecbd0ac2ed228e copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_3b1255d2b09e573ab8ecbd0ac2ed228e, class_type, copy, ); };
            typedef double const & return_type_9dde6f7d86c45ddd8e7676fbf005dcc2;
            virtual return_type_9dde6f7d86c45ddd8e7676fbf005dcc2 get_location() const override { PYBIND11_OVERLOAD_PURE(return_type_9dde6f7d86c45ddd8e7676fbf005dcc2, class_type, get_location, ); };
    };
}


namespace autowig {
}

void wrapper_c6b6c0b5c2f852c597d52bf9c25f3f92(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::UnivariateMeanEstimation, struct ::statiskit::UnivariateLocationEstimation >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::UnivariateMeanEstimation, struct ::statiskit::UnivariateLocationEstimation > >::Type, struct ::statiskit::UnivariateLocationEstimation > class_c6b6c0b5c2f852c597d52bf9c25f3f92(module, "_PolymorphicCopy_c6b6c0b5c2f852c597d52bf9c25f3f92", "");
    class_c6b6c0b5c2f852c597d52bf9c25f3f92.def(pybind11::init<  >());

}