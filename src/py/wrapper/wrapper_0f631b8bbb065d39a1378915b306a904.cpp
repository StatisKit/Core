#include "_core.h"

namespace autowig
{
    typedef ::statiskit::UnivariateSampleSpace class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::UnivariateSampleSpace::UnivariateSampleSpace;


        public:
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >  return_type_a90fb1d3b5f75154bbd9fec1e0bee360;
            virtual return_type_a90fb1d3b5f75154bbd9fec1e0bee360 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_a90fb1d3b5f75154bbd9fec1e0bee360, class_type, copy, ); };

        public:
            typedef bool  return_type_aabfe8c337085d58a1ab73066415dd66;
            typedef struct ::statiskit::UnivariateEvent const * param_aabfe8c337085d58a1ab73066415dd66_0_type;
            virtual return_type_aabfe8c337085d58a1ab73066415dd66 is_compatible(param_aabfe8c337085d58a1ab73066415dd66_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_aabfe8c337085d58a1ab73066415dd66, class_type, is_compatible, param_0); };

        public:
            typedef enum ::statiskit::ordering_type  return_type_a5c2538f602650ca89c7d30ba94848b9;
            virtual return_type_a5c2538f602650ca89c7d30ba94848b9 get_ordering() const override { PYBIND11_OVERLOAD_PURE(return_type_a5c2538f602650ca89c7d30ba94848b9, class_type, get_ordering, ); };

        public:
            typedef enum ::statiskit::outcome_type  return_type_2875d281654d56729645a2393c5d7ae3;
            virtual return_type_2875d281654d56729645a2393c5d7ae3 get_outcome() const override { PYBIND11_OVERLOAD_PURE(return_type_2875d281654d56729645a2393c5d7ae3, class_type, get_outcome, ); };
    };
}

enum ::statiskit::outcome_type  (::statiskit::UnivariateSampleSpace::*method_pointer_2875d281654d56729645a2393c5d7ae3)()const= &::statiskit::UnivariateSampleSpace::get_outcome;
enum ::statiskit::ordering_type  (::statiskit::UnivariateSampleSpace::*method_pointer_a5c2538f602650ca89c7d30ba94848b9)()const= &::statiskit::UnivariateSampleSpace::get_ordering;
bool  (::statiskit::UnivariateSampleSpace::*method_pointer_aabfe8c337085d58a1ab73066415dd66)(struct ::statiskit::UnivariateEvent const *)const= &::statiskit::UnivariateSampleSpace::is_compatible;
class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >  (::statiskit::UnivariateSampleSpace::*method_pointer_a90fb1d3b5f75154bbd9fec1e0bee360)()const= &::statiskit::UnivariateSampleSpace::copy;

namespace autowig {
}

void wrapper_0f631b8bbb065d39a1378915b306a904(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateSampleSpace, autowig::Trampoline, autowig::HolderType< struct ::statiskit::UnivariateSampleSpace >::Type > class_0f631b8bbb065d39a1378915b306a904(module, "UnivariateSampleSpace", "");
    class_0f631b8bbb065d39a1378915b306a904.def("get_outcome", method_pointer_2875d281654d56729645a2393c5d7ae3, "");
    class_0f631b8bbb065d39a1378915b306a904.def("get_ordering", method_pointer_a5c2538f602650ca89c7d30ba94848b9, "");
    class_0f631b8bbb065d39a1378915b306a904.def("is_compatible", method_pointer_aabfe8c337085d58a1ab73066415dd66, "");
    class_0f631b8bbb065d39a1378915b306a904.def("copy", method_pointer_a90fb1d3b5f75154bbd9fec1e0bee360, "");

}