#include "_core.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< ::statiskit::IndicesSelectedData, struct ::statiskit::MultivariateData > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< ::statiskit::IndicesSelectedData, struct ::statiskit::MultivariateData >::PolymorphicCopy;


        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  return_type_f64a6810607b5e87abd849016a7257a8;
            typedef ::statiskit::Indices const & param_f64a6810607b5e87abd849016a7257a8_0_type;
            virtual return_type_f64a6810607b5e87abd849016a7257a8 select(param_f64a6810607b5e87abd849016a7257a8_0_type param_0) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_f64a6810607b5e87abd849016a7257a8, class_type, select, param_0); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  return_type_c396af3cbd155448853ecc949208ba01;
            typedef ::statiskit::Index const & param_c396af3cbd155448853ecc949208ba01_0_type;
            virtual return_type_c396af3cbd155448853ecc949208ba01 select(param_c396af3cbd155448853ecc949208ba01_0_type param_0) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_c396af3cbd155448853ecc949208ba01, class_type, select, param_0); };

        public:
            typedef struct ::statiskit::UnivariateSampleSpace const * return_type_ac6508992c5b5503bd21d9306d7865ab;
            typedef ::statiskit::Index const & param_ac6508992c5b5503bd21d9306d7865ab_0_type;
            virtual return_type_ac6508992c5b5503bd21d9306d7865ab get_sample_space(param_ac6508992c5b5503bd21d9306d7865ab_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_ac6508992c5b5503bd21d9306d7865ab, class_type, get_sample_space, param_0); };

        public:
            typedef ::statiskit::Index  return_type_c47e79caf5975050b200ee7ce97df8ff;
            virtual return_type_c47e79caf5975050b200ee7ce97df8ff get_nb_components() const override { PYBIND11_OVERLOAD_PURE(return_type_c47e79caf5975050b200ee7ce97df8ff, class_type, get_nb_components, ); };

        public:
            typedef ::statiskit::Index  return_type_9a45dee4cb885178bcb89ced8cb3face;
            virtual return_type_9a45dee4cb885178bcb89ced8cb3face get_nb_events() const override { PYBIND11_OVERLOAD(return_type_9a45dee4cb885178bcb89ced8cb3face, class_type, get_nb_events, ); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateData::Generator, struct ::std::default_delete< struct ::statiskit::MultivariateData::Generator > >  return_type_facf1de3504b5543b1eed987285d8673;
            virtual return_type_facf1de3504b5543b1eed987285d8673 generator() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_facf1de3504b5543b1eed987285d8673, class_type, generator, ); };
    };
}


namespace autowig {
}

void wrapper_be6e5acaae3150f69207956b75050e55(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< class ::statiskit::IndicesSelectedData, struct ::statiskit::MultivariateData >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< class ::statiskit::IndicesSelectedData, struct ::statiskit::MultivariateData > >::Type, struct ::statiskit::MultivariateData > class_be6e5acaae3150f69207956b75050e55(module, "_PolymorphicCopy_be6e5acaae3150f69207956b75050e55", "");
    class_be6e5acaae3150f69207956b75050e55.def(pybind11::init<  >());

}