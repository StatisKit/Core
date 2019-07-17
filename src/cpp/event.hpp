#ifndef AUTOWIG
#pragma once

namespace statiskit
{
    template<class E>
        ElementaryEvent< E >::ElementaryEvent(const typename E::value_type& value)
        {
            this->value = value;
        }

    template<class E>
        ElementaryEvent< E >::ElementaryEvent(const ElementaryEvent< E >& event)
        {
            this->value = event.value;
        }

    template<class E>
        ElementaryEvent< E >::~ElementaryEvent()
        {}

    template<class E>
        censoring_type ElementaryEvent< E >::get_censoring() const
        {
            return censoring_type::NONE;
        } 

    template<class E>
        const typename E::value_type& ElementaryEvent< E >::get_value() const
        {
            return this->value;
        }

    template<class E>
        std::unique_ptr< UnivariateEvent > ElementaryEvent< E >::copy() const
        {
            return std::make_unique< ElementaryEvent< E > >(*this);
        }

    template<class E>
        CensoredEvent< E >::CensoredEvent(const std::vector< typename E::value_type >& values)
        {
            this->values = values;
        }
    
    template<class E>
        CensoredEvent< E >::CensoredEvent(const CensoredEvent< E >& event)
        {
            this->values = event.values;
        }

    template<class E>
        censoring_type CensoredEvent< E >::get_censoring() const
        {
            return censoring_type::CENSORED;
        }

    template<class E>
        const std::vector< typename E::value_type >& CensoredEvent< E >::get_values() const
        {
            return this->values;
        }

    template<class E>
        LeftCensoredEvent< E >::LeftCensoredEvent(const typename E::value_type& upper_bound)
        {
            this->upper_bound = upper_bound;
        }

    template<class E>
        LeftCensoredEvent< E >::LeftCensoredEvent(const LeftCensoredEvent< E >& event)
        {
            this->upper_bound = event.upper_bound;
        }

    template<class E>
        censoring_type LeftCensoredEvent< E >::get_censoring() const
        {
            return censoring_type::LEFT;
        }
    
    template<class E>
        const typename E::value_type& LeftCensoredEvent< E >::get_upper_bound() const
        {
            return this->upper_bound;
        }

    template<class E>
        RightCensoredEvent< E >::RightCensoredEvent(const typename E::value_type& lower_bound)
        {
            this->lower_bound = lower_bound;
        }

    template<class E>
        RightCensoredEvent< E >::RightCensoredEvent(const RightCensoredEvent< E >& event)
        {
            this->lower_bound = event.lower_bound;
        }

    template<class E>
        censoring_type RightCensoredEvent< E >::get_censoring() const
        {
            return censoring_type::RIGHT;
        }
    
    template<class E>
        const typename E::value_type& RightCensoredEvent< E >::get_lower_bound() const
        {
            return this->lower_bound;
        }

    template<class E>
        IntervalCensoredEvent< E >::IntervalCensoredEvent(const typename E::value_type& lhs, const typename E::value_type& rhs)
        {
            if (lhs < rhs) {
                this->bounds = std::make_pair(lhs, rhs);
            } else {
                this->bounds = std::make_pair(rhs, lhs);
            }
        }

    template<class E>
        IntervalCensoredEvent< E >::IntervalCensoredEvent(const IntervalCensoredEvent< E >& event)
        {
            this->bounds = event.bounds;
        }

    template<class E>
        censoring_type IntervalCensoredEvent< E >::get_censoring() const
        {
            return censoring_type::INTERVAL;
        }
    
    template<class E>
        const typename E::value_type& IntervalCensoredEvent< E >::get_lower_bound() const
        {
            return this->bounds.first;
        }

    template<class E>
        const typename E::value_type& IntervalCensoredEvent< E >::get_upper_bound() const
        {
            return this->bounds.second;
        }

    template<class E>
        typename E::value_type IntervalCensoredEvent< E >::get_range() const
        {
            return this->bounds.second - this->bounds.first;
        }

    template<class E>
        typename E::value_type IntervalCensoredEvent< E >::get_center() const
        {
            return this->get_range() / 2.;
        }
}

#endif