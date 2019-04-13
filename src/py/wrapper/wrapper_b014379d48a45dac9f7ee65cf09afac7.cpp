#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::NominalDistribution, ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::NominalDistribution, ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  return_type_0e4345f3571359f58c41cadd98747428;
            virtual return_type_0e4345f3571359f58c41cadd98747428 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_0e4345f3571359f58c41cadd98747428, class_type, copy, ); };
            typedef class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > >  return_type_34543baf438f5f85a5ce959ba809d4d0;
            virtual return_type_34543baf438f5f85a5ce959ba809d4d0 get_values() const override { PYBIND11_OVERLOAD(return_type_34543baf438f5f85a5ce959ba809d4d0, class_type, get_values, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  return_type_83255d2ac98452d7872783b5ce4dbdea;
            virtual return_type_83255d2ac98452d7872783b5ce4dbdea simulate() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_83255d2ac98452d7872783b5ce4dbdea, class_type, simulate, ); };
            typedef double  return_type_8f98ecf0fb715e5ca3d22968f6e406f2;
            typedef class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & param_8f98ecf0fb715e5ca3d22968f6e406f2_0_type;
            virtual return_type_8f98ecf0fb715e5ca3d22968f6e406f2 pdf(param_8f98ecf0fb715e5ca3d22968f6e406f2_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_8f98ecf0fb715e5ca3d22968f6e406f2, class_type, pdf, param_0); };
            typedef double  return_type_abe024e04a2f5e8d8680d516ec57220e;
            typedef class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & param_abe024e04a2f5e8d8680d516ec57220e_0_type;
            virtual return_type_abe024e04a2f5e8d8680d516ec57220e ldf(param_abe024e04a2f5e8d8680d516ec57220e_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_abe024e04a2f5e8d8680d516ec57220e, class_type, ldf, param_0); };
            typedef unsigned int  return_type_138e9caff8345e2baa6d1669f52b82b0;
            virtual return_type_138e9caff8345e2baa6d1669f52b82b0 get_nb_parameters() const override { PYBIND11_OVERLOAD(return_type_138e9caff8345e2baa6d1669f52b82b0, class_type, get_nb_parameters, ); };
            typedef double  return_type_ffbd4b9cbee7579795e0ce6676ff252f;
            typedef int const & param_ffbd4b9cbee7579795e0ce6676ff252f_0_type;
            virtual return_type_ffbd4b9cbee7579795e0ce6676ff252f pdf(param_ffbd4b9cbee7579795e0ce6676ff252f_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_ffbd4b9cbee7579795e0ce6676ff252f, class_type, pdf, param_0); };
            typedef double  return_type_7126fc85886253648b85734c2202d73e;
            typedef struct ::statiskit::UnivariateEvent const * param_7126fc85886253648b85734c2202d73e_0_type;
            typedef bool const & param_7126fc85886253648b85734c2202d73e_1_type;
            virtual return_type_7126fc85886253648b85734c2202d73e probability(param_7126fc85886253648b85734c2202d73e_0_type param_0, param_7126fc85886253648b85734c2202d73e_1_type param_1) const override { PYBIND11_OVERLOAD(return_type_7126fc85886253648b85734c2202d73e, class_type, probability, param_0, param_1); };
    };
}


namespace autowig {
}

void wrapper_b014379d48a45dac9f7ee65cf09afac7(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::NominalDistribution, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::NominalDistribution, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > >::Type, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > class_b014379d48a45dac9f7ee65cf09afac7(module, "_PolymorphicCopy_b014379d48a45dac9f7ee65cf09afac7", "");
    class_b014379d48a45dac9f7ee65cf09afac7.def(pybind11::init<  >());

}