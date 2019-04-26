#ifndef STATISKIT_CORE_EVENT_H
#define STATISKIT_CORE_EVENT_H

#include <vector>
#include <set>
#include <boost/math/special_functions/fpclassify.hpp>

#include "base.h"

namespace statiskit
{
    enum class outcome_type 
    {
        CATEGORICAL,
        DISCRETE,
        CONTINUOUS,
        MIXED,
    };

    enum class censoring_type
    {
        NONE,
        CENSORED,
        LEFT,
        RIGHT,
        INTERVAL,
    };

    struct STATISKIT_CORE_API UnivariateEvent
    {
        virtual ~UnivariateEvent();
        
        virtual outcome_type get_outcome() const = 0;

        virtual censoring_type get_censoring() const = 0;

        virtual std::unique_ptr< UnivariateEvent > copy() const = 0;
    };
 
    template<class E> class ElementaryEvent : public E
    {
        public:
            ElementaryEvent(const typename E::value_type& value);
            ElementaryEvent(const ElementaryEvent< E >& event);
            virtual ~ElementaryEvent();
        
            virtual censoring_type get_censoring() const;

            const typename E::value_type& get_value() const;

            virtual std::unique_ptr< UnivariateEvent > copy() const;
            
        protected:
            typename E::value_type _value;
    };

    template<class E> class CensoredEvent : public E
    {
        public:
            CensoredEvent(const std::vector< typename E::value_type >& values);
            CensoredEvent(const CensoredEvent< E >& event);

            virtual censoring_type get_censoring() const;

            const std::vector< typename E::value_type >& get_values() const;

            virtual std::unique_ptr< UnivariateEvent > copy() const;

        protected:
            std::vector< typename E::value_type > _values;
    };

    template<class E> class LeftCensoredEvent : public E
    {
        public:
            LeftCensoredEvent(const typename E::value_type& upper_bound);
            LeftCensoredEvent(const LeftCensoredEvent< E >& event);

            virtual censoring_type get_censoring() const;

            const typename E::value_type& get_upper_bound() const;

            virtual std::unique_ptr< UnivariateEvent > copy() const;

        protected:
            typename E::value_type _upper_bound;
    };

    template<class E> class RightCensoredEvent : public E
    {
        public:
            RightCensoredEvent(const typename E::value_type& lower_bound);
            RightCensoredEvent(const RightCensoredEvent< E >& event);

            virtual censoring_type get_censoring() const;

            const typename E::value_type& get_lower_bound() const;

            virtual std::unique_ptr< UnivariateEvent > copy() const;
        
        protected:
            typename E::value_type _lower_bound;
    };

    template<class E> class IntervalCensoredEvent : public E
    {
        public:
            IntervalCensoredEvent(const typename E::value_type& lhs, const typename E::value_type& rhs);
            IntervalCensoredEvent(const IntervalCensoredEvent< E >& event);

            virtual censoring_type get_censoring() const;

            const typename E::value_type& get_lower_bound() const;
            const typename E::value_type& get_upper_bound() const;
            
            typename E::value_type get_range() const;
            typename E::value_type get_center() const;

            virtual std::unique_ptr< UnivariateEvent > copy() const;
            
        protected:
            std::pair<typename E::value_type, typename E::value_type > _bounds;
    };

    class CategoricalUnivariateDistribution;

    struct STATISKIT_CORE_API CategoricalEvent : public UnivariateEvent
    {
        typedef std::string value_type;
        typedef CategoricalUnivariateDistribution distribution_type;
        
        virtual outcome_type get_outcome() const;
    };

    typedef ElementaryEvent< CategoricalEvent > CategoricalElementaryEvent;
    typedef CensoredEvent< CategoricalEvent > CategoricalCensoredEvent;

    class DiscreteUnivariateDistribution;

    struct STATISKIT_CORE_API DiscreteEvent : public UnivariateEvent
    {
        typedef int value_type;
        typedef DiscreteUnivariateDistribution distribution_type;
        
        virtual outcome_type get_outcome() const;
    };

    typedef ElementaryEvent< DiscreteEvent > DiscreteElementaryEvent;
    typedef CensoredEvent< DiscreteEvent > DiscreteCensoredEvent;
    typedef LeftCensoredEvent< DiscreteEvent > DiscreteLeftCensoredEvent;
    typedef RightCensoredEvent< DiscreteEvent > DiscreteRightCensoredEvent;
    typedef IntervalCensoredEvent< DiscreteEvent > DiscreteIntervalCensoredEvent;

    class ContinuousUnivariateDistribution;

    struct STATISKIT_CORE_API ContinuousEvent : public UnivariateEvent
    {
        typedef double value_type;
        typedef ContinuousUnivariateDistribution distribution_type;
        
        virtual outcome_type get_outcome() const;
    };

    typedef ElementaryEvent< ContinuousEvent > ContinuousElementaryEvent;
    typedef CensoredEvent< ContinuousEvent > ContinuousCensoredEvent;
    typedef LeftCensoredEvent< ContinuousEvent > ContinuousLeftCensoredEvent;
    typedef RightCensoredEvent< ContinuousEvent > ContinuousRightCensoredEvent;
    typedef IntervalCensoredEvent< ContinuousEvent > ContinuousIntervalCensoredEvent;

    struct STATISKIT_CORE_API MultivariateEvent
    {        

        virtual ~MultivariateEvent() = 0;

        virtual Index size() const = 0;
                
        virtual const UnivariateEvent* get_event(const Index& index) const = 0;

        virtual std::unique_ptr< MultivariateEvent > copy() const = 0;
    };

    class STATISKIT_CORE_API VectorEvent : public MultivariateEvent
    {
        public:
            VectorEvent(const Index& size);
            VectorEvent(const VectorEvent& event);
            VectorEvent(const Eigen::VectorXd& event);
            virtual ~VectorEvent();

            virtual Index size() const;
                    
            virtual const UnivariateEvent* get_event(const Index& index) const;
            void set_event(const Index& index, const UnivariateEvent* event);

            virtual std::unique_ptr< MultivariateEvent > copy() const;

        protected:
            std::vector< UnivariateEvent* > _events;
    };
}

#ifndef AUTOWIG
#include "event.hpp"
#endif
#endif
