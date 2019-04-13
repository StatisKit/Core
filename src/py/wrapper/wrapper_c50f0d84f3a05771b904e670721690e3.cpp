#include "_core.h"

namespace autowig
{
    typedef ::statiskit::MixtureDistribution< ::statiskit::CategoricalUnivariateDistribution > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::MixtureDistribution< ::statiskit::CategoricalUnivariateDistribution >::MixtureDistribution;

            typedef void  return_type_8ea34091aa9b5e9dba34828d5630578c;
            typedef ::statiskit::Index const & param_8ea34091aa9b5e9dba34828d5630578c_0_type;
            typedef struct ::statiskit::CategoricalUnivariateDistribution const & param_8ea34091aa9b5e9dba34828d5630578c_1_type;
            virtual return_type_8ea34091aa9b5e9dba34828d5630578c set_observation(param_8ea34091aa9b5e9dba34828d5630578c_0_type param_0, param_8ea34091aa9b5e9dba34828d5630578c_1_type param_1) override { PYBIND11_OVERLOAD(return_type_8ea34091aa9b5e9dba34828d5630578c, class_type, set_observation, param_0, param_1); };
            typedef unsigned int  return_type_fb2a3da83db75000af900ad657448394;
            virtual return_type_fb2a3da83db75000af900ad657448394 get_nb_parameters() const override { PYBIND11_OVERLOAD(return_type_fb2a3da83db75000af900ad657448394, class_type, get_nb_parameters, ); };
            typedef class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > >  return_type_11f39baffa14586ea386a3b3aea06b06;
            virtual return_type_11f39baffa14586ea386a3b3aea06b06 get_values() const override { PYBIND11_OVERLOAD_PURE(return_type_11f39baffa14586ea386a3b3aea06b06, class_type, get_values, ); };
            typedef double  return_type_ffbd4b9cbee7579795e0ce6676ff252f;
            typedef int const & param_ffbd4b9cbee7579795e0ce6676ff252f_0_type;
            virtual return_type_ffbd4b9cbee7579795e0ce6676ff252f pdf(param_ffbd4b9cbee7579795e0ce6676ff252f_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_ffbd4b9cbee7579795e0ce6676ff252f, class_type, pdf, param_0); };
            typedef double  return_type_d5f6ca2affb75fd78b00fcc370d678ff;
            typedef class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & param_d5f6ca2affb75fd78b00fcc370d678ff_0_type;
            virtual return_type_d5f6ca2affb75fd78b00fcc370d678ff pdf(param_d5f6ca2affb75fd78b00fcc370d678ff_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_d5f6ca2affb75fd78b00fcc370d678ff, class_type, pdf, param_0); };
            typedef double  return_type_bf87506bdef85834a040bd514141c40f;
            typedef class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & param_bf87506bdef85834a040bd514141c40f_0_type;
            virtual return_type_bf87506bdef85834a040bd514141c40f ldf(param_bf87506bdef85834a040bd514141c40f_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_bf87506bdef85834a040bd514141c40f, class_type, ldf, param_0); };
            typedef double  return_type_7126fc85886253648b85734c2202d73e;
            typedef struct ::statiskit::UnivariateEvent const * param_7126fc85886253648b85734c2202d73e_0_type;
            typedef bool const & param_7126fc85886253648b85734c2202d73e_1_type;
            virtual return_type_7126fc85886253648b85734c2202d73e probability(param_7126fc85886253648b85734c2202d73e_0_type param_0, param_7126fc85886253648b85734c2202d73e_1_type param_1) const override { PYBIND11_OVERLOAD(return_type_7126fc85886253648b85734c2202d73e, class_type, probability, param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  return_type_7043746e82585022aaf3d0d72cbf150b;
            virtual return_type_7043746e82585022aaf3d0d72cbf150b copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_7043746e82585022aaf3d0d72cbf150b, class_type, copy, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  return_type_320fcafd931d58898fc5be99cb1979fe;
            virtual return_type_320fcafd931d58898fc5be99cb1979fe simulate() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_320fcafd931d58898fc5be99cb1979fe, class_type, simulate, ); };
    };
}

::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_c5f40a8dc3a45f7a9f2e4992d09482d2)()const= &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::get_nb_states;
struct ::statiskit::CategoricalUnivariateDistribution const * (::statiskit::MixtureDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_e6e443b766365e1aa30ac4a64437c103)(::statiskit::Index const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::get_observation;
void  (::statiskit::MixtureDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_8ea34091aa9b5e9dba34828d5630578c)(::statiskit::Index const &, struct ::statiskit::CategoricalUnivariateDistribution const &)= &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::set_observation;
class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MixtureDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_4f40a04cbc17565da2cfd218b85422ff)()const= &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::get_pi;
void  (::statiskit::MixtureDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_860c46e189d75b39809c65736e9ee51b)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &)= &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::set_pi;
class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::MixtureDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_0f257c4ead19553d80953d264b42d0a2)(struct ::statiskit::UnivariateEvent const *, bool const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::posterior;
::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_a1548fa77f255e12a4edf7ac3a5b09e7)(struct ::statiskit::UnivariateEvent const *)const= &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::assignment;
class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >  (::statiskit::MixtureDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_b320496fd12c5add92498a633f348d75)(struct ::statiskit::UnivariateData const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::assignment;
double  (::statiskit::MixtureDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_b28920b77e07576fb2bc69eeea997f89)(struct ::statiskit::UnivariateEvent const *)const= &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::uncertainty;
double  (::statiskit::MixtureDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_836435df113e5999ba450ce8a6457d98)(struct ::statiskit::UnivariateData const &)const= &::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::uncertainty;

namespace autowig {
}

void wrapper_c50f0d84f3a05771b904e670721690e3(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >, autowig::Trampoline, autowig::HolderType< class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >::Type, struct ::statiskit::CategoricalUnivariateDistribution > class_c50f0d84f3a05771b904e670721690e3(module, "_MixtureDistribution_c50f0d84f3a05771b904e670721690e3", "");
    class_c50f0d84f3a05771b904e670721690e3.def(pybind11::init<  >());
    class_c50f0d84f3a05771b904e670721690e3.def("get_nb_states", method_pointer_c5f40a8dc3a45f7a9f2e4992d09482d2, "");
    class_c50f0d84f3a05771b904e670721690e3.def("get_observation", method_pointer_e6e443b766365e1aa30ac4a64437c103, pybind11::return_value_policy::reference_internal, "");
    class_c50f0d84f3a05771b904e670721690e3.def("set_observation", method_pointer_8ea34091aa9b5e9dba34828d5630578c, "");
    class_c50f0d84f3a05771b904e670721690e3.def("get_pi", method_pointer_4f40a04cbc17565da2cfd218b85422ff, pybind11::return_value_policy::copy, "");
    class_c50f0d84f3a05771b904e670721690e3.def("set_pi", method_pointer_860c46e189d75b39809c65736e9ee51b, "");
    class_c50f0d84f3a05771b904e670721690e3.def("posterior", method_pointer_0f257c4ead19553d80953d264b42d0a2, "");
    class_c50f0d84f3a05771b904e670721690e3.def("assignment", method_pointer_a1548fa77f255e12a4edf7ac3a5b09e7, "");
    class_c50f0d84f3a05771b904e670721690e3.def("assignment", method_pointer_b320496fd12c5add92498a633f348d75, "");
    class_c50f0d84f3a05771b904e670721690e3.def("uncertainty", method_pointer_b28920b77e07576fb2bc69eeea997f89, "");
    class_c50f0d84f3a05771b904e670721690e3.def("uncertainty", method_pointer_836435df113e5999ba450ce8a6457d98, "");

}