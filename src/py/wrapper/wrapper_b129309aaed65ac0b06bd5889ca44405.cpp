#include "_core.h"

namespace autowig
{
    typedef ::statiskit::Optimization< ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::Optimization< ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::Optimization;


        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >  return_type_97c0dcb4b9a55407beb1affee63e5b47;
            virtual return_type_97c0dcb4b9a55407beb1affee63e5b47 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_97c0dcb4b9a55407beb1affee63e5b47, class_type, copy, ); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  return_type_163f6bff094c5658b1290a9b2b3a9d26;
            typedef ::statiskit::UnivariateDistributionEstimation::data_type const & param_163f6bff094c5658b1290a9b2b3a9d26_0_type;
            typedef bool const & param_163f6bff094c5658b1290a9b2b3a9d26_1_type;
            virtual return_type_163f6bff094c5658b1290a9b2b3a9d26 operator()(param_163f6bff094c5658b1290a9b2b3a9d26_0_type param_0, param_163f6bff094c5658b1290a9b2b3a9d26_1_type param_1) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_163f6bff094c5658b1290a9b2b3a9d26, class_type, operator(), param_0, param_1); };
    };

    class Publicist : public class_type
    {
        public:
    };
}

double const & (::statiskit::Optimization< ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::*method_pointer_666f7dc552cd5d648c81f79b98fbf641)()const= &::statiskit::Optimization< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::get_mindiff;
void  (::statiskit::Optimization< ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::*method_pointer_9ae59d8d8dbc5bf19bc5b2c0fb0b1c94)(double const &)= &::statiskit::Optimization< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::set_mindiff;
unsigned int  (::statiskit::Optimization< ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::*method_pointer_1b74e45326c556f9ba3ca66870707899)()const= &::statiskit::Optimization< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::get_minits;
void  (::statiskit::Optimization< ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::*method_pointer_bef75f81b31b5e25ba1f1e1729568f90)(unsigned int const &)= &::statiskit::Optimization< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::set_minits;
unsigned int  (::statiskit::Optimization< ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::*method_pointer_4257d4cad6f15438911f7366b56ca1f4)()const= &::statiskit::Optimization< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::get_maxits;
void  (::statiskit::Optimization< ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::*method_pointer_f82c3bc1dc025e33833e462f3c4acf0a)(unsigned int const &)= &::statiskit::Optimization< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::set_maxits;

namespace autowig {
}

void wrapper_b129309aaed65ac0b06bd5889ca44405(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Optimization< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >, autowig::Trampoline, autowig::HolderType< class ::statiskit::Optimization< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > >::Type, struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > class_b129309aaed65ac0b06bd5889ca44405(module, "_Optimization_b129309aaed65ac0b06bd5889ca44405", "");
    class_b129309aaed65ac0b06bd5889ca44405.def(pybind11::init<  >());
    class_b129309aaed65ac0b06bd5889ca44405.def("get_mindiff", method_pointer_666f7dc552cd5d648c81f79b98fbf641, pybind11::return_value_policy::copy, "");
    class_b129309aaed65ac0b06bd5889ca44405.def("set_mindiff", method_pointer_9ae59d8d8dbc5bf19bc5b2c0fb0b1c94, "");
    class_b129309aaed65ac0b06bd5889ca44405.def("get_minits", method_pointer_1b74e45326c556f9ba3ca66870707899, "");
    class_b129309aaed65ac0b06bd5889ca44405.def("set_minits", method_pointer_bef75f81b31b5e25ba1f1e1729568f90, "");
    class_b129309aaed65ac0b06bd5889ca44405.def("get_maxits", method_pointer_4257d4cad6f15438911f7366b56ca1f4, "");
    class_b129309aaed65ac0b06bd5889ca44405.def("set_maxits", method_pointer_f82c3bc1dc025e33833e462f3c4acf0a, "");

}