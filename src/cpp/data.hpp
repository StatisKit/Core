#ifndef AUTOWIG
#ifndef STATISKIT_CORE_DATA_HPP
#define STATISKIT_CORE_DATA_HPP

namespace statiskit
{
    template<class D, class B>
        WeightedData< D, B >::WeightedData(const D& data)
        {
            this->data = data.copy().release();
            this->weights = std::make_shared< std::vector< double > >(data.get_nb_events(), 1.);
        }

    template<class D, class B>
        WeightedData< D, B >::WeightedData(const WeightedData< D, B >& data)
        {
            this->data = data.data->copy().release();
            this->weights = data.weights;
        }


    template<class D, class B>
        WeightedData< D, B >::~WeightedData()
        {
            delete this->data;
        }

    template<class D, class B>
        std::unique_ptr< typename D::Generator > WeightedData< D, B >::generator() const
        { return std::make_unique< Generator >(*this); }

    template<class D, class B>
        const D* WeightedData< D, B >::origin() const
        { return this->data; }

    template<class D, class B>
        Index WeightedData< D, B >::get_nb_weights() const
        { return this->weights->size(); }

    template<class D, class B>
        double WeightedData< D, B >::get_weight(const Index& index) const
        {
            if (index > this->get_nb_weights()) {
                throw size_error("index", this->get_nb_weights(), size_error::inferior);
            }
            return (*this->weights)[index];
        }

    template<class D, class B>
        void WeightedData< D, B >::set_weight(const Index& index, const double& weight)
        {
            if (index > this->get_nb_weights()) {
                throw size_error("index", this->get_nb_weights(), size_error::inferior);
            }
            if (weight < 0.) {
                throw lower_bound_error("weight", 0., weight, false);
            }
            (*this->weights)[index] = weight;
        }

    template<class D, class B>
        void WeightedData< D, B >::detach()
        {
            if (this->weights.use_count() > 1) {
                std::shared_ptr< std::vector< double > > weights = std::make_shared< std::vector< double > >(this->weights->cbegin(), this->weights->cend());
                this->weights = weights;
            }
        }

    template<class D, class B>
        WeightedData< D, B >::Generator::Generator(const WeightedData< D, B >& data) :  PolymorphicCopy< typename D::Generator, Generator, typename B::Generator >(data)
        {
            this->data = data.copy().release();
            this->index = 0;
        }

    template<class D, class B>
        WeightedData< D, B >::Generator::Generator(const Generator& generator) :  PolymorphicCopy< typename D::Generator, Generator, typename B::Generator >(generator)
        {
            this->data = static_cast< WeightedData< D, B >* >(generator.data->copy().release());
            this->index = generator.index;
        }

    template<class D, class B>
        WeightedData< D, B >::Generator::~Generator()
        {
            delete this->data;
        }

    template<class D, class B>
        double WeightedData< D, B >::Generator::get_weight() const
        { return this->data->get_weight(this->index); }

    template<class D, class B>
        typename D::Generator& WeightedData< D, B >::Generator::operator++()
        {
            B::Generator::operator++();
            ++index;
            return *this;
        }
}

#endif
#endif
