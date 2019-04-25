#ifndef STATISKIT_CORE_DATA_H
#define STATISKIT_CORE_DATA_H

#include "base.h"
#include "sample_space.h"

#include <boost/random/uniform_int.hpp>
#include <boost/random/variate_generator.hpp>

namespace statiskit
{
    class WeightedUnivariateData;

    struct STATISKIT_CORE_API UnivariateData
    {
        typedef UnivariateSampleSpace sample_space_type;
        typedef UnivariateEvent event_type;
        typedef WeightedUnivariateData weighted_type;

        virtual ~UnivariateData() = 0;

        struct STATISKIT_CORE_API Generator
        {
            virtual ~Generator() = 0;
            
            virtual bool is_valid() const = 0;

            virtual Generator& operator++() = 0;

            virtual const UnivariateEvent* event() const = 0;
            virtual double weight() const = 0;
        };

		virtual Index size() const;
		
        virtual std::unique_ptr< UnivariateData::Generator > generator() const = 0;

        virtual const UnivariateSampleSpace* get_sample_space() const = 0;
    
        virtual std::unique_ptr< UnivariateData > copy() const = 0;
        
        double compute_total() const;
        std::unique_ptr< UnivariateEvent > compute_minimum() const;
        std::unique_ptr< UnivariateEvent > compute_maximum() const;
    };

    class STATISKIT_CORE_API NamedData
    {
        public:
            NamedData();
            NamedData(const std::string& name);
            NamedData(const NamedData& data);
            virtual ~NamedData();

            const std::string& get_name() const;
            void set_name(const std::string& name);

        protected:
            std::string name;


        private:
            static unsigned int INDEX;
    };

    class STATISKIT_CORE_API UnivariateDataFrame : public PolymorphicCopy< UnivariateData, UnivariateDataFrame >, public NamedData
    {
        public:
            UnivariateDataFrame(const UnivariateSampleSpace& sample_space);
            UnivariateDataFrame(const UnivariateDataFrame& data);
            virtual ~UnivariateDataFrame();

            virtual Index size() const;

            virtual std::unique_ptr< UnivariateData::Generator > generator() const;

            virtual const UnivariateSampleSpace* get_sample_space() const;
            void set_sample_space(const UnivariateSampleSpace& sample_space);

            Index get_nb_events() const;

            const UnivariateEvent* get_event(const Index& index) const;
            void set_event(const Index& index, const UnivariateEvent* event);

            void add_event(const UnivariateEvent* event);
            std::unique_ptr< UnivariateEvent > pop_event();

            void insert_event(const Index& index, const UnivariateEvent* event);
            void remove_event(const Index& index);

        protected:
            std::shared_ptr< UnivariateSampleSpace > sample_space;
            std::shared_ptr< std::vector< std::unique_ptr< UnivariateEvent > > > events;

            void detach();

            class STATISKIT_CORE_API Generator : public UnivariateData::Generator
            {
                public:
                    Generator(const UnivariateDataFrame& data);
                    virtual ~Generator();

                    virtual bool is_valid() const;

                    virtual UnivariateData::Generator& operator++();

                    virtual const UnivariateEvent* event() const;
                    virtual double weight() const;

                protected:
                    std::unique_ptr< UnivariateDataFrame > data;
                    Index index;
            };            
    };

    class WeightedMultivariateData;

    struct STATISKIT_CORE_API MultivariateData
    {
        typedef MultivariateSampleSpace sample_space_type;
        typedef MultivariateEvent event_type;
        typedef WeightedMultivariateData weighted_type;

        virtual ~MultivariateData() = 0;

        struct STATISKIT_CORE_API Generator
        {
            virtual ~Generator() = 0;

            virtual bool is_valid() const = 0;

            virtual Generator& operator++() = 0;

            virtual const MultivariateEvent* event() const = 0;
            virtual double weight() const = 0;
        };

		virtual Index size() const;
		
        virtual std::unique_ptr< MultivariateData::Generator > generator() const = 0;

        virtual const MultivariateSampleSpace* get_sample_space() const = 0;

        virtual std::unique_ptr< UnivariateData > select(const Index& index) const;
        virtual std::unique_ptr< MultivariateData > select(const Indices& indices) const;

        virtual std::unique_ptr< MultivariateData > copy() const = 0;

        double compute_total() const;
    };

    class STATISKIT_CORE_API IndexSelectedData : public UnivariateData
    {
        public:
            IndexSelectedData(const MultivariateData& data, const Index& index);
            IndexSelectedData(const IndexSelectedData& data);
            virtual ~IndexSelectedData();

            const MultivariateData* origin() const;

            virtual std::unique_ptr< UnivariateData::Generator > generator() const;

            virtual const UnivariateSampleSpace* get_sample_space() const;

            virtual std::unique_ptr< UnivariateData > copy() const;

        protected:
            MultivariateData* data;
            Index index;

            class Generator : public UnivariateData::Generator
            {
            };
    };

    class STATISKIT_CORE_API MultivariateDataFrame : public PolymorphicCopy< MultivariateData, MultivariateDataFrame >
    {
        public:
            MultivariateDataFrame();
            MultivariateDataFrame(const MultivariateSampleSpace& sample_space);
            MultivariateDataFrame(const MultivariateDataFrame& data);
            virtual ~MultivariateDataFrame();

            virtual std::unique_ptr< MultivariateData::Generator > generator() const;

            virtual const MultivariateSampleSpace* get_sample_space() const;
            void set_sample_space(const MultivariateSampleSpace& sample_space);
            
            virtual std::unique_ptr< UnivariateData > select(const Index& index) const;

            Index get_nb_components() const;

            const UnivariateDataFrame* get_component(const Index& index) const;
            void set_component(const Index& index, const UnivariateDataFrame& component);

            void add_component(const UnivariateDataFrame& component);
            std::unique_ptr< UnivariateDataFrame > pop_component();

            void insert_component(const Index& index, const UnivariateDataFrame& component);
            void remove_component(const Index& index);

            Index get_nb_events() const;

            std::unique_ptr< MultivariateEvent > get_event(const Index& index) const;
            void set_event(const Index& index, const MultivariateEvent* event);

            void add_event(const MultivariateEvent* event);
            std::unique_ptr< MultivariateEvent > pop_event();

            void insert_event(const Index& index, const MultivariateEvent* event);
            void remove_event(const Index& index);

        protected:
            std::shared_ptr< VectorSampleSpace > sample_space;
            std::shared_ptr< std::vector< std::unique_ptr< UnivariateDataFrame > > > components;

            class STATISKIT_CORE_API SampleSpace : public PolymorphicCopy< MultivariateSampleSpace, SampleSpace >
            {
                public:
                    SampleSpace(const MultivariateDataFrame* data);
                    SampleSpace(const SampleSpace& sample_space);
                    virtual ~SampleSpace();

                    virtual Index size() const;
                    
                    virtual const UnivariateSampleSpace* get(const Index& index) const;
                                                            
                protected:
                    const MultivariateDataFrame* _data;
            };

            class STATISKIT_CORE_API Event : public PolymorphicCopy< MultivariateEvent, Event >
            {
                public:
                    Event(const MultivariateDataFrame* data, const Index& index);
                    Event(const Event& event);
                    virtual ~Event();

                    virtual Index size() const;
                            
                    virtual const UnivariateEvent* get(const Index& index) const;

                    class STATISKIT_CORE_API Generator : public MultivariateData::Generator
                    {
                        public:
                            Generator(const MultivariateDataFrame* data);
                            virtual ~Generator();

                            virtual bool is_valid() const;

                            virtual MultivariateData::Generator& operator++();

                            virtual const MultivariateEvent* event() const;
                            virtual double weight() const;

                        protected:
                            Event* _event;
                    };     

                protected:
                    const MultivariateDataFrame* _data;
                    Index _index;
            };

            class STATISKIT_CORE_API UnivariateDataExtraction : public PolymorphicCopy< UnivariateData, UnivariateDataExtraction >
            {
                public:
                    UnivariateDataExtraction(const MultivariateDataFrame* data, const Index& index);
                    UnivariateDataExtraction(const UnivariateDataExtraction& data);
                    virtual ~UnivariateDataExtraction();

                    virtual std::unique_ptr< UnivariateData::Generator > generator() const;

                    virtual const UnivariateSampleSpace* get_sample_space() const;
                
                protected:
                    const UnivariateDataFrame* _data;
            };

            class STATISKIT_CORE_API MultivariateDataExtraction : public PolymorphicCopy< MultivariateData, MultivariateDataExtraction >
            {
                public:
                    MultivariateDataExtraction(const MultivariateDataFrame* data, const Indices& index);
                    MultivariateDataExtraction(const MultivariateDataExtraction& data);
                    virtual ~MultivariateDataExtraction();

                    virtual std::unique_ptr< MultivariateData::Generator > generator() const;

                    virtual const MultivariateSampleSpace* get_sample_space() const;

                    virtual std::unique_ptr< UnivariateData > extract(const Index& index) const;

                    virtual std::unique_ptr< MultivariateData > extract(const Indices& indices) const;

                protected:
                    const MultivariateDataFrame* _data;
                    const MultivariateSampleSpace* _sample_space;
                    std::vector< Index > _indices;

                    class STATISKIT_CORE_API SampleSpace : public PolymorphicCopy< MultivariateSampleSpace, SampleSpace >
                    {
                        public:
                            SampleSpace(const MultivariateDataExtraction* data);
                            SampleSpace(const SampleSpace& sample_space);
                            virtual ~SampleSpace();

                            virtual Index size() const;
                            
                            virtual const UnivariateSampleSpace* get(const Index& index) const;
                                                                    
                        protected:
                            const MultivariateDataExtraction* _data;
                    };

                    class STATISKIT_CORE_API Event : public PolymorphicCopy< MultivariateEvent, Event >
                    {
                        public:
                            Event(const MultivariateDataExtraction* data, const Index& index);
                            virtual ~Event();

                            virtual Index size() const;
                                    
                            virtual const UnivariateEvent* get(const Index& index) const;

                            class STATISKIT_CORE_API Generator : public MultivariateData::Generator
                            {
                                public:
                                    Generator(const MultivariateDataExtraction* data);
                                    virtual ~Generator();

                                    virtual bool is_valid() const;

                                    virtual MultivariateData::Generator& operator++();

                                    virtual const MultivariateEvent* event() const;
                                    virtual double weight() const;

                                protected:
                                    Event* _event;
                                    Index _max_index;
                            };

                        protected:
                            const MultivariateDataExtraction* _data;
                            Index _index;
                    };
            };
    };

    template<class D>
    class WeightedData : public D
    {
        public:
            WeightedData();
            virtual ~WeightedData();

            virtual const typename D::sample_space_type* get_sample_space() const;

            virtual std::unique_ptr< typename D::Generator > generator() const;

            const D* get_data() const;

            Index get_nb_weights() const;

            virtual double get_weight(const Index& index) const;     
            void set_weight(const Index& index, const double& weight);       

            class Generator : public D::Generator
            {
                public:
                    Generator(WeightedData< D >* data);
                    virtual ~Generator();

                    virtual bool is_valid() const;

                    virtual typename D::Generator& operator++();

                    virtual const typename D::event_type* event() const;
                    virtual double weight() const;
                    void weight(const double& weigth);

                protected:
                    WeightedData< D >* _data;
                    typename D::Generator* _generator;
                    Index _index;
            };   

        protected:
            const D* _data;
            std::vector< double > _weights;

            void init(const D* data);
            void init(const WeightedData< D >& data);
            void init(const D* data, const std::vector< double >& weights);
    };

    class STATISKIT_CORE_API WeightedUnivariateData : public PolymorphicCopy< UnivariateData, WeightedUnivariateData, WeightedData< UnivariateData > >
    {
        public:
            WeightedUnivariateData(const UnivariateData* data);
            WeightedUnivariateData(const UnivariateData* data, const std::vector< double >& weights);
            WeightedUnivariateData(const WeightedUnivariateData& data);
            virtual ~WeightedUnivariateData();

        protected:
            WeightedUnivariateData();
    };

    class STATISKIT_CORE_API WeightedMultivariateData : public PolymorphicCopy< MultivariateData, WeightedMultivariateData, WeightedData< MultivariateData > >
    {
        public:
            WeightedMultivariateData(const MultivariateData* data);
            WeightedMultivariateData(const MultivariateData* data, const std::vector< double >& weights);
            WeightedMultivariateData(const WeightedMultivariateData& data);
            virtual ~WeightedMultivariateData();

            virtual std::unique_ptr< UnivariateData > extract(const Index& index) const;
            virtual std::unique_ptr< MultivariateData > extract(const Indices& indices) const;

        protected:       

            template<class D>
            class DataExtraction : public D
            {
                public:
                    DataExtraction();
                    virtual ~DataExtraction();

                    virtual std::unique_ptr< typename D::Generator > generator() const;

                    virtual const typename D::sample_space_type* get_sample_space() const;
                
                protected:
                    const WeightedMultivariateData* _weights;
                    const D* _data;

                    class Generator : public D::Generator
                    {
                        public:
                            Generator(const DataExtraction< D >* data);
                            virtual ~Generator();

                            virtual bool is_valid() const;

                            virtual typename D::Generator& operator++();

                            virtual const typename D::event_type* event() const;
                            virtual double weight() const;

                        protected:
                            const DataExtraction< D >* _data;
                            typename D::Generator* _generator;
                            Index _index;
                    };   

                    void init(const WeightedMultivariateData* weights, const D* data);
                    void init(const DataExtraction< D >& data);
            };

            struct STATISKIT_CORE_API UnivariateDataExtraction : PolymorphicCopy< UnivariateData, UnivariateDataExtraction, DataExtraction< UnivariateData > >
            { 
                UnivariateDataExtraction(const WeightedMultivariateData* weights, const Index& index);
                UnivariateDataExtraction(const UnivariateDataExtraction& data);
                virtual ~UnivariateDataExtraction();
            };


            class STATISKIT_CORE_API MultivariateDataExtraction : public PolymorphicCopy< MultivariateData, MultivariateDataExtraction, DataExtraction< MultivariateData > >
            { 
                public:
                    MultivariateDataExtraction(const WeightedMultivariateData* weights, const Indices& indices);
                    MultivariateDataExtraction(const MultivariateDataExtraction& data);
                    virtual ~MultivariateDataExtraction();

                    virtual std::unique_ptr< UnivariateData > extract(const Index& index) const;
                    virtual std::unique_ptr< MultivariateData > extract(const Indices& indices) const;

                protected:
                    std::vector< Index > _indices;
            };
    };

    class STATISKIT_CORE_API UnivariateConditionalData
    {
        public:
            class STATISKIT_CORE_API Generator
            {
                public:
                    Generator(const UnivariateConditionalData* data);
                    virtual ~Generator();

                    virtual bool is_valid() const;

                    virtual Generator& operator++();

                    virtual const UnivariateEvent* response() const;
                    virtual const MultivariateEvent* explanatories() const;

                    virtual double weight() const;

                protected:
                    UnivariateData::Generator* _rgenerator;
                    MultivariateData::Generator* _egenerator;
            };

            UnivariateConditionalData(const MultivariateData& data, const Index& response, const Indices& explanatories);
            UnivariateConditionalData(const UnivariateData& response_data, const MultivariateData& explanatories_data);
            UnivariateConditionalData(const UnivariateConditionalData& data);
            virtual ~UnivariateConditionalData();

            virtual Index size() const;
            
            virtual std::unique_ptr< UnivariateConditionalData::Generator > generator() const;

            virtual const UnivariateData* get_response() const;
            virtual const MultivariateData* get_explanatories() const;
        
            virtual std::unique_ptr< UnivariateConditionalData > copy() const;
            
            double compute_total() const;

        protected:
            UnivariateData* _response;
            MultivariateData* _explanatories;
    };

    class STATISKIT_CORE_API MultivariateConditionalData
    {
        public:
            class STATISKIT_CORE_API Generator
            {
                public:
                    Generator(const MultivariateConditionalData* data);
                    virtual ~Generator();

                    virtual bool is_valid() const;

                    virtual Generator& operator++();

                    virtual const MultivariateEvent* responses() const;
                    virtual const MultivariateEvent* explanatories() const;

                    virtual double weight() const;

                protected:
                    MultivariateData::Generator* _rgenerator;
                    MultivariateData::Generator* _egenerator;
            };

            MultivariateConditionalData(const MultivariateData& data, const Indices& responses, const Indices& explanatories);
            MultivariateConditionalData(const MultivariateConditionalData& data);
            virtual ~MultivariateConditionalData();

            virtual Index size() const;
            
            virtual std::unique_ptr< MultivariateConditionalData::Generator > generator() const;

            virtual const MultivariateData* get_responses() const;
            virtual const MultivariateData* get_explanatories() const;
        
            virtual std::unique_ptr< MultivariateConditionalData > copy() const;
            
            double compute_total() const;

        protected:
            MultivariateData* _responses;
            MultivariateData* _explanatories;
    };

    /*template<class D>
    class DataMask : public D
    {
        public:
            DataMask(const std::shared_ptr< D >& masked);
            DataMask(const DataMask< D >& data);

            const std::shared_ptr< D >& get_masked() const;

            virtual const typename D::sample_space_type* get_sample_space() const;
                         
            virtual const typename D::event_type * get_event(const Index& index) const;
            virtual void set_event(const Index& index, const typename D::event_type* event);
           
            virtual bool is_weighted() const;

            virtual double get_weight(const Index& index) const;
            
            virtual void lock();
            virtual void unlock();
            virtual const bool& is_locked() const;
            
        protected:
            std::shared_ptr< D > _masked;
            
            virtual Index compute_index(const Index& index) const = 0;
    };

    template<class D>
    class RandomizedData : public DataMask< D >
    {
        public:
            RandomizedData(const std::shared_ptr< D >& randomized);
            RandomizedData(const RandomizedData< D >& data);
            
            virtual Index size() const;

            const std::shared_ptr< D >& get_randomized() const;

            const std::vector< Index >& get_randomization() const;

            void randomize();

            virtual std::unique_ptr< D > copy() const;

        protected:
            std::vector< Index > _randomization;
            
            virtual Index compute_index(const Index& index) const;       
    };

  
    template<class D>
    class DataIntervalMask : public DataMask< D >
    {
        public:
            DataIntervalMask(const std::shared_ptr< D >& masked, const Index& lower, const Index& upper, const bool& inside);
            DataIntervalMask(const DataIntervalMask< D >& data);
            
            virtual Index size() const;
            
            const bool& get_inside() const;
            void set_inside(const bool& inside);

            virtual std::unique_ptr< D > copy() const;

        protected:
            Index _lower;
            Index _upper;
            bool _inside;
            
            virtual Index compute_index(const Index& index) const;                    
    };*/
}

#ifndef AUTOWIG
#include "data.hpp"
#endif
#endif