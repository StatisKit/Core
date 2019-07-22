#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::SlopeHeuristicSuperiorSelector, struct ::statiskit::SlopeHeuristicSelector > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::SlopeHeuristicSuperiorSelector, struct ::statiskit::SlopeHeuristicSelector >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::SlopeHeuristicSelector, struct ::std::default_delete< struct ::statiskit::SlopeHeuristicSelector > >  return_type_4964b63570205b63b4fb2d0b515c4c1c;
            virtual return_type_4964b63570205b63b4fb2d0b515c4c1c copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_4964b63570205b63b4fb2d0b515c4c1c, class_type, copy, ); };
            typedef ::statiskit::Index  return_type_df1ee527da8655d4b2d9d5bb1e30ff8e;
            typedef class ::statiskit::SlopeHeuristic const & param_df1ee527da8655d4b2d9d5bb1e30ff8e_0_type;
            virtual return_type_df1ee527da8655d4b2d9d5bb1e30ff8e operator()(param_df1ee527da8655d4b2d9d5bb1e30ff8e_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_df1ee527da8655d4b2d9d5bb1e30ff8e, class_type, operator(), param_0); };
    };
}


namespace autowig {
}

void wrapper_63f5048eedae564391cd268a0107428f(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::SlopeHeuristicSuperiorSelector, struct ::statiskit::SlopeHeuristicSelector >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::SlopeHeuristicSuperiorSelector, struct ::statiskit::SlopeHeuristicSelector > >::Type, struct ::statiskit::SlopeHeuristicSelector > class_63f5048eedae564391cd268a0107428f(module, "_PolymorphicCopy_63f5048eedae564391cd268a0107428f", "");
    class_63f5048eedae564391cd268a0107428f.def(pybind11::init<  >());

}