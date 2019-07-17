#include "_core.h"

namespace autowig
{
    typedef ::statiskit::WeightedData< ::statiskit::UnivariateData > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::WeightedData< ::statiskit::UnivariateData >::WeightedData;


        public:
            typedef double  return_type_d0e260fcdc205b2eba4822c5ec5880d0;
            typedef ::statiskit::Index const & param_d0e260fcdc205b2eba4822c5ec5880d0_0_type;
            virtual return_type_d0e260fcdc205b2eba4822c5ec5880d0 get_weight(param_d0e260fcdc205b2eba4822c5ec5880d0_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_d0e260fcdc205b2eba4822c5ec5880d0, class_type, get_weight, param_0); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  return_type_f924b25c6e335944a81f6073e12504ff;
            virtual return_type_f924b25c6e335944a81f6073e12504ff copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_f924b25c6e335944a81f6073e12504ff, class_type, copy, ); };

        public:
            typedef ::statiskit::Index  return_type_7329cda10ff05b02b002e0eb5bbc9083;
            virtual return_type_7329cda10ff05b02b002e0eb5bbc9083 get_nb_events() const override { PYBIND11_OVERLOAD(return_type_7329cda10ff05b02b002e0eb5bbc9083, class_type, get_nb_events, ); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateData::Generator, struct ::std::default_delete< struct ::statiskit::UnivariateData::Generator > >  return_type_a33919ff84f759e6b649d1aea1a76e87;
            virtual return_type_a33919ff84f759e6b649d1aea1a76e87 generator() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_a33919ff84f759e6b649d1aea1a76e87, class_type, generator, ); };
    };
}

struct ::statiskit::UnivariateData const * (::statiskit::WeightedData< ::statiskit::UnivariateData >::*method_pointer_509e21af356d596dbf6a212258cdfbbe)()const= &::statiskit::WeightedData< struct ::statiskit::UnivariateData >::origin;
::statiskit::Index  (::statiskit::WeightedData< ::statiskit::UnivariateData >::*method_pointer_fffe7b48b166550baaca4c08c07a0847)()const= &::statiskit::WeightedData< struct ::statiskit::UnivariateData >::get_nb_weights;
double  (::statiskit::WeightedData< ::statiskit::UnivariateData >::*method_pointer_d0e260fcdc205b2eba4822c5ec5880d0)(::statiskit::Index const &)const= &::statiskit::WeightedData< struct ::statiskit::UnivariateData >::get_weight;
void  (::statiskit::WeightedData< ::statiskit::UnivariateData >::*method_pointer_2d5ccb9b59a85039917dbc4ac3b10b92)(::statiskit::Index const &, double const &)= &::statiskit::WeightedData< struct ::statiskit::UnivariateData >::set_weight;

namespace autowig {
}

void wrapper_64ae6eddce405116ba534ed722881799(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::WeightedData< struct ::statiskit::UnivariateData >, autowig::Trampoline, autowig::HolderType< class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > >::Type, struct ::statiskit::UnivariateData > class_64ae6eddce405116ba534ed722881799(module, "_WeightedData_64ae6eddce405116ba534ed722881799", "");
    class_64ae6eddce405116ba534ed722881799.def(pybind11::init< struct ::statiskit::UnivariateData const & >());
    class_64ae6eddce405116ba534ed722881799.def("origin", method_pointer_509e21af356d596dbf6a212258cdfbbe, pybind11::return_value_policy::reference_internal, "");
    class_64ae6eddce405116ba534ed722881799.def("get_nb_weights", method_pointer_fffe7b48b166550baaca4c08c07a0847, "");
    class_64ae6eddce405116ba534ed722881799.def("get_weight", method_pointer_d0e260fcdc205b2eba4822c5ec5880d0, "");
    class_64ae6eddce405116ba534ed722881799.def("set_weight", method_pointer_2d5ccb9b59a85039917dbc4ac3b10b92, "");

}