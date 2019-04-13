#include "_core.h"

namespace autowig
{
    typedef ::statiskit::UnivariateLocationEstimation::Estimator class_type;

    class Trampoline : public class_type
    {
        public:

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation::Estimator > >  return_type_8b9c71aa21be519083da91720a92b999;
            virtual return_type_8b9c71aa21be519083da91720a92b999 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_8b9c71aa21be519083da91720a92b999, class_type, copy, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation > >  return_type_e340294596125a0b839c5cee432407c7;
            typedef struct ::statiskit::UnivariateData const & param_e340294596125a0b839c5cee432407c7_0_type;
            virtual return_type_e340294596125a0b839c5cee432407c7 operator()(param_e340294596125a0b839c5cee432407c7_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_e340294596125a0b839c5cee432407c7, class_type, operator(), param_0); };
    };
}

class ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation > >  (::statiskit::UnivariateLocationEstimation::Estimator::*method_pointer_e340294596125a0b839c5cee432407c7)(struct ::statiskit::UnivariateData const &)const= &::statiskit::UnivariateLocationEstimation::Estimator::operator();
class ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation::Estimator > >  (::statiskit::UnivariateLocationEstimation::Estimator::*method_pointer_8b9c71aa21be519083da91720a92b999)()const= &::statiskit::UnivariateLocationEstimation::Estimator::copy;

namespace autowig {
}

void wrapper_d33d975672ef54f0b9b5e01d57fdf32b(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateLocationEstimation::Estimator, autowig::Trampoline, autowig::HolderType< struct ::statiskit::UnivariateLocationEstimation::Estimator >::Type > class_d33d975672ef54f0b9b5e01d57fdf32b(module, "Estimator", "");
    class_d33d975672ef54f0b9b5e01d57fdf32b.def("__call__", method_pointer_e340294596125a0b839c5cee432407c7, "");
    class_d33d975672ef54f0b9b5e01d57fdf32b.def("copy", method_pointer_8b9c71aa21be519083da91720a92b999, "");

}