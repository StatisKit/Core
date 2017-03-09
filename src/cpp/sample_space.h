/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

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
            
            size_t get_cardinality() const;

            const std::set< std::string >& get_values() const;        
                
            encoding_type get_encoding() const;
            virtual void set_encoding(const encoding_type& encoding) = 0;
            
            virtual Eigen::RowVectorXd encode(const std::string& outcome) const = 0;

        protected:
            std::set< std::string > _values;
            encoding_type _encoding;            
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
            std::set< std::string >::const_iterator _reference;
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
            
            // const std::vector< size_t >& get_rank() const;
            // void set_rank(const std::vector< size_t >& rank);

            void randomize();

            void set_encoding(const encoding_type& encoding);

            virtual Eigen::RowVectorXd encode(const std::string& value) const;

            std::unique_ptr< NominalSampleSpace > as_nominal() const;

            virtual std::unique_ptr< UnivariateSampleSpace > copy() const;

        protected:
            std::vector< size_t > _rank;
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
            int _lower_bound;
            int _upper_bound;
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
            double _lower_bound;
            double _upper_bound;
            bool _left_closed;
            bool _right_closed;
    };

    STATISKIT_CORE_API const RealSampleSpace& get_RR();
    STATISKIT_CORE_API const RealSampleSpace& get_PR();
    STATISKIT_CORE_API const RealSampleSpace& get_NR();

    struct STATISKIT_CORE_API MultivariateSampleSpace
    {
        virtual ~MultivariateSampleSpace() = 0;

        virtual size_t size() const = 0;
        
        virtual const UnivariateSampleSpace* get(const size_t& index) const = 0;

        virtual bool is_compatible(const MultivariateEvent* event) const;
        
        virtual size_t encode() const;
        
        virtual Eigen::RowVectorXd encode(const MultivariateEvent& event) const;
        
        virtual std::unique_ptr< MultivariateSampleSpace > copy() const = 0;
    };

    class STATISKIT_CORE_API VectorSampleSpace : public MultivariateSampleSpace
    {
        public:
            VectorSampleSpace(const std::vector< UnivariateSampleSpace* >& sample_spaces);
            VectorSampleSpace(const VectorSampleSpace& sample_space);
            virtual ~VectorSampleSpace();

            virtual size_t size() const;
            
            virtual const UnivariateSampleSpace* get(const size_t& index) const;
            virtual void set(const size_t& index, const UnivariateSampleSpace& sample_space);
            
            virtual std::unique_ptr< MultivariateSampleSpace > copy() const;       

        protected:
            std::vector< UnivariateSampleSpace* > _sample_spaces;
    };

}

#endif
