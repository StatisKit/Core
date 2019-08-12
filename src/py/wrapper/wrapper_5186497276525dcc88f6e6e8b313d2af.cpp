#include "_core.h"

namespace autowig
{
    typedef ::statiskit::SlopeHeuristicSolver class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::SlopeHeuristicSolver::SlopeHeuristicSolver;


        public:
            typedef class ::std::unique_ptr< class ::statiskit::SlopeHeuristicSolver, struct ::std::default_delete< class ::statiskit::SlopeHeuristicSolver > >  return_type_c193a50a08b25a91813276a3c5fd5c33;
            virtual return_type_c193a50a08b25a91813276a3c5fd5c33 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_c193a50a08b25a91813276a3c5fd5c33, class_type, copy, ); };

        public:
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  return_type_d3975f18eb9652cea17c1ce078741a5e;
            typedef class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & param_d3975f18eb9652cea17c1ce078741a5e_0_type;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_d3975f18eb9652cea17c1ce078741a5e_1_type;
            virtual return_type_d3975f18eb9652cea17c1ce078741a5e operator()(param_d3975f18eb9652cea17c1ce078741a5e_0_type param_0, param_d3975f18eb9652cea17c1ce078741a5e_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_d3975f18eb9652cea17c1ce078741a5e, class_type, operator(), param_0, param_1); };
    };
}

class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::SlopeHeuristicSolver::*method_pointer_d3975f18eb9652cea17c1ce078741a5e)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &)const= &::statiskit::SlopeHeuristicSolver::operator();
enum ::statiskit::linalg::solver_type  (::statiskit::SlopeHeuristicSolver::*method_pointer_e2027001cec65258ab1966e1325b44c2)()const= &::statiskit::SlopeHeuristicSolver::get_solver;
void  (::statiskit::SlopeHeuristicSolver::*method_pointer_c07c88e004175e6dba65e49fe6738a69)(enum ::statiskit::linalg::solver_type const &)= &::statiskit::SlopeHeuristicSolver::set_solver;
class ::std::unique_ptr< class ::statiskit::SlopeHeuristicSolver, struct ::std::default_delete< class ::statiskit::SlopeHeuristicSolver > >  (::statiskit::SlopeHeuristicSolver::*method_pointer_c193a50a08b25a91813276a3c5fd5c33)()const= &::statiskit::SlopeHeuristicSolver::copy;

namespace autowig {
}

void wrapper_5186497276525dcc88f6e6e8b313d2af(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::SlopeHeuristicSolver, autowig::Trampoline, autowig::HolderType< class ::statiskit::SlopeHeuristicSolver >::Type > class_5186497276525dcc88f6e6e8b313d2af(module, "SlopeHeuristicSolver", "");
    class_5186497276525dcc88f6e6e8b313d2af.def(pybind11::init<  >());
    class_5186497276525dcc88f6e6e8b313d2af.def("__call__", method_pointer_d3975f18eb9652cea17c1ce078741a5e, "");
    class_5186497276525dcc88f6e6e8b313d2af.def("get_solver", method_pointer_e2027001cec65258ab1966e1325b44c2, "");
    class_5186497276525dcc88f6e6e8b313d2af.def("set_solver", method_pointer_c07c88e004175e6dba65e49fe6738a69, "");
    class_5186497276525dcc88f6e6e8b313d2af.def("copy", method_pointer_c193a50a08b25a91813276a3c5fd5c33, "");

}