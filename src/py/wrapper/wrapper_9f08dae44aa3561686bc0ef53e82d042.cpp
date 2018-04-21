#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::NominalDistribution const volatile * get_pointer<struct ::statiskit::NominalDistribution const volatile >(struct ::statiskit::NominalDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9f08dae44aa3561686bc0ef53e82d042()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::NominalDistribution, autowig::Held< struct ::statiskit::NominalDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::NominalDistribution, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > > > class_9f08dae44aa3561686bc0ef53e82d042("NominalDistribution", "This class NominalDistribution represents the distribution of a random\nnominal component $ S$. The support is a finite non-ordered set of\ncategories (string) $ :raw-latex:`\\mathcal{S}` $ and we have $\n:raw-latex:`\\sum`\\_{s:raw-latex:`\\in `:raw-latex:`\\mathcal{S}`} P(S=s) =\n1$.\n\n", boost::python::no_init);
    class_9f08dae44aa3561686bc0ef53e82d042.def(boost::python::init< class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const & >(""));
    class_9f08dae44aa3561686bc0ef53e82d042.def(boost::python::init< class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_9f08dae44aa3561686bc0ef53e82d042.def(boost::python::init< struct ::statiskit::NominalDistribution const & >(""));

    if(autowig::Held< struct ::statiskit::NominalDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::NominalDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::NominalDistribution, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > >::Type >();
    }

}