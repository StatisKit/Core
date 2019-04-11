#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Optimization< ::statiskit::SingularDistributionEstimation::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::Optimization< ::statiskit::SingularDistributionEstimation::Estimator >::Optimization;


        public:
            typedef class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation::Estimator > >  return_type_8b02691f7b535adda732068708b90596;
            virtual return_type_8b02691f7b535adda732068708b90596 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_8b02691f7b535adda732068708b90596, class_type, copy, ); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation > >  return_type_ef6596d10b575b13b141d8bcf05ac09a;
            typedef ::statiskit::SingularDistributionEstimation::data_type const & param_ef6596d10b575b13b141d8bcf05ac09a_0_type;
            typedef bool const & param_ef6596d10b575b13b141d8bcf05ac09a_1_type;
            virtual return_type_ef6596d10b575b13b141d8bcf05ac09a operator()(param_ef6596d10b575b13b141d8bcf05ac09a_0_type param_0, param_ef6596d10b575b13b141d8bcf05ac09a_1_type param_1) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_ef6596d10b575b13b141d8bcf05ac09a, class_type, operator(), param_0, param_1); };
    };

    class Publicist : public class_type
    {
        public:
    };
}

double const & (::statiskit::Optimization< ::statiskit::SingularDistributionEstimation::Estimator >::*method_pointer_f1f6b8777ce457fb87fe24c4f6005328)()const= &::statiskit::Optimization< struct ::statiskit::SingularDistributionEstimation::Estimator >::get_mindiff;
void  (::statiskit::Optimization< ::statiskit::SingularDistributionEstimation::Estimator >::*method_pointer_e8ce1527b17a5cd6a0feda960df64087)(double const &)= &::statiskit::Optimization< struct ::statiskit::SingularDistributionEstimation::Estimator >::set_mindiff;
unsigned int  (::statiskit::Optimization< ::statiskit::SingularDistributionEstimation::Estimator >::*method_pointer_bc756bc223d25490810778785eb77d6c)()const= &::statiskit::Optimization< struct ::statiskit::SingularDistributionEstimation::Estimator >::get_minits;
void  (::statiskit::Optimization< ::statiskit::SingularDistributionEstimation::Estimator >::*method_pointer_2375ea1de3d75d1c825b80098ef8f1ca)(unsigned int const &)= &::statiskit::Optimization< struct ::statiskit::SingularDistributionEstimation::Estimator >::set_minits;
unsigned int  (::statiskit::Optimization< ::statiskit::SingularDistributionEstimation::Estimator >::*method_pointer_e2a41672cda65435a42be527972a466f)()const= &::statiskit::Optimization< struct ::statiskit::SingularDistributionEstimation::Estimator >::get_maxits;
void  (::statiskit::Optimization< ::statiskit::SingularDistributionEstimation::Estimator >::*method_pointer_ff652d9240a75b4eba7583ba15a93028)(unsigned int const &)= &::statiskit::Optimization< struct ::statiskit::SingularDistributionEstimation::Estimator >::set_maxits;

namespace autowig {
}

void wrapper_fd63b9f470165717923109c2f3c8739d(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Optimization< struct ::statiskit::SingularDistributionEstimation::Estimator >, autowig::Trampoline, autowig::HolderType< class ::statiskit::Optimization< struct ::statiskit::SingularDistributionEstimation::Estimator > >::Type, struct ::statiskit::SingularDistributionEstimation::Estimator > class_fd63b9f470165717923109c2f3c8739d(module, "_Optimization_fd63b9f470165717923109c2f3c8739d", "");
    class_fd63b9f470165717923109c2f3c8739d.def(pybind11::init<  >());
    class_fd63b9f470165717923109c2f3c8739d.def("get_mindiff", method_pointer_f1f6b8777ce457fb87fe24c4f6005328, pybind11::return_value_policy::copy, "");
    class_fd63b9f470165717923109c2f3c8739d.def("set_mindiff", method_pointer_e8ce1527b17a5cd6a0feda960df64087, "");
    class_fd63b9f470165717923109c2f3c8739d.def("get_minits", method_pointer_bc756bc223d25490810778785eb77d6c, "");
    class_fd63b9f470165717923109c2f3c8739d.def("set_minits", method_pointer_2375ea1de3d75d1c825b80098ef8f1ca, "");
    class_fd63b9f470165717923109c2f3c8739d.def("get_maxits", method_pointer_e2a41672cda65435a42be527972a466f, "");
    class_fd63b9f470165717923109c2f3c8739d.def("set_maxits", method_pointer_ff652d9240a75b4eba7583ba15a93028, "");

}