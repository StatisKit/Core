#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > >::PolymorphicCopy;


        public:
            typedef double  return_type_d0e260fcdc205b2eba4822c5ec5880d0;
            typedef ::statiskit::Index const & param_d0e260fcdc205b2eba4822c5ec5880d0_0_type;
            virtual return_type_d0e260fcdc205b2eba4822c5ec5880d0 get_weight(param_d0e260fcdc205b2eba4822c5ec5880d0_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_d0e260fcdc205b2eba4822c5ec5880d0, class_type, get_weight, param_0); };

        public:
            typedef ::statiskit::Index  return_type_7329cda10ff05b02b002e0eb5bbc9083;
            virtual return_type_7329cda10ff05b02b002e0eb5bbc9083 get_nb_events() const override { PYBIND11_OVERLOAD(return_type_7329cda10ff05b02b002e0eb5bbc9083, class_type, get_nb_events, ); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateData::Generator, struct ::std::default_delete< struct ::statiskit::UnivariateData::Generator > >  return_type_a33919ff84f759e6b649d1aea1a76e87;
            virtual return_type_a33919ff84f759e6b649d1aea1a76e87 generator() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_a33919ff84f759e6b649d1aea1a76e87, class_type, generator, ); };
    };
}


namespace autowig {
}

void wrapper_172696efc2ee5189bf7047d20bc97387(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > > >::Type, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > > class_172696efc2ee5189bf7047d20bc97387(module, "_PolymorphicCopy_172696efc2ee5189bf7047d20bc97387", "");

}