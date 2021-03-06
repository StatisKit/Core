#include "_core.h"

namespace autowig
{
    typedef ::statiskit::CategoricalUnivariateDistribution class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::CategoricalUnivariateDistribution::CategoricalUnivariateDistribution;

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
            typedef unsigned int  return_type_0826ef63abcb5a8d83b7e3e2df48a620;
            virtual return_type_0826ef63abcb5a8d83b7e3e2df48a620 get_nb_parameters() const override { PYBIND11_OVERLOAD_PURE(return_type_0826ef63abcb5a8d83b7e3e2df48a620, class_type, get_nb_parameters, ); };
    };
}

double  (::statiskit::CategoricalUnivariateDistribution::*method_pointer_bf87506bdef85834a040bd514141c40f)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &)const= &::statiskit::CategoricalUnivariateDistribution::ldf;
double  (::statiskit::CategoricalUnivariateDistribution::*method_pointer_d5f6ca2affb75fd78b00fcc370d678ff)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &)const= &::statiskit::CategoricalUnivariateDistribution::pdf;
double  (::statiskit::CategoricalUnivariateDistribution::*method_pointer_ffbd4b9cbee7579795e0ce6676ff252f)(int const &)const= &::statiskit::CategoricalUnivariateDistribution::pdf;
class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > >  (::statiskit::CategoricalUnivariateDistribution::*method_pointer_11f39baffa14586ea386a3b3aea06b06)()const= &::statiskit::CategoricalUnivariateDistribution::get_values;

namespace autowig {
}

void wrapper_cf0415be3d965595a8486e9a8659c1a9(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::CategoricalUnivariateDistribution, autowig::Trampoline, autowig::HolderType< struct ::statiskit::CategoricalUnivariateDistribution >::Type, struct ::statiskit::UnivariateDistribution > class_cf0415be3d965595a8486e9a8659c1a9(module, "CategoricalUnivariateDistribution", "This virtual class CategoricalUnivariateDistribution represents the\ndistribution of a random categorical component $ X $. The support is a\nfinite set of categories (string) $ :raw-latex:`\\mathcal{X}` $ and we\nhave $ :raw-latex:`\\sum`\\_{s:raw-latex:`\\in `:raw-latex:`\\mathcal{S}`}\nP(S=s) = 1$.\n\n");
    class_cf0415be3d965595a8486e9a8659c1a9.def("ldf", method_pointer_bf87506bdef85834a040bd514141c40f, "Compute the log-probability of a value.\n\nLet $c :raw-latex:`\\in `:raw-latex:`\\mathcal{S}` $ denote the value, $\n:raw-latex:`\\ln `P:raw-latex:`\\left`(S = s:raw-latex:`\\right`) $.\n\n:Parameter:\n    `value` (:cpp:any:`::std::basic_string<` char, struct\n::std::char_traits< char >, class ::std::allocator< char > >) - The considered value.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_cf0415be3d965595a8486e9a8659c1a9.def("pdf", method_pointer_d5f6ca2affb75fd78b00fcc370d678ff, "Compute the probability of a value\n\nLet $c :raw-latex:`\\in `:raw-latex:`\\mathcal{S}` $ denote the value, $\nP:raw-latex:`\\left`(S = s:raw-latex:`\\right`) $.\n\n:Parameter:\n    `value` (:cpp:any:`::std::basic_string<` char, struct\n::std::char_traits< char >, class ::std::allocator< char > >) - The considered value.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_cf0415be3d965595a8486e9a8659c1a9.def("pdf", method_pointer_ffbd4b9cbee7579795e0ce6676ff252f, "Compute the probability of a value\n\nLet $c :raw-latex:`\\in `:raw-latex:`\\mathcal{S}` $ denote the value, $\nP:raw-latex:`\\left`(S = s:raw-latex:`\\right`) $.\n\n:Parameter:\n    `position` (:cpp:any:`int`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_cf0415be3d965595a8486e9a8659c1a9.def("get_values", method_pointer_11f39baffa14586ea386a3b3aea06b06, "Get the set of categories (string) $ :raw-latex:`\\mathcal{S}` $.\n\n:Return Type:\n    :cpp:any:`::std::set<` class ::std::basic_string< char,\n    struct ::std::char_traits< char >, class ::std::allocator< char > >,\n    struct ::std::less< class ::std::basic_string< char, struct\n    ::std::char_traits< char >, class ::std::allocator< char > > >, class\n    ::std::allocator< class ::std::basic_string< char, struct\n    ::std::char_traits< char >, class ::std::allocator< char > > > >\n\n");

}