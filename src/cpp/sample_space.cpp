#include "sample_space.h"
#include "data.h"

namespace statiskit
{
    UnivariateSampleSpace::~UnivariateSampleSpace(void)
    {}

    CategoricalSampleSpace::CategoricalSampleSpace(const std::set< std::string >& values)
    { this->values = std::make_shared< std::set< std::string > >(values); }

    CategoricalSampleSpace::CategoricalSampleSpace(const CategoricalSampleSpace& sample_space) 
    { 
    	this->values = sample_space.values; 
    	this->encoding = sample_space.encoding;
    }

    CategoricalSampleSpace::~CategoricalSampleSpace(void) 
    {}

    const std::set< std::string >& CategoricalSampleSpace::get_values(void) const
    { return *(this->values.get()); }
    
    encoding_type CategoricalSampleSpace::get_encoding(void) const
    { return this->encoding; }
    
    Index CategoricalSampleSpace::get_cardinality(void) const
    { return this->values->size(); }

    outcome_type CategoricalSampleSpace::get_outcome(void) const
    { return CATEGORICAL; }

    bool CategoricalSampleSpace::is_compatible(const UnivariateEvent* event) const
    {
        bool compatible = !event;
        if (!compatible) {
            if (event->get_outcome() == CATEGORICAL) {
                switch (event->get_event()) {
                    case ELEMENTARY:
                        compatible = this->is_compatible_value(static_cast< const CategoricalElementaryEvent* >(event)->get_value());
                        break;
                    case CENSORED:
                        {
                            const std::vector< std::string >& values = static_cast< const CategoricalCensoredEvent* >(event)->get_values();
                            std::vector< std::string >::const_iterator it = values.cbegin(), ite = values.cend();
                            compatible = true;
                            while (compatible && it != ite) {
                                compatible = this->is_compatible_value(*it);
                                ++it;
                            }
                        }
                        break;
                    default:
                        compatible = false;
                        break;
                }
            }
        }
        return compatible;
    }

    bool CategoricalSampleSpace::is_compatible_value(const std::string& value) const
    { return this->values->find(value) != this->values->end(); }

    NominalSampleSpace::NominalSampleSpace(const std::set< std::string >& values) : CategoricalSampleSpace(values)
    { 
        this->reference = this->values->cend();
        --(this->reference);
        this->encoding = TREATMENT;
    }

    NominalSampleSpace::NominalSampleSpace(const NominalSampleSpace& sample_space) : CategoricalSampleSpace(sample_space)
    {
        this->reference = this->values->cbegin();
        advance(this->reference, distance(sample_space.values->cbegin(), sample_space.reference));
        this->encoding = sample_space.encoding;
    }

    NominalSampleSpace::~NominalSampleSpace(void)
    {}

    ordering_type NominalSampleSpace::get_ordering(void) const
    { return NONE; }

    const std::string& NominalSampleSpace::get_reference(void) const
    { return *(this->reference); }

    void NominalSampleSpace::set_reference(const std::string& reference)
    {
        std::set< std::string >::const_iterator it = this->values->find(reference);
        if (it != this->values->cend()) {
            this->reference = it;
        } else {
            throw std::runtime_error("invalid reference");
        }
    }
       
    void NominalSampleSpace::randomize(void)
    {
        this->reference = this->values->cbegin();
        boost::random::uniform_int_distribution<> dist(0, this->get_cardinality()-1);
        boost::variate_generator<boost::mt19937&, boost::random::uniform_int_distribution<>  > simulator(__impl::get_random_generator(), dist);
        advance(this->reference, simulator());
    }

    void NominalSampleSpace::set_encoding(const encoding_type& encoding)
    {
        if (encoding > DEVIATION) {
            throw std::runtime_error("invalid encoding");
        }
        this->encoding = encoding;
    }

    Eigen::RowVectorXd NominalSampleSpace::encode(const std::string& value) const
    {
        Eigen::RowVectorXd dummy;
        Index cardinality = this->get_cardinality();
        if (cardinality > 1) {
            --cardinality;
            std::set< std::string >::const_iterator it = this->values->find(value);
            if (it == this->values->cend()) {
                dummy = std::numeric_limits< double >::quiet_NaN() * Eigen::RowVectorXd::Ones(cardinality);
            } else {
                Index index = distance(this->values->cbegin(), it), ref_index = distance(this->values->cbegin(), this->reference);
                switch (this->encoding) {
                    case TREATMENT:
                        dummy = Eigen::RowVectorXd::Zero(cardinality);
                        if (index < ref_index) {
                            dummy(index) = 1;
                        } else if(index > ref_index) {
                            --index;
                            dummy(index) = 1;
                        }
                        break;
                    case DEVIATION:
                        if (index == ref_index) {
                            dummy = -1 * Eigen::RowVectorXd::Ones(cardinality);
                        } else {
                            dummy = Eigen::RowVectorXd::Zero(cardinality);
                            if (index < ref_index) {
                                dummy(index) = 1;
                            } else if(index > ref_index) {
                                --index;
                                dummy(index) = 1;
                            }
                        }
                        break;
                    default:
                        break;
                }
            }
        } else {
            dummy = Eigen::RowVectorXd();
        }
        return dummy;
    }

    std::unique_ptr< OrdinalSampleSpace > NominalSampleSpace::as_ordinal(void) const
    { return std::make_unique< OrdinalSampleSpace >(std::vector< std::string >(this->values->cbegin(), this->values->cend())); }

    std::unique_ptr< UnivariateSampleSpace > NominalSampleSpace::copy(void) const
    { return std::make_unique< NominalSampleSpace >(*this); }

    OrdinalSampleSpace::OrdinalSampleSpace(const std::vector< std::string >& values) : CategoricalSampleSpace(std::set< std::string >(values.cbegin(), values.cend()))
    {
        this->encoding = CUMULATIVE;
        this->_rank = std::make_shared< std::vector< Index > >((this->values->size()));
        for (Index size = 0, max_size = this->values->size(); size < max_size; ++size) {
            (*this->_rank)[distance(this->values->begin(), this->values->find(values[size]))] = size;
        }
    }

    OrdinalSampleSpace::OrdinalSampleSpace(const OrdinalSampleSpace& sample_space) : CategoricalSampleSpace(sample_space)
    {
        this->_rank = sample_space._rank;
        this->encoding = sample_space.encoding;
    }

    OrdinalSampleSpace::~OrdinalSampleSpace(void)
    {}

    ordering_type OrdinalSampleSpace::get_ordering(void) const
    { return TOTAL; }

    void OrdinalSampleSpace::set_encoding(const encoding_type& encoding)
    { this->encoding = encoding; }

    Eigen::RowVectorXd OrdinalSampleSpace::encode(const std::string& value) const
    {
        Eigen::RowVectorXd dummy;
        Index cardinality = get_cardinality();
        if (cardinality > 1) {
            --cardinality;
            std::set< std::string >::const_iterator it = this->values->find(value);
            Index index, max_index;
            if (it == this->values->cend()) {
                dummy = std::numeric_limits< double >::quiet_NaN() * Eigen::RowVectorXd::Ones(cardinality);
            } else {
                switch (this->encoding) {
                    case TREATMENT:
                        index = (*this->_rank)[distance(this->values->cbegin(), it)];
                        dummy = Eigen::RowVectorXd::Zero(cardinality);
                        if (index < cardinality) {
                            dummy(index) = 1;
                        }
                        break;
                    case DEVIATION:
                        if (index == cardinality) {
                            dummy = -1 * Eigen::RowVectorXd::Ones(cardinality);
                        } else {
                            dummy = Eigen::RowVectorXd::Zero(cardinality);
                            if (index < cardinality) {
                                dummy(index) = 1;
                            }
                        }
                        break;
                    case CUMULATIVE:
                        dummy = Eigen::RowVectorXd::Zero(cardinality);
                        for (index = 0, max_index = std::min(cardinality, (*this->_rank)[distance(this->values->cbegin(), it)]); index < max_index; ++index) {
                            dummy(index) = 1;
                        }
                        break;
                }
            }
        } else {
            dummy = Eigen::RowVectorXd();
        }
        return dummy;
    }

    std::vector< std::string > OrdinalSampleSpace::get_ordered(void) const
    {
        BREAKPOINT();
        std::vector< std::string > values(get_cardinality());
        for (std::set< std::string >::const_iterator it = this->values->cbegin(), ite = this->values->cend(); it != ite; ++it) {
            values[(*this->_rank)[distance(this->values->cbegin(), it)]] = *it;
        }
        return values;
    }

    void OrdinalSampleSpace::set_ordered(const std::vector< std::string >& ordered)
    {
        if (ordered.size() != this->values->size()) {
            throw std::runtime_error("rank");
        }
        std::shared_ptr< std::vector< Index > > rank = std::make_shared< std::vector< Index > >(ordered.size(), ordered.size());
        for (Index size = 0, max_size = ordered.size(); size < max_size; ++size) {
            std::set< std::string >::iterator it = this->values->find(ordered[size]);
            if(it == this->values->end())
            { throw std::runtime_error("rank"); }
            (*this->_rank)[distance(this->values->begin(), it)] = size;
        }
        for(Index size = 0, max_size = ordered.size(); size < max_size; ++size)
        {
            if((*this->_rank)[size] >= ordered.size())
            { throw std::runtime_error("ordered"); }
        }
        this->_rank = rank;
    }
    
    const std::vector< Index >& OrdinalSampleSpace::get_rank(void) const
    { return *this->_rank; }

    void OrdinalSampleSpace::set_rank(const std::vector< Index >& rank)
    {
        if(rank.size() != this->values->size())
        { throw std::runtime_error("rank"); }
        Indices order = Indices();
        for(Index size = 0, max_size = this->values->size(); size < max_size; ++size)
        { order.insert(order.end(), size); }
        for(Index size = 0, max_size = this->values->size(); size < max_size; ++size)
        {
            Indices::iterator it = order.find(rank[size]);
            if(it == order.end())
            { throw std::runtime_error("rank"); }
            order.erase(it);
        }
        if(order.size() != 0)
        { throw std::runtime_error("rank"); }
        this->_rank = std::make_shared< std::vector< Index > >(rank);
    }

    void OrdinalSampleSpace::randomize(void)
    {
        detach();
        std::set< std::string >::iterator first_it = this->values->begin(), it_end = this->values->end();
        ++first_it;
        while(first_it != it_end)
        {
            std::set< std::string >::iterator second_it = this->values->begin();
            boost::random::uniform_int_distribution<> dist(0, distance(this->values->begin(), first_it));
            boost::variate_generator<boost::mt19937&, boost::random::uniform_int_distribution<>  > simulator(__impl::get_random_generator(), dist);
            advance(second_it, simulator());
            Index buffer = (*this->_rank)[distance(this->values->cbegin(), first_it)];
            (*this->_rank)[distance(this->values->cbegin(), first_it)] = (*this->_rank)[distance(this->values->cbegin(), second_it)];
            (*this->_rank)[distance(this->values->cbegin(), second_it)] = buffer;
            ++first_it;
        }
    }

    std::unique_ptr< NominalSampleSpace > OrdinalSampleSpace::as_nominal(void) const
    { return std::make_unique< NominalSampleSpace >(*(this->values.get())); }

    std::unique_ptr< UnivariateSampleSpace > OrdinalSampleSpace::copy(void) const
    { return std::make_unique< OrdinalSampleSpace >(*this); }

    void OrdinalSampleSpace::detach(void)
    {
        if(this->_rank && !this->_rank.unique())
        { this->_rank = std::make_shared< std::vector< Index > >(*this->_rank);}
    }
    HierarchicalSampleSpace::HierarchicalSampleSpace(const CategoricalSampleSpace& root_sample_space) : CategoricalSampleSpace(root_sample_space.get_values())
    {
        _tree_sample_space[""] = static_cast< CategoricalSampleSpace* >(root_sample_space.copy().release()); 
        for(std::set< std::string >::const_iterator it = root_sample_space.get_values().cbegin(), it_end = root_sample_space.get_values().cend(); it != it_end; ++it)
        { _parents[*it] = ""; }
    }

    HierarchicalSampleSpace::HierarchicalSampleSpace(const HierarchicalSampleSpace& p_sample_space) : CategoricalSampleSpace(p_sample_space.get_values())
    { 
        //_tree_sample_space = p_sample_space._tree_sample_space;
        _tree_sample_space.clear();
        for(std::map< std::string, CategoricalSampleSpace* >::const_iterator it = p_sample_space.cbegin(), it_end = p_sample_space.cend(); it != it_end; ++it)
        { _tree_sample_space[it->first] = static_cast< CategoricalSampleSpace* >(it->second->copy().release());; }
        _parents = p_sample_space._parents;
    }

    HierarchicalSampleSpace::~HierarchicalSampleSpace(void)
    { 
        for(std::map< std::string, CategoricalSampleSpace* >::iterator it = _tree_sample_space.begin(), it_end = _tree_sample_space.end(); it != it_end; ++it)
        { delete it->second; }
        _tree_sample_space.clear();
    }

    ordering_type HierarchicalSampleSpace::get_ordering(void) const
    {
        // std::map< std::string, CategoricalSampleSpace* >::const_iterator it = _tree_sample_space.cbegin(), it_end = _tree_sample_space.cend();
        // ordering_type ordering = it->second->get_ordering();
        // if(ordering != PARTIAL)
        // {
        //     ++it;
        //     while(it != it_end && ordering == it->second->get_ordering())
        //     { ++it; }
        // }
        // if(it != it_end)
        // { ordering = PARTIAL; }
        // return ordering;
        return PARTIAL;
    }

    void HierarchicalSampleSpace::set_encoding(const encoding_type& encoding)
    {
        NOT_IMPLEMENTED();
    }

    Eigen::RowVectorXd HierarchicalSampleSpace::encode(const std::string& value) const
    {
        NOT_IMPLEMENTED();
        return Eigen::RowVectorXd();
    }

    void HierarchicalSampleSpace::partition(const std::string& leave, const CategoricalSampleSpace& sample_space)
    {
        if (CategoricalSampleSpace::is_compatible_value(leave)) {  
            const std::set< std::string >& values = sample_space.get_values();
            std::set< std::string >::const_iterator it = values.cbegin(), it_end = values.cend();
            while (it != it_end && !this->is_compatible_value(*it)) {
                ++it;
            }
            if (it == it_end) {
                this->values->erase(leave);
                this->values->insert(values.cbegin(), values.cend());
                this->_tree_sample_space[leave] = static_cast< CategoricalSampleSpace* >(sample_space.copy().release()); 
                for (std::set< std::string >::const_iterator it = sample_space.get_values().cbegin(), it_end = sample_space.get_values().cend(); it != it_end; ++it) {
                    this->_parents[*it] = leave;
                }                
            } else {
                throw in_set_error("leave", *it, __impl::keys(this->_tree_sample_space));
            }
        }  else {
            throw in_set_error("leave", leave, *this->values, false);
        }
    }

    UnivariateConditionalData HierarchicalSampleSpace::split(const std::string& non_leave, const UnivariateConditionalData& data) const
    {
        MultivariateDataFrame explanatories_data(*(data.get_explanatories()->get_sample_space()));
        UnivariateDataFrame response_data(*((_tree_sample_space.find(non_leave))->second));

        std::map< std::string, std::string > new_leaves;
        for (std::set< std::string >::const_iterator it = this->values->begin(), it_end = this->values->cend(); it != it_end; ++it) {
            new_leaves[*it] = this->children(non_leave, *it);
        }

        std::unique_ptr< UnivariateConditionalData::Generator > generator = data.generator();
        std::vector< double > weights;
        while (generator->is_valid()) {
            const CategoricalElementaryEvent* response_event = static_cast< const CategoricalElementaryEvent* >(generator->response()->copy().release());
            if (response_event) {
                std::string new_response = new_leaves.find(response_event->get_value())->second;
                if (new_response != "") {
                    CategoricalElementaryEvent* new_response_event = new CategoricalElementaryEvent(new_response);
                    response_data.add_event(new_response_event);
                    delete new_response_event;
                    weights.push_back(generator->weight());
                    explanatories_data.add_event(generator->explanatories());
                }
            }
            ++(*generator);
        }
        UnivariateDataFrame* resp_data = new UnivariateDataFrame(response_data);
        WeightedUnivariateData weighted_response_data(resp_data, weights);
        delete resp_data;
        UnivariateConditionalData new_data(weighted_response_data, explanatories_data);
        return new_data;
    }

    std::string HierarchicalSampleSpace::children(const std::string& non_leave, const std::string& leave) const
    {
        std::map< std::string, std::string >::const_iterator it_par = _parents.find(leave);
        std::map< std::string, CategoricalSampleSpace* >::const_iterator it = _tree_sample_space.find(non_leave);
        if(it_par != _parents.cend())
        {
            if(it != _tree_sample_space.cend())
            {
                while(it_par->second != "" && it_par->second != non_leave)
                { it_par = _parents.find(it_par->second); }
            }
            else
            { throw in_set_error("non-leave", non_leave, __impl::keys(_tree_sample_space), false); }
        }
        else
        { throw in_set_error("leave", leave, __impl::keys(_parents), false); }
        if(it_par->second == non_leave)
        { return it_par->first; }
        else
        { return ""; }
    }

    std::unique_ptr< UnivariateSampleSpace > HierarchicalSampleSpace::copy(void) const
    { return std::make_unique< HierarchicalSampleSpace >(*this); }

    HierarchicalSampleSpace::const_iterator HierarchicalSampleSpace::cbegin(void) const
    { return _tree_sample_space.cbegin(); }

    HierarchicalSampleSpace::const_iterator HierarchicalSampleSpace::cend(void) const
    { return _tree_sample_space.cend(); }
            
    const CategoricalSampleSpace* HierarchicalSampleSpace::get_sample_space(const std::string& value)
    { return _tree_sample_space[value]; }

    std::map< std::string, std::string > HierarchicalSampleSpace::get_parents(void) const
    { return _parents; }

    // const std::string HierarchicalSampleSpace::get_parent(const std::string& value)
    // {
    //     std::map< std::string, std::string >::const_iterator it = _parents.find(value);
    //     if(it != _parents.cend())
    //     { return _parents.find(value)->second; }
    //     else
    //     { throw in_set_error("value", value, __impl::keys(_parents)); }
    // }

    bool HierarchicalSampleSpace::is_compatible_value(const std::string& value) const
    {
        bool compatible = CategoricalSampleSpace::is_compatible_value(value);
        if(!compatible)
        {
            if(value != "")
            { compatible = (_tree_sample_space.find(value) != _tree_sample_space.end()); }
        }
        return compatible;
    }

    void HierarchicalSampleSpace::detach(void)
    {
        NOT_IMPLEMENTED();
    }

    outcome_type DiscreteSampleSpace::get_outcome(void) const
    { return DISCRETE; }

    ordering_type DiscreteSampleSpace::get_ordering(void) const
    { return TOTAL; }

    IntegerSampleSpace::IntegerSampleSpace(const int& lower_bound, const int& upper_bound)
    {
        _lower_bound = lower_bound;
        _upper_bound = upper_bound;
    }

    IntegerSampleSpace::~IntegerSampleSpace(void)
    {}

    bool IntegerSampleSpace::is_compatible(const UnivariateEvent* event) const
    {
        bool compatible = !event;
        if(!compatible)
        {
            if(event->get_outcome() == DISCRETE)
            {
                switch(event->get_event())
                {
                    case ELEMENTARY:
                        {
                            int value = static_cast< const DiscreteElementaryEvent* >(event)->get_value();
                            compatible = value >= _lower_bound && value <= _upper_bound;
                        }    
                        break;
                    case CENSORED:
                        {
                            const std::vector< int >& __values = static_cast< const DiscreteCensoredEvent* >(event)->get_values();
                            std::vector< int >::const_iterator it = __values.cbegin(), ite = __values.cend();
                            compatible = true;
                            while(compatible && it != ite)
                            {
                                compatible = *it >= _lower_bound && *it <= _upper_bound;
                                ++it;
                            }
                        }
                        break;
                    case LEFT:
                        if(_lower_bound == std::numeric_limits< int >::min())
                        {
                            int value = static_cast< const DiscreteLeftCensoredEvent* >(event)->get_upper_bound();
                            compatible = value >= _lower_bound && value <= _upper_bound;
                        }
                        else
                        { compatible = false; }
                        break;
                    case RIGHT:
                        if(_upper_bound == std::numeric_limits< int >::max())
                        {
                            int value = static_cast< const DiscreteRightCensoredEvent* >(event)->get_lower_bound();
                            compatible = value >= _lower_bound && value <= _upper_bound;
                        }
                        else
                        { compatible = false; }
                        break;
                    case INTERVAL:
                        {
                            int value = static_cast< const DiscreteIntervalCensoredEvent* >(event)->get_upper_bound();
                            compatible = value >= _lower_bound && value <= _upper_bound;
                            if(compatible)
                            {
                                value = static_cast< const DiscreteIntervalCensoredEvent* >(event)->get_upper_bound();
                                compatible = value >= _lower_bound && value <= _upper_bound;
                            }
                        }
                        break;
                }
            }
        }
        return compatible;
    }

    const int& IntegerSampleSpace::get_lower_bound(void) const
    { return _lower_bound; }

    const int& IntegerSampleSpace::get_upper_bound(void) const
    { return _upper_bound; }

    std::unique_ptr< UnivariateSampleSpace > IntegerSampleSpace::copy(void) const
    { return std::make_unique< IntegerSampleSpace >(*this); }

    const IntegerSampleSpace NN = IntegerSampleSpace(0);

    const IntegerSampleSpace& get_NN(void)
    { return NN; }

    const IntegerSampleSpace ZZ = IntegerSampleSpace();

    const IntegerSampleSpace& get_ZZ(void)
    { return ZZ; }

    outcome_type ContinuousSampleSpace::get_outcome(void) const
    { return CONTINUOUS; }

    ordering_type ContinuousSampleSpace::get_ordering(void) const
    { return TOTAL; }

    RealSampleSpace::RealSampleSpace(const double& lhs, const double& rhs, const bool& left_closed, const bool& right_closed)
    {
        if(lhs < rhs)
        {
            _lower_bound = lhs;
            _upper_bound = rhs;
        }
        else
        {
            _lower_bound = rhs;
            _upper_bound = lhs;
        }
        _left_closed = left_closed && !boost::math::isinf(_lower_bound);
        _right_closed = right_closed && !boost::math::isinf(_upper_bound);
    }

    RealSampleSpace::~RealSampleSpace(void)
    {}

    bool RealSampleSpace::is_compatible(const UnivariateEvent* event) const
    {
        bool compatible = !event;
        if(!compatible)
        {
            if(event->get_outcome() == CONTINUOUS)
            {
                switch(event->get_event())
                {
                    case ELEMENTARY:
                        {
                            double value = static_cast< const ContinuousElementaryEvent* >(event)->get_value();
                            compatible = boost::math::isfinite(value);
                            if(compatible)
                            {
                                if(_left_closed)
                                { compatible = value >= _lower_bound; }
                                else
                                { compatible = value > _lower_bound; }
                                if(compatible)
                                {
                                    if(_right_closed)
                                    { compatible = value <= _upper_bound; }
                                    else
                                    { compatible = value < _upper_bound; }
                                }
                            }
                        }    
                        break;
                    case CENSORED:
                        {
                            const std::vector< double >& __values = static_cast< const ContinuousCensoredEvent* >(event)->get_values();
                            std::vector< double >::const_iterator it = __values.cbegin(), ite = __values.cend();
                            compatible = true;
                            while(compatible && it != ite)
                            {
                                compatible = boost::math::isfinite(*it);
                                if(compatible)
                                {
                                    if(_left_closed)
                                    { compatible = *it >= _lower_bound; }
                                    else
                                    { compatible = *it > _lower_bound; }
                                    if(compatible)
                                    {
                                        if(_right_closed)
                                        { compatible = *it <= _upper_bound; }
                                        else
                                        { compatible = *it < _upper_bound; }
                                    }
                                }
                                ++it;
                            }
                        }
                        break;
                    case LEFT:
                        if(boost::math::isinf(_lower_bound) && _lower_bound < 0)
                        {
                            double value = static_cast< const ContinuousLeftCensoredEvent* >(event)->get_upper_bound();
                            compatible = boost::math::isfinite(value) && value >= _lower_bound && value <= _upper_bound;
                        }
                        else
                        { compatible = false; }
                        break;
                    case RIGHT:
                        if(boost::math::isinf(_upper_bound) && _upper_bound > 0)
                        {
                            double value = static_cast< const ContinuousRightCensoredEvent* >(event)->get_lower_bound();
                            compatible = boost::math::isfinite(value) && value >= _lower_bound && value <= _upper_bound;
                        }
                        else
                        { compatible = false; }
                        break;
                    case INTERVAL:
                        {
                            double value = static_cast< const ContinuousIntervalCensoredEvent* >(event)->get_upper_bound();
                        compatible = boost::math::isfinite(value) && value >= _lower_bound && value <= _upper_bound;
                            if(compatible)
                            {
                                value = static_cast< const ContinuousIntervalCensoredEvent* >(event)->get_upper_bound();
                                compatible = boost::math::isfinite(value) && value >= _lower_bound && value <= _upper_bound;
                            }
                        }
                        break;
                }
            }
        }
        return compatible;
    }

    const double& RealSampleSpace::get_lower_bound(void) const
    { return _lower_bound; }

    const double& RealSampleSpace::get_upper_bound(void) const
    { return _upper_bound; }

    const bool& RealSampleSpace::get_left_closed(void) const
    { return _left_closed; }

    const bool& RealSampleSpace::get_right_closed(void) const
    { return _right_closed; }
    
    std::unique_ptr< UnivariateSampleSpace > RealSampleSpace::copy(void) const
    { return std::make_unique< RealSampleSpace >(*this); }

    const RealSampleSpace RR = RealSampleSpace();

    const RealSampleSpace& get_RR(void)
    { return RR; }

    const RealSampleSpace PR = RealSampleSpace(0);

    const RealSampleSpace& get_PR(void)
    { return PR; }

    const RealSampleSpace NR = RealSampleSpace(-1*std::numeric_limits< double >::infinity(), 0);

    const RealSampleSpace& get_NR(void)
    { return NR; }

    /*Eigen::MatrixXd MultivariateSampleSpace::encode(const MultivariateEvent& event, const std::set< std::set<Index> >& interactions) const
    {
        Eigen::MatrixXd dummy = Eigen::MatrixXd::Zero(1, compute_encode_length(interactions));
        Index dindex = 0;
        for(Index index = 0, max_index = size(); index < max_index; ++index)
        {
            if(_sample_spaces[index]->get_outcome() == CATEGORICAL)
            {
                Eigen::MatrixXd tdummy;
                if(event[index].get_event() == ELEMENTARY)
                { tdummy = boost::static_pointer_cast< CategoricalSampleSpace >(_sample_spaces[index])->encode(static_cast< const CategoricalElementaryEvent& >(event[index]).get_outcome()) ; }
                else
                { 
                    Index cardinality = boost::static_pointer_cast< CategoricalSampleSpace >(_sample_spaces[index])->get_cardinality();
                    if(cardinality > 1)
                    { tdummy = Eigen::MatrixXd::Constant(1, cardinality-1, NAN) ; }
                    else
                    { tdummy = Eigen::MatrixXd::Zero(1,0); }
                }
                dummy.block(0, dindex, 1, tdummy.cols()) = tdummy;
                dindex += tdummy.cols();
            }
            else
            {
                if(event[index].get_event() == ELEMENTARY)
                {
                    if(event[index].get_outcome() == DISCRETE)
                    { dummy(0, index) = static_cast< const DiscreteElementaryEvent& >(event[index]).get_outcome(); }
                    else if(event[index].get_outcome() == CONTINUOUS)
                    { dummy(0, index) = static_cast< const ContinuousElementaryEvent& >(event[index]).get_outcome(); }
                    else
                    { dummy(0, index) = NAN; }
                }
                else
                { dummy(0, dindex) = NAN; }
                ++dindex;
            }
        }
        for(std::set< std::set<Index> >::const_iterator it = interactions.cbegin(), ite = interactions.cend(); it != ite; ++it)
        {
            for(std::set<Index>::const_iterator itb = it->cbegin(), itbe = it->cend(); itb != itbe; ++itb)
            {
                Eigen::MatrixXd tdummy = Eigen::MatrixXd::Ones(1,1);
                if(_sample_spaces[*itb]->get_outcome() == CATEGORICAL)
                {
                    if(event[*itb].get_event() == ELEMENTARY)
                    { tdummy = Eigen::kroneckerProduct(tdummy, boost::static_pointer_cast< CategoricalSampleSpace >(_sample_spaces[*itb])->encode(static_cast< const CategoricalElementaryEvent& >(event[*itb]).get_outcome())).eval(); }
                    else
                    { 
                        Index cardinality = boost::static_pointer_cast< CategoricalSampleSpace >(_sample_spaces[*itb])->get_cardinality();
                        if(cardinality > 1)
                        { tdummy = Eigen::kroneckerProduct(tdummy, Eigen::MatrixXd::Constant(1, cardinality-1, NAN)).eval(); }
                        else
                        { tdummy = Eigen::MatrixXd::Zero(1,0); }
                    }
                }
                else
                {
                    if(event[*itb].get_event() == ELEMENTARY)
                    {
                        if(event[*itb].get_outcome() == DISCRETE)
                        { tdummy *= static_cast< const DiscreteElementaryEvent& >(event[*itb]).get_outcome(); }
                        else if(event[*itb].get_outcome() == CONTINUOUS)
                        { tdummy *= static_cast< const ContinuousElementaryEvent& >(event[*itb]).get_outcome(); }
                        else
                        { tdummy *= NAN; }
                    }
                    else
                    { tdummy *= NAN; }
                }
                dummy.block(0, dindex, 1, tdummy.cols()) = tdummy;
                dindex += tdummy.cols();
            }
        }
        return dummy;
    }*/

    /*MultivariateSampleSpace::MultivariateSampleSpace(const std::vector< std::shared_ptr< UnivariateSampleSpace > >& sample_spaces)
    { _sample_spaces = sample_spaces; }

    MultivariateSampleSpace::MultivariateSampleSpace(const MultivariateSampleSpace& sample_space)
    {
        _sample_spaces.resize(sample_space.size());
        for(Index index = 0, max_index = sample_space.size(); index < max_index; ++index)
        {
            std::shared_ptr< UnivariateSampleSpace > marginal_sample_space = sample_space.get_sample_space(index);
            if(marginal_sample_space)
            {
                if(marginal_sample_space->get_outcome() == CATEGORICAL)
                { _sample_spaces[index] = std::shared_ptr< UnivariateSampleSpace >(marginal_sample_space->copy()); }
                else
                { _sample_spaces[index] = marginal_sample_space; }
            }
        }
    }*/

    MultivariateSampleSpace::~MultivariateSampleSpace(void)
    {}

    bool MultivariateSampleSpace::is_compatible(const MultivariateEvent* event) const
    {
        bool compatible = !event || event->size() == size();
        if(compatible)
        {
            const UnivariateSampleSpace* sample_space;
            Index index = 0, max_index = size();
            while(compatible && index < max_index)
            {
                sample_space = get(index);
                compatible = sample_space && sample_space->is_compatible(event->get(index));
                ++index;
            }
        }
        else
        { compatible = event; }
        return compatible;
    }

    Index MultivariateSampleSpace::encode(void) const
    {
        Index _size = 0;
        for(Index index = 0, max_index = size(); index < max_index; ++index)
        {
            const UnivariateSampleSpace* sample_space = get(index);
            if(sample_space->get_outcome() == CATEGORICAL)
            {
                _size += static_cast< const CategoricalSampleSpace* >(sample_space)->get_cardinality();
                _size -= 1;
            }
            else
            { _size += 1; }
        }
        return _size;
    }

    Eigen::RowVectorXd MultivariateSampleSpace::encode(const MultivariateEvent& event) const
    {
        Eigen::RowVectorXd dummy;
        if(event.size() != size())
        { dummy = std::numeric_limits< double >::quiet_NaN() * Eigen::RowVectorXd::Ones(encode()); }
        else
        {
            Index shift = 0;
            dummy = Eigen::RowVectorXd::Zero(encode());
            Eigen::RowVectorXd temp;
            for(Index index = 0, max_index = size(); index< max_index; ++index)
            {
                const UnivariateEvent* uevent = event.get(index);
                if(uevent->get_event() == ELEMENTARY)
                {
                    const UnivariateSampleSpace* sample_space = get(index);
                    switch(sample_space->get_outcome())
                    {
                        case CATEGORICAL:
                            {
                                temp = (static_cast< const CategoricalSampleSpace* >(sample_space)->encode(static_cast< const CategoricalElementaryEvent* >(uevent)->get_value()));
                                dummy.segment(index + shift, temp.size()) = temp;
                                shift += temp.size();
                                --shift;
                            }
                            break;
                        case DISCRETE:
                            dummy(index + shift) = static_cast< const DiscreteElementaryEvent* >(uevent)->get_value();
                            break;
                        case CONTINUOUS:
                            dummy(index + shift) = static_cast< const ContinuousElementaryEvent* >(uevent)->get_value();
                            break;
                    }
                }
                else
                {
                    const UnivariateSampleSpace* sample_space = get(index);
                    if(sample_space->get_outcome() == CATEGORICAL)
                    {
                        Index max_size = index + shift + static_cast< const CategoricalSampleSpace* >(sample_space)->get_cardinality();
                        while(index + shift < max_size)
                        {
                            dummy(index + shift) = std::numeric_limits< double >::quiet_NaN();
                            ++shift;
                        }
                    }
                    else
                    { dummy(index + shift) = std::numeric_limits< double >::quiet_NaN(); }
                }
            }
        }
        return dummy;
    }

    VectorSampleSpace::VectorSampleSpace(const std::vector< UnivariateSampleSpace* >& sample_spaces)
    {
        _sample_spaces.resize(sample_spaces.size(), nullptr);
        for(Index index = 0, max_index = sample_spaces.size(); index < max_index; ++index)
        {
            if(!sample_spaces[index])
            { throw nullptr_error("sample_spaces"); }
             _sample_spaces[index] = sample_spaces[index]->copy().release(); 
        }
    }

    VectorSampleSpace::VectorSampleSpace(const VectorSampleSpace& sample_space)
    {
        _sample_spaces.resize(sample_space.size(), nullptr);
        for(Index index = 0, max_index = sample_space.size(); index < max_index; ++index)
        { _sample_spaces[index] = sample_space._sample_spaces[index]->copy().release(); }
    }

    VectorSampleSpace::~VectorSampleSpace(void)
    {
        for(Index index = 0, max_index = _sample_spaces.size(); index < max_index; ++index)
        { 
            delete _sample_spaces[index];
            _sample_spaces[index] = nullptr;
        }
        _sample_spaces.clear();
    }

    Index VectorSampleSpace::size(void) const
    {return _sample_spaces.size(); }

    const UnivariateSampleSpace* VectorSampleSpace::get(const Index& index) const
    { return _sample_spaces[index]; }

    void VectorSampleSpace::set(const Index& index, const UnivariateSampleSpace& sample_space)
    { 
        delete _sample_spaces[index];
        _sample_spaces[index] = sample_space.copy().release();
    }
    
    std::unique_ptr< MultivariateSampleSpace > VectorSampleSpace::copy(void) const
    { return std::make_unique< VectorSampleSpace >(*this); }

}
