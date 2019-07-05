#pragma once

#ifndef AUTOWIG
#include <iomanip>
#include <boost/lexical_cast.hpp>

namespace statiskit
{
    template<class T, class D, class B>
        PolymorphicCopy< T, D, B >::PolymorphicCopy() : B()
        {}

    template<class T, class D, class B>
        PolymorphicCopy< T, D, B >::PolymorphicCopy(const PolymorphicCopy< T, D, B>& other) : B(other)
        {}

    template<class T, class D, class B>
        std::unique_ptr< T > PolymorphicCopy< T, D, B >::copy() const
        { return std::make_unique< D >(static_cast< const D& >(*this)); }
             
    namespace __impl
    {
        template<class T>
            std::string to_string(const T& t, const unsigned int& width)
            {
                std::ostringstream oss;
                if(width == 0)
                { oss << t; }
                else
                { oss << std::setfill('0') << std::setw(width) << t; }
                return oss.str();
            }

        template<class T>
            std::string to_string(const std::set< T >& s, const unsigned int& width)
            {
                std::string str = "{";
                for(typename std::set< T >::const_iterator it = s.begin(), it_end = s.end(); it != it_end; ++it)
                {
                    if(it != s.begin())
                    { str += ", "; }
                    str += to_string(*it, width);
                }
                str += "}";
                return str;
            }            

        template<class T>
            T normalize(const T& input, const bool& logarithm)
            {
                T output = T(input.begin(), input.end());
                if(logarithm)
                { 
                    typename T::const_iterator it_m = std::max_element(input.begin(), input.end());
                    for(typename T::iterator it_c = output.begin(), it_e = output.end(); it_c != it_e; ++it_c)
                    {
                        *it_c -= *it_m;
                        *it_c = exp(*it_c);
                    }
                }
                typename T::value_type sum = 0.;
                for(typename T::iterator it = output.begin(), it_end = output.end(); it != it_end; ++it)
                {
                    if(*it < 0)
                    { throw std::exception(); }
                    sum += *it;
                }
                for(typename T::iterator it = output.begin(), it_end = output.end(); it != it_end; ++it)
                { *it /= sum; }
                return output;
            } 

        template<class InputIterator, class OutputIterator, class SubsetIterator> void subset(InputIterator input_first, InputIterator input_last, OutputIterator result, SubsetIterator keep_first, SubsetIterator keep_last)
        {
            InputIterator input_current = input_first;
            while(input_first != input_last && keep_first != keep_last)
            {
                while(distance(input_first, input_current) != *keep_first)
                { ++input_current; }
                *result = *input_current;
                ++result;
                ++input_current;
                ++keep_first;
            }
        }

        template<class T>
        void merge(std::unordered_set< T >& lhs, const std::unordered_set< T >& rhs)
        {
            for(typename std::unordered_set< T >::const_iterator it = rhs.cbegin(), it_end = rhs.cend(); it != it_end; ++it)
            { lhs.insert(*it); }
        }

        template<class U, class V> 
        std::set< U > keys(const std::map< U, V >& map)
        {
            std::set< U > set;
            for(typename std::map< U, V >::const_iterator it = map.cbegin(), it_end = map.cend(); it != it_end; ++it)
            { set.insert(it->first); }
            return set;
        }

    }

    template<typename T, typename L>
        lower_bound_error::lower_bound_error(const std::string& parameter, const T& value, const L& lower, const bool& strict) : parameter_error(parameter, __impl::to_string(value) +  "not " + std::string("strictly", 0, 8*strict) + " superior to " + __impl::to_string(lower))
        {}

    template<typename T, typename U>
        upper_bound_error::upper_bound_error(const std::string& parameter, const T& value, const U& upper, const bool& strict) : parameter_error(parameter, __impl::to_string(value) + " not " + std::string("strictly", 0, 8*strict) + " inferior to " + __impl::to_string(upper))
        {}

    template<typename T, typename L, typename U>
        interval_error::interval_error(const std::string& parameter, const T& value, const L& lower, const U& upper, const std::pair<bool, bool>& strict) : parameter_error(parameter, __impl::to_string(value) + " not " + std::string("strictly", 0, 8*strict.first) + " superior to " + __impl::to_string(lower) + " and " + std::string("strictly", 0, 8*strict.second) + " inferior to " + __impl::to_string(upper))
        {}

    template<typename T, typename L>
        in_set_error::in_set_error(const std::string& parameter, const T& value, const std::set< L >& values, const bool& in) : parameter_error(parameter, __impl::to_string(value) + std::string(" not", 0, 4 * !in) + " in " + __impl::to_string(values))
        {}

    template<typename T>
        duplicated_value_error::duplicated_value_error(const std::string& parameter, const T& value) : parameter_error(parameter, "contains multiples " + __impl::to_string(value))
        {}

    template<typename T>
        Optimization< T >::Optimization()
        {
            _mindiff = 1e-5;
            _minits = 1;
            _maxits = 10e6;
        }

    template<typename T>
        Optimization< T >::Optimization(const Optimization< T >& optimization)
        {
            _mindiff = optimization._mindiff;
            _minits = optimization._minits;
            _maxits = optimization._maxits;
        }

    template<typename T>
        Optimization< T >::~Optimization()
        {}

    template<typename T>
        const double& Optimization< T >::get_mindiff() const
        { return _mindiff; }

    template<typename T>
        void Optimization< T >::set_mindiff(const double& mindiff)
        { _mindiff = mindiff; }

    template<typename T>
        unsigned int Optimization< T >::get_minits() const
        { return _minits; }

    template<typename T>
        void Optimization< T >::set_minits(const unsigned int& minits)
        { _minits = minits; }

    template<typename T>
        unsigned int Optimization< T >::get_maxits() const
        { return _maxits; }

    template<typename T>
        void Optimization< T >::set_maxits(const unsigned int& maxits)
        { _maxits = maxits; }

    template<typename T>
        bool Optimization< T >::run(const unsigned int& its, const double& delta) const
        { 
            bool status = true;
            if(its > _minits)
            {
                if(!boost::math::isfinite(delta) || its > __impl::get_maxits((uintptr_t)(this), _maxits))
                { status = false; }
                else if(delta < _mindiff)
                { status = false; }
            }
            return status;
        }

    template<typename T>
        SimulatedAnnealing< T >::SimulatedAnnealing()
        {
            _schedule = new ExponentialSchedule(1.);
            _minits = 1;
            _maxits = 10e6;
        }

    template<typename T>
        SimulatedAnnealing< T >::SimulatedAnnealing(const SimulatedAnnealing< T >& simulated_annealing)
        {
            if(simulated_annealing._schedule)
            { _schedule = simulated_annealing._schedule->copy().release(); }
            else
            { _schedule = nullptr; }
            _minits = simulated_annealing._minits;
            _maxits = simulated_annealing._maxits;
        }

    template<typename T>
        SimulatedAnnealing< T >::~SimulatedAnnealing()
        {
            if(_schedule)
            {
                delete _schedule;
                _schedule = nullptr;
            }
        }

    template<typename T>
        const Schedule* SimulatedAnnealing< T >::get_schedule() const
        { return _schedule; }

    template<typename T>
        void SimulatedAnnealing< T >::set_schedule(const Schedule& schedule)
        { _schedule = schedule.copy().release(); }

    template<typename T>
        unsigned int SimulatedAnnealing< T >::get_minits() const
        { return _minits; }

    template<typename T>
        void SimulatedAnnealing< T >::set_minits(const unsigned int& minits)
        { _minits = minits; }

    template<typename T>
        unsigned int SimulatedAnnealing< T >::get_maxits() const
        { return _maxits; }

    template<typename T>
        void SimulatedAnnealing< T >::set_maxits(const unsigned int& maxits)
        { _maxits = maxits; }

    template<typename T>
        bool SimulatedAnnealing< T >::accept(const unsigned int& its, const double& delta) const
        { 
            bool status = true;
            if(its > _minits && delta < 0)
            {
                double maxits = __impl::get_maxits((uintptr_t)(this), _maxits);
                if(its > maxits)
                { status = false; }
                else 
                {
                    double u = boost::uniform_01<boost::mt19937&>(__impl::get_random_generator())();
                    status = u < exp(- delta / (*_schedule)((its - _minits) / maxits));
                }
            }
            return status;
        }
}

#endif