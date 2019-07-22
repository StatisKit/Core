#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Selection< class ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution > >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::Selection< class ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution > >::Estimator::Estimator;

            typedef double  return_type_be440bc3a52251dfbc42d722b716ef3f;
            typedef struct ::statiskit::SingularDistribution const * param_be440bc3a52251dfbc42d722b716ef3f_0_type;
            typedef struct ::statiskit::MultivariateData const & param_be440bc3a52251dfbc42d722b716ef3f_1_type;
            virtual return_type_be440bc3a52251dfbc42d722b716ef3f scoring(param_be440bc3a52251dfbc42d722b716ef3f_0_type param_0, param_be440bc3a52251dfbc42d722b716ef3f_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_be440bc3a52251dfbc42d722b716ef3f, class_type, scoring, param_0, param_1); };
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > >  return_type_e63871509e675384a85dc2f7ea740325;
            typedef struct ::statiskit::MultivariateData const & param_e63871509e675384a85dc2f7ea740325_0_type;
            typedef bool const & param_e63871509e675384a85dc2f7ea740325_1_type;
            virtual return_type_e63871509e675384a85dc2f7ea740325 operator()(param_e63871509e675384a85dc2f7ea740325_0_type param_0, param_e63871509e675384a85dc2f7ea740325_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_e63871509e675384a85dc2f7ea740325, class_type, operator(), param_0, param_1); };
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator > >  return_type_9457ae163d2b51e6a4b68c1d52a61c5e;
            virtual return_type_9457ae163d2b51e6a4b68c1d52a61c5e copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_9457ae163d2b51e6a4b68c1d52a61c5e, class_type, copy, ); };
            typedef class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > >  return_type_1b58fb67872859e3906ec2e648200d3c;
            typedef ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator::data_type const & param_1b58fb67872859e3906ec2e648200d3c_0_type;
            virtual return_type_1b58fb67872859e3906ec2e648200d3c operator()(param_1b58fb67872859e3906ec2e648200d3c_0_type param_0) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_1b58fb67872859e3906ec2e648200d3c, class_type, operator(), param_0); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::scoring;
    };
}

class ::std::unique_ptr< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >, struct ::std::default_delete< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > > >  (::statiskit::Selection< ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution > >::Estimator::*method_pointer_e63871509e675384a85dc2f7ea740325)(struct ::statiskit::MultivariateData const &, bool const &)const= &::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::Estimator::operator();
::statiskit::Index  (::statiskit::Selection< ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution > >::Estimator::*method_pointer_b2167956364857329a2a0568493511ba)()const= &::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::Estimator::size;
class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator * (::statiskit::Selection< ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution > >::Estimator::*method_pointer_7d7c2d7f42295e4a95c71fbef6047f44)(::statiskit::Index const &)= &::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::Estimator::get_estimator;
void  (::statiskit::Selection< ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution > >::Estimator::*method_pointer_08113961b62e51a2867604304fad44c2)(::statiskit::Index const &, class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator const &)= &::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::Estimator::set_estimator;
void  (::statiskit::Selection< ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution > >::Estimator::*method_pointer_ea0e1a4898925157bbf6659f61002638)(class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator const &)= &::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::Estimator::add_estimator;
void  (::statiskit::Selection< ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution > >::Estimator::*method_pointer_8796a9e298a2528e91690f18e368150a)(::statiskit::Index const &)= &::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::Estimator::remove_estimator;

namespace autowig {
}

void wrapper_08d6e46838b65ffebc188c31dc3d252f(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::Selection< class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution > >::Estimator >::Type, class ::statiskit::DistributionEstimation< struct ::statiskit::SingularDistribution >::Estimator > class_08d6e46838b65ffebc188c31dc3d252f(module, "Estimator", "");
    class_08d6e46838b65ffebc188c31dc3d252f.def(pybind11::init<  >());
    class_08d6e46838b65ffebc188c31dc3d252f.def("__call__", method_pointer_e63871509e675384a85dc2f7ea740325, "");
    class_08d6e46838b65ffebc188c31dc3d252f.def("__len__", method_pointer_b2167956364857329a2a0568493511ba, "");
    class_08d6e46838b65ffebc188c31dc3d252f.def("get_estimator", method_pointer_7d7c2d7f42295e4a95c71fbef6047f44, pybind11::return_value_policy::reference_internal, "");
    class_08d6e46838b65ffebc188c31dc3d252f.def("set_estimator", method_pointer_08113961b62e51a2867604304fad44c2, "");
    class_08d6e46838b65ffebc188c31dc3d252f.def("add_estimator", method_pointer_ea0e1a4898925157bbf6659f61002638, "");
    class_08d6e46838b65ffebc188c31dc3d252f.def("remove_estimator", method_pointer_8796a9e298a2528e91690f18e368150a, "");
    class_08d6e46838b65ffebc188c31dc3d252f.def("_scoring", static_cast< double  (::statiskit::Selection< ::statiskit::DistributionEstimation< ::statiskit::SingularDistribution > >::Estimator::*) (struct ::statiskit::SingularDistribution const *, struct ::statiskit::MultivariateData const &) const >(&autowig::Publicist::scoring), "");

}