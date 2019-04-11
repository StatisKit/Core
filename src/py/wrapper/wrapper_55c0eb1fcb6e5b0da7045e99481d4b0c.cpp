#include "_core.h"

namespace autowig
{
    typedef ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::UnivariateMixtureDistribution;


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

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  return_type_7043746e82585022aaf3d0d72cbf150b;
            virtual return_type_7043746e82585022aaf3d0d72cbf150b copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_7043746e82585022aaf3d0d72cbf150b, class_type, copy, ); };
    };
}


namespace autowig {
}

void wrapper_55c0eb1fcb6e5b0da7045e99481d4b0c(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >::Type, class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > class_55c0eb1fcb6e5b0da7045e99481d4b0c(module, "_UnivariateMixtureDistribution_55c0eb1fcb6e5b0da7045e99481d4b0c", "");
    class_55c0eb1fcb6e5b0da7045e99481d4b0c.def(pybind11::init<  >());

}