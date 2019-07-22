#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::SlopeHeuristicMaximalSelector, struct ::statiskit::SlopeHeuristicSelector > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::SlopeHeuristicMaximalSelector, struct ::statiskit::SlopeHeuristicSelector >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::SlopeHeuristicSelector, struct ::std::default_delete< struct ::statiskit::SlopeHeuristicSelector > >  return_type_9c62bc9b42a05be5983083c5bdc5fc5c;
            virtual return_type_9c62bc9b42a05be5983083c5bdc5fc5c copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_9c62bc9b42a05be5983083c5bdc5fc5c, class_type, copy, ); };
            typedef ::statiskit::Index  return_type_df1ee527da8655d4b2d9d5bb1e30ff8e;
            typedef class ::statiskit::SlopeHeuristic const & param_df1ee527da8655d4b2d9d5bb1e30ff8e_0_type;
            virtual return_type_df1ee527da8655d4b2d9d5bb1e30ff8e operator()(param_df1ee527da8655d4b2d9d5bb1e30ff8e_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_df1ee527da8655d4b2d9d5bb1e30ff8e, class_type, operator(), param_0); };
    };
}


namespace autowig {
}

void wrapper_259bbb897cee510787d813a9c7525d6f(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::SlopeHeuristicMaximalSelector, struct ::statiskit::SlopeHeuristicSelector >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SlopeHeuristicMaximalSelector, struct ::statiskit::SlopeHeuristicSelector > >::Type, struct ::statiskit::SlopeHeuristicSelector > class_259bbb897cee510787d813a9c7525d6f(module, "_PolymorphicCopy_259bbb897cee510787d813a9c7525d6f", "");
    class_259bbb897cee510787d813a9c7525d6f.def(pybind11::init<  >());

}