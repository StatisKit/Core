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
        WeightedData<B>::Generator::Generator(const WeightedData<B>& data)
        {
            this->data = static_cast< WeightedData<B>* >(data.copy().release());
            this->generator = data.generator().release();
            this->index = 0;
        }

    template<class B>
        WeightedData<B>::Generator::~Generator()
        {
            delete this->data;
            delete this->generator;
        }

    template<class B>
        double WeightedData<B>::Generator::get_weight() const
        {
            return this->data->get_weight(this->index);
        }

    template<class B>
        bool WeightedData<B>::Generator::is_valid() const
        {
            return this->generator->is_valid() && this->index < this->data->get_nb_weights();
        }

    template<class B>
        typename B::Generator& WeightedData<B>::Generator::operator++()
        {
            ++(*this->generator);
            ++index;
            return *this;
        }
}

#endif