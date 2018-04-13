#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::OrdinalDistribution const volatile * get_pointer<class ::statiskit::OrdinalDistribution const volatile >(class ::statiskit::OrdinalDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8efea02ccdc156c4aa5aae37b04b810a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double  (::statiskit::OrdinalDistribution::*method_pointer_1febf156dc75517cbc2a17e81047eb74)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) const = &::statiskit::OrdinalDistribution::pdf;
    double  (::statiskit::OrdinalDistribution::*method_pointer_0eee2c56f57953309cda5d579988216b)(int const &) const = &::statiskit::OrdinalDistribution::pdf;
    double  (::statiskit::OrdinalDistribution::*method_pointer_a54dd636c7c55391bfd812f5d7245a30)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) const = &::statiskit::OrdinalDistribution::cdf;
    class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >  (::statiskit::OrdinalDistribution::*method_pointer_3a158202c1d255b288e7551a54d7da77)(double const &) const = &::statiskit::OrdinalDistribution::quantile;
    class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > > const & (::statiskit::OrdinalDistribution::*method_pointer_62cba730d5e3581397b8ef655cd24ed2)() const = &::statiskit::OrdinalDistribution::get_rank;
    void  (::statiskit::OrdinalDistribution::*method_pointer_db526d174fc9507eb1d122f82bc9993d)(class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > > const &) = &::statiskit::OrdinalDistribution::set_rank;
    class ::std::vector< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > >  (::statiskit::OrdinalDistribution::*method_pointer_cd2fd67328055e57857d50fcf8a78fc0)() const = &::statiskit::OrdinalDistribution::get_ordered_values;
    void  (::statiskit::OrdinalDistribution::*method_pointer_da2eb19c0a0b518eb3ab687da2980eb0)(class ::std::vector< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const &) = &::statiskit::OrdinalDistribution::set_ordered_values;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::OrdinalDistribution::*method_pointer_5d709a6893565f3d822c0275a54e9c95)() const = &::statiskit::OrdinalDistribution::get_ordered_pi;
    void  (::statiskit::OrdinalDistribution::*method_pointer_dc68519481d05eae806de88244d983ca)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::OrdinalDistribution::set_ordered_pi;
    boost::python::class_< class ::statiskit::OrdinalDistribution, autowig::Held< class ::statiskit::OrdinalDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::OrdinalDistribution, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > > > class_8efea02ccdc156c4aa5aae37b04b810a("OrdinalDistribution", "This class OrdinalDistribution represents the distribution of a random\nordinal component $ S$. The support is a finite ordered set of\ncategories (string) $ :raw-latex:`\\mathcal{S}`\n=:raw-latex:`\\left`:raw-latex:`\\lbrace `s\\_1, :raw-latex:`\\ldots`, s\\_J\n:raw-latex:`\\right`:raw-latex:`\\rbrace `$ and we have $\n:raw-latex:`\\sum`\\_{j=1}^J P(S=s\\_j) = 1 $.\n\n", boost::python::no_init);
    class_8efea02ccdc156c4aa5aae37b04b810a.def(boost::python::init< class ::std::vector< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const & >(""));
    class_8efea02ccdc156c4aa5aae37b04b810a.def(boost::python::init< class ::std::vector< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_8efea02ccdc156c4aa5aae37b04b810a.def(boost::python::init< class ::statiskit::OrdinalDistribution const & >(""));
    class_8efea02ccdc156c4aa5aae37b04b810a.def("pdf", method_pointer_1febf156dc75517cbc2a17e81047eb74, "");
    class_8efea02ccdc156c4aa5aae37b04b810a.def("pdf", method_pointer_0eee2c56f57953309cda5d579988216b, "");
    class_8efea02ccdc156c4aa5aae37b04b810a.def("cdf", method_pointer_a54dd636c7c55391bfd812f5d7245a30, "Compute the cumulative probability of a category\n\n-  :raw-latex:`\\details `Let $s\\_j\n   :raw-latex:`\\in `:raw-latex:`\\mathcal{S}` $ denote the category\n-  ::\n\n           $$\n\n-  ::\n\n               P\\left(S \\leq s_j\\right)  =   \\sum_{i \\leq j} P\\left(S = s_i\\right).\n\n-  ::\n\n           $$\n\n-  :raw-latex:`\\param `value The considered category.\n\n:Parameter:\n    `value` (:cpp:any:`::std::basic_string<` char, struct\n::std::char\\_traits< char >, class ::std::allocator< char > >) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_8efea02ccdc156c4aa5aae37b04b810a.def("quantile", method_pointer_3a158202c1d255b288e7551a54d7da77, "Compute the quantile of a probability $ p :raw-latex:`\\in `(0,1) $. This\nis the category $ s\\_j :raw-latex:`\\in `:raw-latex:`\\mathcal{S}` $ such\nthat $ P(S :raw-latex:`\\leq `s\\_j) :raw-latex:`\\leq `p < P(N\n:raw-latex:`\\leq `s\\_{j+1}) $. \\* :raw-latex:`\\param `p The considered\nprobability p.\n\n:Parameter:\n    `p` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`::std::basic_string<` char, struct\n    ::std::char\\_traits< char >, class ::std::allocator< char > >\n\n");
    class_8efea02ccdc156c4aa5aae37b04b810a.def("get_rank", method_pointer_62cba730d5e3581397b8ef655cd24ed2, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the rank of each category in lexicographic order.\n\n:Return Type:\n    :cpp:any:`::std::vector<` unsigned long int, class\n    ::std::allocator< unsigned long int > >\n\n");
    class_8efea02ccdc156c4aa5aae37b04b810a.def("set_rank", method_pointer_db526d174fc9507eb1d122f82bc9993d, "Set the rank of each category in lexicographic order.\n\n:Parameter:\n    `rank` (:cpp:any:`::std::vector<` unsigned long int, class\n::std::allocator< unsigned long int > >) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_8efea02ccdc156c4aa5aae37b04b810a.def("get_ordered_values", method_pointer_cd2fd67328055e57857d50fcf8a78fc0, "Get the vector of ordered categories.\n\n:Return Type:\n    :cpp:any:`::std::vector<` class ::std::basic\\_string<\n    char, struct ::std::char\\_traits< char >, class ::std::allocator< char >\n    >, class ::std::allocator< class ::std::basic\\_string< char, struct\n    ::std::char\\_traits< char >, class ::std::allocator< char > > > >\n\n");
    class_8efea02ccdc156c4aa5aae37b04b810a.def("set_ordered_values", method_pointer_da2eb19c0a0b518eb3ab687da2980eb0, "set the vector of ordered categories.\n\n:Parameter:\n    `ordered_values` (:cpp:any:`::std::vector<` class ::std::basic\\_string<\nchar, struct ::std::char\\_traits< char >, class ::std::allocator< char >\n>, class ::std::allocator< class ::std::basic\\_string< char, struct\n::std::char\\_traits< char >, class ::std::allocator< char > > > >) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_8efea02ccdc156c4aa5aae37b04b810a.def("get_ordered_pi", method_pointer_5d709a6893565f3d822c0275a54e9c95, "Get the probabilities vector of ordered categories.\n\n:Return Type:\n    :cpp:any:`::Eigen::Matrix<` double, -1, 1, 0, -1, 1 >\n\n");
    class_8efea02ccdc156c4aa5aae37b04b810a.def("set_ordered_pi", method_pointer_dc68519481d05eae806de88244d983ca, "Set the probabilities vector of ordered categories.\n\n:Parameter:\n    `ordered_pi` (:cpp:any:`::Eigen::Matrix<` double, -1, 1, 0, -1, 1 >) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

    if(autowig::Held< class ::statiskit::OrdinalDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OrdinalDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::OrdinalDistribution, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > >::Type >();
    }

}