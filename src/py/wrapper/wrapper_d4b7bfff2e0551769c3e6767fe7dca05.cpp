#include "_core.h"

namespace autowig
{
    typedef ::statiskit::MixtureDistribution< ::statiskit::ContinuousMultivariateDistribution > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::MixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >::MixtureDistribution;

            typedef void  return_type_be0a79cf74985b8a9b7c9f627f3c9346;
            typedef ::statiskit::Index const & param_be0a79cf74985b8a9b7c9f627f3c9346_0_type;
            typedef struct ::statiskit::ContinuousMultivariateDistribution const & param_be0a79cf74985b8a9b7c9f627f3c9346_1_type;
            virtual return_type_be0a79cf74985b8a9b7c9f627f3c9346 set_observation(param_be0a79cf74985b8a9b7c9f627f3c9346_0_type param_0, param_be0a79cf74985b8a9b7c9f627f3c9346_1_type param_1) override { PYBIND11_OVERLOAD(return_type_be0a79cf74985b8a9b7c9f627f3c9346, class_type, set_observation, param_0, param_1); };
            typedef unsigned int  return_type_95135a341c905d84966c263f09456897;
            virtual return_type_95135a341c905d84966c263f09456897 get_nb_parameters() const override { PYBIND11_OVERLOAD(return_type_95135a341c905d84966c263f09456897, class_type, get_nb_parameters, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  return_type_bfcc78e34f6259b6a33f959f459c73aa;
            virtual return_type_bfcc78e34f6259b6a33f959f459c73aa copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_bfcc78e34f6259b6a33f959f459c73aa, class_type, copy, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  return_type_4ea4050829d754ffad293bbb7a971a31;
            virtual return_type_4ea4050829d754ffad293bbb7a971a31 simulate() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_4ea4050829d754ffad293bbb7a971a31, class_type, simulate, ); };
            typedef double  return_type_1b1aa04affe25769a45aa61f808a0a19;
            typedef struct ::statiskit::MultivariateEvent const * param_1b1aa04affe25769a45aa61f808a0a19_0_type;
            typedef bool const & param_1b1aa04affe25769a45aa61f808a0a19_1_type;
            virtual return_type_1b1aa04affe25769a45aa61f808a0a19 probability(param_1b1aa04affe25769a45aa61f808a0a19_0_type param_0, param_1b1aa04affe25769a45aa61f808a0a19_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_1b1aa04affe25769a45aa61f808a0a19, class_type, probability, param_0, param_1); };
            typedef ::statiskit::Index  return_type_6bbdbd5137365f409e51be059aaa5dec;
            virtual return_type_6bbdbd5137365f409e51be059aaa5dec get_nb_components() const override { PYBIND11_OVERLOAD_PURE(return_type_6bbdbd5137365f409e51be059aaa5dec, class_type, get_nb_components, ); };
    };
}

::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_84e54ba703be5d09a3850865ebae7947)()const= &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::get_nb_states;
struct ::statiskit::ContinuousMultivariateDistribution const * (::statiskit::MixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_c7ad8579c93f5af99593991c02ff8595)(::statiskit::Index const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::get_observation;
void  (::statiskit::MixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_be0a79cf74985b8a9b7c9f627f3c9346)(::statiskit::Index const &, struct ::statiskit::ContinuousMultivariateDistribution const &)= &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::set_observation;
class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_bec42718135951b4b5e808b13d653ac6)()const= &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::get_pi;
void  (::statiskit::MixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_0da7897e2cdb59df8f758fc06f88b579)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &)= &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::set_pi;
class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::MixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_6ec110ed65c95bbdafcd7a8eac50f286)(struct ::statiskit::MultivariateEvent const *, bool const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::posterior;
::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_2ef3daee602455f4bb59edc9cb1e8116)(struct ::statiskit::MultivariateEvent const *)const= &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::assignment;
class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >  (::statiskit::MixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_2ec2555e6a3552b0a12beaf4bfb45e07)(struct ::statiskit::MultivariateData const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::assignment;
double  (::statiskit::MixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_d1a69ac6a265507ea72b7a64367795f1)(struct ::statiskit::MultivariateEvent const *)const= &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::uncertainty;
double  (::statiskit::MixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_af1dba75f7ed587d9c452594631b7033)(struct ::statiskit::MultivariateData const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::uncertainty;

namespace autowig {
}

void wrapper_d4b7bfff2e0551769c3e6767fe7dca05(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, autowig::Trampoline, autowig::HolderType< class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > >::Type, struct ::statiskit::ContinuousMultivariateDistribution > class_d4b7bfff2e0551769c3e6767fe7dca05(module, "_MixtureDistribution_d4b7bfff2e0551769c3e6767fe7dca05", "");
    class_d4b7bfff2e0551769c3e6767fe7dca05.def(pybind11::init<  >());
    class_d4b7bfff2e0551769c3e6767fe7dca05.def("get_nb_states", method_pointer_84e54ba703be5d09a3850865ebae7947, "");
    class_d4b7bfff2e0551769c3e6767fe7dca05.def("get_observation", method_pointer_c7ad8579c93f5af99593991c02ff8595, pybind11::return_value_policy::reference_internal, "");
    class_d4b7bfff2e0551769c3e6767fe7dca05.def("set_observation", method_pointer_be0a79cf74985b8a9b7c9f627f3c9346, "");
    class_d4b7bfff2e0551769c3e6767fe7dca05.def("get_pi", method_pointer_bec42718135951b4b5e808b13d653ac6, pybind11::return_value_policy::copy, "");
    class_d4b7bfff2e0551769c3e6767fe7dca05.def("set_pi", method_pointer_0da7897e2cdb59df8f758fc06f88b579, "");
    class_d4b7bfff2e0551769c3e6767fe7dca05.def("posterior", method_pointer_6ec110ed65c95bbdafcd7a8eac50f286, "");
    class_d4b7bfff2e0551769c3e6767fe7dca05.def("assignment", method_pointer_2ef3daee602455f4bb59edc9cb1e8116, "");
    class_d4b7bfff2e0551769c3e6767fe7dca05.def("assignment", method_pointer_2ec2555e6a3552b0a12beaf4bfb45e07, "");
    class_d4b7bfff2e0551769c3e6767fe7dca05.def("uncertainty", method_pointer_d1a69ac6a265507ea72b7a64367795f1, "");
    class_d4b7bfff2e0551769c3e6767fe7dca05.def("uncertainty", method_pointer_af1dba75f7ed587d9c452594631b7033, "");

}