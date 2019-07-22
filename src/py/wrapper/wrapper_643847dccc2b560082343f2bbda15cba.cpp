#include "_core.h"

namespace autowig
{
    typedef ::statiskit::SlopeHeuristicIWLSSolver class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::SlopeHeuristicIWLSSolver::SlopeHeuristicIWLSSolver;

            typedef void  return_type_5339015f18e1581c8a543e2e79fa15bc;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_5339015f18e1581c8a543e2e79fa15bc_0_type;
            typedef class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > & param_5339015f18e1581c8a543e2e79fa15bc_1_type;
            typedef class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & param_5339015f18e1581c8a543e2e79fa15bc_2_type;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_5339015f18e1581c8a543e2e79fa15bc_3_type;
            virtual return_type_5339015f18e1581c8a543e2e79fa15bc update(param_5339015f18e1581c8a543e2e79fa15bc_0_type param_0, param_5339015f18e1581c8a543e2e79fa15bc_1_type param_1, param_5339015f18e1581c8a543e2e79fa15bc_2_type param_2, param_5339015f18e1581c8a543e2e79fa15bc_3_type param_3) const override { PYBIND11_OVERLOAD_PURE(return_type_5339015f18e1581c8a543e2e79fa15bc, class_type, update, param_0, param_1, param_2, param_3); };
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  return_type_c817adc5fda95841b7424a9157dc057f;
            typedef class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & param_c817adc5fda95841b7424a9157dc057f_0_type;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_c817adc5fda95841b7424a9157dc057f_1_type;
            virtual return_type_c817adc5fda95841b7424a9157dc057f operator()(param_c817adc5fda95841b7424a9157dc057f_0_type param_0, param_c817adc5fda95841b7424a9157dc057f_1_type param_1) const override { PYBIND11_OVERLOAD(return_type_c817adc5fda95841b7424a9157dc057f, class_type, operator(), param_0, param_1); };
            typedef class ::std::unique_ptr< class ::statiskit::SlopeHeuristicSolver, struct ::std::default_delete< class ::statiskit::SlopeHeuristicSolver > >  return_type_c193a50a08b25a91813276a3c5fd5c33;
            virtual return_type_c193a50a08b25a91813276a3c5fd5c33 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_c193a50a08b25a91813276a3c5fd5c33, class_type, copy, ); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::update;
    };
}

double const & (::statiskit::SlopeHeuristicIWLSSolver::*method_pointer_fcfe6c59133d5c86b8335573f0d3ef43)()const= &::statiskit::SlopeHeuristicIWLSSolver::get_epsilon;
void  (::statiskit::SlopeHeuristicIWLSSolver::*method_pointer_6e6f1365e441528193f7f948e6b69516)(double const &)= &::statiskit::SlopeHeuristicIWLSSolver::set_epsilon;
unsigned int const & (::statiskit::SlopeHeuristicIWLSSolver::*method_pointer_9c57653b340c572ebca4d6870b9a5929)()const= &::statiskit::SlopeHeuristicIWLSSolver::get_maxits;
void  (::statiskit::SlopeHeuristicIWLSSolver::*method_pointer_608f3fb772695ef394c55dd88cdfa408)(unsigned int const &)= &::statiskit::SlopeHeuristicIWLSSolver::set_maxits;

namespace autowig {
}

void wrapper_643847dccc2b560082343f2bbda15cba(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::SlopeHeuristicIWLSSolver, autowig::Trampoline, autowig::HolderType< class ::statiskit::SlopeHeuristicIWLSSolver >::Type, class ::statiskit::SlopeHeuristicSolver > class_643847dccc2b560082343f2bbda15cba(module, "SlopeHeuristicIWLSSolver", "");
    class_643847dccc2b560082343f2bbda15cba.def(pybind11::init<  >());
    class_643847dccc2b560082343f2bbda15cba.def("get_epsilon", method_pointer_fcfe6c59133d5c86b8335573f0d3ef43, pybind11::return_value_policy::copy, "");
    class_643847dccc2b560082343f2bbda15cba.def("set_epsilon", method_pointer_6e6f1365e441528193f7f948e6b69516, "");
    class_643847dccc2b560082343f2bbda15cba.def("get_maxits", method_pointer_9c57653b340c572ebca4d6870b9a5929, pybind11::return_value_policy::copy, "");
    class_643847dccc2b560082343f2bbda15cba.def("set_maxits", method_pointer_608f3fb772695ef394c55dd88cdfa408, "");
    class_643847dccc2b560082343f2bbda15cba.def("_update", static_cast< void  (::statiskit::SlopeHeuristicIWLSSolver::*) (class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > &, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const >(&autowig::Publicist::update), "");

}