/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#ifndef STATISKIT_CORE_BASE_H
#define STATISKIT_CORE_BASE_H

#include <statiskit/linalg/Eigen.h>

#include <boost/random/mersenne_twister.hpp>
#include <boost/math/constants/constants.hpp>
#include <type_traits>
#include <map>
#include <exception>
#include <assert.h>
#include <iostream>
#include <memory>

#if defined WIN32 || defined _WIN32 || defined __CYGWIN__
  #ifdef LIBSTATISKIT_CORE
    #ifdef __GNUC__
      #define STATISKIT_CORE_API __attribute__ ((dllexport))
    #else
      #define STATISKIT_CORE_API __declspec(dllexport)
    #endif
  #else
    #ifdef __GNUC__
      #define STATISKIT_CORE_API __attribute__ ((dllimport))
    #else
      #define STATISKIT_CORE_API __declspec(dllimport)
    #endif
  #endif
#else
  #if __GNUC__ >= 4
    #define STATISKIT_CORE_API __attribute__ ((visibility ("default")))
  #else
    #define STATISKIT_CORE_API
  #endif
#endif

namespace statiskit
{
    namespace __impl
    {
        double reldiff(const double& prev, const double& curr);
        double reldiff(const Eigen::VectorXd& prev, const Eigen::VectorXd& curr);
        double reldiff(const Eigen::MatrixXd& prev, const Eigen::MatrixXd& curr);

        template<class T> std::string to_string(const T& t, const unsigned int& width=0);

        template<typename T> T normalize(const T& input, const bool& logarithm=false);

        template<class InputIterator, class OutputIterator, class SubsetIterator> void subset(InputIterator input_first, InputIterator input_last, OutputIterator result, SubsetIterator keep_first, SubsetIterator keep_last);

        /** Get the random generator
         * 
         * The random generator used is the <a href="http://www.boost.org/doc/libs/1_60_0/doc/html/boost/random/mt19937.html">Mersenne Twister</a> random generator of the Boost.Random library
         */
        STATISKIT_CORE_API boost::mt19937& get_random_generator();
    }

    struct STATISKIT_CORE_API not_implemented_error : std::exception
    { not_implemented_error(); };

    struct STATISKIT_CORE_API proxy_connection_error : std::exception
    { proxy_connection_error(); };

    struct STATISKIT_CORE_API parameter_error : std::runtime_error
    { parameter_error(const std::string& parameter, const std::string& error); };

    struct STATISKIT_CORE_API size_error : parameter_error
    {
        enum size_type {
            inferior,
            equal,
            superior,
        };

        size_error(const std::string& parameter, const size_t& self, const size_t& other, const size_type& size=size_type::equal);
    };

    struct STATISKIT_CORE_API nullptr_error : parameter_error
    { nullptr_error(const std::string& parameter); };

    struct STATISKIT_CORE_API lower_bound_error : parameter_error
    { template<typename T, typename L> lower_bound_error(const std::string& parameter, const T& value, const L& lower, const bool& strict); };

    struct STATISKIT_CORE_API upper_bound_error : parameter_error
    { template<typename T, typename U> upper_bound_error(const std::string& parameter, const T& value, const U& upper, const bool& strict); };

    struct STATISKIT_CORE_API interval_error : parameter_error
    { template<typename T, typename L, typename U> interval_error(const std::string& parameter, const T& value, const L& lower, const U& upper, const std::pair<bool, bool>& strict); };

    struct STATISKIT_CORE_API duplicated_value_error : parameter_error
    { template<typename T> duplicated_value_error(const std::string& parameter, const T& value); };
}

#if !defined(_WIN32) && !defined(WIN32)
namespace std { template<typename T, typename... Args> unique_ptr<T> make_unique(Args&&... args); }
#endif

#include "base.hpp"
#endif
