#include "data.h"

namespace statiskit
{ 
    UnivariateData::~UnivariateData()
    {}

    Index UnivariateData::size() const
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
            total += generator->weight();
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
                const UnivariateEvent* event = generator->event();
                if (event && event->get_event() == ELEMENTARY) { 
                    switch (sample_space->get_outcome()) {
                        case CATEGORICAL:
                            minimum = std::make_unique< CategoricalElementaryEvent >(static_cast< const CategoricalElementaryEvent* >(event)->get_value());
                            break;
                        case DISCRETE:
                            minimum = std::make_unique< DiscreteElementaryEvent >(static_cast< const DiscreteElementaryEvent* >(event)->get_value());
                            break;
                        case CONTINUOUS:
                            minimum = std::make_unique< ContinuousElementaryEvent >(static_cast< const ContinuousElementaryEvent* >(event)->get_value());
                            break;
                    }
                }
                ++(*generator);
            }
            switch (sample_space->get_outcome()) {
                case CATEGORICAL:
                    while (generator->is_valid()) {
                        const UnivariateEvent* event = generator->event();
                        if (event && event->get_event() == ELEMENTARY) {
                            if (static_cast< const CategoricalElementaryEvent* >(event)->get_value() < static_cast< const CategoricalElementaryEvent* >(minimum.get())->get_value()) {
                                minimum = std::make_unique< CategoricalElementaryEvent >(static_cast< const CategoricalElementaryEvent* >(event)->get_value());
                            }    
                        }
                        ++(*generator);
                    }
                    break;
                case DISCRETE:
                    while (generator->is_valid()) {
                        const UnivariateEvent* event = generator->event();
                        if (event && event->get_event() == ELEMENTARY) {
                            if (static_cast< const DiscreteElementaryEvent* >(event)->get_value() < static_cast< const DiscreteElementaryEvent* >(minimum.get())->get_value()) {
                                minimum = std::make_unique< DiscreteElementaryEvent >(static_cast< const DiscreteElementaryEvent* >(event)->get_value());
                            } 
                        }
                        ++(*generator);
                    }
                    break;
                case CONTINUOUS:
                    while (generator->is_valid()) {
                        const UnivariateEvent* event = generator->event();
                        if (event && event->get_event() == ELEMENTARY) {
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
                const UnivariateEvent* event = generator->event();
                if (event && event->get_event() == ELEMENTARY) { 
                    switch (sample_space->get_outcome()) {
                        case CATEGORICAL:
                            maximum = std::make_unique< CategoricalElementaryEvent >(static_cast< const CategoricalElementaryEvent* >(event)->get_value());
                            break;
                        case DISCRETE:
                            maximum = std::make_unique< DiscreteElementaryEvent >(static_cast< const DiscreteElementaryEvent* >(event)->get_value());
                            break;
                        case CONTINUOUS:
                            maximum = std::make_unique< ContinuousElementaryEvent >(static_cast< const ContinuousElementaryEvent* >(event)->get_value());
                            break;
                    }
                }
                ++(*generator);
            }
            switch (sample_space->get_outcome()) {
                case CATEGORICAL:
                    while (generator->is_valid()) {
                        const UnivariateEvent* event = generator->event();
                        if (event && event->get_event() == ELEMENTARY) {
                            if (static_cast< const CategoricalElementaryEvent* >(event)->get_value() > static_cast< const CategoricalElementaryEvent* >(maximum.get())->get_value()) {
                                maximum = std::make_unique< CategoricalElementaryEvent >(static_cast< const CategoricalElementaryEvent* >(event)->get_value());
                            }    
                        }
                        ++(*generator);
                    }
                    break;
                case DISCRETE:
                    while (generator->is_valid()) {
                        const UnivariateEvent* event = generator->event();
                        if (event && event->get_event() == ELEMENTARY) {
                            if (static_cast< const DiscreteElementaryEvent* >(event)->get_value() > static_cast< const DiscreteElementaryEvent* >(maximum.get())->get_value()) {
                                maximum = std::make_unique< DiscreteElementaryEvent >(static_cast< const DiscreteElementaryEvent* >(event)->get_value());
                            }    
                        }
                        ++(*generator);
                    }
                    break;
                case CONTINUOUS:
                    while (generator->is_valid()) {
                        const UnivariateEvent* event = generator->event();
                        if (event && event->get_event() == ELEMENTARY) {
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

    Index UnivariateDataFrame::size() const
    { return this->events->size(); }

    std::unique_ptr< UnivariateData::Generator > UnivariateDataFrame::generator() const
    { return std::make_unique< UnivariateDataFrame::Generator >(*this); }

    const UnivariateSampleSpace* UnivariateDataFrame::get_sample_space() const
    { return this->sample_space.get(); }
   
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

    Index UnivariateDataFrame::get_nb_events() const
    { return this->events->size(); }
    
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
        this->data = std::make_unique< UnivariateDataFrame >(data);
        this->index = 0;
    }

    UnivariateDataFrame::Generator::~Generator()
    {}

    bool UnivariateDataFrame::Generator::is_valid() const
    { return this->index < this->data->get_nb_events(); }

    UnivariateData::Generator& UnivariateDataFrame::Generator::operator++()
    {
       ++this->index;
       return *this;
    }

    const UnivariateEvent* UnivariateDataFrame::Generator::event() const
    {
        return this->data->get_event(this->index);
    }

    double UnivariateDataFrame::Generator::weight() const
    {
        return 1;
    }

    MultivariateData::~MultivariateData()
    {}
    
    Index MultivariateData::size() const
    {
        Index index = 0;
        std::unique_ptr< MultivariateData::Generator > _generator = generator();
        while(_generator->is_valid())
        {
            ++index;
            ++(*_generator);
        }
        return index;
    }
    
    double MultivariateData::compute_total() const
    {
        double total = 0.;
        std::unique_ptr< MultivariateData::Generator > _generator = generator();
        while(_generator->is_valid())
        {
            total += _generator->weight();
            ++(*_generator);
        }
        return total;
    }

    MultivariateData::Generator::~Generator()
    {}

    MultivariateDataFrame::MultivariateDataFrame()
    {
        _sample_space = new SampleSpace(this);
        _components.clear();
    }

    MultivariateDataFrame::MultivariateDataFrame(const MultivariateSampleSpace& sample_space) : MultivariateDataFrame()
    {
        _components.clear();
        for(Index index = 0, max_index = sample_space.size(); index < max_index; ++index)
        {
             UnivariateDataFrame* data = new UnivariateDataFrame(*(sample_space.get(index)));
            _components.push_back(data); 
        }
    }

    MultivariateDataFrame::MultivariateDataFrame(const MultivariateDataFrame& data)
    {
        _sample_space = new SampleSpace(this);
        _components.resize(data.get_nb_components());
        for(Index index = 0, max_index = data.get_nb_components(); index < max_index; ++index)
        { _components[index] = static_cast< UnivariateDataFrame* >(data._components[index]->copy().release()); }
    }

    MultivariateDataFrame::~MultivariateDataFrame()
    { 
        for(Index index = 0, max_index = get_nb_components(); index < max_index; ++index)
        {
            if(_components[index])
            { delete _components[index]; }
            _components[index] = nullptr;
        }
        _components.clear();
    }

    std::unique_ptr< MultivariateData::Generator > MultivariateDataFrame::generator() const
    { return std::make_unique< MultivariateDataFrame::Event::Generator >(this); }

    const MultivariateSampleSpace* MultivariateDataFrame::get_sample_space() const
    { return _sample_space; }

    void MultivariateDataFrame::set_sample_space(const MultivariateSampleSpace& sample_space)
    {
        Index index = 0, max_index = sample_space.size();
        std::vector< UnivariateSampleSpace* > __sample_space;
        try
        {
            if(max_index == get_nb_components())
            {
                while(index < max_index)
                {
                    __sample_space.push_back(_sample_space->get(index)->copy().release());
                    _components[index]->set_sample_space(*sample_space.get(index));
                    ++index;
                }
            }
        }
        catch(const std::exception& error)
        {
            delete __sample_space.back();
            __sample_space.pop_back();
            while(__sample_space.size() > 0)
            {
                _components[index - 1]->set_sample_space(*__sample_space.back());
                delete __sample_space.back();
                __sample_space.pop_back();
                --index;
            }
            throw error;
        }
    }

    std::unique_ptr< UnivariateData > MultivariateDataFrame::extract(const Index& index) const
    { 
        if(index >= get_nb_components())
        { throw size_error("index", get_nb_components(), size_error::inferior); }
        return std::make_unique< UnivariateDataExtraction >(this, index);
    }

    std::unique_ptr< MultivariateData > MultivariateDataFrame::extract(const Indices& indices) const
    {
        for(Indices::const_iterator it = indices.cbegin(), it_end = indices.cend(); it != it_end; ++it)
        {
            if(*it >= get_nb_components())
            { throw size_error("indices", get_nb_components(), size_error::inferior); }
        }
        return std::make_unique< MultivariateDataExtraction >(this, indices);
      }

    Index MultivariateDataFrame::get_nb_components() const
    { return _components.size(); }

    const UnivariateDataFrame* MultivariateDataFrame::get_component(const Index& index) const
    {
        if(index > get_nb_components())
        { throw size_error("index", get_nb_components(), size_error::inferior); }       
        return _components[index];
    }

    void MultivariateDataFrame::set_component(const Index& index, const UnivariateDataFrame& component)
    {
        if(index > get_nb_components())
        { throw size_error("index", get_nb_components(), size_error::inferior); }       
        if(get_nb_components() != 0 && component.get_nb_events() != get_nb_events())
        { throw size_error("component", get_nb_events(), size_error::equal); }  
        delete _components[index];
        _components[index] = static_cast< UnivariateDataFrame* >(component.copy().release());
    }

    void MultivariateDataFrame::add_component(const UnivariateDataFrame& component)
    {  
        if(get_nb_components() != 0 && component.get_nb_events() != get_nb_events())
        { throw size_error("component", get_nb_events(), size_error::equal); }
        _components.push_back(static_cast< UnivariateDataFrame* >(component.copy().release()));
    }

    std::unique_ptr< UnivariateDataFrame > MultivariateDataFrame::pop_component()
    {  
        std::unique_ptr< UnivariateDataFrame > component;
        component.reset(_components.back());
        _components.pop_back();
        return component;
    }

    void MultivariateDataFrame::insert_component(const Index& index, const UnivariateDataFrame& component)
    {
        if(index > get_nb_components())
        { throw size_error("index", get_nb_components(), size_error::inferior); }       
        if(get_nb_components() != 0 && component.get_nb_events() != get_nb_events())
        { throw size_error("component", get_nb_events(), size_error::equal); }  
        std::vector< UnivariateDataFrame* >::iterator it = _components.begin();
        advance(it, index);
        _components.insert(it, static_cast< UnivariateDataFrame* >(component.copy().release()));
    }

    void MultivariateDataFrame::remove_component(const Index& index)
    {
        if(index > get_nb_components())
        { throw size_error("index", get_nb_components(), size_error::inferior); }       
        std::vector< UnivariateDataFrame* >::iterator it = _components.begin();
        advance(it, index);
        delete *it;
        *it = nullptr;
        _components.erase(it);
    }

    Index MultivariateDataFrame::get_nb_events() const
    {
        Index nb_event = 0;
        if(get_nb_components() > 0)
        { nb_event = _components[0]->get_nb_events(); }
        return nb_event;
    }

   
    std::unique_ptr< MultivariateEvent > MultivariateDataFrame::get_event(const Index& index) const 
    {
        if(index > get_nb_events())
        { throw size_error("index", get_nb_events(), size_error::inferior); }
        return std::make_unique< Event >(this, index);
    }

    void MultivariateDataFrame::set_event(const Index& index, const MultivariateEvent* event)
    {
        if(event)
        {
            if(_sample_space->is_compatible(event))
            {
                for(Index _index = 0, _max_index = get_nb_components(); _index < _max_index; ++_index)
                { _components[_index]->set_event(index, event->get(_index)); }
            }
            else
            { throw statiskit::parameter_error("event", "incompatible"); } 
        }
        else
        {
            for(Index _index = 0, _max_index = get_nb_components(); _index < _max_index; ++_index)
            { _components[_index]->set_event(index, nullptr); }
        }
    }
    
    void MultivariateDataFrame::add_event(const MultivariateEvent* event)
    {
        if(event)
        {
            if(_sample_space->is_compatible(event))
            {
                for(Index index = 0, max_index = get_nb_components(); index < max_index; ++index)
                { _components[index]->add_event(event->get(index)); }
            }
            else
            { throw statiskit::parameter_error("event", "incompatible"); } 
        }
        else
        {
            for(Index index = 0, max_index = get_nb_components(); index < max_index; ++index)
            { _components[index]->add_event(nullptr); }
        }
    }

    std::unique_ptr< MultivariateEvent > MultivariateDataFrame::pop_event()
    {
        VectorEvent* event = new VectorEvent(get_nb_components());
        for(Index index = 0, max_index = get_nb_components(); index < max_index; ++index)
        { event->set(index, *(_components[index]->pop_event().get())); }
        return std::unique_ptr< VectorEvent >(event);
    }

    void MultivariateDataFrame::insert_event(const Index& index, const MultivariateEvent* event)
    {
        if(event)
        {
            if(_sample_space->is_compatible(event))
            {
                for(Index _index = 0, _max_index = get_nb_components(); _index < _max_index; ++_index)
                { _components[_index]->insert_event(index, event->get(_index)); }
            }
            else
            { throw parameter_error("event", "incompatible"); }
        }
        else
        {
            for(Index _index = 0, _max_index = get_nb_components(); _index < _max_index; ++_index)
            { _components[_index]->insert_event(index, nullptr); }
        }
    }
    
    void MultivariateDataFrame::remove_event(const Index& index)
    {
        for(Index _index = 0, _max_index = get_nb_components(); _index < _max_index; ++_index)
        { _components[_index]->remove_event(index); }
    }

    MultivariateDataFrame::SampleSpace::SampleSpace(const MultivariateDataFrame* data)
    { _data = data; }

    MultivariateDataFrame::SampleSpace::SampleSpace(const SampleSpace& sample_space)
    { _data = sample_space._data; }

    MultivariateDataFrame::SampleSpace::~SampleSpace()
    {}

    Index MultivariateDataFrame::SampleSpace::size() const
    { return _data->get_nb_components(); }

    const UnivariateSampleSpace* MultivariateDataFrame::SampleSpace::get(const Index& index) const
    { return _data->_components[index]->get_sample_space(); }

    MultivariateDataFrame::Event::Event(const MultivariateDataFrame* data, const Index& index)
    {
        _data = data;
        _index = index;
    }

    MultivariateDataFrame::Event::Event(const Event& event)
    { 
        _data = event._data;
        _index = event._index;
    }

    MultivariateDataFrame::Event::~Event()
    {}

    Index MultivariateDataFrame::Event::size() const
    { return _data->get_nb_components(); }

    const UnivariateEvent* MultivariateDataFrame::Event::get(const Index& index) const
    {
        if(index >= size())
        { throw lower_bound_error("index", index, size(), true); }
        return _data->_components[index]->get_event(_index);
    }

    MultivariateDataFrame::Event::Generator::Generator(const MultivariateDataFrame* data)
    { _event = new MultivariateDataFrame::Event(data, 0); }

    MultivariateDataFrame::Event::Generator::~Generator()
    { delete _event; }

    bool MultivariateDataFrame::Event::Generator::is_valid() const
    { return _event->_index < _event->_data->get_nb_events(); }

    MultivariateDataFrame::Generator& MultivariateDataFrame::Event::Generator::operator++()
    {
        ++(_event->_index);
        return *this;
    }

    const MultivariateEvent* MultivariateDataFrame::Event::Generator::event() const
    { return _event; }

    double MultivariateDataFrame::Event::Generator::weight() const
    { return 1.; }

    MultivariateDataFrame::UnivariateDataExtraction::UnivariateDataExtraction(const MultivariateDataFrame* data, const Index& index)
    { _data = data->get_component(index); }

    MultivariateDataFrame::UnivariateDataExtraction::UnivariateDataExtraction(const UnivariateDataExtraction& data)
    { _data = data._data; }

    MultivariateDataFrame::UnivariateDataExtraction::~UnivariateDataExtraction()
    {}

    std::unique_ptr< UnivariateData::Generator > MultivariateDataFrame::UnivariateDataExtraction::generator() const
    { return _data->generator(); }

    const UnivariateSampleSpace* MultivariateDataFrame::UnivariateDataExtraction::get_sample_space() const
    { return _data->get_sample_space(); }

    MultivariateDataFrame::MultivariateDataExtraction::MultivariateDataExtraction(const MultivariateDataFrame* data, const Indices& indices)
    { 
        _data = data;
        _indices = std::vector< Index >(indices.cbegin(), indices.cend());
        _sample_space = new SampleSpace(this);
    }

    MultivariateDataFrame::MultivariateDataExtraction::MultivariateDataExtraction(const MultivariateDataExtraction& data)
    { 
        _data = data._data;
        _indices = data._indices;
        _sample_space = new SampleSpace(this);
    }

    MultivariateDataFrame::MultivariateDataExtraction::~MultivariateDataExtraction()
    { delete _sample_space; }

    std::unique_ptr< MultivariateData::Generator > MultivariateDataFrame::MultivariateDataExtraction::generator() const
    { return std::make_unique< Event::Generator >(this); }

    const MultivariateSampleSpace* MultivariateDataFrame::MultivariateDataExtraction::get_sample_space() const
    { return _sample_space; }

    std::unique_ptr< UnivariateData > MultivariateDataFrame::MultivariateDataExtraction::extract(const Index& index) const
    { return _data->extract(_indices[index]); }

    std::unique_ptr< MultivariateData > MultivariateDataFrame::MultivariateDataExtraction::extract(const Indices& indices) const
    {
        Indices new_indices = Indices();
        for(Indices::const_iterator it = indices.cbegin(), it_end = indices.cend(); it != it_end; ++it)
        { new_indices.insert(new_indices.cend(), _indices[*it]); }
        return _data->extract(new_indices);
    }

    MultivariateDataFrame::MultivariateDataExtraction::SampleSpace::SampleSpace(const MultivariateDataExtraction* data)
    { _data = data; }

    MultivariateDataFrame::MultivariateDataExtraction::SampleSpace::SampleSpace(const SampleSpace& sample_space)
    { _data = sample_space._data; }

    MultivariateDataFrame::MultivariateDataExtraction::SampleSpace::~SampleSpace()
    {}

    Index MultivariateDataFrame::MultivariateDataExtraction::SampleSpace::size() const
    { return _data->_indices.size(); }

    const UnivariateSampleSpace* MultivariateDataFrame::MultivariateDataExtraction::SampleSpace::get(const Index& index) const
    { return _data->_data->_sample_space->get(_data->_indices[index]); }

    MultivariateDataFrame::MultivariateDataExtraction::Event::Event(const MultivariateDataExtraction* data, const Index& index)
    {
        _data = data;
        _index = index;
    }

    MultivariateDataFrame::MultivariateDataExtraction::Event::~Event()
    {}

    Index MultivariateDataFrame::MultivariateDataExtraction::Event::size() const
    { return _data->_indices.size(); }

    const UnivariateEvent* MultivariateDataFrame::MultivariateDataExtraction::Event::get(const Index& index) const
    {
        if(index >= size())
        { throw lower_bound_error("index", index, size(), true); }
        return _data->_data->_components[_data->_indices[index]]->get_event(_index);
    }

    MultivariateDataFrame::MultivariateDataExtraction::Event::Generator::Generator(const MultivariateDataExtraction* data)
    { 
        _max_index = data->_data->size();
        _event = new MultivariateDataFrame::MultivariateDataExtraction::Event(data, 0);
    }

    MultivariateDataFrame::MultivariateDataExtraction::Event::Generator::~Generator()
    { delete _event; }

    bool MultivariateDataFrame::MultivariateDataExtraction::Event::Generator::is_valid() const
    { return _event->_index < _max_index; }

    MultivariateData::Generator& MultivariateDataFrame::MultivariateDataExtraction::Event::Generator::operator++()
    { 
        ++(_event->_index);
        return *this;
    }

    const MultivariateEvent* MultivariateDataFrame::MultivariateDataExtraction::Event::Generator::event() const
    { return _event; }

    double MultivariateDataFrame::MultivariateDataExtraction::Event::Generator::weight() const
    { return 1.; }

    WeightedUnivariateData::WeightedUnivariateData(const UnivariateData* data)
    { init(data); }

    WeightedUnivariateData::WeightedUnivariateData(const WeightedUnivariateData& data)
    { init(data); }

    WeightedUnivariateData::WeightedUnivariateData(const UnivariateData* data, const std::vector< double >& weights)
    { init(data, weights); }

    WeightedUnivariateData::~WeightedUnivariateData()
    {}

    WeightedUnivariateData::WeightedUnivariateData()
    {}

    WeightedMultivariateData::WeightedMultivariateData(const MultivariateData* data)
    { init(data); }

    WeightedMultivariateData::WeightedMultivariateData(const WeightedMultivariateData& data)
    { init(data); }

    WeightedMultivariateData::WeightedMultivariateData(const MultivariateData* data, const std::vector< double >& weights)
    { init(data, weights); }

    WeightedMultivariateData::~WeightedMultivariateData()
    {}

    std::unique_ptr< UnivariateData > WeightedMultivariateData::extract(const Index& index) const
    { return std::make_unique< UnivariateDataExtraction >(this, index); }

    std::unique_ptr< MultivariateData > WeightedMultivariateData::extract(const Indices& indices) const
    { return std::make_unique< MultivariateDataExtraction >(this, indices); }

    WeightedMultivariateData::UnivariateDataExtraction::UnivariateDataExtraction(const WeightedMultivariateData* weights, const Index& index)
    { init(weights,  weights->_data->extract(index).release()); }

    WeightedMultivariateData::UnivariateDataExtraction::UnivariateDataExtraction(const UnivariateDataExtraction& data)
    { init(data); }

    WeightedMultivariateData::UnivariateDataExtraction::~UnivariateDataExtraction()
    {}

    WeightedMultivariateData::MultivariateDataExtraction::MultivariateDataExtraction(const WeightedMultivariateData* weights, const Indices& indices)
    {
        init(weights, weights->_data->extract(indices).release());
        _indices = std::vector< Index >(indices.cbegin(), indices.cend());
    }

    WeightedMultivariateData::MultivariateDataExtraction::MultivariateDataExtraction(const MultivariateDataExtraction& data)
    {
        init(data);
        _indices = data._indices;
    }

    WeightedMultivariateData::MultivariateDataExtraction::~MultivariateDataExtraction()
    {}

    std::unique_ptr< UnivariateData > WeightedMultivariateData::MultivariateDataExtraction::extract(const Index& index) const
    { return std::make_unique< UnivariateDataExtraction >(_weights, _indices[index]); }

    std::unique_ptr< MultivariateData > WeightedMultivariateData::MultivariateDataExtraction::extract(const Indices& indices) const
    { 
        Indices __indices;
        for(Indices::const_iterator it = indices.cbegin(), it_end = indices.cend(); it != it_end; ++it)
        { __indices.insert(__indices.end(), _indices[*it]); }
        return std::make_unique< MultivariateDataExtraction >(_weights, __indices);
    }

    UnivariateConditionalData::UnivariateConditionalData(const MultivariateData& data, const Index& response, const Indices& explanatories)
    {
       _response = data.extract(response).release();
       _explanatories = data.extract(explanatories).release();
    }

    UnivariateConditionalData::UnivariateConditionalData(const UnivariateData& response_data, const MultivariateData& explanatories_data)
    {
        if(response_data.size() == explanatories_data.size())
        {
            _response = response_data.copy().release();
            _explanatories = explanatories_data.copy().release();
        }
        else
        { throw size_error("response_data", response_data.size(), explanatories_data.size()); }
    }

    UnivariateConditionalData::UnivariateConditionalData(const UnivariateConditionalData& data)
    {
       _response = data._response->copy().release();
       _explanatories = data._explanatories->copy().release();
    }

    UnivariateConditionalData::~UnivariateConditionalData()
    {
       if(_response)
       {
           delete _response;
           _response = nullptr;
       }
       if(_explanatories)
       {
           delete _explanatories;
           _explanatories = nullptr;
       }
    }

    Index UnivariateConditionalData::size() const
    { return _explanatories->size(); }

    std::unique_ptr< UnivariateConditionalData::Generator > UnivariateConditionalData::generator() const
    { return std::make_unique< Generator >(this); }

    const UnivariateData* UnivariateConditionalData::get_response() const
    { return _response; }

    const MultivariateData* UnivariateConditionalData::get_explanatories() const
    { return _explanatories; }

    std::unique_ptr< UnivariateConditionalData > UnivariateConditionalData::copy() const
    { return std::make_unique< UnivariateConditionalData >(*this); }

    double UnivariateConditionalData::compute_total() const
    { return _response->compute_total(); }

    UnivariateConditionalData::Generator::Generator(const UnivariateConditionalData* data)
    {
       _rgenerator = data->_response->generator().release();
       _egenerator = data->_explanatories->generator().release();
    }

    UnivariateConditionalData::Generator::~Generator()
    {
       if(_rgenerator)
       {
           delete _rgenerator;
           _rgenerator = nullptr;
       }
       if(_egenerator)
       {
           delete _egenerator;
           _egenerator = nullptr;
       }
    }

    bool UnivariateConditionalData::Generator::is_valid() const
    { return _rgenerator->is_valid(); }

    UnivariateConditionalData::Generator& UnivariateConditionalData::Generator::operator++()
    {
        ++(*_rgenerator);
        ++(*_egenerator);
        return *this;
    }

    const UnivariateEvent* UnivariateConditionalData::Generator::response() const
    { return _rgenerator->event(); }

    const MultivariateEvent* UnivariateConditionalData::Generator::explanatories() const
    { return _egenerator->event(); }

    double UnivariateConditionalData::Generator::weight() const
    { return _rgenerator->weight(); }

    MultivariateConditionalData::MultivariateConditionalData(const MultivariateData& data, const Indices& responses, const Indices& explanatories)
    {
       _responses = data.extract(responses).release();
       _explanatories = data.extract(explanatories).release();
    }

    MultivariateConditionalData::MultivariateConditionalData(const MultivariateConditionalData& data)
    {
       _responses = data._responses->copy().release();
       _explanatories = data._explanatories->copy().release();
    }

    MultivariateConditionalData::~MultivariateConditionalData()
    {
       if(_responses)
       {
           delete _responses;
           _responses = nullptr;
       }
       if(_explanatories)
       {
           delete _explanatories;
           _explanatories = nullptr;
       }
    }

    Index MultivariateConditionalData::size() const
    { return _explanatories->size(); }

    std::unique_ptr< MultivariateConditionalData::Generator > MultivariateConditionalData::generator() const
    { return std::make_unique< Generator >(this); }

    const MultivariateData* MultivariateConditionalData::get_responses() const
    { return _responses; }

    const MultivariateData* MultivariateConditionalData::get_explanatories() const
    { return _explanatories; }

    std::unique_ptr< MultivariateConditionalData > MultivariateConditionalData::copy() const
    { return std::make_unique< MultivariateConditionalData >(*this); }

    double MultivariateConditionalData::compute_total() const
    { return _responses->compute_total(); }

    MultivariateConditionalData::Generator::Generator(const MultivariateConditionalData* data)
    {
       _rgenerator = data->_responses->generator().release();
       _egenerator = data->_explanatories->generator().release();
    }

    MultivariateConditionalData::Generator::~Generator()
    {
       if(_rgenerator)
       {
           delete _rgenerator;
           _rgenerator = nullptr;
       }
       if(_egenerator)
       {
           delete _egenerator;
           _egenerator = nullptr;
       }
    }

    bool MultivariateConditionalData::Generator::is_valid() const
    { return _rgenerator->is_valid(); }

    MultivariateConditionalData::Generator& MultivariateConditionalData::Generator::operator++()
    {
        ++(*_rgenerator);
        ++(*_egenerator);
        return *this;
    }

    const MultivariateEvent* MultivariateConditionalData::Generator::responses() const
    { return _rgenerator->event(); }

    const MultivariateEvent* MultivariateConditionalData::Generator::explanatories() const
    { return _egenerator->event(); }

    double MultivariateConditionalData::Generator::weight() const
    { return _rgenerator->weight(); }
}
