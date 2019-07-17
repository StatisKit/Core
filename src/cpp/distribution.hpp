#ifndef AUTOWIG
#pragma once

#include <boost/math/distributions/extreme_value.hpp>
#include <boost/math/distributions/laplace.hpp>
#include <boost/math/distributions/logistic.hpp>
#include <boost/math/distributions/normal.hpp>
#include <boost/math/distributions/students_t.hpp>
#include <boost/math/special_functions/beta.hpp>
#include <boost/math/special_functions/erf.hpp>
#include <boost/math/special_functions/gamma.hpp>
#include <boost/random/beta_distribution.hpp>
#include <boost/random/binomial_distribution.hpp>
#include <boost/random/gamma_distribution.hpp>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/poisson_distribution.hpp>
#include <boost/random/uniform_int_distribution.hpp>
#include <boost/random/variate_generator.hpp>

namespace statiskit
{
    template<class T>
        UnivariateFrequencyDistribution< T >::UnivariateFrequencyDistribution()
        {}

    template<class T>
        unsigned int UnivariateFrequencyDistribution< T >::get_nb_parameters() const
        {
            return this->pi.size() - 1;
        }

    template<class T>
        double UnivariateFrequencyDistribution< T >::ldf(const typename T::event_type::value_type& value) const
        {
            return log(pdf(value));
        }
    
    template<class T>
        double UnivariateFrequencyDistribution< T >::pdf(const typename T::event_type::value_type& value) const
        {
            double p;
            typename std::set< typename T::event_type::value_type >::const_iterator it = this->values.find(value);
            if (it == this->values.end()) {
                p = 0.;
            } else {
                p = this->pi[distance(this->values.cbegin(), it)];
            }
            return p;
        }
        
    template<class T>
        std::unique_ptr< UnivariateEvent > UnivariateFrequencyDistribution< T >::simulate() const
        {
            double cp = this->pi[0];
            double sp = boost::uniform_01<boost::mt19937&>(__impl::get_random_generator())();
            typename std::set< typename T::event_type::value_type >::const_iterator it = this->values.cbegin();
            while (it != this->values.cend() && cp < sp) {
                ++it;
                cp += this->pi[distance(this->values.cbegin(), it)];
            }
            if (it == this->values.cend()) {
                --it;
            }
            return std::make_unique< ElementaryEvent< typename T::event_type > >(*it);
        }

    template<class T>
        std::set< typename T::event_type::value_type > UnivariateFrequencyDistribution< T >::get_values() const
        {
            return this->values;
        }

    template<class T>
        const Eigen::VectorXd& UnivariateFrequencyDistribution< T >::get_pi() const
        {
            return this->pi;
        }

    template<class T>
        void UnivariateFrequencyDistribution< T >::set_pi(const Eigen::VectorXd& pi)
        {
        	if (pi.rows() == this->values.size() - 1) {
		    	Index index = 0; 
		    	while (index < pi.rows() && pi[index] >= 0.) {
                    ++index;
                }
		    	if (index < pi.rows()) {
                    throw parameter_error("pi", "contains negative values");
                } 
		    	double sum = pi.sum();
		    	if (sum < 1) {
					this->pi.segment(0, this->values.size() - 1) = pi;
					this->pi[this->values.size()-1] = 1 - sum;
		    	} else {
                    throw parameter_error("pi", "last category values");
                } 		    	
        	} else if (pi.rows() == this->values.size()) {
		    	Index index = 0; 
		    	while (index < pi.rows() && pi[index] >= 0.) {
                    ++index;
                }
		    	if (index < pi.rows()) {
                    throw parameter_error("pi", "contains negative values");
                } 
		        this->pi = pi / pi.sum();
            } else {
                throw parameter_error("pi", "number of parameters");
            } 	           
        }

    template<class T>
        void UnivariateFrequencyDistribution< T >::init(const std::set< typename T::event_type::value_type >& values)
        {
            if (values.size() == 0) {
                throw size_error("values", 0, 0, size_error::superior);
            }
            this->values = values;
            this->pi = Eigen::VectorXd::Ones(values.size());
            this->pi /= this->pi.sum();
        }
    
    template<class T>
        void UnivariateFrequencyDistribution< T >::init(const std::set< typename T::event_type::value_type >& values, const Eigen::VectorXd& pi)
        {
            if (values.size() == 0) {
                throw size_error("values", 0, 0, size_error::superior);
            }
            if (values.size() != pi.size()) {
                throw size_error("values", 0, values.size(), size_error::equal);
            }
            this->values = values;
            this->set_pi(pi);
        }

    template<class T>
        void UnivariateFrequencyDistribution< T >::init(const UnivariateFrequencyDistribution< T >& frequency)
        {
            this->values = frequency.values;
            this->pi = frequency.pi;
        }

    template<class T>
        QuantitativeUnivariateFrequencyDistribution<T>::QuantitativeUnivariateFrequencyDistribution(const std::set< typename T::event_type::value_type >& values)
        {
            this->init(values);
        }

    template<class T>
        QuantitativeUnivariateFrequencyDistribution<T>::QuantitativeUnivariateFrequencyDistribution(const std::set< typename T::event_type::value_type >& values, const Eigen::VectorXd& pi)
        {
            this->init(values, pi);
        }

    template<class T>
        QuantitativeUnivariateFrequencyDistribution<T>::QuantitativeUnivariateFrequencyDistribution(const UnivariateFrequencyDistribution< T >& frequency)
        {
            this->init(frequency);
        }

    template<class T>
        double QuantitativeUnivariateFrequencyDistribution< T >::cdf(const typename T::event_type::value_type& value) const
        {
            double p = 0.;
            typename std::set< typename T::event_type::value_type >::const_iterator it = this->values.cbegin();
            while (it != this->values.cend() && *it <= value) {
                p += this->pi[distance(this->values.cbegin(), it)];
                ++it;
            }
            if (it == this->values.cend()) {
                p = 1.;
            }
            return p;
        }

    template<class T>
         typename T::event_type::value_type QuantitativeUnivariateFrequencyDistribution< T >::quantile(const double& p) const
        {
            double tp = 0.;
            typename T::event_type::value_type q;
            typename std::set< typename T::event_type::value_type >::const_iterator it_begin = this->values.cbegin();
            typename std::set< typename T::event_type::value_type >::const_iterator it = it_begin;
            typename std::set< typename T::event_type::value_type >::const_iterator it_end = this->values.cend();
            it = it_begin;
            while (it != it_end && tp < p) {
                tp += this->pi[distance(it_begin, it)];
                ++it;
            }
            if (it != it_begin) {
                --it;
            }
            q = *it;
            return q;
        }

    template<class T>
        double QuantitativeUnivariateFrequencyDistribution< T >::get_mean() const
        {
            double mean = 0.;
            for (typename std::set< typename T::event_type::value_type >::const_iterator it = this->values.cbegin(), it_end = this->values.cend(); it != it_end; ++it) {
                mean += *it * this->pi[distance(this->values.cbegin(), it)];
            }
            return mean;
        }

    template<class T>
        double QuantitativeUnivariateFrequencyDistribution< T >::get_variance() const
        {
            double mean = this->get_mean(), variance = 0.;
            for (typename std::set< typename T::event_type::value_type >::const_iterator it = this->values.cbegin(), it_end = this->values.cend(); it != it_end; ++it) {
                variance += pow(*it-mean, 2) * this->pi[distance(this->values.cbegin(), it)];
            }
            return variance;
        }

    template<class T>
        ShiftedDistribution< T >::ShiftedDistribution(const T& distribution, const typename T::event_type::value_type& shift)
        {
            this->distribution = static_cast< T* >(distribution.copy().release());
            this->shift = shift;
        }

    template<class T>
        ShiftedDistribution< T >::ShiftedDistribution(const ShiftedDistribution< T >& distribution)
        {
            this->distribution = static_cast< T* >(distribution.distribution->copy().release());
            this->shift = distribution.shift;
        }

    template<class T>
        ShiftedDistribution< T >::~ShiftedDistribution()
        {
            delete this->distribution;
        }

    template<class T>
        unsigned int ShiftedDistribution< T >::get_nb_parameters() const
        {
            return this->distribution->get_nb_parameters() + 1 * bool(this->shift != 0);
        }

    template<class T>
        std::unique_ptr< UnivariateEvent > ShiftedDistribution< T >::simulate() const
        {
            return std::make_unique< ElementaryEvent< typename T::event_type > >(static_cast< ElementaryEvent< typename T::event_type > * >(this->distribution->simulate().get())->get_value() + this->shift);
        }

    template<class T>
        double ShiftedDistribution< T >::ldf(const typename T::event_type::value_type& value) const
        {
            return this->distribution->ldf(value - this->shift);
        }

    template<class T>
        double ShiftedDistribution< T >::pdf(const typename T::event_type::value_type& value) const
        {
            return this->distribution->pdf(value - this->shift);
        }

    template<class T>
        double ShiftedDistribution< T >::cdf(const typename T::event_type::value_type& value) const
        {
            return this->distribution->cdf(value - this->shift);
        }

    template<class T>
        typename T::event_type::value_type ShiftedDistribution< T >::quantile(const double& p) const
        {
            return this->distribution->quantile(p) + this->shift;
        }

    template<class T>
        double ShiftedDistribution< T >::get_mean() const
        {
            return this->distribution->get_mean() + this->shift;
        }

    template<class T>
        double ShiftedDistribution< T >::get_variance() const
        {
            return this->distribution->get_variance();
        }

    template<class T>
        const typename T::event_type::value_type& ShiftedDistribution< T >::get_shift() const
        {
            return this->shift;
        }

    template<class T>
        void ShiftedDistribution< T >::set_shift(const typename T::event_type::value_type& shift)
        {
            this->shift = shift;
        }

    template<class T>
        const T* ShiftedDistribution< T >::get_distribution() const
        {
            return this->distribution;
        }

    template<class T>
        void ShiftedDistribution< T >::set_distribution(const T& distribution)
        { 
            delete this->distribution;
            this->distribution = static_cast< T* >(distribution.copy().release());
        }
}

#endif