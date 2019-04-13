#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, ::statiskit::HierarchicalDistribution, struct ::statiskit::CategoricalUnivariateDistribution > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, ::statiskit::HierarchicalDistribution, struct ::statiskit::CategoricalUnivariateDistribution >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  return_type_99af24b40b3d53da8f2cb45b8bcb63cf;
            virtual return_type_99af24b40b3d53da8f2cb45b8bcb63cf copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_99af24b40b3d53da8f2cb45b8bcb63cf, class_type, copy, ); };
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
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  return_type_320fcafd931d58898fc5be99cb1979fe;
            virtual return_type_320fcafd931d58898fc5be99cb1979fe simulate() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_320fcafd931d58898fc5be99cb1979fe, class_type, simulate, ); };
            typedef unsigned int  return_type_0826ef63abcb5a8d83b7e3e2df48a620;
            virtual return_type_0826ef63abcb5a8d83b7e3e2df48a620 get_nb_parameters() const override { PYBIND11_OVERLOAD_PURE(return_type_0826ef63abcb5a8d83b7e3e2df48a620, class_type, get_nb_parameters, ); };
    };
}


namespace autowig {
}

void wrapper_dd64d489201652bd9b30c6b9ce866197(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::HierarchicalDistribution, struct ::statiskit::CategoricalUnivariateDistribution >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::HierarchicalDistribution, struct ::statiskit::CategoricalUnivariateDistribution > >::Type, struct ::statiskit::CategoricalUnivariateDistribution > class_dd64d489201652bd9b30c6b9ce866197(module, "_PolymorphicCopy_dd64d489201652bd9b30c6b9ce866197", "");
    class_dd64d489201652bd9b30c6b9ce866197.def(pybind11::init<  >());

}