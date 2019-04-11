#include "_core.h"

namespace autowig
{
    typedef ::statiskit::MultivariateDistribution class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::MultivariateDistribution::MultivariateDistribution;


        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  return_type_bfcc78e34f6259b6a33f959f459c73aa;
            virtual return_type_bfcc78e34f6259b6a33f959f459c73aa copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_bfcc78e34f6259b6a33f959f459c73aa, class_type, copy, ); };

        public:
            typedef class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  return_type_4ea4050829d754ffad293bbb7a971a31;
            virtual return_type_4ea4050829d754ffad293bbb7a971a31 simulate() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_4ea4050829d754ffad293bbb7a971a31, class_type, simulate, ); };

        public:
            typedef double  return_type_1b1aa04affe25769a45aa61f808a0a19;
            typedef struct ::statiskit::MultivariateEvent const * param_1b1aa04affe25769a45aa61f808a0a19_0_type;
            typedef bool const & param_1b1aa04affe25769a45aa61f808a0a19_1_type;
            virtual return_type_1b1aa04affe25769a45aa61f808a0a19 probability(param_1b1aa04affe25769a45aa61f808a0a19_0_type param_0, param_1b1aa04affe25769a45aa61f808a0a19_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_1b1aa04affe25769a45aa61f808a0a19, class_type, probability, param_0, param_1); };

        public:
            typedef unsigned int  return_type_d6b37eb7a2815c508032d7111fe27b25;
            virtual return_type_d6b37eb7a2815c508032d7111fe27b25 get_nb_parameters() const override { PYBIND11_OVERLOAD_PURE(return_type_d6b37eb7a2815c508032d7111fe27b25, class_type, get_nb_parameters, ); };

        public:
            typedef ::statiskit::Index  return_type_6bbdbd5137365f409e51be059aaa5dec;
            virtual return_type_6bbdbd5137365f409e51be059aaa5dec get_nb_components() const override { PYBIND11_OVERLOAD_PURE(return_type_6bbdbd5137365f409e51be059aaa5dec, class_type, get_nb_components, ); };
    };
}

::statiskit::Index  (::statiskit::MultivariateDistribution::*method_pointer_6bbdbd5137365f409e51be059aaa5dec)()const= &::statiskit::MultivariateDistribution::get_nb_components;
unsigned int  (::statiskit::MultivariateDistribution::*method_pointer_d6b37eb7a2815c508032d7111fe27b25)()const= &::statiskit::MultivariateDistribution::get_nb_parameters;
double  (::statiskit::MultivariateDistribution::*method_pointer_1b1aa04affe25769a45aa61f808a0a19)(struct ::statiskit::MultivariateEvent const *, bool const &)const= &::statiskit::MultivariateDistribution::probability;
double  (::statiskit::MultivariateDistribution::*method_pointer_6285df200fdc5073aaa5aab9a61032f1)(struct ::statiskit::MultivariateData const &)const= &::statiskit::MultivariateDistribution::loglikelihood;
class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  (::statiskit::MultivariateDistribution::*method_pointer_4ea4050829d754ffad293bbb7a971a31)()const= &::statiskit::MultivariateDistribution::simulate;
class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  (::statiskit::MultivariateDistribution::*method_pointer_bfcc78e34f6259b6a33f959f459c73aa)()const= &::statiskit::MultivariateDistribution::copy;

namespace autowig {
}

void wrapper_4540538b16205d90be33cf08feed0673(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MultivariateDistribution, autowig::Trampoline, autowig::HolderType< struct ::statiskit::MultivariateDistribution >::Type > class_4540538b16205d90be33cf08feed0673(module, "MultivariateDistribution", "");
    class_4540538b16205d90be33cf08feed0673.def("get_nb_components", method_pointer_6bbdbd5137365f409e51be059aaa5dec, "Get the number of components of the distribution.\n\n:Return Type:\n    [STRIKEOUT::cpp:any:statiskit::Index]\n\n");
    class_4540538b16205d90be33cf08feed0673.def("get_nb_parameters", method_pointer_d6b37eb7a2815c508032d7111fe27b25, "Get the number of parameters of the distribution.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_4540538b16205d90be33cf08feed0673.def("probability", method_pointer_1b1aa04affe25769a45aa61f808a0a19, "");
    class_4540538b16205d90be33cf08feed0673.def("loglikelihood", method_pointer_6285df200fdc5073aaa5aab9a61032f1, "Compute the log-likelihood of an univariate dataset according to the\nconsidered multiivariate distribution.\n\n:Parameter:\n    `data` (:cpp:class:`::statiskit::MultivariateData`) - The considered multivariate dataset.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_4540538b16205d90be33cf08feed0673.def("simulate", method_pointer_4ea4050829d754ffad293bbb7a971a31, ":Return Type:\n    :cpp:any:`::std::unique_ptr<` struct\n    ::statiskit::MultivariateEvent, struct ::std::default_delete< struct\n    ::statiskit::MultivariateEvent > >\n\n");
    class_4540538b16205d90be33cf08feed0673.def("copy", method_pointer_bfcc78e34f6259b6a33f959f459c73aa, "");

}