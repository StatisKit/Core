#include "_core.h"

struct ::statiskit::MultivariateSampleSpace const * (::statiskit::WeightedData< ::statiskit::MultivariateDataFrame >::*method_pointer_3a2a3a9b97515f4a9768f025e794825e)()const= &::statiskit::WeightedData< class ::statiskit::MultivariateDataFrame >::get_sample_space;
class ::statiskit::MultivariateDataFrame const * (::statiskit::WeightedData< ::statiskit::MultivariateDataFrame >::*method_pointer_56897e28ca035b0daf721a8cff74c501)()const= &::statiskit::WeightedData< class ::statiskit::MultivariateDataFrame >::origin;
::statiskit::Index  (::statiskit::WeightedData< ::statiskit::MultivariateDataFrame >::*method_pointer_cdad2d0065a253248c1ebc64c41e0a91)()const= &::statiskit::WeightedData< class ::statiskit::MultivariateDataFrame >::get_nb_weights;
double  (::statiskit::WeightedData< ::statiskit::MultivariateDataFrame >::*method_pointer_05d41b99b36b5848832d09948d315dd8)(::statiskit::Index const &)const= &::statiskit::WeightedData< class ::statiskit::MultivariateDataFrame >::get_weight;
void  (::statiskit::WeightedData< ::statiskit::MultivariateDataFrame >::*method_pointer_0ac1bbdd82215ba99ad2916691481b60)(::statiskit::Index const &, double const &)= &::statiskit::WeightedData< class ::statiskit::MultivariateDataFrame >::set_weight;

namespace autowig {
}

void wrapper_b96c209ac3dd5f7fbfe78eac3417193e(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::WeightedData< class ::statiskit::MultivariateDataFrame >, autowig::HolderType< class ::statiskit::WeightedData< class ::statiskit::MultivariateDataFrame > >::Type, class ::statiskit::MultivariateDataFrame > class_b96c209ac3dd5f7fbfe78eac3417193e(module, "_WeightedData_b96c209ac3dd5f7fbfe78eac3417193e", "");
    class_b96c209ac3dd5f7fbfe78eac3417193e.def(pybind11::init< class ::statiskit::MultivariateDataFrame const & >());
    class_b96c209ac3dd5f7fbfe78eac3417193e.def(pybind11::init< class ::statiskit::WeightedData< class ::statiskit::MultivariateDataFrame > const & >());
    class_b96c209ac3dd5f7fbfe78eac3417193e.def("get_sample_space", method_pointer_3a2a3a9b97515f4a9768f025e794825e, pybind11::return_value_policy::reference_internal, "");
    class_b96c209ac3dd5f7fbfe78eac3417193e.def("origin", method_pointer_56897e28ca035b0daf721a8cff74c501, pybind11::return_value_policy::reference_internal, "");
    class_b96c209ac3dd5f7fbfe78eac3417193e.def("get_nb_weights", method_pointer_cdad2d0065a253248c1ebc64c41e0a91, "");
    class_b96c209ac3dd5f7fbfe78eac3417193e.def("get_weight", method_pointer_05d41b99b36b5848832d09948d315dd8, "");
    class_b96c209ac3dd5f7fbfe78eac3417193e.def("set_weight", method_pointer_0ac1bbdd82215ba99ad2916691481b60, "");

}