#include "_core.h"

namespace autowig
{
    typedef ::statiskit::DistributionEstimation< ::statiskit::UnivariateDistribution >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::DistributionEstimation< ::statiskit::UnivariateDistribution >::Estimator::Estimator;


        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator > >  return_type_26294945d2a55f42a4ff3b316d0eb4ab;
            virtual return_type_26294945d2a55f42a4ff3b316d0eb4ab copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_26294945d2a55f42a4ff3b316d0eb4ab, class_type, copy, ); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution > > >  return_type_ffc375e050255b0e93aeb875148628ea;
            typedef struct ::statiskit::MultivariateData const & param_ffc375e050255b0e93aeb875148628ea_0_type;
            typedef unsigned long int const & param_ffc375e050255b0e93aeb875148628ea_1_type;
            virtual return_type_ffc375e050255b0e93aeb875148628ea operator()(param_ffc375e050255b0e93aeb875148628ea_0_type param_0, param_ffc375e050255b0e93aeb875148628ea_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_ffc375e050255b0e93aeb875148628ea, class_type, operator(), param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution > > >  return_type_f5006c7de7595cf1b83e7502ffda0880;
            typedef ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator::data_type const & param_f5006c7de7595cf1b83e7502ffda0880_0_type;
            virtual return_type_f5006c7de7595cf1b83e7502ffda0880 operator()(param_f5006c7de7595cf1b83e7502ffda0880_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_f5006c7de7595cf1b83e7502ffda0880, class_type, operator(), param_0); };
    };
}

class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution > > >  (::statiskit::DistributionEstimation< ::statiskit::UnivariateDistribution >::Estimator::*method_pointer_f5006c7de7595cf1b83e7502ffda0880)(::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator::data_type const &)const= &::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator::operator();
class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution > > >  (::statiskit::DistributionEstimation< ::statiskit::UnivariateDistribution >::Estimator::*method_pointer_ffc375e050255b0e93aeb875148628ea)(struct ::statiskit::MultivariateData const &, unsigned long int const &)const= &::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator::operator();
class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator > >  (::statiskit::DistributionEstimation< ::statiskit::UnivariateDistribution >::Estimator::*method_pointer_26294945d2a55f42a4ff3b316d0eb4ab)()const= &::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator::copy;

namespace autowig {
}

void wrapper_16e0ec24327b5201927673f1e4c6eeca(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::DistributionEstimation< struct ::statiskit::UnivariateDistribution >::Estimator >::Type > class_16e0ec24327b5201927673f1e4c6eeca(module, "Estimator", "");
    class_16e0ec24327b5201927673f1e4c6eeca.def(pybind11::init<  >());
    class_16e0ec24327b5201927673f1e4c6eeca.def("__call__", method_pointer_f5006c7de7595cf1b83e7502ffda0880, "");
    class_16e0ec24327b5201927673f1e4c6eeca.def("__call__", method_pointer_ffc375e050255b0e93aeb875148628ea, "");
    class_16e0ec24327b5201927673f1e4c6eeca.def("copy", method_pointer_26294945d2a55f42a4ff3b316d0eb4ab, "");

}