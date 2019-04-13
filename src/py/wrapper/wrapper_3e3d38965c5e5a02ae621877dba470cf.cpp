#include "_core.h"

namespace autowig
{
    typedef ::statiskit::SlopeHeuristicSelector class_type;

    class Trampoline : public class_type
    {
        public:

            typedef class ::std::unique_ptr< struct ::statiskit::SlopeHeuristicSelector, struct ::std::default_delete< struct ::statiskit::SlopeHeuristicSelector > >  return_type_b99a360f77cf53eb8f24401404499387;
            virtual return_type_b99a360f77cf53eb8f24401404499387 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_b99a360f77cf53eb8f24401404499387, class_type, copy, ); };
            typedef ::statiskit::Index  return_type_df1ee527da8655d4b2d9d5bb1e30ff8e;
            typedef class ::statiskit::SlopeHeuristic const & param_df1ee527da8655d4b2d9d5bb1e30ff8e_0_type;
            virtual return_type_df1ee527da8655d4b2d9d5bb1e30ff8e operator()(param_df1ee527da8655d4b2d9d5bb1e30ff8e_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_df1ee527da8655d4b2d9d5bb1e30ff8e, class_type, operator(), param_0); };
    };
}

::statiskit::Index  (::statiskit::SlopeHeuristicSelector::*method_pointer_df1ee527da8655d4b2d9d5bb1e30ff8e)(class ::statiskit::SlopeHeuristic const &)const= &::statiskit::SlopeHeuristicSelector::operator();
class ::std::unique_ptr< struct ::statiskit::SlopeHeuristicSelector, struct ::std::default_delete< struct ::statiskit::SlopeHeuristicSelector > >  (::statiskit::SlopeHeuristicSelector::*method_pointer_b99a360f77cf53eb8f24401404499387)()const= &::statiskit::SlopeHeuristicSelector::copy;

namespace autowig {
}

void wrapper_3e3d38965c5e5a02ae621877dba470cf(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::SlopeHeuristicSelector, autowig::Trampoline, autowig::HolderType< struct ::statiskit::SlopeHeuristicSelector >::Type > class_3e3d38965c5e5a02ae621877dba470cf(module, "SlopeHeuristicSelector", "");
    class_3e3d38965c5e5a02ae621877dba470cf.def("__call__", method_pointer_df1ee527da8655d4b2d9d5bb1e30ff8e, "");
    class_3e3d38965c5e5a02ae621877dba470cf.def("copy", method_pointer_b99a360f77cf53eb8f24401404499387, "");

}