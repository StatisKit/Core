#include "event.h"

namespace statiskit
{
    std::ostream& operator<<(std::ostream& os, const outcome_type& outcome)
    {
        switch (outcome) {
            case outcome_type::CATEGORICAL:
                os << "categorical";
                break;
            case outcome_type::DISCRETE:
                os << "discrete";
                break;
            case outcome_type::CONTINUOUS:
                os << "continuous";
                break;
        }
        return os;
    }

    UnivariateEvent::~UnivariateEvent()
    {}

    template<>
    ContinuousEvent::value_type IntervalCensoredEvent< ContinuousEvent >::get_center() const
    {
        return this->bounds.first + this->get_range() / 2.;
    }
    
    template<>
    DiscreteEvent::value_type IntervalCensoredEvent< DiscreteEvent >::get_center() const
    {
        double range = this->get_range()/2.;
        int center = this->bounds.first + int(range);
        if (range - int(range) > 0.5) {
            ++center;
        }
        return center; 
    }

    outcome_type CategoricalEvent::get_outcome() const
    {
        return outcome_type::CATEGORICAL;
    }

    outcome_type DiscreteEvent::get_outcome() const
    {
        return outcome_type::DISCRETE;
    }

    outcome_type ContinuousEvent::get_outcome() const
    {
        return outcome_type::CONTINUOUS;
    }

    MultivariateEvent::~MultivariateEvent()
    {}
    
    VectorEvent::VectorEvent(const Index& size)
    {
        this->events.resize(size, nullptr);
    }

    VectorEvent::VectorEvent(const VectorEvent& event)
    {
        this->events.resize(event.size(), nullptr);
        for (Index index = 0, max_index = event.size(); index < max_index; ++index) {
            this->events[index] = event.get_event(index)->copy().release();
        }
    }

    VectorEvent::VectorEvent(const Eigen::VectorXd& event)
    {
        this->events.resize(event.size(), nullptr);
        for (Index index = 0, max_index = event.size(); index < max_index; ++index) {
            this->events[index] = new ContinuousElementaryEvent(event(index));
        }
    }

    VectorEvent::~VectorEvent()
    {
        for (Index index = 0, max_index = size(); index < max_index; ++index) { 
            if (this->events[index]) {
                delete this->events[index];
            }
            this->events[index] = nullptr;
        } 
        this->events.clear();
    }

    Index VectorEvent::size() const
    {
        return this->events.size();
    }

    const UnivariateEvent* VectorEvent::get_event(const Index& index) const
    {
        if (index > this->size()) {
            throw size_error("index", size(), size_error::inferior);
        }
        return this->events[index];
    }

    void VectorEvent::set_event(const Index& index, const UnivariateEvent* event)
    {
        if (index > this->size()) {
            throw size_error("index", size(), size_error::inferior);
        }
        if (events[index]) {
            delete events[index];
        }
        if (event) {
            this->events[index] = event->copy().release();            
        } else {
            this->events[index] = nullptr;
        }
    }
}
