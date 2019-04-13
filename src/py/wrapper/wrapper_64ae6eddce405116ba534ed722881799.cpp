#include "_core.h"

namespace autowig
{
    typedef ::statiskit::WeightedData< ::statiskit::UnivariateData > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::WeightedData< ::statiskit::UnivariateData >::WeightedData;

            typedef double  return_type_d0e260fcdc205b2eba4822c5ec5880d0;
            typedef ::statiskit::Index const & param_d0e260fcdc205b2eba4822c5ec5880d0_0_type;
            virtual return_type_d0e260fcdc205b2eba4822c5ec5880d0 get_weight(param_d0e260fcdc205b2eba4822c5ec5880d0_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_d0e260fcdc205b2eba4822c5ec5880d0, class_type, get_weight, param_0); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateData::Generator, struct ::std::default_delete< struct ::statiskit::UnivariateData::Generator > >  return_type_57b9553abf9954478e69ba31cf3316cb;
            virtual return_type_57b9553abf9954478e69ba31cf3316cb generator() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_57b9553abf9954478e69ba31cf3316cb, class_type, generator, ); };
            typedef struct ::statiskit::UnivariateSampleSpace const * return_type_c43b4fed6707533ebc14a286dfd1d037;
            virtual return_type_c43b4fed6707533ebc14a286dfd1d037 get_sample_space() const override { PYBIND11_OVERLOAD(return_type_c43b4fed6707533ebc14a286dfd1d037, class_type, get_sample_space, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  return_type_f924b25c6e335944a81f6073e12504ff;
            virtual return_type_f924b25c6e335944a81f6073e12504ff copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_f924b25c6e335944a81f6073e12504ff, class_type, copy, ); };
            typedef ::statiskit::Index  return_type_ccb6e82201a6558e9733151230bbc9af;
            virtual return_type_ccb6e82201a6558e9733151230bbc9af size() const override { PYBIND11_OVERLOAD(return_type_ccb6e82201a6558e9733151230bbc9af, class_type, size, ); };
    };
}

struct ::statiskit::UnivariateData const * (::statiskit::WeightedData< ::statiskit::UnivariateData >::*method_pointer_92c5532a3e0f5f3da7c680e762f4907d)()const= &::statiskit::WeightedData< struct ::statiskit::UnivariateData >::get_data;
::statiskit::Index  (::statiskit::WeightedData< ::statiskit::UnivariateData >::*method_pointer_fffe7b48b166550baaca4c08c07a0847)()const= &::statiskit::WeightedData< struct ::statiskit::UnivariateData >::get_nb_weights;
double  (::statiskit::WeightedData< ::statiskit::UnivariateData >::*method_pointer_d0e260fcdc205b2eba4822c5ec5880d0)(::statiskit::Index const &)const= &::statiskit::WeightedData< struct ::statiskit::UnivariateData >::get_weight;
void  (::statiskit::WeightedData< ::statiskit::UnivariateData >::*method_pointer_2d5ccb9b59a85039917dbc4ac3b10b92)(::statiskit::Index const &, double const &)= &::statiskit::WeightedData< struct ::statiskit::UnivariateData >::set_weight;

namespace autowig {
}

void wrapper_64ae6eddce405116ba534ed722881799(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::WeightedData< struct ::statiskit::UnivariateData >, autowig::Trampoline, autowig::HolderType< class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > >::Type, struct ::statiskit::UnivariateData > class_64ae6eddce405116ba534ed722881799(module, "_WeightedData_64ae6eddce405116ba534ed722881799", "");
    class_64ae6eddce405116ba534ed722881799.def(pybind11::init<  >());
    class_64ae6eddce405116ba534ed722881799.def("get_data", method_pointer_92c5532a3e0f5f3da7c680e762f4907d, pybind11::return_value_policy::reference_internal, "");
    class_64ae6eddce405116ba534ed722881799.def("get_nb_weights", method_pointer_fffe7b48b166550baaca4c08c07a0847, "");
    class_64ae6eddce405116ba534ed722881799.def("get_weight", method_pointer_d0e260fcdc205b2eba4822c5ec5880d0, "");
    class_64ae6eddce405116ba534ed722881799.def("set_weight", method_pointer_2d5ccb9b59a85039917dbc4ac3b10b92, "");

}