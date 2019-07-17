#include "_core.h"

namespace autowig
{
    typedef ::statiskit::UnivariateFrequencyDistribution< ::statiskit::CategoricalUnivariateDistribution > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::UnivariateFrequencyDistribution< ::statiskit::CategoricalUnivariateDistribution >::UnivariateFrequencyDistribution;


        public:
            typedef double  return_type_ffbd4b9cbee7579795e0ce6676ff252f;
            typedef int const & param_ffbd4b9cbee7579795e0ce6676ff252f_0_type;
            virtual return_type_ffbd4b9cbee7579795e0ce6676ff252f pdf(param_ffbd4b9cbee7579795e0ce6676ff252f_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_ffbd4b9cbee7579795e0ce6676ff252f, class_type, pdf, param_0); };

        public:
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