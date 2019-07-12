#ifndef AUTOWIG
#pragma once

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

    template<class D>
        MixtureDistribution< D >::MixtureDistribution()
        {} 

    template<class D>
        MixtureDistribution< D >::~MixtureDistribution()
        {
            for (Index index = 0, max_index = this->observations.size(); index < max_index; ++index) { 
                delete this->observations[index];
                this->observations[index] = nullptr;
            }
            this->observations.clear();
        } 

    template<class D>
        unsigned int MixtureDistribution< D >::get_nb_parameters() const
        {
            unsigned int nb_parameters = this->pi.size() - 1;
            for (Index index = 0, max_index = this->observations.size(); index < max_index; ++index) {
                nb_parameters += this->observations[index]->get_nb_parameters();
            }
            return nb_parameters;
        }     

    template<class D>
        Index MixtureDistribution< D >::get_nb_states() const
        {
            return this->pi.size();
        }     

    template<class D>
        const D* MixtureDistribution< D >::get_observation(const Index& index) const
        { 
            if (index >= get_nb_states()) {
                throw size_error("index", get_nb_states(), size_error::inferior);
            }
            return this->observations[index];
        }     

    template<class D>
        void MixtureDistribution< D >::set_observation(const Index& index, const D& observation)
        { 
            if (index >= get_nb_states()) {
                throw size_error("index", get_nb_states(), size_error::inferior);
            }
            this->observations[index] = static_cast< D* >(observation.copy().release());
        }     

    template<class D>
        const Eigen::VectorXd& MixtureDistribution< D >::get_pi() const
        {
            return this->pi;
        }     

    template<class D>
        void MixtureDistribution< D >::set_pi(const Eigen::VectorXd& pi)
        {
            if (pi.size() != this->observations.size()) {
                throw size_error("pi", this->pi.size(), size_error::equal);
            }
            this->pi = pi / pi.sum();
        } 


    template<class D>
        Eigen::VectorXd MixtureDistribution< D >::posterior(const typename D::data_type::event_type* event, const bool& logarithm) const
        {
            Eigen::VectorXd p = Eigen::VectorXd::Zero(this->get_nb_states());
            for (typename std::vector< D* >::const_iterator it = this->observations.cbegin(), it_end = this->observations.cend(); it != it_end; ++it) {
                p[distance(this->observations.cbegin(), it)] = log(this->pi[distance(this->observations.cbegin(), it)]) + (*it)->probability(event, true);
            }
            double max = p.maxCoeff();
            for (Index index = 0, max_index = p.size(); index < max_index; ++index) {
                if (boost::math::isfinite(p[index])) {
                    p[index] = p[index] - max;
                }
            }
            if (!logarithm) {
                for (Index index = 0, max_index = p.size(); index < max_index; ++index) {
                    if (boost::math::isfinite(p[index])) {
                        p[index] = exp(p[index]);
                    } else {
                        p[index] = 0.;
                    }
                }
                p /= p.sum();
            }
            return p;
        }

    template<class D>
        Index MixtureDistribution< D >::assignment(const typename D::data_type::event_type* event) const
        {
            Eigen::VectorXd p = this->posterior(event, false);
            Index index;
            p.maxCoeff(&index);
            return index;
        }
        
    template<class D>
        std::vector< Index> MixtureDistribution< D >::assignment(const typename D::data_type& data) const
        {
            std::vector< Index > indices(data.size());
            std::unique_ptr< typename D::data_type::Generator > generator = data.generator();
            Index index = 0;
            while (generator->is_valid()) {
                indices[index] = this->assignment(generator->event());
                ++index;
                ++(*generator);
            }
            return indices;
        }

    template<class D>
        double MixtureDistribution< D >::uncertainty(const typename D::data_type::event_type* event) const
        {
            double entropy = 0.;
            Eigen::VectorXd p = this->posterior(event, true);
            for(Index index = 0, max_index = p.size(); index < max_index; ++index) {
                if (boost::math::isfinite(p[index])) {
                    entropy -= exp(p[index]) * p[index];
                }
            }
            return entropy;
        }

    template<class D>
        double MixtureDistribution< D >::uncertainty(const typename D::data_type& data) const
        {
            double entropy = 0.;
            std::unique_ptr< typename D::data_type::Generator > generator = data.generator();
            while (generator->is_valid()) {
                entropy += generator->weight() * this->uncertainty(generator->event());
                ++(*generator);
            }
            return entropy;
        }

    template<class D>
        void MixtureDistribution< D >::init(const std::vector< D* > observations, const Eigen::VectorXd& pi)
        {
            this->observations.resize(observations.size());
            for (Index index = 0, max_index = observations.size(); index < max_index; ++index) {
                this->observations[index] = static_cast< D* >(observations[index]->copy().release());
            }
            this->set_pi(pi);
        }

    template<class D>
        void MixtureDistribution< D >::init(const MixtureDistribution< D >& mixture)
        {
            this->observations.resize(mixture.observations.size());
            for (Index index = 0, max_index = mixture.observations.size(); index < max_index; ++index) {
                this->observations[index] = static_cast< D* >(mixture.observations[index]->copy().release());
            }
            this->pi = mixture.pi;
        } 

     template<class D>
        UnivariateMixtureDistribution< D >::UnivariateMixtureDistribution() : MixtureDistribution < D >()
        {}

    template<class D>
        UnivariateMixtureDistribution< D >::~UnivariateMixtureDistribution()
        {} 

    template<class D>
        double UnivariateMixtureDistribution< D >::ldf(const typename D::event_type::value_type& value) const
        {
            return log(this->pdf(value));
        }

    template<class D>
        double UnivariateMixtureDistribution< D >::pdf(const typename D::event_type::value_type& value) const
        {
            double p = 0.;
            for (Index index = 0, max_index = this->get_nb_states(); index < max_index; ++index) {
                p += this->pi[index] * this->observations[index]->pdf(value);
            }
            return p;
        }

    template<class D>
        std::unique_ptr< UnivariateEvent > UnivariateMixtureDistribution< D >::simulate() const
        {
            double cp = this->pi[0], sp = boost::uniform_01<boost::mt19937&>(__impl::get_random_generator())();
            Index index = 0, max_index = this->get_nb_states();
            while (cp < sp && index < max_index) {
                ++index;
                cp += this->pi[index];
            }
            return this->observations[index]->simulate();
        }

    template<class D>
        QuantitativeUnivariateMixtureDistribution< D >::QuantitativeUnivariateMixtureDistribution() : UnivariateMixtureDistribution < D >()
        {}

    template<class D>
        QuantitativeUnivariateMixtureDistribution< D >::~QuantitativeUnivariateMixtureDistribution()
        {} 

    template<class D>
        double QuantitativeUnivariateMixtureDistribution< D >::cdf(const typename D::event_type::value_type& value) const
        {
            double cp = 0;
            for (Index index = 0, max_index = this->get_nb_states(); index < max_index; ++index) {
                cp += this->pi[index] * this->observations[index]->cdf(value);
            }
            return cp;
        }

    template<class D>
        double QuantitativeUnivariateMixtureDistribution< D >::get_mean() const
        {
            double mean = 0;
            for (Index index = 0, max_index = this->get_nb_states(); index < max_index; ++index) {
                mean += this->pi[index] * this->observations[index]->get_mean();
            }
            return mean;
        }

    template<class D>
        double QuantitativeUnivariateMixtureDistribution< D >::get_variance() const
        {
            double mean = this->get_mean(), variance = 0;
            for (Index index = 0, max_index = this->get_nb_states(); index < max_index; ++index) {
                variance += this->pi[index] * (pow(this->observations[index]->get_mean() - mean, 2) + this->observations[index]->get_variance());
            }
            return variance;
        }
 
     template<class D>
        MultivariateMixtureDistribution< D >::MultivariateMixtureDistribution(const std::vector< D* > observations, const Eigen::VectorXd& pi)
        {
            this->init(observations, pi);
            typename std::vector< D* >::const_iterator it = observations.cbegin();
            typename std::vector< D* >::const_iterator  it_end = observations.cend();
            Index nb_components = (*it)->get_nb_components();
            ++it;
            while (it != it_end) {
                if ((*it)->get_nb_components() != nb_components) {
                    throw parameter_error("observations", "not same number of components");
                }
                ++it;
            }
        }

    template<class D>
        MultivariateMixtureDistribution< D >::MultivariateMixtureDistribution(const MultivariateMixtureDistribution< D >& mixture)
        {
            this->init(mixture);
        } 

    template<class D>
        MultivariateMixtureDistribution< D >::~MultivariateMixtureDistribution()
        {} 

    template<class D>
        void MultivariateMixtureDistribution< D >::set_observation(const Index& index, const D& observation)
        { 
            if (observation.get_nb_components() != get_nb_components()) {
                throw parameter_error("observation", "not same number of components");
            }
            MixtureDistribution< D >::set_observation(index, observation);
        }

    template<class D>
        Index MultivariateMixtureDistribution< D >::get_nb_components() const
        {
            return this->observations.back()->get_nb_components();
        }

    template<class D>
        double MultivariateMixtureDistribution< D >::probability(const MultivariateEvent* event, const bool& logarithm) const
        {
            double p = 0.;
            for (Index index = 0, max_index = this->get_nb_states(); index < max_index; ++index) {
                p += this->pi[index] * this->observations[index]->probability(event, false);
            }
            if (logarithm) {
                p = log(p);
            }
            return p;
        }

    template<class D>
        std::unique_ptr< MultivariateEvent > MultivariateMixtureDistribution< D >::simulate() const
        {
            double cp = this->pi[0], sp = boost::uniform_01<boost::mt19937&>(__impl::get_random_generator())();
            Index index = 0, max_index = this->get_nb_states();
            while (cp < sp && index < max_index) {
                ++index;
                cp += this->pi[index];
            }
            return this->observations[index]->simulate();
        }
}

#endif