#ifndef STATISKIT_CORE_SAMPLE_SPACE_H
#define STATISKIT_CORE_SAMPLE_SPACE_H

#include "base.h"
#include "event.h"

#include <statiskit/linalg/Eigen.h>

#include <algorithm>
#include <boost/random/uniform_int.hpp>
#include <boost/random/variate_generator.hpp>
#include <map>

namespace statiskit
{    
    enum ordering_type
    {
        NONE,
        TOTAL,
        PARTIAL,
    };

    struct STATISKIT_CORE_API UnivariateSampleSpace
    {
        virtual ~UnivariateSampleSpace(void) = 0;

        virtual outcome_type get_outcome(void) const = 0;

        virtual ordering_type get_ordering(void) const = 0;

        virtual bool is_compatible(const UnivariateEvent* event) const = 0;

        virtual std::unique_ptr< UnivariateSampleSpace > copy(void) const = 0;
    };

    enum encoding_type 
    {
        TREATMENT,
        DEVIATION,
        CUMULATIVE,
    };

    struct STATISKIT_CORE_API CategoricalSampleSpace : public UnivariateSampleSpace
    {
        public:
            CategoricalSampleSpace(const std::set< std::string >& values);
            CategoricalSampleSpace(const CategoricalSampleSpace& sample_space);
            virtual ~CategoricalSampleSpace(void);

            virtual bool is_compatible(const UnivariateEvent* event) const;

            virtual outcome_type get_outcome(void) const; 
            
            Index get_cardinality(void) const;

            const std::set< std::string >& get_values(void) const;        
                
            encoding_type get_encoding(void) const;
            virtual void set_encoding(const encoding_type& encoding) = 0;
            
            virtual Eigen::RowVectorXd encode(const std::string& outcome) const = 0;

        protected:
            std::shared_ptr< std::set< std::string > > values;
            encoding_type encoding;     

            virtual bool is_compatible_value(const std::string& value) const;
    };

    class OrdinalSampleSpace;

    class STATISKIT_CORE_API NominalSampleSpace : public CategoricalSampleSpace
    {
        public:
            NominalSampleSpace(const std::set< std::string >& values);
            NominalSampleSpace(const NominalSampleSpace& sample_space);
            virtual ~NominalSampleSpace(void);
            
            virtual ordering_type get_ordering(void) const;

            const std::string& get_reference(void) const;
            void set_reference(const std::string& reference);

            void randomize(void);

            void set_encoding(const encoding_type& encoding);

            virtual Eigen::RowVectorXd encode(const std::string& value) const;

            std::unique_ptr< OrdinalSampleSpace > as_ordinal(void) const;

            std::unique_ptr< UnivariateSampleSpace > copy(void) const;

        protected:
            std::set< std::string >::const_iterator reference;
    };

    class STATISKIT_CORE_API OrdinalSampleSpace : public CategoricalSampleSpace
    {
        public:
            OrdinalSampleSpace(const std::vector< std::string >& values);
            OrdinalSampleSpace(const OrdinalSampleSpace& sample_space);
            virtual ~OrdinalSampleSpace(void);

            virtual ordering_type get_ordering(void) const;

            std::vector< std::string > get_ordered(void) const;
            void set_ordered(const std::vector< std::string >& ordered);
            
            const std::vector< Index >& get_rank(void) const;
            void set_rank(const std::vector< Index >& rank);

            void randomize(void);

            void set_encoding(const encoding_type& encoding);

            virtual Eigen::RowVectorXd encode(const std::string& value) const;

            std::unique_ptr< NominalSampleSpace > as_nominal(void) const;

            virtual std::unique_ptr< UnivariateSampleSpace > copy(void) const;

        protected:
            std::shared_ptr< std::vector< Index > > _rank;

            virtual void detach(void);
    };

    class UnivariateConditionalData;

    class STATISKIT_CORE_API HierarchicalSampleSpace : public CategoricalSampleSpace
    {
        public:
            typedef std::map< std::string, CategoricalSampleSpace* >::const_iterator const_iterator;

            HierarchicalSampleSpace(const CategoricalSampleSpace& root_sample_space);
            HierarchicalSampleSpace(const HierarchicalSampleSpace& p_sample_space);
            virtual ~HierarchicalSampleSpace(void);

            virtual ordering_type get_ordering(void) const;

            void set_encoding(const encoding_type& encoding);

            virtual Eigen::RowVectorXd encode(const std::string& value) const;

            void partition(const std::string& leave, const CategoricalSampleSpace& sample_space); // partition the leave "value" into a sample space
            UnivariateConditionalData split(const std::string& non_leave, const UnivariateConditionalData& data) const; 

            virtual std::unique_ptr< UnivariateSampleSpace > copy(void) const;

            const_iterator cbegin(void) const;
            const_iterator cend(void) const;

            const CategoricalSampleSpace* get_sample_space(const std::string& value);
            std::map< std::string, std::string > get_parents(void) const;
            //const std::string get_parent(const std::string& value);

            std::string children(const std::string& non_leave, const std::string& leave) const;
        protected:
            std::map< std::string, CategoricalSampleSpace* > _tree_sample_space;
            std::map< std::string, std::string > _parents;

            virtual bool is_compatible_value(const std::string& value) const;   

            virtual void detach(void);
    };

    struct STATISKIT_CORE_API DiscreteSampleSpace : public UnivariateSampleSpace
    {
        virtual outcome_type get_outcome(void) const; 

        virtual ordering_type get_ordering(void) const;
    };

    class STATISKIT_CORE_API IntegerSampleSpace : public DiscreteSampleSpace
    {
        public:
            IntegerSampleSpace(const int& lower_bound=std::numeric_limits< int >::min(), const int& upper_bound=std::numeric_limits< int >::max());
            virtual ~IntegerSampleSpace(void);

            virtual bool is_compatible(const UnivariateEvent* event) const;

            const int& get_lower_bound(void) const;

            const int& get_upper_bound(void) const;

            virtual std::unique_ptr< UnivariateSampleSpace > copy(void) const;

        protected:
            int _lower_bound;
            int _upper_bound;
    };

    STATISKIT_CORE_API const IntegerSampleSpace& get_NN(void);
    STATISKIT_CORE_API const IntegerSampleSpace& get_ZZ(void);

    struct STATISKIT_CORE_API ContinuousSampleSpace : public UnivariateSampleSpace
    { 
        virtual outcome_type get_outcome(void) const;
    
        virtual ordering_type get_ordering(void) const;
    };
    
    class STATISKIT_CORE_API RealSampleSpace : public ContinuousSampleSpace
    {
        public:
            RealSampleSpace(const double& lower_bound=-1*std::numeric_limits< double >::infinity(), const double& upper_bound=std::numeric_limits< double >::infinity(), const bool& left_closed=false, const bool& right_closed=false);
            virtual ~RealSampleSpace(void);

            virtual bool is_compatible(const UnivariateEvent* event) const;

            const double& get_lower_bound(void) const;

            const double& get_upper_bound(void) const;

            const bool& get_left_closed(void) const;

            const bool& get_right_closed(void) const;

            virtual std::unique_ptr< UnivariateSampleSpace > copy(void) const;

        protected:
            double _lower_bound;
            double _upper_bound;
            bool _left_closed;
            bool _right_closed;
    };

    STATISKIT_CORE_API const RealSampleSpace& get_RR(void);
    STATISKIT_CORE_API const RealSampleSpace& get_PR(void);
    STATISKIT_CORE_API const RealSampleSpace& get_NR(void);

    struct STATISKIT_CORE_API MultivariateSampleSpace
    {
        virtual ~MultivariateSampleSpace(void) = 0;

        virtual Index size(void) const = 0;
        
        virtual const UnivariateSampleSpace* get(const Index& index) const = 0;

        virtual bool is_compatible(const MultivariateEvent* event) const;
        
        virtual Index encode(void) const;
        
        virtual Eigen::RowVectorXd encode(const MultivariateEvent& event) const;
        
        virtual std::unique_ptr< MultivariateSampleSpace > copy(void) const = 0;
    };

    class STATISKIT_CORE_API VectorSampleSpace : public MultivariateSampleSpace
    {
        public:
            VectorSampleSpace(const std::vector< UnivariateSampleSpace* >& sample_spaces);
            VectorSampleSpace(const VectorSampleSpace& sample_space);
            virtual ~VectorSampleSpace(void);

            virtual Index size(void) const;
            
            virtual const UnivariateSampleSpace* get(const Index& index) const;
            virtual void set(const Index& index, const UnivariateSampleSpace& sample_space);
            
            virtual std::unique_ptr< MultivariateSampleSpace > copy(void) const;       

        protected:
            std::vector< UnivariateSampleSpace* > _sample_spaces;
    };

    typedef std::vector< UnivariateSampleSpace* > SampleSpaceVector;
}

#endif