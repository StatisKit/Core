#pragma once

#include <boost/random/uniform_int.hpp>
#include <boost/random/variate_generator.hpp>

#include "base.h"
#include "sample_space.h"

namespace statiskit
{
    class WeightedUnivariateData;

    struct STATISKIT_CORE_API UnivariateData
    {
        typedef UnivariateSampleSpace sample_space_type;
        typedef UnivariateEvent event_type;
        typedef WeightedUnivariateData weighted_type;

        virtual ~UnivariateData() = 0;

        struct STATISKIT_CORE_API Generator : public UnivariateEvent
        {
            virtual ~Generator() = 0;
            
            virtual const UnivariateEvent* get_event() const = 0;
            virtual double get_weight() const = 0;

            virtual bool is_valid() const = 0;

            virtual Generator& operator++() = 0;
        };

        virtual std::unique_ptr< UnivariateData::Generator > generator() const = 0;

		virtual Index get_nb_events() const;
		
        double compute_total() const;

        std::unique_ptr< UnivariateEvent > compute_minimum() const;
        std::unique_ptr< UnivariateEvent > compute_maximum() const;

        virtual const UnivariateSampleSpace* get_sample_space() const = 0;
    
        virtual std::unique_ptr< UnivariateData > copy() const = 0;
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

            virtual std::unique_ptr< UnivariateData::Generator > generator() const;

            virtual Index get_nb_events() const;

            virtual const UnivariateSampleSpace* get_sample_space() const;
            void set_sample_space(const UnivariateSampleSpace& sample_space);

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

            class STATISKIT_CORE_API Generator : public PolymorphicCopy<UnivariateEvent, Generator, UnivariateData::Generator >
            {
                public:
                    Generator(const UnivariateDataFrame& data);
                    Generator(const Generator& generator);
                    virtual ~Generator();

                    virtual outcome_type get_outcome() const;

                    virtual censoring_type get_censoring() const;

                    virtual const UnivariateEvent* get_event() const;
                    virtual double get_weight() const;

                    virtual bool is_valid() const;

                    virtual UnivariateData::Generator& operator++();

                protected:
                    UnivariateDataFrame* data = nullptr;
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

        struct STATISKIT_CORE_API Generator : public MultivariateEvent
        {
            virtual double get_weight() const = 0;

            virtual bool is_valid() const = 0;

            virtual Generator& operator++() = 0;
        };

        virtual std::unique_ptr< MultivariateData::Generator > generator() const = 0;

        virtual Index get_nb_events() const;

        double compute_total() const;

		virtual Index get_nb_components() const = 0;
		
        virtual const UnivariateSampleSpace* get_sample_space(const Index& index) const = 0;

        virtual std::unique_ptr< UnivariateData > select(const Index& index) const;
        virtual std::unique_ptr< MultivariateData > select(const Indices& indices) const;

        virtual std::unique_ptr< MultivariateData > copy() const = 0;
    };

    class STATISKIT_CORE_API IndexSelectedData : public PolymorphicCopy<UnivariateData, IndexSelectedData>
    {
        public:
            using indexing_type=Index;

            IndexSelectedData(const MultivariateData& data, const Index& index);
            IndexSelectedData(const IndexSelectedData& data);
            virtual ~IndexSelectedData();

            const MultivariateData* origin() const;

            virtual std::unique_ptr< UnivariateData::Generator > generator() const;

            virtual const UnivariateSampleSpace* get_sample_space() const;

            Index get_index() const;

        protected:
            MultivariateData* data;
            Index index;

            class STATISKIT_CORE_API Generator : public PolymorphicCopy<UnivariateEvent, Generator, UnivariateData::Generator>
            {
                public:
                    Generator(const IndexSelectedData& data);
                    Generator(const Generator& generator);
                    virtual ~Generator();

                    virtual outcome_type get_outcome() const;

                    virtual censoring_type get_censoring() const;

                    virtual const UnivariateEvent* get_event() const;
                    virtual double get_weight() const;

                    virtual bool is_valid() const;

                    virtual UnivariateData::Generator& operator++();

                protected:
                    MultivariateData::Generator* generator = nullptr;
                    Index index;
            }; 
    };

    class STATISKIT_CORE_API IndicesSelectedData : public PolymorphicCopy<MultivariateData, IndicesSelectedData>
    {
        public:
            using indexing_type=Indices;

            IndicesSelectedData(const MultivariateData& data, const Indices& indices);
            IndicesSelectedData(const IndicesSelectedData& data);
            virtual ~IndicesSelectedData();

            const MultivariateData* origin() const;

            virtual std::unique_ptr< MultivariateData::Generator > generator() const;

            virtual Index get_nb_components() const;

            virtual const UnivariateSampleSpace* get_sample_space(const Index& index) const;

            const std::vector< Index >& get_indices() const;

        protected:
            MultivariateData* data;
            std::shared_ptr< std::vector< Index > > indices;

            class STATISKIT_CORE_API Generator : public PolymorphicCopy<MultivariateEvent, Generator, MultivariateData::Generator>
            {
                public:
                    Generator(const IndicesSelectedData& data);
                    Generator(const Generator& generator);
                    virtual ~Generator();

                    virtual Index size() const;

                    virtual const UnivariateEvent* get_event(const Index& index) const;
                    virtual double get_weight() const;
                    
                    virtual bool is_valid() const;

                    virtual MultivariateData::Generator& operator++();

                protected:
                    MultivariateData::Generator* generator = nullptr;
                    std::shared_ptr< std::vector< Index > > indices;
            }; 
    };

    class STATISKIT_CORE_API MultivariateDataFrame : public PolymorphicCopy< MultivariateData, MultivariateDataFrame >
    {
        public:
            MultivariateDataFrame();
            MultivariateDataFrame(const MultivariateDataFrame& data);
            virtual ~MultivariateDataFrame();

            virtual std::unique_ptr< MultivariateData::Generator > generator() const;
            
            Index get_nb_components() const;

            virtual const UnivariateSampleSpace* get_sample_space(const Index& index) const;
            void set_sample_space(const Index& index, const UnivariateSampleSpace& sample_space);

            const UnivariateDataFrame* get_component(const Index& index) const;
            void set_component(const Index& index, const UnivariateDataFrame& component);

            void add_component(const UnivariateDataFrame& component);
            std::unique_ptr< UnivariateDataFrame > pop_component();

            void insert_component(const Index& index, const UnivariateDataFrame& component);
            void remove_component(const Index& index);

            Index get_nb_events() const;

        protected:
            std::shared_ptr< std::vector< std::unique_ptr< UnivariateDataFrame > > > components;

            void detach();

            class STATISKIT_CORE_API Generator : public PolymorphicCopy<MultivariateEvent, Generator, MultivariateData::Generator>
            {
                public:
                    Generator(const MultivariateDataFrame& data);
                    Generator(const Generator& generator);
                    virtual ~Generator();

                    virtual Index size() const;

                    virtual const UnivariateEvent* get_event(const Index& index) const;
                    virtual double get_weight() const;
                    
                    virtual bool is_valid() const;

                    virtual MultivariateData::Generator& operator++();

                protected:
                    MultivariateDataFrame* data = nullptr;
                    Index index;
            }; 
    };

    template<class D, class B>
        class WeightedData : public PolymorphicCopy< D, WeightedData< D, B >, B >
        {
            public:
                WeightedData(const D& data);
                WeightedData(const WeightedData< D, B >& data);
                virtual ~WeightedData();

                virtual std::unique_ptr< typename D::Generator > generator() const;

                const D* origin() const;

                Index get_nb_weights() const;

                virtual double get_weight(const Index& index) const;     
                void set_weight(const Index& index, const double& weight);       

            protected:
                D* data;
                std::shared_ptr< std::vector< double > > weights;

                void detach();

                class Generator : public PolymorphicCopy< typename D::Generator, Generator, typename B::Generator >
                {
                    public:
                        Generator(const WeightedData< D, B >& data);
                        Generator(const Generator& generator);
                        virtual ~Generator();

                        virtual double get_weight() const = 0;

                        virtual typename D::Generator& operator++();

                    protected:
                        WeightedData<D, B>* data;
                        Index index;
                };
        };

    // template<class I>
    //     class PairedData
    //     {
    //         public:
    //             using paired_type = I;

    //             PairedData(const typename I::indexing_type& first, const Indices& second, const MultivariateData& data);
    //             PairedData(const PairedData< I >& data);
    //             ~PairedData();

    //             class Generator
    //             {
    //                 public:
    //                     Generator(const PairedData< I >& data);
    //                     Generator(const Generator& generator);
    //                     virtual ~Generator();
                        
    //                     const typename I::event_type* get_first() const;
    //                     const MultivariateEvent* get_second() const;

    //                     virtual double get_weight() const = 0;

    //                     virtual bool is_valid() const = 0;

    //                     virtual Generator& operator++() = 0;

    //                 protected:
    //                     typename I::Generator* first;
    //                     MultivariateData::Generator* second;
    //             };

    //             virtual std::unique_ptr< Generator > generator() const;

    //             const I* get_first() const;
    //             const MultivariateData* get_second() const;

    //         protected:
    //             I* first = nullptr;
    //             MultivariateData* second = nullptr;
    //     };

    // using UnivariatePairedData = PairedData< UnivariateData >;
    // using MultivariatePairedData = PairedData< UnivariateData >;
}

#include "data.hpp"