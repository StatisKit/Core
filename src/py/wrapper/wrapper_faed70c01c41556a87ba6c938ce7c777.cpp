#include "_core.h"

namespace autowig
{
    typedef ::statiskit::MultivariateSampleSpace class_type;

    class Trampoline : public class_type
    {
        public:


        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > >  return_type_40d149de873956828c7a7bb6efb1b291;
            virtual return_type_40d149de873956828c7a7bb6efb1b291 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_40d149de873956828c7a7bb6efb1b291, class_type, copy, ); };

        public:
            typedef class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >  return_type_453c7ae8bd33563d9ea0317dca724475;
            typedef struct ::statiskit::MultivariateEvent const & param_453c7ae8bd33563d9ea0317dca724475_0_type;
            virtual return_type_453c7ae8bd33563d9ea0317dca724475 encode(param_453c7ae8bd33563d9ea0317dca724475_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_453c7ae8bd33563d9ea0317dca724475, class_type, encode, param_0); };

        public:
            typedef ::statiskit::Index  return_type_58045e2837b651c18e64ce6ac4e0be9e;
            virtual return_type_58045e2837b651c18e64ce6ac4e0be9e encode() const override { PYBIND11_OVERLOAD(return_type_58045e2837b651c18e64ce6ac4e0be9e, class_type, encode, ); };

        public:
            typedef bool  return_type_817740fe51f5581ca0b50fe3fdee1e78;
            typedef struct ::statiskit::MultivariateEvent const * param_817740fe51f5581ca0b50fe3fdee1e78_0_type;
            virtual return_type_817740fe51f5581ca0b50fe3fdee1e78 is_compatible(param_817740fe51f5581ca0b50fe3fdee1e78_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_817740fe51f5581ca0b50fe3fdee1e78, class_type, is_compatible, param_0); };

        public:
            typedef struct ::statiskit::UnivariateSampleSpace const * return_type_89faf58ffa485b8fafccbd250d1fe75d;
            typedef ::statiskit::Index const & param_89faf58ffa485b8fafccbd250d1fe75d_0_type;
            virtual return_type_89faf58ffa485b8fafccbd250d1fe75d get(param_89faf58ffa485b8fafccbd250d1fe75d_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_89faf58ffa485b8fafccbd250d1fe75d, class_type, get, param_0); };

        public:
            typedef ::statiskit::Index  return_type_34b56241180a545dbbc2cc99f5f4650e;
            virtual return_type_34b56241180a545dbbc2cc99f5f4650e size() const override { PYBIND11_OVERLOAD_PURE(return_type_34b56241180a545dbbc2cc99f5f4650e, class_type, size, ); };
    };
}

::statiskit::Index  (::statiskit::MultivariateSampleSpace::*method_pointer_34b56241180a545dbbc2cc99f5f4650e)()const= &::statiskit::MultivariateSampleSpace::size;
struct ::statiskit::UnivariateSampleSpace const * (::statiskit::MultivariateSampleSpace::*method_pointer_89faf58ffa485b8fafccbd250d1fe75d)(::statiskit::Index const &)const= &::statiskit::MultivariateSampleSpace::get;
bool  (::statiskit::MultivariateSampleSpace::*method_pointer_817740fe51f5581ca0b50fe3fdee1e78)(struct ::statiskit::MultivariateEvent const *)const= &::statiskit::MultivariateSampleSpace::is_compatible;
::statiskit::Index  (::statiskit::MultivariateSampleSpace::*method_pointer_58045e2837b651c18e64ce6ac4e0be9e)()const= &::statiskit::MultivariateSampleSpace::encode;
class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >  (::statiskit::MultivariateSampleSpace::*method_pointer_453c7ae8bd33563d9ea0317dca724475)(struct ::statiskit::MultivariateEvent const &)const= &::statiskit::MultivariateSampleSpace::encode;
class ::std::unique_ptr< struct ::statiskit::MultivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > >  (::statiskit::MultivariateSampleSpace::*method_pointer_40d149de873956828c7a7bb6efb1b291)()const= &::statiskit::MultivariateSampleSpace::copy;

namespace autowig {
}

void wrapper_faed70c01c41556a87ba6c938ce7c777(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MultivariateSampleSpace, autowig::Trampoline, autowig::HolderType< struct ::statiskit::MultivariateSampleSpace >::Type > class_faed70c01c41556a87ba6c938ce7c777(module, "MultivariateSampleSpace", "");
    class_faed70c01c41556a87ba6c938ce7c777.def("__len__", method_pointer_34b56241180a545dbbc2cc99f5f4650e, "");
    class_faed70c01c41556a87ba6c938ce7c777.def("get", method_pointer_89faf58ffa485b8fafccbd250d1fe75d, pybind11::return_value_policy::reference_internal, "");
    class_faed70c01c41556a87ba6c938ce7c777.def("is_compatible", method_pointer_817740fe51f5581ca0b50fe3fdee1e78, "");
    class_faed70c01c41556a87ba6c938ce7c777.def("encode", method_pointer_58045e2837b651c18e64ce6ac4e0be9e, "");
    class_faed70c01c41556a87ba6c938ce7c777.def("encode", method_pointer_453c7ae8bd33563d9ea0317dca724475, "");
    class_faed70c01c41556a87ba6c938ce7c777.def("copy", method_pointer_40d149de873956828c7a7bb6efb1b291, "");

}