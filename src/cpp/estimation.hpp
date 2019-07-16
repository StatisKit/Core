#ifndef AUTOWIG
#pragma once

namespace statiskit
{
    template<class S, class B>
        IterativeEstimation<S, B>::IterativeEstimation(const IterativeEstimation<S, B>& estimation) : B(estimation)
        {
            this->steps = estimation.steps;
            if (std::is_pointer< S >::value) {
                for(Index index = 0, max_index = this->steps.size(); index < max_index; ++index) {
                    this->steps[index] = static_cast< S >(this->steps[index]->copy().release());
                }
            }
        }
        
    template<class S, class B>
        IterativeEstimation<S, B>::~IterativeEstimation()
        {
            if (std::is_pointer< S >::value) {
                for (Index index = 0, max_index = this->steps.size(); index < max_index; ++index) { 
                    delete this->steps[index];
                    this->steps[index] = nullptr; 
                }
            }
            this->steps.clear();
        }

    template<class S, class B>
        Index IterativeEstimation<S, B>::size() const
        { return this->steps.size(); }

    template<class S, class B>
        const S IterativeEstimation<S, B>::at_step(const Index& index) const
        {
            if (index >= this->size()) {
                throw size_error("index", this->size(), size_error::inferior);
            }
            return this->at_step[index];
        }

    template<class D>
        DistributionEstimation< D >::DistributionEstimation()
        {
            this->data = nullptr;
            this->distribution = nullptr;
        }
    
    template<class D>
        DistributionEstimation< D >::DistributionEstimation(data_type const * data, distribution_type const * distribution)
        {
            this->data = data;
            this->distribution = distribution;
        }
    
    template<class D>
        DistributionEstimation< D >::DistributionEstimation(const DistributionEstimation< D >& estimation)
        { 
            if (estimation.distribution) {
                this->distribution = static_cast< distribution_type* >(estimation.distribution->copy().release());
            } else {
                this->distribution = nullptr;
            }
            if (estimation.data) {
                this->data = static_cast< data_type* >(estimation.data->copy().release());
            } else {
                this->data = nullptr;
            }
        }

    template<class D>
        DistributionEstimation< D >::~DistributionEstimation()
        { 
            if (this->distribution) {
                delete distribution;
            }
            if (this->data) {
                delete data;
            }
        }

    template<class D>    
        std::unique_ptr< DistributionEstimation< D > > DistributionEstimation< D >::copy() const
        {
            return std::make_unique< DistributionEstimation< D > >(*this);
        }

    template<class D>    
        typename DistributionEstimation< D >::data_type const * DistributionEstimation< D >::get_data() const
        {
            return this->data;
        }

    template<class D>    
        typename DistributionEstimation< D >::distribution_type const * DistributionEstimation< D >::get_distribution() const
        {
            return this->distribution;
        }

    template<class D>
        DistributionEstimation< D >::Estimator::~Estimator()
        {}

    template<class D>
        void DistributionEstimation< D >::Estimator::check(const data_type& data) const
        {
            if (data.get_nb_events() == 0) {
                throw sample_size_error(1);
            }
        }

    template<class D>
        ConditionalDistributionEstimation< D >::ConditionalDistributionEstimation()
        {
            this->response_data = nullptr;
            this->explanatory_data = nullptr;
            this->distribution = nullptr;
        }
    
    template<class D>
        ConditionalDistributionEstimation< D >::ConditionalDistributionEstimation(response_data_type const* response_data, explanatory_data_type const* explanatory_data, distribution_type const* distribution)
        {
            this->response_data = response_data;
            this->explanatory_data = explanatory_data;
            this->distribution = distribution;
        }
    
    template<class D>
        ConditionalDistributionEstimation< D >::ConditionalDistributionEstimation(const ConditionalDistributionEstimation< D >& estimation)
        { 
            if (estimation.distribution) {
                this->distribution = static_cast< distribution_type* >(estimation.distribution->copy().release());
            } else {
                this->distribution = nullptr;
            }
            if (estimation.response_data) {
                this->response_data = static_cast< response_data_type* >(estimation.response_data->copy().release());
            } else {
                this->response_data = nullptr;
            }
            if (estimation.explanatory_data) {
                this->explanatory_data = static_cast< explanatory_data_type* >(estimation.explanatory_data->copy().release());
            } else {
                this->explanatory_data = nullptr;
            }
        }

    template<class D>
        ConditionalDistributionEstimation< D >::~ConditionalDistributionEstimation()
        { 
            if (this->distribution) {
                delete distribution;
            }
            if (this->response_data) {
                delete response_data;
            }
            if (this->explanatory_data) {
                delete explanatory_data;
            }
        }

    template<class D>    
        std::unique_ptr< ConditionalDistributionEstimation< D > > ConditionalDistributionEstimation< D >::copy() const
        {
            return std::make_unique< ConditionalDistributionEstimation< D > >(*this);
        }

    template<class D>    
        typename ConditionalDistributionEstimation< D >::response_data_type const * ConditionalDistributionEstimation< D >::get_response_data() const
        {
            return this->response_data;
        }

    template<class D>    
        typename ConditionalDistributionEstimation< D >::explanatory_data_type const * ConditionalDistributionEstimation< D >::get_explanatory_data() const
        {
            return this->explanatory_data;
        }

    template<class D>    
        typename ConditionalDistributionEstimation< D >::distribution_type const * ConditionalDistributionEstimation< D >::get_distribution() const
        {
            return this->distribution;
        }

    template<class D>
        ConditionalDistributionEstimation< D >::Estimator::~Estimator()
        {}
}

#endif