#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::BinaryDistribution, struct ::statiskit::CategoricalUnivariateDistribution > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::BinaryDistribution, struct ::statiskit::CategoricalUnivariateDistribution >::PolymorphicCopy;


        public:
            typedef class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > >  return_type_11f39baffa14586ea386a3b3aea06b06;
            virtual return_type_11f39baffa14586ea386a3b3aea06b06 get_values() const override { PYBIND11_OVERLOAD_PURE(return_type_11f39baffa14586ea386a3b3aea06b06, class_type, get_values, ); };

        public:
            typedef double  return_type_ffbd4b9cbee7579795e0ce6676ff252f;
            typedef int const & param_ffbd4b9cbee7579795e0ce6676ff252f_0_type;
            virtual return_type_ffbd4b9cbee7579795e0ce6676ff252f pdf(param_ffbd4b9cbee7579795e0ce6676ff252f_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_ffbd4b9cbee7579795e0ce6676ff252f, class_type, pdf, param_0); };

        public:
            typedef double  return_type_d5f6ca2affb75fd78b00fcc370d678ff;
            typedef class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & param_d5f6ca2affb75fd78b00fcc370d678ff_0_type;
            virtual return_type_d5f6ca2affb75fd78b00fcc370d678ff pdf(param_d5f6ca2affb75fd78b00fcc370d678ff_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_d5f6ca2affb75fd78b00fcc370d678ff, class_type, pdf, param_0); };

        public:
            typedef double  return_type_bf87506bdef85834a040bd514141c40f;
            typedef class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & param_bf87506bdef85834a040bd514141c40f_0_type;
            virtual return_type_bf87506bdef85834a040bd514141c40f ldf(param_bf87506bdef85834a040bd514141c40f_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_bf87506bdef85834a040bd514141c40f, class_type, ldf, param_0); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  return_type_320fcafd931d58898fc5be99cb1979fe;
            virtual return_type_320fcafd931d58898fc5be99cb1979fe simulate() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_320fcafd931d58898fc5be99cb1979fe, class_type, simulate, ); };

        public:
            typedef unsigned int  return_type_0826ef63abcb5a8d83b7e3e2df48a620;
            virtual return_type_0826ef63abcb5a8d83b7e3e2df48a620 get_nb_parameters() const override { PYBIND11_OVERLOAD_PURE(return_type_0826ef63abcb5a8d83b7e3e2df48a620, class_type, get_nb_parameters, ); };
    };
}


namespace autowig {
}

void wrapper_e3970afe332b54108a4040278f775008(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::BinaryDistribution, struct ::statiskit::CategoricalUnivariateDistribution >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::BinaryDistribution, struct ::statiskit::CategoricalUnivariateDistribution > >::Type, struct ::statiskit::CategoricalUnivariateDistribution > class_e3970afe332b54108a4040278f775008(module, "_PolymorphicCopy_e3970afe332b54108a4040278f775008", "");
    class_e3970afe332b54108a4040278f775008.def(pybind11::init<  >());

}