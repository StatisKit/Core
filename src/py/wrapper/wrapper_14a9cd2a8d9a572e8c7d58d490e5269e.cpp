#include "_core.h"

namespace autowig
{
    typedef ::statiskit::CategoricalSampleSpace class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::CategoricalSampleSpace::CategoricalSampleSpace;

            typedef bool  return_type_e2b5e198a60f55b48e6693e16f1ecddb;
            typedef class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & param_e2b5e198a60f55b48e6693e16f1ecddb_0_type;
            virtual return_type_e2b5e198a60f55b48e6693e16f1ecddb is_compatible_value(param_e2b5e198a60f55b48e6693e16f1ecddb_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_e2b5e198a60f55b48e6693e16f1ecddb, class_type, is_compatible_value, param_0); };
            typedef class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >  return_type_8066b9427c14500d8e4b87e8f42da7e4;
            typedef class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & param_8066b9427c14500d8e4b87e8f42da7e4_0_type;
            virtual return_type_8066b9427c14500d8e4b87e8f42da7e4 encode(param_8066b9427c14500d8e4b87e8f42da7e4_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_8066b9427c14500d8e4b87e8f42da7e4, class_type, encode, param_0); };
            typedef void  return_type_5ccffeb21f59579f833d8cfccb48fce9;
            typedef enum ::statiskit::encoding_type const & param_5ccffeb21f59579f833d8cfccb48fce9_0_type;
            virtual return_type_5ccffeb21f59579f833d8cfccb48fce9 set_encoding(param_5ccffeb21f59579f833d8cfccb48fce9_0_type param_0) override { PYBIND11_OVERLOAD_PURE(return_type_5ccffeb21f59579f833d8cfccb48fce9, class_type, set_encoding, param_0); };
            typedef enum ::statiskit::outcome_type  return_type_8d0ebb7ac2a9544280755c9cf75dbb4e;
            virtual return_type_8d0ebb7ac2a9544280755c9cf75dbb4e get_outcome() const override { PYBIND11_OVERLOAD(return_type_8d0ebb7ac2a9544280755c9cf75dbb4e, class_type, get_outcome, ); };
            typedef bool  return_type_bc7a777830665a5e86e410c50a9fd373;
            typedef struct ::statiskit::UnivariateEvent const * param_bc7a777830665a5e86e410c50a9fd373_0_type;
            virtual return_type_bc7a777830665a5e86e410c50a9fd373 is_compatible(param_bc7a777830665a5e86e410c50a9fd373_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_bc7a777830665a5e86e410c50a9fd373, class_type, is_compatible, param_0); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >  return_type_a90fb1d3b5f75154bbd9fec1e0bee360;
            virtual return_type_a90fb1d3b5f75154bbd9fec1e0bee360 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_a90fb1d3b5f75154bbd9fec1e0bee360, class_type, copy, ); };
            typedef enum ::statiskit::ordering_type  return_type_a5c2538f602650ca89c7d30ba94848b9;
            virtual return_type_a5c2538f602650ca89c7d30ba94848b9 get_ordering() const override { PYBIND11_OVERLOAD_PURE(return_type_a5c2538f602650ca89c7d30ba94848b9, class_type, get_ordering, ); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::is_compatible_value;
    };
}

::statiskit::Index  (::statiskit::CategoricalSampleSpace::*method_pointer_cc993d85d2cc5dba89eed6588dbf7c05)()const= &::statiskit::CategoricalSampleSpace::get_cardinality;
class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const & (::statiskit::CategoricalSampleSpace::*method_pointer_6463c3786a065cb28a0a0109dca4a6ca)()const= &::statiskit::CategoricalSampleSpace::get_values;
enum ::statiskit::encoding_type  (::statiskit::CategoricalSampleSpace::*method_pointer_b6e426ab99cb5b86ade311bc3aceb9d3)()const= &::statiskit::CategoricalSampleSpace::get_encoding;
void  (::statiskit::CategoricalSampleSpace::*method_pointer_5ccffeb21f59579f833d8cfccb48fce9)(enum ::statiskit::encoding_type const &)= &::statiskit::CategoricalSampleSpace::set_encoding;
class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >  (::statiskit::CategoricalSampleSpace::*method_pointer_8066b9427c14500d8e4b87e8f42da7e4)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &)const= &::statiskit::CategoricalSampleSpace::encode;

namespace autowig {
}

void wrapper_14a9cd2a8d9a572e8c7d58d490e5269e(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::CategoricalSampleSpace, autowig::Trampoline, autowig::HolderType< struct ::statiskit::CategoricalSampleSpace >::Type, struct ::statiskit::UnivariateSampleSpace > class_14a9cd2a8d9a572e8c7d58d490e5269e(module, "CategoricalSampleSpace", "");
    class_14a9cd2a8d9a572e8c7d58d490e5269e.def(pybind11::init< class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const & >());
    class_14a9cd2a8d9a572e8c7d58d490e5269e.def("get_cardinality", method_pointer_cc993d85d2cc5dba89eed6588dbf7c05, "");
    class_14a9cd2a8d9a572e8c7d58d490e5269e.def("get_values", method_pointer_6463c3786a065cb28a0a0109dca4a6ca, pybind11::return_value_policy::copy, "");
    class_14a9cd2a8d9a572e8c7d58d490e5269e.def("get_encoding", method_pointer_b6e426ab99cb5b86ade311bc3aceb9d3, "");
    class_14a9cd2a8d9a572e8c7d58d490e5269e.def("set_encoding", method_pointer_5ccffeb21f59579f833d8cfccb48fce9, "");
    class_14a9cd2a8d9a572e8c7d58d490e5269e.def("encode", method_pointer_8066b9427c14500d8e4b87e8f42da7e4, "");
    class_14a9cd2a8d9a572e8c7d58d490e5269e.def("_is_compatible_value", static_cast< bool  (::statiskit::CategoricalSampleSpace::*) (class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) const >(&autowig::Publicist::is_compatible_value), "");

}