#pragma once

#include <statiskit/linalg/Eigen.h>
#include <statiskit/stl/STL.h>

#include <boost/random/mersenne_twister.hpp>
#include <boost/math/constants/constants.hpp>
#include <boost/random/uniform_01.hpp>
#include <type_traits>
#include <map>
#include <exception>
#include <assert.h>
#include <iostream>
#include <memory>
#include <unordered_map>

#if defined WIN32 || defined _WIN32 || defined __CYGWIN__
    #define __PRETTY_FUNCTION__ __FUNCSIG__
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

#define NOT_IMPLEMENTED() _Pragma("message \"not implemented function\""); throw not_implemented_error(__PRETTY_FUNCTION__, __FILE__, __LINE__)

#define INFOPOINT() std::cout << __PRETTY_FUNCTION__ << "in file '" << __FILE__ << "' at line " << __LINE__ << std::endl

#ifdef NDEBUG
#define BREAKPOINT() _Pragma("message \"breakpoint ignored\"")
#else
#include <csignal>
#define BREAKPOINT() std::raise(SIGINT)
#endif

namespace statiskit
{

    template<class T, class D, class B=T> struct PolymorphicCopy : public B
    {
        PolymorphicCopy();
        PolymorphicCopy(const PolymorphicCopy<T, D, B>& other);
        virtual ~PolymorphicCopy() = default;
         
        virtual std::unique_ptr< T > copy() const;
    };

    namespace __impl
    {
        STATISKIT_CORE_API double reldiff(const double& prev, const double& curr);
        STATISKIT_CORE_API double reldiff(const Eigen::VectorXd& prev, const Eigen::VectorXd& curr);
        STATISKIT_CORE_API double reldiff(const Eigen::MatrixXd& prev, const Eigen::MatrixXd& curr);

        template<class T> std::string to_string(const T& t, const unsigned int& width=0);
        template<class T> std::string to_string(const std::set< T >& s, const unsigned int& width=0);

        template<typename T> T normalize(const T& input, const bool& logarithm=false);

        template<class InputIterator, class OutputIterator, class SubsetIterator> void subset(InputIterator input_first, InputIterator input_last, OutputIterator result, SubsetIterator keep_first, SubsetIterator keep_last);

        /** Get the random generator
         * 
         * The random generator used is the <a href="http://www.boost.org/doc/libs/1_60_0/doc/html/boost/random/mt19937.html">Mersenne Twister</a> random generator of the Boost.Random library
         */
        STATISKIT_CORE_API boost::mt19937& get_random_generator();

        STATISKIT_CORE_API unsigned int get_maxits(const uintptr_t& ptr, const unsigned int& maxits);
        STATISKIT_CORE_API void set_maxits(const uintptr_t& ptr, const unsigned int& maxits);
        STATISKIT_CORE_API void unset_maxits(const uintptr_t& ptr);

        template<class T> void merge(std::unordered_set< T >& lhs, const std::unordered_set< T >& rhs);

        template<class U, class V> std::set< U > keys(const std::map< U, V >& map);
    }

    STATISKIT_CORE_API void set_seed();
    STATISKIT_CORE_API void set_seed(const Index& seed);

    struct STATISKIT_CORE_API not_implemented_error : std::runtime_error
    { not_implemented_error(const std::string& function, const std::string& file, const unsigned int& line); };

    struct STATISKIT_CORE_API parameter_error : std::runtime_error
    { parameter_error(const std::string& parameter, const std::string& error); };

    struct STATISKIT_CORE_API member_error : std::runtime_error
    { member_error(const std::string& parameter, const std::string& error); };

    struct STATISKIT_CORE_API size_error : parameter_error
    {
        enum size_type {
            inferior,
            equal,
            superior,
        };

        size_error(const std::string& parameter, const Index& self, const Index& other, const size_type& size=size_type::equal);
    };

    struct STATISKIT_CORE_API nullptr_error : parameter_error
    { nullptr_error(const std::string& parameter); };

    struct STATISKIT_CORE_API lower_bound_error : parameter_error
    { template<typename T, typename L> lower_bound_error(const std::string& parameter, const T& value, const L& lower, const bool& strict); };

    struct STATISKIT_CORE_API upper_bound_error : parameter_error
    { template<typename T, typename U> upper_bound_error(const std::string& parameter, const T& value, const U& upper, const bool& strict); };

    struct STATISKIT_CORE_API interval_error : parameter_error
    { template<typename T, typename L, typename U> interval_error(const std::string& parameter, const T& value, const L& lower, const U& upper, const std::pair<bool, bool>& strict); };

    struct STATISKIT_CORE_API in_set_error : parameter_error
    { template<typename T, typename L> in_set_error(const std::string& parameter, const T& value, const std::set< L >& values, const bool& in = true); };

    struct STATISKIT_CORE_API duplicated_value_error : parameter_error
    { template<typename T> duplicated_value_error(const std::string& parameter, const T& value); };

    template<class T>
        class Optimization : public T
        {
            public:
                Optimization();
                Optimization(const Optimization< T >& optimization);
                virtual ~Optimization();

                const double& get_mindiff() const;
                void set_mindiff(const double& mindiff);
                
                unsigned int get_minits() const;
                void set_minits(const unsigned int& maxits);

                unsigned int get_maxits() const;
                void set_maxits(const unsigned int& maxits);

            protected:
                double _mindiff;
                unsigned int _minits;
                unsigned int _maxits;

                bool run(const unsigned int& its, const double& delta) const;
        };

    struct STATISKIT_CORE_API Schedule
    {
        virtual ~Schedule() = 0;

        virtual double operator() (const double& stage) const = 0;

        virtual std::unique_ptr< Schedule > copy() const = 0;
    };

    class STATISKIT_CORE_API ExponentialSchedule : public PolymorphicCopy< Schedule, ExponentialSchedule >
    { 
        public:
            ExponentialSchedule(const double& theta);
            ExponentialSchedule(const ExponentialSchedule& schedule);
            virtual ~ExponentialSchedule();

            virtual double operator() (const double& stage) const;

            const double& get_theta() const;
            void set_theta(const double& theta);

        protected:
            double _theta;
    };

    template<class T>
        class SimulatedAnnealing : public T
        {
            public:
                SimulatedAnnealing();
                SimulatedAnnealing(const SimulatedAnnealing< T >& simulated_annealing);
                virtual ~SimulatedAnnealing();

                const Schedule* get_schedule() const;
                void set_schedule(const Schedule& schedule);
                
                unsigned int get_minits() const;
                void set_minits(const unsigned int& maxits);

                unsigned int get_maxits() const;
                void set_maxits(const unsigned int& maxits);

            protected:
                Schedule* _schedule;
                unsigned int _minits;
                unsigned int _maxits;

                bool accept(const unsigned int& its, const double& delta) const;
        };
}

#ifndef AUTOWIG
#include "base.hpp"
#endif