#include "_core.h"

void  (::statiskit::VectorEvent::*method_pointer_1dba086dec5555d492b16fcb63625746)(::statiskit::Index const &, struct ::statiskit::UnivariateEvent const *)= &::statiskit::VectorEvent::set_event;

namespace autowig {
}

void wrapper_334941caf3de5e3ab25e41d07fa1d9ca(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::VectorEvent, autowig::HolderType< class ::statiskit::VectorEvent >::Type, struct ::statiskit::PolymorphicCopy< class ::statiskit::VectorEvent, struct ::statiskit::MultivariateEvent > > class_334941caf3de5e3ab25e41d07fa1d9ca(module, "VectorEvent", "");
    class_334941caf3de5e3ab25e41d07fa1d9ca.def(pybind11::init< ::statiskit::Index const & >());
    class_334941caf3de5e3ab25e41d07fa1d9ca.def(pybind11::init< class ::statiskit::VectorEvent const & >());
    class_334941caf3de5e3ab25e41d07fa1d9ca.def(pybind11::init< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >());
    class_334941caf3de5e3ab25e41d07fa1d9ca.def("set_event", method_pointer_1dba086dec5555d492b16fcb63625746, "");

}