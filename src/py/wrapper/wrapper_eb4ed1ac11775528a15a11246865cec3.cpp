#include "_core.h"



namespace autowig
{
    class Wrap_eb4ed1ac11775528a15a11246865cec3 : public ::statiskit::PolymorphicCopy< struct ::statiskit::Schedule, ::statiskit::ExponentialSchedule, struct ::statiskit::Schedule >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::Schedule, class ::statiskit::ExponentialSchedule, struct ::statiskit::Schedule > >
    {
        public:
            
            virtual double  operator()(double const & param_0) const
            { return this->get_override("operator()")(param_0); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_eb4ed1ac11775528a15a11246865cec3 const volatile * get_pointer<autowig::Wrap_eb4ed1ac11775528a15a11246865cec3 const volatile >(autowig::Wrap_eb4ed1ac11775528a15a11246865cec3 const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::Schedule, class ::statiskit::ExponentialSchedule, struct ::statiskit::Schedule > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::Schedule, class ::statiskit::ExponentialSchedule, struct ::statiskit::Schedule > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::Schedule, class ::statiskit::ExponentialSchedule, struct ::statiskit::Schedule > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_eb4ed1ac11775528a15a11246865cec3()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_eb4ed1ac11775528a15a11246865cec3, autowig::Held< autowig::Wrap_eb4ed1ac11775528a15a11246865cec3 >::Type, boost::python::bases< struct ::statiskit::Schedule >, boost::noncopyable > class_eb4ed1ac11775528a15a11246865cec3("_PolymorphicCopy_eb4ed1ac11775528a15a11246865cec3", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::Schedule, class ::statiskit::ExponentialSchedule, struct ::statiskit::Schedule > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_eb4ed1ac11775528a15a11246865cec3 >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::Schedule, class ::statiskit::ExponentialSchedule, struct ::statiskit::Schedule > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::Schedule, class ::statiskit::ExponentialSchedule, struct ::statiskit::Schedule > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::Schedule, class ::statiskit::ExponentialSchedule, struct ::statiskit::Schedule > >::Type, autowig::Held< struct ::statiskit::Schedule >::Type >();
    }

}