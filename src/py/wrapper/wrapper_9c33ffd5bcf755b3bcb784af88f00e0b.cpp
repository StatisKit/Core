#include "_core.h"

namespace autowig
{
    typedef ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution >::Estimator::Estimator;


        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator > >  return_type_9457ae163d2b51e6a4b68c1d52a61c5e;
            virtual return_type_9457ae163d2b51e6a4b68c1d52a61c5e copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_9457ae163d2b51e6a4b68c1d52a61c5e, class_type, copy, ); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > >  return_type_b4d3bbcdff0c5c2faab4814b768d9584;
            typedef struct ::statiskit::MultivariateData const & param_b4d3bbcdff0c5c2faab4814b768d9584_0_type;
            typedef class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > const & param_b4d3bbcdff0c5c2faab4814b768d9584_1_type;
            virtual return_type_b4d3bbcdff0c5c2faab4814b768d9584 operator()(param_b4d3bbcdff0c5c2faab4814b768d9584_0_type param_0, param_b4d3bbcdff0c5c2faab4814b768d9584_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_b4d3bbcdff0c5c2faab4814b768d9584, class_type, operator(), param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > >  return_type_1b58fb67872859e3906ec2e648200d3c;
            typedef ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator::data_type const & param_1b58fb67872859e3906ec2e648200d3c_0_type;
            virtual return_type_1b58fb67872859e3906ec2e648200d3c operator()(param_1b58fb67872859e3906ec2e648200d3c_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_1b58fb67872859e3906ec2e648200d3c, class_type, operator(), param_0); };
    };
}

class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > >  (::statiskit::DistributionEstimation< ::statiskit::SingularDistribution >::Estimator::*method_pointer_1b58fb67872859e3906ec2e648200d3c)(::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator::data_type const &)const= &::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator::operator();
class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > >  (::statiskit::DistributionEstimation< ::statiskit::SingularDistribution >::Estimator::*method_pointer_b4d3bbcdff0c5c2faab4814b768d9584)(struct ::statiskit::MultivariateData const &, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > const &)const= &::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator::operator();
class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator > >  (::statiskit::DistributionEstimation< ::statiskit::SingularDistribution >::Estimator::*method_pointer_9457ae163d2b51e6a4b68c1d52a61c5e)()const= &::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator::copy;

namespace autowig {
}

void wrapper_9c33ffd5bcf755b3bcb784af88f00e0b(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator >::Type > class_9c33ffd5bcf755b3bcb784af88f00e0b(module, "Estimator", "");
    class_9c33ffd5bcf755b3bcb784af88f00e0b.def(pybind11::init<  >());
    class_9c33ffd5bcf755b3bcb784af88f00e0b.def("__call__", method_pointer_1b58fb67872859e3906ec2e648200d3c, "");
    class_9c33ffd5bcf755b3bcb784af88f00e0b.def("__call__", method_pointer_b4d3bbcdff0c5c2faab4814b768d9584, "");
    class_9c33ffd5bcf755b3bcb784af88f00e0b.def("copy", method_pointer_9457ae163d2b51e6a4b68c1d52a61c5e, "");

}