#pragma once

#include <algorithm>
#include <map>

#include <boost/random/uniform_int.hpp>
#include <boost/random/variate_generator.hpp>

#include <statiskit/linalg/Eigen.h>

#include "base.h"
#include "event.h"

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
        virtual ~UnivariateSampleSpace() = 0;

        virtual outcome_type get_outcome() const = 0;

        virtual ordering_type get_ordering() const = 0;

        virtual bool is_compatible(const UnivariateEvent* event) const = 0;

        virtual std::unique_ptr< UnivariateSampleSpace > copy() const = 0;
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
            virtual ~CategoricalSampleSpace();

            virtual bool is_compatible(const UnivariateEvent* event) const;

            virtual outcome_type get_outcome() const; 
            
            Index get_cardinality() const;

            const std::set< std::string >& get_values() const;        
                
            encoding_type get_encoding() const;
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
            virtual ~NominalSampleSpace();
            
            virtual ordering_type get_ordering() const;

            const std::string& get_reference() const;
            void set_reference(const std::string& reference);

            void randomize();

            void set_encoding(const encoding_type& encoding);

            virtual Eigen::RowVectorXd encode(const std::string& value) const;

            std::unique_ptr< OrdinalSampleSpace > as_ordinal() const;

            std::unique_ptr< UnivariateSampleSpace > copy() const;

        protected:
            std::set< std::string >::const_iterator reference;
    };

    class STATISKIT_CORE_API OrdinalSampleSpace : public CategoricalSampleSpace
    {
        public:
            OrdinalSampleSpace(const std::vector< std::string >& values);
            OrdinalSampleSpace(const OrdinalSampleSpace& sample_space);
            virtual ~OrdinalSampleSpace();

            virtual ordering_type get_ordering() const;

            std::vector< std::string > get_ordered() const;
            void set_ordered(const std::vector< std::string >& ordered);
            
            const std::vector< Index >& get_rank() const;
            void set_rank(const std::vector< Index >& rank);

            void randomize();

            void set_encoding(const encoding_type& encoding);

            virtual Eigen::RowVectorXd encode(const std::string& value) const;

            std::unique_ptr< NominalSampleSpace > as_nominal() const;

            virtual std::unique_ptr< UnivariateSampleSpace > copy() const;

        protected:
            std::shared_ptr< std::vector< Index > > rank;

            virtual void detach();
    };

    class UnivariateConditionalData;

    class STATISKIT_CORE_API HierarchicalSampleSpace : public CategoricalSampleSpace
    {
        public:
            typedef std::map< std::string, std::unique_ptr< CategoricalSampleSpace > >::const_iterator const_iterator;

            HierarchicalSampleSpace(const CategoricalSampleSpace& root_sample_space);
            HierarchicalSampleSpace(const HierarchicalSampleSpace& p_sample_space);
            virtual ~HierarchicalSampleSpace();

            virtual ordering_type get_ordering() const;

            void set_encoding(const encoding_type& encoding);

            virtual Eigen::RowVectorXd encode(const std::string& value) const;

            void partition(const std::string& leave, const CategoricalSampleSpace& sample_space); // partition the leave "value" into a sample space
            UnivariateConditionalData split(const std::string& non_leave, const UnivariateConditionalData& data) const; 

            virtual std::unique_ptr< UnivariateSampleSpace > copy() const;

            const_iterator cbegin() const;
            const_iterator cend() const;

            const CategoricalSampleSpace* get_sample_space(const std::string& value);
            const std::map< std::string, std::string >& get_parents() const;

            std::string children(const std::string& non_leave, const std::string& leave) const;

        protected:
            std::shared_ptr< std::map< std::string, std::unique_ptr< CategoricalSampleSpace > > > tree_sample_space;
            std::shared_ptr< std::map< std::string, std::string > > parents;

            virtual bool is_compatible_value(const std::string& value) const;   

            virtual void detach();
    };

    struct STATISKIT_CORE_API DiscreteSampleSpace : public UnivariateSampleSpace
    {
        virtual outcome_type get_outcome() const; 

        virtual ordering_type get_ordering() const;
    };

    class STATISKIT_CORE_API IntegerSampleSpace : public DiscreteSampleSpace
    {
        public:
            IntegerSampleSpace(const int& lower_bound=std::numeric_limits< int >::min(), const int& upper_bound=std::numeric_limits< int >::max());
            virtual ~IntegerSampleSpace();

            virtual bool is_compatible(const UnivariateEvent* event) const;

            const int& get_lower_bound() const;

            const int& get_upper_bound() const;

            virtual std::unique_ptr< UnivariateSampleSpace > copy() const;

        protected:
            int lower_bound;
            int upper_bound;
    };

    STATISKIT_CORE_API const IntegerSampleSpace& get_NN();
    STATISKIT_CORE_API const IntegerSampleSpace& get_ZZ();

    struct STATISKIT_CORE_API ContinuousSampleSpace : public UnivariateSampleSpace
    { 
        virtual outcome_type get_outcome() const;
    
        virtual ordering_type get_ordering() const;
    };
    
    class STATISKIT_CORE_API RealSampleSpace : public ContinuousSampleSpace
    {
        public:
            RealSampleSpace(const double& lower_bound=-1*std::numeric_limits< double >::infinity(), const double& upper_bound=std::numeric_limits< double >::infinity(), const bool& left_closed=false, const bool& right_closed=false);
            virtual ~RealSampleSpace();

            virtual bool is_compatible(const UnivariateEvent* event) const;

            const double& get_lower_bound() const;

            const double& get_upper_bound() const;

            const bool& get_left_closed() const;

            const bool& get_right_closed() const;

            virtual std::unique_ptr< UnivariateSampleSpace > copy() const;

        protected:
            double lower_bound;
            double upper_bound;
            bool left_closed;
            bool right_closed;
    };

    STATISKIT_CORE_API const RealSampleSpace& get_RR();
    STATISKIT_CORE_API const RealSampleSpace& get_PR();
    STATISKIT_CORE_API const RealSampleSpace& get_NR();

    struct STATISKIT_CORE_API MultivariateSampleSpace
    {
        virtual ~MultivariateSampleSpace() = 0;

        virtual Index size() const = 0;
        
        virtual const UnivariateSampleSpace* get_event(const Index& index) const = 0;

        virtual bool is_compatible(const MultivariateEvent* event) const;
        
        virtual Index encode() const;
        
        virtual Eigen::RowVectorXd encode(const MultivariateEvent& event) const;

        virtual std::unique_ptr< MultivariateSampleSpace > copy() const = 0;
    };

    class STATISKIT_CORE_API VectorSampleSpace : public MultivariateSampleSpace
    {
        public:
            VectorSampleSpace(const std::vector< UnivariateSampleSpace* >& sample_spaces);
            VectorSampleSpace(const VectorSampleSpace& sample_space);
            virtual ~VectorSampleSpace();

            virtual Index size() const;
            
            virtual const UnivariateSampleSpace* get_event(const Index& index) const;
            virtual void set_event(const Index& index, const UnivariateSampleSpace& sample_space);
            
            virtual std::unique_ptr< MultivariateSampleSpace > copy() const;       

        protected:
            std::shared_ptr< std::vector< std::unique_ptr< UnivariateSampleSpace > > > sample_spaces;

            void detach();
    };

    typedef std::vector< UnivariateSampleSpace* > SampleSpaceVector;
}