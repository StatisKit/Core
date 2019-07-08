#ifndef AUTOWIG
#pragma once

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
        {
            return std::make_unique< D >(static_cast< const D& >(*this));
        }
             
    namespace __impl
    {
        template<class T>
            std::string to_string(const T& t, const unsigned int& width)
            {
                std::ostringstream oss;
                if (width == 0) {
                    oss << t;
                } else {
                    oss << std::setfill('0') << std::setw(width) << t;
                }
                return oss.str();
            }

        template<class T>
            std::string to_string(const std::set< T >& s, const unsigned int& width)
            {
                std::string str = "{";
                for (typename std::set< T >::const_iterator it = s.begin(), it_end = s.end(); it != it_end; ++it) {
                    if (it != s.begin()) {
                        str += ", ";
                    }
                    str += to_string(*it, width);
                }
                str += "}";
                return str;
            }            

        template<class T>
            T normalize(const T& input, const bool& logarithm)
            {
                T output = T(input.begin(), input.end());
                if (logarithm) { 
                    typename T::const_iterator it_m = std::max_element(input.begin(), input.end());
                    for (typename T::iterator it_c = output.begin(), it_e = output.end(); it_c != it_e; ++it_c) {
                        *it_c -= *it_m;
                        *it_c = exp(*it_c);
                    }
                }
                typename T::value_type sum = 0.;
                for (typename T::iterator it = output.begin(), it_end = output.end(); it != it_end; ++it) {
                    if (*it < 0) {
                        throw std::runtime_error("Encountered a negative value during normalization");
                    }
                    sum += *it;
                }
                for (typename T::iterator it = output.begin(), it_end = output.end(); it != it_end; ++it) {
                    *it /= sum;
                }
                return output;
            } 

        template<class InputIterator, class OutputIterator, class SubsetIterator> void subset(InputIterator input_first, InputIterator input_last, OutputIterator result, SubsetIterator keep_first, SubsetIterator keep_last)
        {
            InputIterator input_current = input_first;
            while (input_first != input_last && keep_first != keep_last) {
                while (distance(input_first, input_current) != *keep_first) {
                    ++input_current;
                }
                *result = *input_current;
                ++result;
                ++input_current;
                ++keep_first;
            }
        }

        template<class T>
        void merge(std::unordered_set< T >& lhs, const std::unordered_set< T >& rhs)
        {
            for (typename std::unordered_set< T >::const_iterator it = rhs.cbegin(), it_end = rhs.cend(); it != it_end; ++it) {
                lhs.insert(*it);
            }
        }

        template<class U, class V> 
        std::set< U > keys(const std::map< U, V >& map)
        {
            std::set< U > set;
            for (typename std::map< U, V >::const_iterator it = map.cbegin(), it_end = map.cend(); it != it_end; ++it) {
                set.insert(it->first);
            }
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
}

#endif