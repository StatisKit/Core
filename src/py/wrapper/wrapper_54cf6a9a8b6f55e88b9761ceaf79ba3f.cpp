#include "_core.h"



namespace autowig
{
    class Wrap_54cf6a9a8b6f55e88b9761ceaf79ba3f : public ::statiskit::ContinuousUnivariateDistribution, public boost::python::wrapper< struct ::statiskit::ContinuousUnivariateDistribution >
    {
        public:
            
            virtual double  get_variance() const
            { return this->get_override("get_variance")(); }
                        
            virtual double  get_mean() const
            { return this->get_override("get_mean")(); }
                        
            virtual double  quantile(double const & param_0) const
            { return this->get_override("quantile")(param_0); }
                        
            virtual double  cdf(double const & param_0) const
            { return this->get_override("cdf")(param_0); }
                        
            virtual double  pdf(double const & param_0) const
            { return this->get_override("pdf")(param_0); }
                        
            virtual double  ldf(double const & param_0) const
            { return this->get_override("ldf")(param_0); }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  simulate() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > ::element_type* result = this->get_override("simulate")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > (result);
            }
                        
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_54cf6a9a8b6f55e88b9761ceaf79ba3f const volatile * get_pointer<autowig::Wrap_54cf6a9a8b6f55e88b9761ceaf79ba3f const volatile >(autowig::Wrap_54cf6a9a8b6f55e88b9761ceaf79ba3f const volatile *c) { return c; }
    template <> struct ::statiskit::ContinuousUnivariateDistribution const volatile * get_pointer<struct ::statiskit::ContinuousUnivariateDistribution const volatile >(struct ::statiskit::ContinuousUnivariateDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_54cf6a9a8b6f55e88b9761ceaf79ba3f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double  (::statiskit::ContinuousUnivariateDistribution::*method_pointer_2843df1d3dc6596aaccccc3a0dd5da36)(double const &) const = &::statiskit::ContinuousUnivariateDistribution::ldf;
    double  (::statiskit::ContinuousUnivariateDistribution::*method_pointer_30c20faf3f5a515d9541c73f1eb020df)(double const &) const = &::statiskit::ContinuousUnivariateDistribution::pdf;
    double  (::statiskit::ContinuousUnivariateDistribution::*method_pointer_3e9327a27cc259a1a813cf253bd84642)(double const &) const = &::statiskit::ContinuousUnivariateDistribution::cdf;
    double  (::statiskit::ContinuousUnivariateDistribution::*method_pointer_32217c345e3d5454a2e46058d702ce84)(double const &) const = &::statiskit::ContinuousUnivariateDistribution::quantile;
    double  (::statiskit::ContinuousUnivariateDistribution::*method_pointer_cb42091f4cb35419b13eb0e0c27eb470)() const = &::statiskit::ContinuousUnivariateDistribution::get_mean;
    double  (::statiskit::ContinuousUnivariateDistribution::*method_pointer_17d4a13bc764561299d331907516003f)() const = &::statiskit::ContinuousUnivariateDistribution::get_variance;
    boost::python::class_< autowig::Wrap_54cf6a9a8b6f55e88b9761ceaf79ba3f, autowig::Held< autowig::Wrap_54cf6a9a8b6f55e88b9761ceaf79ba3f >::Type, boost::python::bases< struct ::statiskit::UnivariateDistribution >, boost::noncopyable > class_54cf6a9a8b6f55e88b9761ceaf79ba3f("ContinuousUnivariateDistribution", "This virtual class ContinuousUnivariateDistribution represents the\ndistribution of a random continuous component $ X$. The support is $\n:raw-latex:`\\mathbb{R}` $ and we have $\n:raw-latex:`\\int`\\_{-:raw-latex:`\\infty`}^{:raw-latex:`\\infty`} f(x) dx\n= 1$.\n\n", boost::python::no_init);
    class_54cf6a9a8b6f55e88b9761ceaf79ba3f.def("ldf", boost::python::pure_virtual(method_pointer_2843df1d3dc6596aaccccc3a0dd5da36), "Compute the log-probability density of a value.\n\nLet $x :raw-latex:`\\in `:raw-latex:`\\mathbb{R}` $ denote the value, $\n:raw-latex:`\\ln `f(x) = :raw-latex:`\\ln `P:raw-latex:`\\left`(X\n:raw-latex:`\\in `dx:raw-latex:`\\right`) $.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - The considered value.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_54cf6a9a8b6f55e88b9761ceaf79ba3f.def("pdf", boost::python::pure_virtual(method_pointer_30c20faf3f5a515d9541c73f1eb020df), "Compute the probability density of a value.\n\nLet $x :raw-latex:`\\in `:raw-latex:`\\mathbb{R}` $ denote the value, $\nf(x) = P:raw-latex:`\\left`(X :raw-latex:`\\in `dx:raw-latex:`\\right`) $.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - The considered value.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_54cf6a9a8b6f55e88b9761ceaf79ba3f.def("cdf", boost::python::pure_virtual(method_pointer_3e9327a27cc259a1a813cf253bd84642), "Compute the cumulative probability of a value.\n\nLet $x :raw-latex:`\\in `:raw-latex:`\\mathbb{R}` $ denote the value, $\nP:raw-latex:`\\left`(X :raw-latex:`\\leq `x :raw-latex:`\\right`) =\n:raw-latex:`\\int`\\_{-:raw-latex:`\\infty`}^x f(t) dt $.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - The considered value.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_54cf6a9a8b6f55e88b9761ceaf79ba3f.def("quantile", boost::python::pure_virtual(method_pointer_32217c345e3d5454a2e46058d702ce84), "Compute the quantile of a probability. This is the value $ x\n:raw-latex:`\\in `:raw-latex:`\\mathbb{R}` $ such that $ P(X\n:raw-latex:`\\leq `x) = p $.\n\n:Parameter:\n    `p` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_54cf6a9a8b6f55e88b9761ceaf79ba3f.def("get_mean", boost::python::pure_virtual(method_pointer_cb42091f4cb35419b13eb0e0c27eb470), "Get mean of a continuous random component $ E(X) =\n:raw-latex:`\\int`\\_{-:raw-latex:`\\infty`}^{:raw-latex:`\\infty`} x f(x)\ndx $.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_54cf6a9a8b6f55e88b9761ceaf79ba3f.def("get_variance", boost::python::pure_virtual(method_pointer_17d4a13bc764561299d331907516003f), "Get variance of a continuous random component $ V(X) =\n:raw-latex:`\\int`\\_{-:raw-latex:`\\infty`}^{:raw-latex:`\\infty`}\n:raw-latex:`\\lbrace `x-E(X) :raw-latex:`\\rbrace`^2 f(x) dx $.\n\n:Return Type:\n    :cpp:any:`double`\n\n");

    if(autowig::Held< struct ::statiskit::ContinuousUnivariateDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_54cf6a9a8b6f55e88b9761ceaf79ba3f >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistribution >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::ContinuousUnivariateDistribution >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::ContinuousUnivariateDistribution >::Type, autowig::Held< struct ::statiskit::UnivariateDistribution >::Type >();
    }

}