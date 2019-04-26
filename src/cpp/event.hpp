#ifndef AUTOWIG
#ifndef STATISKIT_CORE_EVENT_HPP
#define STATISKIT_CORE_EVENT_HPP

namespace statiskit
{
    template<class E>
        ElementaryEvent< E >::ElementaryEvent(const typename E::value_type& value)
        { _value = value; }

    template<class E>
        ElementaryEvent< E >::ElementaryEvent(const ElementaryEvent< E >& event)
        { _value = event._value; }

    template<class E>
        ElementaryEvent< E >::~ElementaryEvent()
        {}

    template<class E>
        censoring_type ElementaryEvent< E >::get_censoring() const
        { return censoring_type::NONE; } 

    template<class E>
        const typename E::value_type& ElementaryEvent< E >::get_value() const
        { return _value; }

    template<class E>
        std::unique_ptr< UnivariateEvent > ElementaryEvent< E >::copy() const
        { return std::make_unique< ElementaryEvent< E > >(*this); }

    template<class E>
        CensoredEvent< E >::CensoredEvent(const std::vector< typename E::value_type >& values)
        { _values = values; }
    
    template<class E>
        CensoredEvent< E >::CensoredEvent(const CensoredEvent< E >& event)
        { _values = event._values; }

    template<class E>
        censoring_type CensoredEvent< E >::get_censoring() const
        { return censoring_type::CENSORED; }

    template<class E>
        const std::vector< typename E::value_type >& CensoredEvent< E >::get_values() const
        { return _values; }

    template<class E>
        std::unique_ptr< UnivariateEvent > CensoredEvent< E >::copy() const
        { return std::make_unique< CensoredEvent< E > >(*this); }

    template<class E>
        LeftCensoredEvent< E >::LeftCensoredEvent(const typename E::value_type& upper_bound)
        { _upper_bound = upper_bound; }

    template<class E>
        LeftCensoredEvent< E >::LeftCensoredEvent(const LeftCensoredEvent< E >& event)
        { _upper_bound = event._upper_bound; }

    template<class E>
        censoring_type LeftCensoredEvent< E >::get_censoring() const
        { return censoring_type::LEFT; }
    
    template<class E>
        const typename E::value_type& LeftCensoredEvent< E >::get_upper_bound() const
        { return _upper_bound; }

    template<class E>
        std::unique_ptr< UnivariateEvent > LeftCensoredEvent< E >::copy() const
        { return std::make_unique< LeftCensoredEvent< E > >(*this); }

    template<class E>
        RightCensoredEvent< E >::RightCensoredEvent(const typename E::value_type& lower_bound)
        { _lower_bound = lower_bound; }

    template<class E>
        RightCensoredEvent< E >::RightCensoredEvent(const RightCensoredEvent< E >& event)
        { _lower_bound = event._lower_bound; }

    template<class E>
        censoring_type RightCensoredEvent< E >::get_censoring() const
        { return censoring_type::RIGHT; }
    
    template<class E>
        const typename E::value_type& RightCensoredEvent< E >::get_lower_bound() const
        { return _lower_bound; }

    template<class E>
        std::unique_ptr< UnivariateEvent > RightCensoredEvent< E >::copy() const
        { return std::make_unique< RightCensoredEvent< E > >(*this); }

    template<class E>
        IntervalCensoredEvent< E >::IntervalCensoredEvent(const typename E::value_type& lhs, const typename E::value_type& rhs)
        {
            if(lhs < rhs)
            { _bounds = std::make_pair(lhs, rhs); }
            else
            { _bounds = std::make_pair(rhs, lhs); }
        }

    template<class E>
        IntervalCensoredEvent< E >::IntervalCensoredEvent(const IntervalCensoredEvent< E >& event)
        { _bounds = event._bounds; }

    template<class E>
        censoring_type IntervalCensoredEvent< E >::get_censoring() const
        { return censoring_type::INTERVAL; }
    
    template<class E>
        const typename E::value_type& IntervalCensoredEvent< E >::get_lower_bound() const
        { return _bounds.first; }

    template<class E>
        const typename E::value_type& IntervalCensoredEvent< E >::get_upper_bound() const
        { return _bounds.second; }

    template<class E>
        typename E::value_type IntervalCensoredEvent< E >::get_range() const
        { return _bounds.second - _bounds.first; }

    template<class E>
        typename E::value_type IntervalCensoredEvent< E >::get_center() const
        { return get_range() / 2.; }

    template<class E>
        std::unique_ptr< UnivariateEvent > IntervalCensoredEvent< E >::copy() const
        { return std::make_unique< IntervalCensoredEvent< E > >(*this); }
}

#endif
#endif