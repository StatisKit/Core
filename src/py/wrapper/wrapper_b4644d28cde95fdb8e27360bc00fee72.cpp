#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::SlopeHeuristicOLSSolver, ::statiskit::SlopeHeuristicSolver > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::SlopeHeuristicOLSSolver, ::statiskit::SlopeHeuristicSolver >::PolymorphicCopy;


        public:
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  return_type_d3975f18eb9652cea17c1ce078741a5e;
            typedef class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & param_d3975f18eb9652cea17c1ce078741a5e_0_type;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_d3975f18eb9652cea17c1ce078741a5e_1_type;
            virtual return_type_d3975f18eb9652cea17c1ce078741a5e operator()(param_d3975f18eb9652cea17c1ce078741a5e_0_type param_0, param_d3975f18eb9652cea17c1ce078741a5e_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_d3975f18eb9652cea17c1ce078741a5e, class_type, operator(), param_0, param_1); };
    };
}


namespace autowig {
}

void wrapper_b4644d28cde95fdb8e27360bc00fee72(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::SlopeHeuristicOLSSolver, class ::statiskit::SlopeHeuristicSolver >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SlopeHeuristicOLSSolver, class ::statiskit::SlopeHeuristicSolver > >::Type, class ::statiskit::SlopeHeuristicSolver > class_b4644d28cde95fdb8e27360bc00fee72(module, "_PolymorphicCopy_b4644d28cde95fdb8e27360bc00fee72", "");
    class_b4644d28cde95fdb8e27360bc00fee72.def(pybind11::init<  >());

}