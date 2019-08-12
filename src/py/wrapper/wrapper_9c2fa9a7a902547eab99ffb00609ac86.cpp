#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::MultivariateMeanEstimation, struct ::statiskit::MultivariateLocationEstimation > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::MultivariateMeanEstimation, struct ::statiskit::MultivariateLocationEstimation >::PolymorphicCopy;


        public:
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & return_type_79a5b0a58645590a8356a14195e34da5;
            virtual return_type_79a5b0a58645590a8356a14195e34da5 get_location() const override { PYBIND11_OVERLOAD_PURE(return_type_79a5b0a58645590a8356a14195e34da5, class_type, get_location, ); };
    };
}


namespace autowig {
}

void wrapper_9c2fa9a7a902547eab99ffb00609ac86(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::MultivariateMeanEstimation, struct ::statiskit::MultivariateLocationEstimation >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::MultivariateMeanEstimation, struct ::statiskit::MultivariateLocationEstimation > >::Type, struct ::statiskit::MultivariateLocationEstimation > class_9c2fa9a7a902547eab99ffb00609ac86(module, "_PolymorphicCopy_9c2fa9a7a902547eab99ffb00609ac86", "");
    class_9c2fa9a7a902547eab99ffb00609ac86.def(pybind11::init<  >());

}