#include "_core.h"



namespace autowig
{
    class Wrap_55c0eb1fcb6e5b0da7045e99481d4b0c : public ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >, public boost::python::wrapper< struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >
    {
        public:
            
            virtual class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > >  get_values() const
            { return this->get_override("get_values")(); }
                        
            virtual double  pdf(int const & param_0) const
            { return this->get_override("pdf")(param_0); }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_55c0eb1fcb6e5b0da7045e99481d4b0c const volatile * get_pointer<autowig::Wrap_55c0eb1fcb6e5b0da7045e99481d4b0c const volatile >(autowig::Wrap_55c0eb1fcb6e5b0da7045e99481d4b0c const volatile *c) { return c; }
    template <> struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > const volatile * get_pointer<struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > const volatile >(struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_55c0eb1fcb6e5b0da7045e99481d4b0c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double  (::statiskit::UnivariateMixtureDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_c1857f9e4114567a9dd86ccbeacf6819)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) const = &::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::ldf;
    double  (::statiskit::UnivariateMixtureDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_a5efbb8323ce59588d1b910d7b67790e)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) const = &::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::pdf;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::UnivariateMixtureDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_4ff4f7a253da5880a0661fcb65811052)() const = &::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::simulate;
    boost::python::class_< autowig::Wrap_55c0eb1fcb6e5b0da7045e99481d4b0c, autowig::Held< autowig::Wrap_55c0eb1fcb6e5b0da7045e99481d4b0c >::Type, boost::python::bases< class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >, boost::noncopyable > class_55c0eb1fcb6e5b0da7045e99481d4b0c("_UnivariateMixtureDistribution_55c0eb1fcb6e5b0da7045e99481d4b0c", "", boost::python::no_init);
    class_55c0eb1fcb6e5b0da7045e99481d4b0c.def("ldf", method_pointer_c1857f9e4114567a9dd86ccbeacf6819, "");
    class_55c0eb1fcb6e5b0da7045e99481d4b0c.def("pdf", method_pointer_a5efbb8323ce59588d1b910d7b67790e, "");
    class_55c0eb1fcb6e5b0da7045e99481d4b0c.def("simulate", method_pointer_4ff4f7a253da5880a0661fcb65811052, "");

    if(autowig::Held< struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_55c0eb1fcb6e5b0da7045e99481d4b0c >::Type, autowig::Held< struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >::Type, autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution >, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >::Type, struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > > >();
    }

}