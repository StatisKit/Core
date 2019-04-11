#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >::PolymorphicCopy;


        public:
            typedef void  return_type_8ea34091aa9b5e9dba34828d5630578c;
            typedef ::statiskit::Index const & param_8ea34091aa9b5e9dba34828d5630578c_0_type;
            typedef struct ::statiskit::CategoricalUnivariateDistribution const & param_8ea34091aa9b5e9dba34828d5630578c_1_type;
            virtual return_type_8ea34091aa9b5e9dba34828d5630578c set_observation(param_8ea34091aa9b5e9dba34828d5630578c_0_type param_0, param_8ea34091aa9b5e9dba34828d5630578c_1_type param_1) override { PYBIND11_OVERLOAD(return_type_8ea34091aa9b5e9dba34828d5630578c, class_type, set_observation, param_0, param_1); };

        public:
            typedef class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > >  return_type_11f39baffa14586ea386a3b3aea06b06;
            virtual return_type_11f39baffa14586ea386a3b3aea06b06 get_values() const override { PYBIND11_OVERLOAD_PURE(return_type_11f39baffa14586ea386a3b3aea06b06, class_type, get_values, ); };

        public:
            typedef double  return_type_ffbd4b9cbee7579795e0ce6676ff252f;
            typedef int const & param_ffbd4b9cbee7579795e0ce6676ff252f_0_type;
            virtual return_type_ffbd4b9cbee7579795e0ce6676ff252f pdf(param_ffbd4b9cbee7579795e0ce6676ff252f_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_ffbd4b9cbee7579795e0ce6676ff252f, class_type, pdf, param_0); };
    };
}


namespace autowig {
}

void wrapper_74f6b70412845069a8b8594df02c99e5(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > >::Type, struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > class_74f6b70412845069a8b8594df02c99e5(module, "_PolymorphicCopy_74f6b70412845069a8b8594df02c99e5", "");
    class_74f6b70412845069a8b8594df02c99e5.def(pybind11::init<  >());

}