#include "_core.h"

namespace autowig
{
    typedef ::statiskit::MultivariateDispersionEstimation::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::MultivariateDispersionEstimation::Estimator::Estimator;


        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDispersionEstimation::Estimator > >  return_type_fd8c28a661ec58aba7edb069108b96b4;
            virtual return_type_fd8c28a661ec58aba7edb069108b96b4 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_fd8c28a661ec58aba7edb069108b96b4, class_type, copy, ); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::MultivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::MultivariateDispersionEstimation > >  return_type_362d225b055b59faab2c348f93722cb7;
            typedef struct ::statiskit::MultivariateData const & param_362d225b055b59faab2c348f93722cb7_0_type;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_362d225b055b59faab2c348f93722cb7_1_type;
            virtual return_type_362d225b055b59faab2c348f93722cb7 operator()(param_362d225b055b59faab2c348f93722cb7_0_type param_0, param_362d225b055b59faab2c348f93722cb7_1_type param_1) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_362d225b055b59faab2c348f93722cb7, class_type, operator(), param_0, param_1); };
    };
}

class ::std::unique_ptr< class ::statiskit::MultivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::MultivariateDispersionEstimation > >  (::statiskit::MultivariateDispersionEstimation::Estimator::*method_pointer_362d225b055b59faab2c348f93722cb7)(struct ::statiskit::MultivariateData const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &)const= &::statiskit::MultivariateDispersionEstimation::Estimator::operator();
class ::std::unique_ptr< struct ::statiskit::MultivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDispersionEstimation::Estimator > >  (::statiskit::MultivariateDispersionEstimation::Estimator::*method_pointer_fd8c28a661ec58aba7edb069108b96b4)()const= &::statiskit::MultivariateDispersionEstimation::Estimator::copy;

namespace autowig {
}

void wrapper_9b1c85d3df8e5cba922fb88752a0d746(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MultivariateDispersionEstimation::Estimator, autowig::Trampoline, autowig::HolderType< struct ::statiskit::MultivariateDispersionEstimation::Estimator >::Type > class_9b1c85d3df8e5cba922fb88752a0d746(module, "Estimator", "");
    class_9b1c85d3df8e5cba922fb88752a0d746.def(pybind11::init<  >());
    class_9b1c85d3df8e5cba922fb88752a0d746.def("__call__", method_pointer_362d225b055b59faab2c348f93722cb7, "");
    class_9b1c85d3df8e5cba922fb88752a0d746.def("copy", method_pointer_fd8c28a661ec58aba7edb069108b96b4, "");

}