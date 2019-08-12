#include "data.h"

namespace statiskit
{ 
    UnivariateData::~UnivariateData()
    {}

    Index UnivariateData::get_nb_events() const
    {
        Index index = 0;
        std::unique_ptr< UnivariateData::Generator > generator = this->generator();
        while (generator->is_valid()) {
            ++index;
            ++(*generator);
        }
        return index;
    }
    
    double UnivariateData::compute_total() const
    {
        double total = 0.;
        std::unique_ptr< UnivariateData::Generator > generator = this->generator();
        while (generator->is_valid()) {
            total += generator->get_weight();
            ++(*generator);
        }
        return total;
    }

    std::unique_ptr< UnivariateEvent > UnivariateData::compute_minimum() const
    {
        std::unique_ptr< UnivariateEvent > minimum;
        const UnivariateSampleSpace* sample_space = this->get_sample_space();
        std::unique_ptr< UnivariateData::Generator > generator = this->generator();
        if (sample_space->get_ordering() == TOTAL) {
            while (generator->is_valid() && !minimum) {
                const UnivariateEvent* event = generator->get_event();
                if (event && event->get_censoring() == censoring_type::NONE) { 
                    switch (sample_space->get_outcome()) {
                        case outcome_type::CATEGORICAL:
                            minimum = std::make_unique< CategoricalElementaryEvent >(static_cast< const CategoricalElementaryEvent* >(event)->get_value());
                            break;
                        case outcome_type::DISCRETE:
                            minimum = std::make_unique< DiscreteElementaryEvent >(static_cast< const DiscreteElementaryEvent* >(event)->get_value());
                            break;
                        case outcome_type::CONTINUOUS:
                            minimum = std::make_unique< ContinuousElementaryEvent >(static_cast< const ContinuousElementaryEvent* >(event)->get_value());
                            break;
                    }
                }
                ++(*generator);
            }
            switch (sample_space->get_outcome()) {
                case outcome_type::CATEGORICAL:
                    while (generator->is_valid()) {
                        const UnivariateEvent* event = generator->get_event();
                        if (event && event->get_censoring() == censoring_type::NONE) {
                            if (static_cast< const CategoricalElementaryEvent* >(event)->get_value() < static_cast< const CategoricalElementaryEvent* >(minimum.get())->get_value()) {
                                minimum = std::make_unique< CategoricalElementaryEvent >(static_cast< const CategoricalElementaryEvent* >(event)->get_value());
                            }    
                        }
                        ++(*generator);
                    }
                    break;
                case outcome_type::DISCRETE:
                    while (generator->is_valid()) {
                        const UnivariateEvent* event = generator->get_event();
                        if (event && event->get_censoring() == censoring_type::NONE) {
                            if (static_cast< const DiscreteElementaryEvent* >(event)->get_value() < static_cast< const DiscreteElementaryEvent* >(minimum.get())->get_value()) {
                                minimum = std::make_unique< DiscreteElementaryEvent >(static_cast< const DiscreteElementaryEvent* >(event)->get_value());
                            } 
                        }
                        ++(*generator);
                    }
                    break;
                case outcome_type::CONTINUOUS:
                    while (generator->is_valid()) {
                        const UnivariateEvent* event = generator->get_event();
                        if (event && event->get_censoring() == censoring_type::NONE) {
                            if (static_cast< const ContinuousElementaryEvent* >(event)->get_value() < static_cast< const ContinuousElementaryEvent* >(minimum.get())->get_value()) {
                                minimum = std::make_unique< ContinuousElementaryEvent >(static_cast< const ContinuousElementaryEvent* >(event)->get_value());
                            }    
                        }
                        ++(*generator);
                    }
                    break;
            }
        }
        return minimum;
    }

    std::unique_ptr< UnivariateEvent> UnivariateData::compute_maximum() const
    {
        std::unique_ptr< UnivariateEvent > maximum;
        const UnivariateSampleSpace* sample_space = this->get_sample_space();
        std::unique_ptr< UnivariateData::Generator > generator = this->generator();
        if (sample_space->get_ordering() == TOTAL) {
            while (generator->is_valid() && !maximum) {
                const UnivariateEvent* event = generator->get_event();
                if (event && event->get_censoring() == censoring_type::NONE) { 
                    switch (sample_space->get_outcome()) {
                        case outcome_type::CATEGORICAL:
                            maximum = std::make_unique< CategoricalElementaryEvent >(static_cast< const CategoricalElementaryEvent* >(event)->get_value());
                            break;
                        case outcome_type::DISCRETE:
                            maximum = std::make_unique< DiscreteElementaryEvent >(static_cast< const DiscreteElementaryEvent* >(event)->get_value());
                            break;
                        case outcome_type::CONTINUOUS:
                            maximum = std::make_unique< ContinuousElementaryEvent >(static_cast< const ContinuousElementaryEvent* >(event)->get_value());
                            break;
                    }
                }
                ++(*generator);
            }
            switch (sample_space->get_outcome()) {
                case outcome_type::CATEGORICAL:
                    while (generator->is_valid()) {
                        const UnivariateEvent* event = generator->get_event();
                        if (event && event->get_censoring() == censoring_type::NONE) {
                            if (static_cast< const CategoricalElementaryEvent* >(event)->get_value() > static_cast< const CategoricalElementaryEvent* >(maximum.get())->get_value()) {
                                maximum = std::make_unique< CategoricalElementaryEvent >(static_cast< const CategoricalElementaryEvent* >(event)->get_value());
                            }    
                        }
                        ++(*generator);
                    }
                    break;
                case outcome_type::DISCRETE:
                    while (generator->is_valid()) {
                        const UnivariateEvent* event = generator->get_event();
                        if (event && event->get_censoring() == censoring_type::NONE) {
                            if (static_cast< const DiscreteElementaryEvent* >(event)->get_value() > static_cast< const DiscreteElementaryEvent* >(maximum.get())->get_value()) {
                                maximum = std::make_unique< DiscreteElementaryEvent >(static_cast< const DiscreteElementaryEvent* >(event)->get_value());
                            }    
                        }
                        ++(*generator);
                    }
                    break;
                case outcome_type::CONTINUOUS:
                    while (generator->is_valid()) {
                        const UnivariateEvent* event = generator->get_event();
                        if (event && event->get_censoring() == censoring_type::NONE) {
                            if (static_cast< const ContinuousElementaryEvent* >(event)->get_value() > static_cast< const ContinuousElementaryEvent* >(maximum.get())->get_value()) {
                                maximum = std::make_unique< ContinuousElementaryEvent >(static_cast< const ContinuousElementaryEvent* >(event)->get_value());
                            }    
                        }
                        ++(*generator);
                    }
                    break;
            }
        }
        return maximum;
    }

    UnivariateData::Generator::~Generator()
    {}

    std::unique_ptr< UnivariateData::Generator > WeightedUnivariateData::generator() const
    {
        return std::make_unique< Generator >(*this);
    }

    const UnivariateSampleSpace* WeightedUnivariateData::get_sample_space() const
    {
        return this->data->get_sample_space();
    }

    const UnivariateEvent* WeightedUnivariateData::Generator::get_event() const
    {
        return this->generator->get_event();
    }

    unsigned int NamedData::INDEX = 0;

    NamedData::NamedData()
    { 
        this->name = "V" + __impl::to_string(this->INDEX); 
        ++(this->INDEX);
    }

    NamedData::NamedData(const std::string& name)
    { this->name = name; }

    NamedData::NamedData(const NamedData& data)
    { this->name = data.name; }

    NamedData::~NamedData()
    {}

    const std::string& NamedData::get_name() const
    { return this->name; }

    void NamedData::set_name(const std::string& name)
    { this->name = name; }

    UnivariateDataFrame::UnivariateDataFrame(const UnivariateSampleSpace& sample_space) : NamedData()
    {
        this->sample_space = sample_space.copy();
        this->events = std::make_shared< std::vector< std::unique_ptr< UnivariateEvent > > >();
    }

    UnivariateDataFrame::UnivariateDataFrame(const UnivariateDataFrame& data) : NamedData(data)
    {
        this->sample_space = data.sample_space;
        this->events = data.events;
    }

    UnivariateDataFrame::~UnivariateDataFrame()
    {}

    std::unique_ptr< UnivariateData::Generator > UnivariateDataFrame::generator() const
    {
        return std::make_unique< UnivariateDataFrame::Generator >(*this);
    }

    Index UnivariateDataFrame::get_nb_events() const
    {
        return this->events->size();
    }

    const UnivariateSampleSpace* UnivariateDataFrame::get_sample_space() const
    {
        return this->sample_space.get();
    }
   
    void UnivariateDataFrame::set_sample_space(const UnivariateSampleSpace& sample_space)
    {
        bool compatible =  true;
        Index index = 0, max_index = this->get_nb_events();
        while (compatible && index < max_index) {
            compatible = sample_space.is_compatible((*this->events)[index].get());
            ++index;
        }
        if (compatible) { 
            this->sample_space = sample_space.copy();
        } else {
            throw statiskit::parameter_error("sample_space", "incompatible");
        }
    }
    
    const UnivariateEvent* UnivariateDataFrame::get_event(const Index& index) const 
    {
        if (index > this->get_nb_events()) {
            throw size_error("index", this->get_nb_events(), size_error::inferior);
        }
        return (*this->events)[index].get();
    }

    void UnivariateDataFrame::set_event(const Index& index, const UnivariateEvent* event)
    {
        if (event) {
            if (this->sample_space->is_compatible(event)) {
                this->detach();
                (*this->events)[index] = event->copy();
            } else {
                throw statiskit::parameter_error("event", "incompatible");
            } 
        } else {
            (*this->events)[index] = std::unique_ptr< UnivariateEvent >(); 
        }
    }
    
    void UnivariateDataFrame::add_event(const UnivariateEvent* event)
    {
        if (event) {
            if (this->sample_space->is_compatible(event)) {
                this->detach();
                this->events->push_back(event->copy());
            } else {
                throw parameter_error("event", "incompatible");
            }
        } else {
            this->detach();
            this->events->push_back(std::unique_ptr< UnivariateEvent >());
        }
    }

    std::unique_ptr< UnivariateEvent > UnivariateDataFrame::pop_event()
    {
        if (this->get_nb_events() > 0) {
            this->detach();
            std::unique_ptr< UnivariateEvent > event = std::move(this->events->back());
            this->events->pop_back();
            return event;
        } else {
            return std::unique_ptr< UnivariateEvent >();
        }
    }

    void UnivariateDataFrame::insert_event(const Index& index, const UnivariateEvent* event)
    {
        if (index >= this->get_nb_events()) {
            throw size_error("index", this->get_nb_events(), size_error::inferior);
        } else {
            if (event) {
                if (this->sample_space->is_compatible(event)) {
                    this->detach();
                    std::vector< std::unique_ptr< UnivariateEvent > >::iterator it = this->events->begin();
                    advance(it, index);
                    this->events->insert(it, event->copy());
                } else {
                    throw parameter_error("event", "incompatible");
                } 
            } else {
                this->detach();
                std::vector< std::unique_ptr< UnivariateEvent > >::iterator it = this->events->begin();
                advance(it, index);
                this->events->insert(it, std::unique_ptr< UnivariateEvent >());
            }
        }
    }
    
    void UnivariateDataFrame::remove_event(const Index& index)
    {
        this->detach();
        std::vector< std::unique_ptr< UnivariateEvent > >::iterator it = this->events->begin();
        advance(it, index);
        this->events->erase(it);
    }

    void UnivariateDataFrame::detach()
    {
        std::shared_ptr< std::vector< std::unique_ptr< UnivariateEvent > > > events = std::make_shared< std::vector< std::unique_ptr< UnivariateEvent > > >(this->get_nb_events());
        for (Index index = 0, max_index = this->get_nb_events(); index < max_index; ++index) {
            (*events)[index] = (*this->events)[index]->copy();
        }
        this->events = events;
    }

    UnivariateDataFrame::Generator::Generator(const UnivariateDataFrame& data)
    {
        this->data = static_cast< UnivariateDataFrame* >(data.copy().release());
        this->index = 0;
    }

    UnivariateDataFrame::Generator::~Generator()
    {
        delete this->data;
    }

    bool UnivariateDataFrame::Generator::is_valid() const
    { return this->index < this->data->get_nb_events(); }

    UnivariateData::Generator& UnivariateDataFrame::Generator::operator++()
    {
       ++(this->index);
       return *this;
    }

    const UnivariateEvent* UnivariateDataFrame::Generator::get_event() const
    {
        return this->data->get_event(this->index);
    }

    double UnivariateDataFrame::Generator::get_weight() const
    {
        return 1;
    }

    MultivariateData::~MultivariateData()
    {}
    
    Index MultivariateData::get_nb_events() const
    {
        Index index = 0;
        std::unique_ptr< MultivariateData::Generator > generator = this->generator();
        while (generator->is_valid()) {
            ++index;
            ++(*generator);
        }
        return index;
    }
    
    double MultivariateData::compute_total() const
    {
        double total = 0.;
        std::unique_ptr< MultivariateData::Generator > generator = this->generator();
        while (generator->is_valid()) {
            total += generator->get_weight();
            ++(*generator);
        }
        return total;
    }

    std::unique_ptr< UnivariateData > MultivariateData::select(const Index& index) const
    {
        if (index >= this->get_nb_components()) {
            throw size_error("index", get_nb_components(), size_error::inferior);
        }
        return std::make_unique< IndexSelectedData >(*this, index);
    }

    std::unique_ptr< MultivariateData > MultivariateData::select(const Indices& indices) const
    {
        for (Indices::const_iterator it = indices.cbegin(), it_end = indices.cend(); it != it_end; ++it) {
            if (*it >= this->get_nb_components()) {
                throw size_error("indices", this->get_nb_components(), size_error::inferior);
            }
        }
        return std::make_unique< IndicesSelectedData >(*this, indices);
    }

    std::unique_ptr< MultivariateData::Generator > WeightedMultivariateData::generator() const
    {
        return std::make_unique< Generator >(*this);
    }

    Index WeightedMultivariateData::get_nb_components() const
    {
        return this->data->get_nb_components();
    }

    const UnivariateEvent* WeightedMultivariateData::Generator::get_event(const Index& index) const
    {
        return this->generator->get_event(index);
    } 

    Index WeightedMultivariateData::Generator::size() const
    {
        return this->generator->size();
    } 

    const UnivariateSampleSpace* WeightedMultivariateData::get_sample_space(const Index& index) const
    {
        return this->data->get_sample_space(index);
    } 

    IndexSelectedData::IndexSelectedData(const MultivariateData& data, const Index& index)
    {
        this->data = data.copy().release();
        this->index = index;
    }

    IndexSelectedData::IndexSelectedData(const IndexSelectedData& data)
    {
        this->data = data.data->copy().release();
        this->index = data.index;
    }

    IndexSelectedData::~IndexSelectedData()
    {
        delete this->data;
    }

    const MultivariateData* IndexSelectedData::origin() const
    {
        return this->data;
    }

    std::unique_ptr< UnivariateData::Generator > IndexSelectedData::generator() const
    {
        return std::make_unique< IndexSelectedData::Generator >(*this);
    }

    const UnivariateSampleSpace* IndexSelectedData::get_sample_space() const
    {
        return this->data->get_sample_space(this->index);
    }

    Index IndexSelectedData::get_index() const
    {
        return this->index;
    }

    IndexSelectedData::Generator::Generator(const IndexSelectedData& data)
    {
        this->generator = data.origin()->generator().release();
        this->index = data.get_index();
    }

    IndexSelectedData::Generator::~Generator()
    {
        delete this->generator;
    }

    const UnivariateEvent* IndexSelectedData::Generator::get_event() const
    { return this->generator->get_event(this->index); }

    double IndexSelectedData::Generator::get_weight() const
    { return this->generator->get_weight(); }

    bool IndexSelectedData::Generator::is_valid() const
    { return this->generator->is_valid(); }

    UnivariateData::Generator& IndexSelectedData::Generator::operator++()
    {
        ++(*this->generator);
        return *this;
    }

    IndicesSelectedData::IndicesSelectedData(const MultivariateData& data, const Indices& indices)
    {
        this->data = data.copy().release();
        this->indices = std::make_shared< std::vector< Index > >(indices.cbegin(), indices.cend());
    }

    IndicesSelectedData::IndicesSelectedData(const IndicesSelectedData& data)
    {
        this->data = data.data->copy().release();
        this->indices = data.indices;
    }

    IndicesSelectedData::~IndicesSelectedData()
    {
        delete this->data;
    }

    const MultivariateData* IndicesSelectedData::origin() const
    {
        return this->data;
    }

    std::unique_ptr< MultivariateData::Generator > IndicesSelectedData::generator() const
    {
        return std::make_unique< IndicesSelectedData::Generator >(*this);
    }

    Index IndicesSelectedData::get_nb_components() const
    {
        return this->indices->size();
    }

    const UnivariateSampleSpace* IndicesSelectedData::get_sample_space(const Index& index) const
    {
        if (index >= this->get_nb_components()) {
            throw size_error("index", this->get_nb_components(), size_error::inferior);
        }
        return this->data->get_sample_space((*this->indices)[index]);
    }

    const std::vector< Index >& IndicesSelectedData::get_indices() const
    { return (*this->indices); }

    IndicesSelectedData::Generator::Generator(const IndicesSelectedData& data)
    {
        this->generator = data.origin()->generator().release();
        this->indices = data.indices;
    }

    IndicesSelectedData::Generator::Generator(const Generator& generator)
    {
        this->generator = static_cast<statiskit::MultivariateData::Generator*>(generator.generator->copy().release());
        this->indices = generator.indices;
    }

    IndicesSelectedData::Generator::~Generator()
    {
        delete this->generator;
    }

    Index IndicesSelectedData::Generator::size() const
    {
        return this->indices->size();
    }

    const UnivariateEvent* IndicesSelectedData::Generator::get_event(const Index& index) const
    {
        if (index >= this->size()) {
            throw size_error("index", this->size(), size_error::inferior);
        }
        return this->generator->get_event((*this->indices)[index]);
    }

    double IndicesSelectedData::Generator::get_weight() const
    {
        return this->generator->get_weight();
    }

    bool IndicesSelectedData::Generator::is_valid() const
    {
        return this->generator->is_valid();
    }

    MultivariateData::Generator& IndicesSelectedData::Generator::operator++()
    {
        ++(*this->generator);
        return *this;
    }

    MultivariateDataFrame::MultivariateDataFrame()
    {
        this->components = std::make_shared< std::vector< std::unique_ptr< UnivariateDataFrame > > >();
    }

    MultivariateDataFrame::MultivariateDataFrame(const MultivariateDataFrame& data)
    {
        this->components = data.components;
    }

    MultivariateDataFrame::~MultivariateDataFrame()
    {}

    std::unique_ptr< MultivariateData::Generator > MultivariateDataFrame::generator() const
    { return std::make_unique< MultivariateDataFrame::Generator >(*this); }

    Index MultivariateDataFrame::get_nb_components()  const
    { return this->components->size(); }

    const UnivariateSampleSpace* MultivariateDataFrame::get_sample_space(const Index& index) const
    {
        if (index >= this->get_nb_components()) {
            throw size_error("index", this->get_nb_components(), size_error::inferior);
        }
        return (*this->components)[index]->get_sample_space();
    }

    void MultivariateDataFrame::set_sample_space(const Index& index, const UnivariateSampleSpace& sample_space)
    {
        if (index >= this->get_nb_components()) {
            throw size_error("index", this->get_nb_components(), size_error::inferior);
        }
        detach();
        return (*this->components)[index]->set_sample_space(sample_space);
    }

    const UnivariateDataFrame* MultivariateDataFrame::get_component(const Index& index) const
    {
        if (index > this->get_nb_components()) {
            throw size_error("index", this->get_nb_components(), size_error::inferior);
        }       
        return (*this->components)[index].get();
    }

    void MultivariateDataFrame::set_component(const Index& index, const UnivariateDataFrame& component)
    {
        if (index > this->get_nb_components()) {
            throw size_error("index", this->get_nb_components(), size_error::inferior);
        }       
        if (this->get_nb_components() != 0 && component.get_nb_events() != this->get_nb_events()) {
            throw size_error("component", this->get_nb_events(), size_error::equal);
        }
        detach();
        (*this->components)[index] = std::unique_ptr< UnivariateDataFrame >(static_cast< UnivariateDataFrame* >(component.copy().release()));
    }

    void MultivariateDataFrame::add_component(const UnivariateDataFrame& component)
    {  
        if (this->get_nb_components() != 0 && component.get_nb_events() != this->get_nb_events()) {
            throw size_error("component", this->get_nb_events(), size_error::equal);
        }
        detach();
        this->components->push_back(std::unique_ptr< UnivariateDataFrame >(static_cast< UnivariateDataFrame* >(component.copy().release())));
    }

    std::unique_ptr< UnivariateDataFrame > MultivariateDataFrame::pop_component()
    {  
        detach();
        std::unique_ptr< UnivariateDataFrame > component;
        component.swap(this->components->back());
        this->components->pop_back();
        return component;
    }

    void MultivariateDataFrame::insert_component(const Index& index, const UnivariateDataFrame& component)
    {
        if (index > this->get_nb_components()) {
            throw size_error("index", this->get_nb_components(), size_error::inferior);
        }       
        if (this->get_nb_components() != 0 && component.get_nb_events() != this->get_nb_events()) {
            throw size_error("component", this->get_nb_events(), size_error::equal);
        }  
        detach();
        std::vector< std::unique_ptr< UnivariateDataFrame > >::iterator it = this->components->begin();
        advance(it, index);
        this->components->insert(it, std::unique_ptr< UnivariateDataFrame >(static_cast< UnivariateDataFrame* >(component.copy().release())));
    }

    void MultivariateDataFrame::remove_component(const Index& index)
    {
        if (index > this->get_nb_components()) {
            throw size_error("index", this->get_nb_components(), size_error::inferior);
        }       
        detach();
        std::vector< std::unique_ptr< UnivariateDataFrame > >::iterator it = this->components->begin();
        advance(it, index);
        this->components->erase(it);
    }

    Index MultivariateDataFrame::get_nb_events() const
    {
        Index nb_event = 0;
        if (this->get_nb_components() > 0) {
            nb_event = (*this->components)[0]->get_nb_events();
        }
        return nb_event;
    }

    void MultivariateDataFrame::detach()
    {
        if (this->components.use_count() > 1) {
            std::shared_ptr< std::vector< std::unique_ptr< UnivariateDataFrame > > > components = std::make_shared< std::vector< std::unique_ptr< UnivariateDataFrame > > >(this->get_nb_components());
            for (Index index = 0, max_index = this->get_nb_components(); index < max_index; ++index) {
                (*components)[index] = std::unique_ptr< UnivariateDataFrame >(static_cast< UnivariateDataFrame* >((*this->components)[index]->copy().release()));
            }
            this->components = components;
        }
    }

    MultivariateDataFrame::Generator::Generator(const MultivariateDataFrame& data)
    {
        this->data = static_cast< MultivariateDataFrame* >(data.copy().release());
        this->index = 0;
    }

    MultivariateDataFrame::Generator::~Generator()
    {
        delete this->data;
    }

    Index MultivariateDataFrame::Generator::size() const
    { return this->data->get_nb_components(); }

    const UnivariateEvent* MultivariateDataFrame::Generator::get_event(const Index& index) const
    {
        if (index >= this->size()) {
            throw size_error("index", this->size(), size_error::inferior);
        }
        return this->data->get_component(index)->get_event(this->index);
    }

    double MultivariateDataFrame::Generator::get_weight() const
    { return 1; }

    bool MultivariateDataFrame::Generator::is_valid() const
    { return this->index < this->data->get_nb_events(); }

    MultivariateData::Generator& MultivariateDataFrame::Generator::operator++()
    {
        ++(this->index);
        return *this;
    }

    // UnivariateConditionalData::UnivariateConditionalData(const MultivariateData& data, const Index& response, const Indices& explanatories)
    // {
    //    _response = data.select(response).release();
    //    _explanatories = data.select(explanatories).release();
    // }

    // // UnivariateConditionalData::UnivariateConditionalData(const UnivariateData& response_data, const MultivariateData& explanatories_data)
    // // {
    // //     if(response_data.get_nb_events() == explanatories_data.get_nb_events())
    // //     {
    // //         _response = response_data.copy().release();
    // //         _explanatories = explanatories_data.copy().release();
    // //     }
    // //     else
    // //     { throw size_error("response_data", response_data.get_nb_events(), explanatories_data.get_nb_events()); }
    // // }

    // UnivariateConditionalData::UnivariateConditionalData(const UnivariateConditionalData& data)
    // {
    //    _response = data._response->copy().release();
    //    _explanatories = data._explanatories->copy().release();
    // }

    // UnivariateConditionalData::~UnivariateConditionalData()
    // {
    //    if(_response)
    //    {
    //        delete _response;
    //        _response = nullptr;
    //    }
    //    if(_explanatories)
    //    {
    //        delete _explanatories;
    //        _explanatories = nullptr;
    //    }
    // }

    // Index UnivariateConditionalData::size() const
    // { return _explanatories->size(); }

    // std::unique_ptr< UnivariateConditionalData::Generator > UnivariateConditionalData::generator() const
    // { return std::make_unique< Generator >(this); }

    // const UnivariateData* UnivariateConditionalData::get_response() const
    // { return _response; }

    // const MultivariateData* UnivariateConditionalData::get_explanatories() const
    // { return _explanatories; }

    // std::unique_ptr< UnivariateConditionalData > UnivariateConditionalData::copy() const
    // { return std::make_unique< UnivariateConditionalData >(*this); }

    // double UnivariateConditionalData::compute_total() const
    // { return _response->compute_total(); }

    // UnivariateConditionalData::Generator::Generator(const UnivariateConditionalData* data)
    // {
    //    _rgenerator = data->_response->generator().release();
    //    _egenerator = data->_explanatories->generator().release();
    // }

    // UnivariateConditionalData::Generator::~Generator()
    // {
    //    if(_rgenerator)
    //    {
    //        delete _rgenerator;
    //        _rgenerator = nullptr;
    //    }
    //    if(_egenerator)
    //    {
    //        delete _egenerator;
    //        _egenerator = nullptr;
    //    }
    // }

    // bool UnivariateConditionalData::Generator::is_valid() const
    // { return _rgenerator->is_valid(); }

    // UnivariateConditionalData::Generator& UnivariateConditionalData::Generator::operator++()
    // {
    //     ++(*_rgenerator);
    //     ++(*_egenerator);
    //     return *this;
    // }

    // const UnivariateEvent* UnivariateConditionalData::Generator::response() const
    // { return _rgenerator->event(); }

    // const MultivariateEvent* UnivariateConditionalData::Generator::explanatories() const
    // { return _egenerator->event(); }

    // double UnivariateConditionalData::Generator::weight() const
    // { return _rgenerator->weight(); }

    // MultivariateConditionalData::MultivariateConditionalData(const MultivariateData& data, const Indices& responses, const Indices& explanatories)
    // {
    //    _responses = data.extract(responses).release();
    //    _explanatories = data.extract(explanatories).release();
    // }

    // MultivariateConditionalData::MultivariateConditionalData(const MultivariateConditionalData& data)
    // {
    //    _responses = data._responses->copy().release();
    //    _explanatories = data._explanatories->copy().release();
    // }

    // MultivariateConditionalData::~MultivariateConditionalData()
    // {
    //    if(_responses)
    //    {
    //        delete _responses;
    //        _responses = nullptr;
    //    }
    //    if(_explanatories)
    //    {
    //        delete _explanatories;
    //        _explanatories = nullptr;
    //    }
    // }

    // Index MultivariateConditionalData::size() const
    // { return _explanatories->size(); }

    // std::unique_ptr< MultivariateConditionalData::Generator > MultivariateConditionalData::generator() const
    // { return std::make_unique< Generator >(this); }

    // const MultivariateData* MultivariateConditionalData::get_responses() const
    // { return _responses; }

    // const MultivariateData* MultivariateConditionalData::get_explanatories() const
    // { return _explanatories; }

    // std::unique_ptr< MultivariateConditionalData > MultivariateConditionalData::copy() const
    // { return std::make_unique< MultivariateConditionalData >(*this); }

    // double MultivariateConditionalData::compute_total() const
    // { return _responses->compute_total(); }

    // MultivariateConditionalData::Generator::Generator(const MultivariateConditionalData* data)
    // {
    //    _rgenerator = data->_responses->generator().release();
    //    _egenerator = data->_explanatories->generator().release();
    // }

    // MultivariateConditionalData::Generator::~Generator()
    // {
    //    if(_rgenerator)
    //    {
    //        delete _rgenerator;
    //        _rgenerator = nullptr;
    //    }
    //    if(_egenerator)
    //    {
    //        delete _egenerator;
    //        _egenerator = nullptr;
    //    }
    // }

    // bool MultivariateConditionalData::Generator::is_valid() const
    // { return _rgenerator->is_valid(); }

    // MultivariateConditionalData::Generator& MultivariateConditionalData::Generator::operator++()
    // {
    //     ++(*_rgenerator);
    //     ++(*_egenerator);
    //     return *this;
    // }

    // const MultivariateEvent* MultivariateConditionalData::Generator::responses() const
    // { return _rgenerator->event(); }

    // const MultivariateEvent* MultivariateConditionalData::Generator::explanatories() const
    // { return _egenerator->event(); }

    // double MultivariateConditionalData::Generator::weight() const
    // { return _rgenerator->weight(); }
}
