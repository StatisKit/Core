#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::MultivariateDataFrame const volatile * get_pointer<class ::statiskit::MultivariateDataFrame const volatile >(class ::statiskit::MultivariateDataFrame const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c3848ca82c6150b480894755016faabf()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    void  (::statiskit::MultivariateDataFrame::*method_pointer_ceb65df6fb445fa2846e8bb4a96abc30)(struct ::statiskit::MultivariateSampleSpace const &) = &::statiskit::MultivariateDataFrame::set_sample_space;
    ::statiskit::Index  (::statiskit::MultivariateDataFrame::*method_pointer_3d40300675955653b701c20d2aa3e360)() const = &::statiskit::MultivariateDataFrame::get_nb_components;
    class ::statiskit::UnivariateDataFrame const * (::statiskit::MultivariateDataFrame::*method_pointer_b9d069c00f5c563587cb7bb977d07267)(::statiskit::Index const &) const = &::statiskit::MultivariateDataFrame::get_component;
    void  (::statiskit::MultivariateDataFrame::*method_pointer_bd6f29af832854fd90b48c846aef5083)(::statiskit::Index const &, class ::statiskit::UnivariateDataFrame const &) = &::statiskit::MultivariateDataFrame::set_component;
    void  (::statiskit::MultivariateDataFrame::*method_pointer_e10b9c47f5cd51a68b8b0640eb4af2a4)(class ::statiskit::UnivariateDataFrame const &) = &::statiskit::MultivariateDataFrame::add_component;
    class ::std::unique_ptr< class ::statiskit::UnivariateDataFrame, struct ::std::default_delete< class ::statiskit::UnivariateDataFrame > >  (::statiskit::MultivariateDataFrame::*method_pointer_0e36cd3c6b7554bb8faab5320f147d49)() = &::statiskit::MultivariateDataFrame::pop_component;
    void  (::statiskit::MultivariateDataFrame::*method_pointer_fc707ff04a2653ea8e21bf6a890a5abb)(::statiskit::Index const &, class ::statiskit::UnivariateDataFrame const &) = &::statiskit::MultivariateDataFrame::insert_component;
    void  (::statiskit::MultivariateDataFrame::*method_pointer_600b4f5b6cc15bb1b7a8e0601af0e7f9)(::statiskit::Index const &) = &::statiskit::MultivariateDataFrame::remove_component;
    ::statiskit::Index  (::statiskit::MultivariateDataFrame::*method_pointer_10ac8325c1085cec9a39efd69ba41c3c)() const = &::statiskit::MultivariateDataFrame::get_nb_events;
    class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  (::statiskit::MultivariateDataFrame::*method_pointer_6ad6e1f3747d5172b5d3ab1dcc010a9f)(::statiskit::Index const &) const = &::statiskit::MultivariateDataFrame::get_event;
    void  (::statiskit::MultivariateDataFrame::*method_pointer_b0f5e788fdc65ce699e64f98105b4c7c)(::statiskit::Index const &, struct ::statiskit::MultivariateEvent const *) = &::statiskit::MultivariateDataFrame::set_event;
    void  (::statiskit::MultivariateDataFrame::*method_pointer_b555b7b0972754ac85cab0703f97447f)(struct ::statiskit::MultivariateEvent const *) = &::statiskit::MultivariateDataFrame::add_event;
    class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  (::statiskit::MultivariateDataFrame::*method_pointer_82e95a12a3db599eb1d0d88a3d521a65)() = &::statiskit::MultivariateDataFrame::pop_event;
    void  (::statiskit::MultivariateDataFrame::*method_pointer_014f7c47848152659ad0201bd69f0ab5)(::statiskit::Index const &, struct ::statiskit::MultivariateEvent const *) = &::statiskit::MultivariateDataFrame::insert_event;
    void  (::statiskit::MultivariateDataFrame::*method_pointer_ce2cebc7034858dabbda327fb270350c)(::statiskit::Index const &) = &::statiskit::MultivariateDataFrame::remove_event;
    boost::python::class_< class ::statiskit::MultivariateDataFrame, autowig::Held< class ::statiskit::MultivariateDataFrame >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, class ::statiskit::MultivariateDataFrame, struct ::statiskit::MultivariateData > > > class_c3848ca82c6150b480894755016faabf("MultivariateDataFrame", "", boost::python::no_init);
    class_c3848ca82c6150b480894755016faabf.def(boost::python::init<  >(""));
    class_c3848ca82c6150b480894755016faabf.def(boost::python::init< class ::statiskit::MultivariateDataFrame const & >(""));
    class_c3848ca82c6150b480894755016faabf.def("set_sample_space", method_pointer_ceb65df6fb445fa2846e8bb4a96abc30, "");
    class_c3848ca82c6150b480894755016faabf.def("get_nb_components", method_pointer_3d40300675955653b701c20d2aa3e360, "");
    class_c3848ca82c6150b480894755016faabf.def("get_component", method_pointer_b9d069c00f5c563587cb7bb977d07267, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c3848ca82c6150b480894755016faabf.def("set_component", method_pointer_bd6f29af832854fd90b48c846aef5083, "");
    class_c3848ca82c6150b480894755016faabf.def("add_component", method_pointer_e10b9c47f5cd51a68b8b0640eb4af2a4, "");
    class_c3848ca82c6150b480894755016faabf.def("pop_component", method_pointer_0e36cd3c6b7554bb8faab5320f147d49, "");
    class_c3848ca82c6150b480894755016faabf.def("insert_component", method_pointer_fc707ff04a2653ea8e21bf6a890a5abb, "");
    class_c3848ca82c6150b480894755016faabf.def("remove_component", method_pointer_600b4f5b6cc15bb1b7a8e0601af0e7f9, "");
    class_c3848ca82c6150b480894755016faabf.def("get_nb_events", method_pointer_10ac8325c1085cec9a39efd69ba41c3c, "");
    class_c3848ca82c6150b480894755016faabf.def("get_event", method_pointer_6ad6e1f3747d5172b5d3ab1dcc010a9f, "");
    class_c3848ca82c6150b480894755016faabf.def("set_event", method_pointer_b0f5e788fdc65ce699e64f98105b4c7c, "");
    class_c3848ca82c6150b480894755016faabf.def("add_event", method_pointer_b555b7b0972754ac85cab0703f97447f, "");
    class_c3848ca82c6150b480894755016faabf.def("pop_event", method_pointer_82e95a12a3db599eb1d0d88a3d521a65, "");
    class_c3848ca82c6150b480894755016faabf.def("insert_event", method_pointer_014f7c47848152659ad0201bd69f0ab5, "");
    class_c3848ca82c6150b480894755016faabf.def("remove_event", method_pointer_ce2cebc7034858dabbda327fb270350c, "");

    if(autowig::Held< class ::statiskit::MultivariateDataFrame >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MultivariateDataFrame >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, class ::statiskit::MultivariateDataFrame, struct ::statiskit::MultivariateData > >::Type >();
    }

}