#include "_core.h"


namespace autowig {
}

void wrapper_9f08dae44aa3561686bc0ef53e82d042(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::NominalDistribution, autowig::HolderType< struct ::statiskit::NominalDistribution >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::NominalDistribution, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > > class_9f08dae44aa3561686bc0ef53e82d042(module, "NominalDistribution", "This class NominalDistribution represents the distribution of a random\nnominal component $ S$. The support is a finite non-ordered set of\ncategories (string) $ :raw-latex:`\\mathcal{S}` $ and we have $\n:raw-latex:`\\sum`\\_{s:raw-latex:`\\in `:raw-latex:`\\mathcal{S}`} P(S=s) =\n1$.\n\n");
    class_9f08dae44aa3561686bc0ef53e82d042.def(pybind11::init< class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const & >());
    class_9f08dae44aa3561686bc0ef53e82d042.def(pybind11::init< class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >());
    class_9f08dae44aa3561686bc0ef53e82d042.def(pybind11::init< struct ::statiskit::NominalDistribution const & >());

}