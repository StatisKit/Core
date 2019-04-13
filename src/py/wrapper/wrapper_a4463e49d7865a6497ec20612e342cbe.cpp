#include "_core.h"

namespace autowig
{
    typedef ::statiskit::UnivariateFrequencyDistribution< ::statiskit::CategoricalUnivariateDistribution > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::UnivariateFrequencyDistribution< ::statiskit::CategoricalUnivariateDistribution >::UnivariateFrequencyDistribution;

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
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  return_type_7043746e82585022aaf3d0d72cbf150b;
            virtual return_type_7043746e82585022aaf3d0d72cbf150b copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_7043746e82585022aaf3d0d72cbf150b, class_type, copy, ); };
    };
}

class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::UnivariateFrequencyDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_85fc76a68b3c58e3b87ac05d423a43f9)()const= &::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::get_pi;
void  (::statiskit::UnivariateFrequencyDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_6583c7196adb5fbb80c8a38e716c6dff)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &)= &::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::set_pi;

namespace autowig {
}

void wrapper_a4463e49d7865a6497ec20612e342cbe(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution >, autowig::Trampoline, autowig::HolderType< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >::Type, struct ::statiskit::CategoricalUnivariateDistribution > class_a4463e49d7865a6497ec20612e342cbe(module, "_UnivariateFrequencyDistribution_a4463e49d7865a6497ec20612e342cbe", "");
    class_a4463e49d7865a6497ec20612e342cbe.def(pybind11::init<  >());
    class_a4463e49d7865a6497ec20612e342cbe.def("get_pi", method_pointer_85fc76a68b3c58e3b87ac05d423a43f9, pybind11::return_value_policy::copy, "");
    class_a4463e49d7865a6497ec20612e342cbe.def("set_pi", method_pointer_6583c7196adb5fbb80c8a38e716c6dff, "");

}