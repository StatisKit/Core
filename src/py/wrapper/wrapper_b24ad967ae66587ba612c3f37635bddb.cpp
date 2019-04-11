#include "_core.h"

namespace autowig
{
    typedef ::statiskit::MixtureDistribution< ::statiskit::MultivariateDistribution > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::MixtureDistribution< ::statiskit::MultivariateDistribution >::MixtureDistribution;


        public:
            typedef void  return_type_aa55c43f01ef52f5ba9860c09e507b24;
            typedef ::statiskit::Index const & param_aa55c43f01ef52f5ba9860c09e507b24_0_type;
            typedef struct ::statiskit::MultivariateDistribution const & param_aa55c43f01ef52f5ba9860c09e507b24_1_type;
            virtual return_type_aa55c43f01ef52f5ba9860c09e507b24 set_observation(param_aa55c43f01ef52f5ba9860c09e507b24_0_type param_0, param_aa55c43f01ef52f5ba9860c09e507b24_1_type param_1) override { PYBIND11_OVERLOAD(return_type_aa55c43f01ef52f5ba9860c09e507b24, class_type, set_observation, param_0, param_1); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  return_type_bfcc78e34f6259b6a33f959f459c73aa;
            virtual return_type_bfcc78e34f6259b6a33f959f459c73aa copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_bfcc78e34f6259b6a33f959f459c73aa, class_type, copy, ); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  return_type_4ea4050829d754ffad293bbb7a971a31;
            virtual return_type_4ea4050829d754ffad293bbb7a971a31 simulate() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_4ea4050829d754ffad293bbb7a971a31, class_type, simulate, ); };

        public:
            typedef double  return_type_1b1aa04affe25769a45aa61f808a0a19;
            typedef struct ::statiskit::MultivariateEvent const * param_1b1aa04affe25769a45aa61f808a0a19_0_type;
            typedef bool const & param_1b1aa04affe25769a45aa61f808a0a19_1_type;
            virtual return_type_1b1aa04affe25769a45aa61f808a0a19 probability(param_1b1aa04affe25769a45aa61f808a0a19_0_type param_0, param_1b1aa04affe25769a45aa61f808a0a19_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_1b1aa04affe25769a45aa61f808a0a19, class_type, probability, param_0, param_1); };

        public:
            typedef ::statiskit::Index  return_type_6bbdbd5137365f409e51be059aaa5dec;
            virtual return_type_6bbdbd5137365f409e51be059aaa5dec get_nb_components() const override { PYBIND11_OVERLOAD_PURE(return_type_6bbdbd5137365f409e51be059aaa5dec, class_type, get_nb_components, ); };
    };
}

::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::MultivariateDistribution >::*method_pointer_c6edfe67859d5de998406b4a1499e3b1)()const= &::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution >::get_nb_states;
struct ::statiskit::MultivariateDistribution const * (::statiskit::MixtureDistribution< ::statiskit::MultivariateDistribution >::*method_pointer_6350a9a93ff952c1b820b26ed63c04fc)(::statiskit::Index const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution >::get_observation;
void  (::statiskit::MixtureDistribution< ::statiskit::MultivariateDistribution >::*method_pointer_aa55c43f01ef52f5ba9860c09e507b24)(::statiskit::Index const &, struct ::statiskit::MultivariateDistribution const &)= &::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution >::set_observation;
class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MixtureDistribution< ::statiskit::MultivariateDistribution >::*method_pointer_5fee0b04790a50059bf2188ba003d545)()const= &::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution >::get_pi;
void  (::statiskit::MixtureDistribution< ::statiskit::MultivariateDistribution >::*method_pointer_6d05ca4966d45471bdddd95a3e918b58)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &)= &::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution >::set_pi;
class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::MixtureDistribution< ::statiskit::MultivariateDistribution >::*method_pointer_2616482a64eb565298d5fdb46bb49adc)(struct ::statiskit::MultivariateEvent const *, bool const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution >::posterior;
::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::MultivariateDistribution >::*method_pointer_724063f531c95b1ba918babb9d1aa3bb)(struct ::statiskit::MultivariateEvent const *)const= &::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution >::assignment;
class ::std::vector< statiskit::Index, class ::std::allocator< statiskit::Index > >  (::statiskit::MixtureDistribution< ::statiskit::MultivariateDistribution >::*method_pointer_4024d714f8fb52dd94078c2bfa86c79f)(struct ::statiskit::MultivariateData const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution >::assignment;
double  (::statiskit::MixtureDistribution< ::statiskit::MultivariateDistribution >::*method_pointer_785f1ace27045787a383d04d4f9f1768)(struct ::statiskit::MultivariateEvent const *)const= &::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution >::uncertainty;
double  (::statiskit::MixtureDistribution< ::statiskit::MultivariateDistribution >::*method_pointer_ca4d594d4b315670963fd0d25021da4e)(struct ::statiskit::MultivariateData const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution >::uncertainty;

namespace autowig {
}

void wrapper_b24ad967ae66587ba612c3f37635bddb(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution >, autowig::Trampoline, autowig::HolderType< class ::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution > >::Type, struct ::statiskit::MultivariateDistribution > class_b24ad967ae66587ba612c3f37635bddb(module, "_MixtureDistribution_b24ad967ae66587ba612c3f37635bddb", "");
    class_b24ad967ae66587ba612c3f37635bddb.def(pybind11::init<  >());
    class_b24ad967ae66587ba612c3f37635bddb.def("get_nb_states", method_pointer_c6edfe67859d5de998406b4a1499e3b1, "");
    class_b24ad967ae66587ba612c3f37635bddb.def("get_observation", method_pointer_6350a9a93ff952c1b820b26ed63c04fc, pybind11::return_value_policy::reference_internal, "");
    class_b24ad967ae66587ba612c3f37635bddb.def("set_observation", method_pointer_aa55c43f01ef52f5ba9860c09e507b24, "");
    class_b24ad967ae66587ba612c3f37635bddb.def("get_pi", method_pointer_5fee0b04790a50059bf2188ba003d545, pybind11::return_value_policy::copy, "");
    class_b24ad967ae66587ba612c3f37635bddb.def("set_pi", method_pointer_6d05ca4966d45471bdddd95a3e918b58, "");
    class_b24ad967ae66587ba612c3f37635bddb.def("posterior", method_pointer_2616482a64eb565298d5fdb46bb49adc, "");
    class_b24ad967ae66587ba612c3f37635bddb.def("assignment", method_pointer_724063f531c95b1ba918babb9d1aa3bb, "");
    class_b24ad967ae66587ba612c3f37635bddb.def("assignment", method_pointer_4024d714f8fb52dd94078c2bfa86c79f, "");
    class_b24ad967ae66587ba612c3f37635bddb.def("uncertainty", method_pointer_785f1ace27045787a383d04d4f9f1768, "");
    class_b24ad967ae66587ba612c3f37635bddb.def("uncertainty", method_pointer_ca4d594d4b315670963fd0d25021da4e, "");

}