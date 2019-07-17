#include <algorithm>

#include <boost/random/uniform_int.hpp>
#include <boost/random/variate_generator.hpp>

#include "sample_space.h"
#include "data.h"

namespace statiskit
{
    UnivariateSampleSpace::~UnivariateSampleSpace()
    {}

    CategoricalSampleSpace::CategoricalSampleSpace(const std::set< std::string >& values)
    {
        this->values = std::make_shared< std::set< std::string > >(values);
    }

    CategoricalSampleSpace::CategoricalSampleSpace(const CategoricalSampleSpace& sample_space) 
    { 
    	this->values = sample_space.values; 
    	this->encoding = sample_space.encoding;
    }

    CategoricalSampleSpace::~CategoricalSampleSpace() 
    {}

    const std::set< std::string >& CategoricalSampleSpace::get_values() const
    {
        return *(this->values.get());
    }
    
    encoding_type CategoricalSampleSpace::get_encoding() const
    {
        return this->encoding;
    }
    
    Index CategoricalSampleSpace::get_cardinality() const
    {
        return this->values->size();
    }

    outcome_type CategoricalSampleSpace::get_outcome() const
    {
        return outcome_type::CATEGORICAL;
    }

    bool CategoricalSampleSpace::is_compatible(const UnivariateEvent* event) const
    {
        bool compatible = !event;
        if (!compatible) {
            if (event->get_outcome() == outcome_type::CATEGORICAL) {
                switch (event->get_censoring()) {
                    case censoring_type::NONE:
                        compatible = this->is_compatible_value(static_cast< const CategoricalElementaryEvent* >(event)->get_value());
                        break;
                    case censoring_type::CENSORED:
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
    {
        return this->values->find(value) != this->values->end();
    }

    NominalSampleSpace::NominalSampleSpace(const std::set< std::string >& values) : CategoricalSampleSpace(values)
    { 
        this->reference = this->values->cend();
        --(this->reference);
        this->encoding = TREATMENT;
    }

    NominalSampleSpace::NominalSampleSpace(const NominalSampleSpace& sample_space) : CategoricalSampleSpace(sample_space)
    {
        this->reference = this->values->cbegin();
        advance(this->reference, std::distance(sample_space.values->cbegin(), sample_space.reference));
        this->encoding = sample_space.encoding;
    }

    NominalSampleSpace::~NominalSampleSpace()
    {}

    ordering_type NominalSampleSpace::get_ordering() const
    {
        return ordering_type::NONE;
    }

    const std::string& NominalSampleSpace::get_reference() const
    {
        return *(this->reference);
    }

    void NominalSampleSpace::set_reference(const std::string& reference)
    {
        std::set< std::string >::const_iterator it = this->values->find(reference);
        if (it != this->values->cend()) {
            this->reference = it;
        } else {
            throw std::runtime_error("invalid reference");
        }
    }
       
    void NominalSampleSpace::randomize()
    {
        this->reference = this->values->cbegin();
        boost::random::uniform_int_distribution<> dist(0, this->get_cardinality() - 1);
        boost::variate_generator<boost::mt19937&, boost::random::uniform_int_distribution<>  > simulator(__impl::get_random_generator(), dist);
        advance(this->reference, simulator());
    }

    void NominalSampleSpace::set_encoding(const encoding_type& encoding)
    {
        if (encoding > encoding_type::DEVIATION) {
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
                Index index = std::distance(this->values->cbegin(), it), ref_index = std::distance(this->values->cbegin(), this->reference);
                switch (this->encoding) {
                    case encoding_type::TREATMENT:
                        dummy = Eigen::RowVectorXd::Zero(cardinality);
                        if (index < ref_index) {
                            dummy(index) = 1;
                        } else if(index > ref_index) {
                            --index;
                            dummy(index) = 1;
                        }
                        break;
                    case encoding_type::DEVIATION:
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

    std::unique_ptr< OrdinalSampleSpace > NominalSampleSpace::as_ordinal() const
    {
        return std::make_unique< OrdinalSampleSpace >(std::vector< std::string >(this->values->cbegin(), this->values->cend()));
    }

    std::unique_ptr< UnivariateSampleSpace > NominalSampleSpace::copy() const
    { return std::make_unique< NominalSampleSpace >(*this); }

    OrdinalSampleSpace::OrdinalSampleSpace(const std::vector< std::string >& values) : CategoricalSampleSpace(std::set< std::string >(values.cbegin(), values.cend()))
    {
        this->encoding = CUMULATIVE;
        this->rank = std::make_shared< std::vector< Index > >((this->values->size()));
        for (Index size = 0, max_size = this->values->size(); size < max_size; ++size) {
            (*this->rank)[std::distance(this->values->begin(), this->values->find(values[size]))] = size;
        }
    }

    OrdinalSampleSpace::OrdinalSampleSpace(const OrdinalSampleSpace& sample_space) : CategoricalSampleSpace(sample_space)
    {
        this->rank = sample_space.rank;
        this->encoding = sample_space.encoding;
    }

    OrdinalSampleSpace::~OrdinalSampleSpace()
    {}

    ordering_type OrdinalSampleSpace::get_ordering() const
    {
        return ordering_type::TOTAL;
    }

    void OrdinalSampleSpace::set_encoding(const encoding_type& encoding)
    {
        this->encoding = encoding;
    }

    Eigen::RowVectorXd OrdinalSampleSpace::encode(const std::string& value) const
    {
        Eigen::RowVectorXd dummy;
        Index cardinality = this->get_cardinality();
        if (cardinality > 1) {
            --cardinality;
            std::set< std::string >::const_iterator it = this->values->find(value);
            Index index, max_index;
            if (it == this->values->cend()) {
                dummy = std::numeric_limits< double >::quiet_NaN() * Eigen::RowVectorXd::Ones(cardinality);
            } else {
                switch (this->encoding) {
                    case encoding_type::TREATMENT:
                        index = (*this->rank)[std::distance(this->values->cbegin(), it)];
                        dummy = Eigen::RowVectorXd::Zero(cardinality);
                        if (index < cardinality) {
                            dummy(index) = 1;
                        }
                        break;
                    case encoding_type::DEVIATION:
                        if (index == cardinality) {
                            dummy = -1 * Eigen::RowVectorXd::Ones(cardinality);
                        } else {
                            dummy = Eigen::RowVectorXd::Zero(cardinality);
                            if (index < cardinality) {
                                dummy(index) = 1;
                            }
                        }
                        break;
                    case encoding_type::CUMULATIVE:
                        dummy = Eigen::RowVectorXd::Zero(cardinality);
                        for (index = 0, max_index = std::min(cardinality, (*this->rank)[std::distance(this->values->cbegin(), it)]); index < max_index; ++index) {
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

    std::vector< std::string > OrdinalSampleSpace::get_ordered() const
    {
        std::vector< std::string > values(this->get_cardinality());
        for (std::set< std::string >::const_iterator it = this->values->cbegin(), ite = this->values->cend(); it != ite; ++it) {
            values[(*this->rank)[std::distance(this->values->cbegin(), it)]] = *it;
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
            if (it == this->values->end()) {
                throw std::runtime_error("rank");
            }
            (*rank)[std::distance(this->values->begin(), it)] = size;

        }
        for(Index size = 0, max_size = ordered.size(); size < max_size; ++size)
        {
            if ((*rank)[size] >= ordered.size()) {
                throw std::runtime_error("ordered");
            }
        }
        this->rank = rank;
    }
    
    const std::vector< Index >& OrdinalSampleSpace::get_rank() const
    {
        return *this->rank;
    }

    void OrdinalSampleSpace::set_rank(const std::vector< Index >& rank)
    {
        if (rank.size() != this->values->size()){
            throw std::runtime_error("rank");
        }
        Indices order = Indices();
        for (Index size = 0, max_size = this->values->size(); size < max_size; ++size) {
            order.insert(order.end(), size);
        }
        for (Index size = 0, max_size = this->values->size(); size < max_size; ++size) {
            Indices::iterator it = order.find(rank[size]);
            if (it == order.end()) {
                throw std::runtime_error("rank");
            }
            order.erase(it);
        }
        if (order.size() != 0) {
            throw std::runtime_error("rank");
        }
        this->rank = std::make_shared< std::vector< Index > >(rank);
    }

    void OrdinalSampleSpace::randomize()
    {
        this->detach();
        std::set< std::string >::iterator first_it = this->values->begin();
        std::set< std::string >::iterator it_end = this->values->end();
        ++first_it;
        while (first_it != it_end) {
            std::set< std::string >::iterator second_it = this->values->begin();
            boost::random::uniform_int_distribution<> dist(0, std::distance(this->values->begin(), first_it));
            boost::variate_generator<boost::mt19937&, boost::random::uniform_int_distribution<>  > simulator(__impl::get_random_generator(), dist);
            advance(second_it, simulator());
            Index buffer = (*this->rank)[std::distance(this->values->cbegin(), first_it)];
            (*this->rank)[std::distance(this->values->cbegin(), first_it)] = (*this->rank)[std::distance(this->values->cbegin(), second_it)];
            (*this->rank)[std::distance(this->values->cbegin(), second_it)] = buffer;
            ++first_it;
        }
    }

    std::unique_ptr< NominalSampleSpace > OrdinalSampleSpace::as_nominal() const
    {
        return std::make_unique< NominalSampleSpace >(*(this->values.get()));
    }

    std::unique_ptr< UnivariateSampleSpace > OrdinalSampleSpace::copy() const
    {
        return std::make_unique< OrdinalSampleSpace >(*this);
    }

    void OrdinalSampleSpace::detach()
    {
        if (this->rank && !this->rank.unique()) {
            this->rank = std::make_shared< std::vector< Index > >(*this->rank);
        }
    }

    HierarchicalSampleSpace::HierarchicalSampleSpace(const CategoricalSampleSpace& root_sample_space) : CategoricalSampleSpace(root_sample_space.get_values())
    {
        this->tree_sample_space = std::make_shared< std::map< std::string, std::unique_ptr< CategoricalSampleSpace > > >();
        (*this->tree_sample_space)[""] = std::unique_ptr< CategoricalSampleSpace >(static_cast< CategoricalSampleSpace* >(root_sample_space.copy().release()));
        this->parents = std::make_shared< std::map< std::string, std::string > >();
        for (std::set< std::string >::const_iterator it = root_sample_space.get_values().cbegin(), it_end = root_sample_space.get_values().cend(); it != it_end; ++it) {
            (*this->parents)[*it] = "";
        }
    }

    HierarchicalSampleSpace::HierarchicalSampleSpace(const HierarchicalSampleSpace& p_sample_space) : CategoricalSampleSpace(p_sample_space.get_values())
    { 
        this->tree_sample_space = p_sample_space.tree_sample_space;
        this->parents = p_sample_space.parents;
    }

    HierarchicalSampleSpace::~HierarchicalSampleSpace()
    { 
    }

    ordering_type HierarchicalSampleSpace::get_ordering() const
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
        return ordering_type::PARTIAL;
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
                this->detach();
                this->values->erase(leave);
                this->values->insert(values.cbegin(), values.cend());
                (*this->tree_sample_space)[leave] = std::unique_ptr< CategoricalSampleSpace >(static_cast< CategoricalSampleSpace* >(sample_space.copy().release())); 
                for (std::set< std::string >::const_iterator it = sample_space.get_values().cbegin(), it_end = sample_space.get_values().cend(); it != it_end; ++it) {
                    (*this->parents)[*it] = leave;
                }                
            } else {
                throw in_set_error("leave", *it, __impl::keys(*this->tree_sample_space));
            }
        }  else {
            throw in_set_error("leave", leave, *this->values, false);
        }
    }

    // UnivariateConditionalData HierarchicalSampleSpace::split(const std::string& non_leave, const UnivariateConditionalData& data) const
    // {
    //     MultivariateDataFrame explanatories_data(*(data.get_explanatories()->get_sample_space()));
    //     UnivariateDataFrame response_data(*((this->tree_sample_space->find(non_leave))->second));

    //     std::map< std::string, std::string > new_leaves;
    //     for (std::set< std::string >::const_iterator it = this->values->begin(), it_end = this->values->cend(); it != it_end; ++it) {
    //         new_leaves[*it] = this->children(non_leave, *it);
    //     }

    //     std::unique_ptr< UnivariateConditionalData::Generator > generator = data.generator();
    //     std::vector< double > weights;
    //     while (generator->is_valid()) {
    //         const CategoricalElementaryEvent* response_event = static_cast< const CategoricalElementaryEvent* >(generator->response()->copy().release());
    //         if (response_event) {
    //             std::string new_response = new_leaves.find(response_event->get_value())->second;
    //             if (new_response != "") {
    //                 CategoricalElementaryEvent* new_response_event = new CategoricalElementaryEvent(new_response);
    //                 response_data.add_event(new_response_event);
    //                 delete new_response_event;
    //                 weights.push_back(generator->weight());
    //                 explanatories_data.add_event(generator->explanatories());
    //             }
    //         }
    //         ++(*generator);
    //     }
    //     UnivariateDataFrame* resp_data = new UnivariateDataFrame(response_data);
    //     WeightedUnivariateData weighted_response_data(resp_data, weights);
    //     delete resp_data;
    //     UnivariateConditionalData new_data(weighted_response_data, explanatories_data);
    //     return new_data;
    // }

    std::unique_ptr< UnivariateSampleSpace > HierarchicalSampleSpace::copy() const
    {
        return std::make_unique< HierarchicalSampleSpace >(*this);
    }

    HierarchicalSampleSpace::const_iterator HierarchicalSampleSpace::cbegin() const
    {
        return this->tree_sample_space->cbegin();
    }

    HierarchicalSampleSpace::const_iterator HierarchicalSampleSpace::cend() const
    {
        return this->tree_sample_space->cend();
    }
            
    const CategoricalSampleSpace* HierarchicalSampleSpace::get_sample_space(const std::string& value)
    {
        return (*this->tree_sample_space)[value].get();
    }

    const std::map< std::string, std::string >& HierarchicalSampleSpace::get_parents() const
    {
        return *this->parents;
    }

    std::string HierarchicalSampleSpace::children(const std::string& non_leave, const std::string& leave) const
    {
        std::map< std::string, std::string >::const_iterator it_par = this->parents->find(leave);
        std::map< std::string, std::unique_ptr< CategoricalSampleSpace > >::const_iterator it = this->tree_sample_space->find(non_leave);
        if (it_par != this->parents->cend()) {
            if (it != this->tree_sample_space->cend()) {
                while (it_par->second != "" && it_par->second != non_leave) {
                    it_par = this->parents->find(it_par->second);
                }
            } else {
                throw in_set_error("non-leave", non_leave, __impl::keys(*this->tree_sample_space), false);
            }
        } else {
            throw in_set_error("leave", leave, __impl::keys(*this->parents), false);
        }
        if (it_par->second == non_leave) {
            return it_par->first;
        } else {
            return "";
        }
    }

    bool HierarchicalSampleSpace::is_compatible_value(const std::string& value) const
    {
        bool compatible = CategoricalSampleSpace::is_compatible_value(value);
        if (!compatible) {
            if (value != "") {
                compatible = (this->tree_sample_space->find(value) != this->tree_sample_space->end());
            }
        }
        return compatible;
    }

    void HierarchicalSampleSpace::detach()
    {
        if (this->values && !this->values.unique()) {
            std::shared_ptr< std::set< std::string > > values = std::make_shared< std::set< std::string > >(this->values->begin(), this->values->end());
            this->values = values;
        }
        if (this->tree_sample_space && !this->tree_sample_space.unique()) {
            std::shared_ptr< std::map< std::string, std::unique_ptr< CategoricalSampleSpace > > > tree_sample_space =  std::make_shared< std::map< std::string, std::unique_ptr< CategoricalSampleSpace > > >();
            for (HierarchicalSampleSpace::const_iterator it = this->cbegin(), it_end = this->cend(); it != it_end; ++it) {
                (*tree_sample_space)[it->first] = std::unique_ptr< CategoricalSampleSpace >(static_cast< CategoricalSampleSpace* >(it->second->copy().release()));
            }
            this->tree_sample_space = tree_sample_space;
        }
        if (this->parents && !this->parents.unique()) {
            std::shared_ptr< std::map< std::string, std::string > > parents =  std::make_shared< std::map< std::string, std::string > >(this->parents->cbegin(), this->parents->cend());
            this->parents = parents;
        }
    }

    outcome_type DiscreteSampleSpace::get_outcome() const
    {
        return outcome_type::DISCRETE;
    }

    ordering_type DiscreteSampleSpace::get_ordering() const
    {
        return ordering_type::TOTAL;
    }

    IntegerSampleSpace::IntegerSampleSpace(const int& lower_bound, const int& upper_bound)
    {
        this->lower_bound = lower_bound;
        this->upper_bound = upper_bound;
    }

    IntegerSampleSpace::~IntegerSampleSpace()
    {}

    bool IntegerSampleSpace::is_compatible(const UnivariateEvent* event) const
    {
        bool compatible = !event;
        if (!compatible) {
            if (event->get_outcome() == outcome_type::DISCRETE) {
                switch(event->get_censoring()) {
                    case censoring_type::NONE:
                        {
                            int value = static_cast< const DiscreteElementaryEvent* >(event)->get_value();
                            compatible = value >= this->lower_bound && value <= this->upper_bound;
                        }    
                        break;
                    case censoring_type::CENSORED:
                        {
                            const std::vector< int >& __values = static_cast< const DiscreteCensoredEvent* >(event)->get_values();
                            std::vector< int >::const_iterator it = __values.cbegin(), ite = __values.cend();
                            compatible = true;
                            while (compatible && it != ite) {
                                compatible = *it >= this->lower_bound && *it <= this->upper_bound;
                                ++it;
                            }
                        }
                        break;
                    case censoring_type::LEFT:
                        if (this->lower_bound == std::numeric_limits< int >::min()) {
                            int value = static_cast< const DiscreteLeftCensoredEvent* >(event)->get_upper_bound();
                            compatible = value >= this->lower_bound && value <= this->upper_bound;
                        } else {
                            compatible = false;
                        }
                        break;
                    case censoring_type::RIGHT:
                        if(this->upper_bound == std::numeric_limits< int >::max()) {
                            int value = static_cast< const DiscreteRightCensoredEvent* >(event)->get_lower_bound();
                            compatible = value >= this->lower_bound && value <= this->upper_bound;
                        } else {
                            compatible = false;
                        }
                        break;
                    case censoring_type::INTERVAL:
                        {
                            int value = static_cast< const DiscreteIntervalCensoredEvent* >(event)->get_upper_bound();
                            compatible = value >= this->lower_bound && value <= this->upper_bound;
                            if (compatible) {
                                value = static_cast< const DiscreteIntervalCensoredEvent* >(event)->get_upper_bound();
                                compatible = value >= this->lower_bound && value <= this->upper_bound;
                            }
                        }
                        break;
                }
            }
        }
        return compatible;
    }

    const int& IntegerSampleSpace::get_lower_bound() const
    {
        return this->lower_bound;
    }

    const int& IntegerSampleSpace::get_upper_bound() const
    {
        return this->upper_bound;
    }

    std::unique_ptr< UnivariateSampleSpace > IntegerSampleSpace::copy() const
    {
        return std::make_unique< IntegerSampleSpace >(*this);
    }

    const IntegerSampleSpace NN = IntegerSampleSpace(0);

    const IntegerSampleSpace& get_NN()
    {
        return NN;
    }

    const IntegerSampleSpace ZZ = IntegerSampleSpace();

    const IntegerSampleSpace& get_ZZ()
    {
        return ZZ;
    }

    outcome_type ContinuousSampleSpace::get_outcome() const
    {
        return outcome_type::CONTINUOUS;
    }

    ordering_type ContinuousSampleSpace::get_ordering() const
    {
        return ordering_type::TOTAL;
    }

    RealSampleSpace::RealSampleSpace(const double& lhs, const double& rhs, const bool& left_closed, const bool& right_closed)
    {
        if (lhs < rhs) {
            this->lower_bound = lhs;
            this->upper_bound = rhs;
        } else {
            this->lower_bound = rhs;
            this->upper_bound = lhs;
        }
        this->left_closed = left_closed && !boost::math::isinf(this->lower_bound);
        this->right_closed = right_closed && !boost::math::isinf(this->upper_bound);
    }

    RealSampleSpace::~RealSampleSpace()
    {}

    bool RealSampleSpace::is_compatible(const UnivariateEvent* event) const
    {
        bool compatible = !event;
        if (!compatible) {
            if (event->get_outcome() == outcome_type::CONTINUOUS) {
                switch (event->get_censoring()) {
                    case censoring_type::NONE:
                        {
                            double value = static_cast< const ContinuousElementaryEvent* >(event)->get_value();
                            compatible = boost::math::isfinite(value);
                            if (compatible) {
                                if (this->left_closed) {
                                    compatible = value >= this->lower_bound;
                                } else {
                                    compatible = value > this->lower_bound;
                                }
                                if (compatible) {
                                    if (this->right_closed) {
                                        compatible = value <= this->upper_bound;
                                    } else {
                                        compatible = value < this->upper_bound;
                                    }
                                }
                            }
                        }    
                        break;
                    case censoring_type::CENSORED:
                        {
                            const std::vector< double >& __values = static_cast< const ContinuousCensoredEvent* >(event)->get_values();
                            std::vector< double >::const_iterator it = __values.cbegin(), ite = __values.cend();
                            compatible = true;
                            while (compatible && it != ite) {
                                compatible = boost::math::isfinite(*it);
                                if (compatible) {
                                    if (this->left_closed) {
                                        compatible = *it >= this->lower_bound;
                                    } else {
                                        compatible = *it > this->lower_bound;
                                    }
                                    if (compatible) {
                                        if (this->right_closed) {
                                            compatible = *it <= this->upper_bound;
                                        } else {
                                            compatible = *it < this->upper_bound;
                                        }
                                    }
                                }
                                ++it;
                            }
                        }
                        break;
                    case censoring_type::LEFT:
                        if (boost::math::isinf(this->lower_bound) && this->lower_bound < 0) {
                            double value = static_cast< const ContinuousLeftCensoredEvent* >(event)->get_upper_bound();
                            compatible = boost::math::isfinite(value) && value >= this->lower_bound && value <= this->upper_bound;
                        } else {
                            compatible = false;
                        }
                        break;
                    case censoring_type::RIGHT:
                        if (boost::math::isinf(this->upper_bound) && this->upper_bound > 0) {
                            double value = static_cast< const ContinuousRightCensoredEvent* >(event)->get_lower_bound();
                            compatible = boost::math::isfinite(value) && value >= this->lower_bound && value <= this->upper_bound;
                        } else {
                            compatible = false;
                        }
                        break;
                    case censoring_type::INTERVAL:
                        {
                            double value = static_cast< const ContinuousIntervalCensoredEvent* >(event)->get_upper_bound();
                            compatible = boost::math::isfinite(value) && value >= this->lower_bound && value <= this->upper_bound;
                            if (compatible) {
                                value = static_cast< const ContinuousIntervalCensoredEvent* >(event)->get_upper_bound();
                                compatible = boost::math::isfinite(value) && value >= this->lower_bound && value <= this->upper_bound;
                            }
                        }
                        break;
                }
            }
        }
        return compatible;
    }

    const double& RealSampleSpace::get_lower_bound() const
    {
        return this->lower_bound;
    }

    const double& RealSampleSpace::get_upper_bound() const
    {
        return this->upper_bound;
    }

    const bool& RealSampleSpace::get_left_closed() const
    {
        return this->left_closed;
    }

    const bool& RealSampleSpace::get_right_closed() const
    {
        return this->right_closed;
    }
    
    std::unique_ptr< UnivariateSampleSpace > RealSampleSpace::copy() const
    {
        return std::make_unique< RealSampleSpace >(*this);
    }

    const RealSampleSpace RR = RealSampleSpace();

    const RealSampleSpace& get_RR()
    {
        return RR;
    }

    const RealSampleSpace PR = RealSampleSpace(0);

    const RealSampleSpace& get_PR()
    {
        return PR;
    }

    const RealSampleSpace NR = RealSampleSpace(-1*std::numeric_limits< double >::infinity(), 0);

    const RealSampleSpace& get_NR()
    {
        return NR;
    }

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

    MultivariateSampleSpace::~MultivariateSampleSpace()
    {}

    bool MultivariateSampleSpace::is_compatible(const MultivariateEvent* event) const
    {
        bool compatible = !event || event->size() == size();
        if (compatible) {
            const UnivariateSampleSpace* sample_space;
            Index index = 0, max_index = this->size();
            while (compatible && index < max_index) {
                sample_space = this->get_sample_space(index);
                compatible = sample_space && sample_space->is_compatible(event->get_event(index));
                ++index;
            }
        } else {
            compatible = event;
        }
        return compatible;
    }

    Index MultivariateSampleSpace::encode() const
    {
        Index size = 0;
        for (Index index = 0, max_index = this->size(); index < max_index; ++index) {
            const UnivariateSampleSpace* sample_space = this->get_sample_space(index);
            if (sample_space->get_outcome() == outcome_type::CATEGORICAL) {
                size += static_cast< const CategoricalSampleSpace* >(sample_space)->get_cardinality();
                size -= 1;
            } else {
                size += 1;
            }
        }
        return size;
    }

    Eigen::RowVectorXd MultivariateSampleSpace::encode(const MultivariateEvent& event) const
    {
        Eigen::RowVectorXd dummy;
        if (event.size() != this->size()) {
            dummy = std::numeric_limits< double >::quiet_NaN() * Eigen::RowVectorXd::Ones(encode());
        } else {
            Index shift = 0;
            dummy = Eigen::RowVectorXd::Zero(encode());
            Eigen::RowVectorXd temp;
            for (Index index = 0, max_index = this->size(); index< max_index; ++index) {
                const UnivariateEvent* uevent = event.get_event(index);
                if (uevent->get_censoring() == censoring_type::NONE) {
                    const UnivariateSampleSpace* sample_space = this->get_sample_space(index);
                    switch (sample_space->get_outcome()) {
                        case outcome_type::CATEGORICAL:
                            {
                                temp = (static_cast< const CategoricalSampleSpace* >(sample_space)->encode(static_cast< const CategoricalElementaryEvent* >(uevent)->get_value()));
                                dummy.segment(index + shift, temp.size()) = temp;
                                shift += temp.size();
                                --shift;
                            }
                            break;
                        case outcome_type::DISCRETE:
                            dummy(index + shift) = static_cast< const DiscreteElementaryEvent* >(uevent)->get_value();
                            break;
                        case outcome_type::CONTINUOUS:
                            dummy(index + shift) = static_cast< const ContinuousElementaryEvent* >(uevent)->get_value();
                            break;
                    }
                } else {
                    const UnivariateSampleSpace* sample_space = this->get_sample_space(index);
                    if (sample_space->get_outcome() == outcome_type::CATEGORICAL) {
                        Index max_size = index + shift + static_cast< const CategoricalSampleSpace* >(sample_space)->get_cardinality();
                        while(index + shift < max_size) {
                            dummy(index + shift) = std::numeric_limits< double >::quiet_NaN();
                            ++shift;
                        }
                    } else {
                        dummy(index + shift) = std::numeric_limits< double >::quiet_NaN();
                    }
                }
            }
        }
        return dummy;
    }

    VectorSampleSpace::VectorSampleSpace(const std::vector< UnivariateSampleSpace* >& sample_spaces)
    {
        this->sample_spaces = std::make_shared< std::vector< std::unique_ptr< UnivariateSampleSpace > > >();
        this->sample_spaces->resize(sample_spaces.size());
        for (Index index = 0, max_index = sample_spaces.size(); index < max_index; ++index) {
            if (!sample_spaces[index]) {
                throw nullptr_error("sample_spaces");
            }
            (*this->sample_spaces)[index] = sample_spaces[index]->copy(); 
        }
    }

    VectorSampleSpace::VectorSampleSpace(const VectorSampleSpace& sample_space)
    {
        this->sample_spaces = sample_space.sample_spaces;
    }

    VectorSampleSpace::~VectorSampleSpace()
    {
    }

    Index VectorSampleSpace::size() const
    {
        return this->sample_spaces->size();
    }

    const UnivariateSampleSpace* VectorSampleSpace::get_sample_space(const Index& index) const
    {
        return (*this->sample_spaces)[index].get();
    }

    void VectorSampleSpace::set_sample_space(const Index& index, const UnivariateSampleSpace& sample_space)
    { 
        this->detach();
        (*this->sample_spaces)[index] = sample_space.copy();
    }
    
    std::unique_ptr< MultivariateSampleSpace > VectorSampleSpace::copy() const
    {
        return std::make_unique< VectorSampleSpace >(*this);
    }

    void VectorSampleSpace::detach()
    {
        if (this->sample_spaces && !this->sample_spaces.unique()) {
            sample_spaces = std::make_shared< std::vector< std::unique_ptr< UnivariateSampleSpace > > >();
            sample_spaces->resize(this->sample_spaces->size());
            for (Index index = 0, max_index = this->sample_spaces->size(); index < max_index; ++index) {
                (*sample_spaces)[index] = (*this->sample_spaces)[index]->copy(); 
            }
            this->sample_spaces = sample_spaces;
        }
    }

}
