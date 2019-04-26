#include "event.h"

namespace statiskit
{
    UnivariateEvent::~UnivariateEvent()
    {}

    template<>
    ContinuousEvent::value_type IntervalCensoredEvent< ContinuousEvent >::get_center() const
    { return _bounds.first + get_range()/2.; }
    
    template<>
    DiscreteEvent::value_type IntervalCensoredEvent< DiscreteEvent >::get_center() const
    {
        double range = get_range()/2.;
        int center = _bounds.first + int(range);
        if(range - int(range) > 0.5)
        { ++center; }
        return center; 
    }

    outcome_type CategoricalEvent::get_outcome() const
    { return CATEGORICAL; }

    outcome_type DiscreteEvent::get_outcome() const
    { return DISCRETE; }

    outcome_type ContinuousEvent::get_outcome() const
    { return CONTINUOUS; }

    MultivariateEvent::~MultivariateEvent()
    {}
    
    VectorEvent::VectorEvent(const Index& size)
    { _events.resize(size, nullptr); }

    VectorEvent::VectorEvent(const VectorEvent& event)
    {
        _events.resize(event.size(), nullptr);
        for(Index index = 0, max_index = event.size(); index < max_index; ++index)
        { _events[index] = event.get_event(index)->copy().release(); }
    }

    VectorEvent::VectorEvent(const Eigen::VectorXd& event)
    {
        _events.resize(event.size(), nullptr);
        for(Index index = 0, max_index = event.size(); index < max_index; ++index)
        { _events[index] = new ContinuousElementaryEvent(event(index)); }
    }

    VectorEvent::~VectorEvent()
    {
        for(Index index = 0, max_index = size(); index < max_index; ++index)
        { 
            if(_events[index])
            { delete _events[index]; }
            _events[index] = nullptr;
        } 
        _events.clear();
    }

    Index VectorEvent::size() const
    { return _events.size(); }

    const UnivariateEvent* VectorEvent::get_event(const Index& index) const
    {
        if(index > size())
        { throw size_error("index", size(), size_error::inferior); }
        return _events[index];
    }

    void VectorEvent::set_event(const Index& index, const UnivariateEvent& event)
    {
        if(index > size())
        { throw size_error("index", size(), size_error::inferior); }
        _events[index] = event.copy().release();
    }

    std::unique_ptr< MultivariateEvent > VectorEvent::copy() const
    { return std::make_unique< VectorEvent >(*this); }
}
