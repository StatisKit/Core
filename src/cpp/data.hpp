#ifndef AUTOWIG
#pragma once

namespace statiskit
{
    template<class B>
        WeightedData<B>::WeightedData(const B& data)
        {
            this->data = data.copy().release();
            this->weights = std::make_shared< std::vector< double > >(data.get_nb_events(), 1.);
        }

    template<class B>
        WeightedData<B>::WeightedData(const WeightedData<B>& data)
        {
            this->data = data.data->copy().release();
            this->weights = data.weights;
        }


    template<class B>
        WeightedData<B>::~WeightedData()
        {
            delete this->data;
        }

    template<class B>
        std::unique_ptr< typename B::Generator > WeightedData<B>::generator() const
        { return std::make_unique< Generator >(*this); }

    template<class B>
        const B* WeightedData<B>::origin() const
        { return this->data; }

    template<class B>
        Index WeightedData<B>::get_nb_weights() const
        { return this->weights->size(); }

    template<class B>
        double WeightedData<B>::get_weight(const Index& index) const
        {
            if (index > this->get_nb_weights()) {
                throw size_error("index", this->get_nb_weights(), size_error::inferior);
            }
            return (*this->weights)[index];
        }

    template<class B>
        void WeightedData<B>::set_weight(const Index& index, const double& weight)
        {
            if (index > this->get_nb_weights()) {
                throw size_error("index", this->get_nb_weights(), size_error::inferior);
            }
            if (weight < 0.) {
                throw lower_bound_error("weight", 0., weight, false);
            }
            (*this->weights)[index] = weight;
        }

    template<class B>
        void WeightedData<B>::detach()
        {
            if (this->weights.use_count() > 1) {
                std::shared_ptr< std::vector< double > > weights = std::make_shared< std::vector< double > >(this->weights->cbegin(), this->weights->cend());
                this->weights = weights;
            }
        }

    template<class B>
        WeightedData<B>::Generator::Generator(const WeightedData<B>& data) :  PolymorphicCopy< Generator, typename B::Generator >(data)
        {
            this->data = data.copy().release();
            this->index = 0;
        }

    template<class B>
        WeightedData<B>::Generator::Generator(const Generator& generator) :  PolymorphicCopy< Generator, typename B::Generator >(generator)
        {
            this->data = static_cast< WeightedData<B>* >(generator.data->copy().release());
            this->index = generator.index;
        }

    template<class B>
        WeightedData<B>::Generator::~Generator()
        {
            delete this->data;
        }

    template<class B>
        double WeightedData<B>::Generator::get_weight() const
        { return this->data->get_weight(this->index); }

    template<class B>
        typename B::Generator& WeightedData<B>::Generator::operator++()
        {
            B::Generator::operator++();
            ++index;
            return *this;
        }

    // template<class I>
    //     PairedData< I >::PairedData(const typename I::indexing_type first, const Indices& second, const MultivariateData& data)
    //     {
    //         this->first = data.select(first).release();
    //         this->second = data.select(second).release();
    //     }

    // template<class I>
    //     PairedData< I >::PairedData(const PairedData< I >& data)
    //     {
    //         this->first = data.first.copy().release();
    //         this->second = data.second.copy().release();
    //     }

    // template<class I>
    //     PairedData< I >::~PairedData()
    //     {
    //         delete this->first;
    //         delete this->second;
    //     }

    // template<class I>
    //     PairedData< I >::Generator::Generator(const PairedData< I >& data)
    //     {
    //         this->first = data.first->generator().release();
    //         this->second = data.second->generator().release();
    //     }

    // template<class I>
    //     PairedData< I >::Generator::Generator(const Generator& generator)
    //     {
    //         this->first = generator.first->copy().release();
    //         this->second = generator.second->copy().release();
    //     }

    // template<class I>
    //     PairedData< I >::Generator::~Generator()
    //     {
    //         if (this->first) {
    //             delete this->first;
    //             this->first = nullptr;
    //         }
    //         if (this->second) {
    //             delete this->second;
    //             this->second = nullptr;
    //         }
    //     }

    // template<class I>
    //     const typename I::event_type* PairedData< I >::Generator::get_first() const
    //     {
    //         return this->first->get_event();
    //     }

    // template<class I>
    //     const MultivariateEvent* PairedData< I >::Generator::get_second() const
    //     {
    //         return this->second->get_event();
    //     }

    // template<class I>
    //     double PairedData< I >::Generator::get_weight() const
    //     {
    //         return this->first->get_weight();
    //     }

    // template<class I>
    //     bool PairedData< I >::Generator::is_valid() const
    //     {
    //         return this->first->is_valid() && this->second->is_valid();
    //     }

    // template<class I>
    //     PairedData< I >::Generator& PairedData< I >::Generator::get_first() const
    //     {
    //         ++(*this->first);
    //         ++(*this->second);
    //         return *this;
    //     }
}

#endif