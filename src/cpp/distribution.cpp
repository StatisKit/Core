#include "distribution.h"
#include "base.h"

namespace statiskit
{
    UnivariateDistribution::~UnivariateDistribution()
    {}

    double UnivariateDistribution::loglikelihood(const UnivariateData& data) const
    {
        double llh = 0.;
        std::unique_ptr< UnivariateData::Generator > generator = data.generator();
        while (generator->is_valid() && boost::math::isfinite(llh)) {            double weight = generator->get_weight();
            if (weight > 0.) {
                llh += weight * this->probability(generator->get_event(), true);
            }
            ++(*generator);
        }
        return llh;
    }

    double CategoricalUnivariateDistribution::probability(const UnivariateEvent* event, const bool& logarithm) const
    {
        double p;
        if (event) {
            if (event->get_outcome() == outcome_type::CATEGORICAL) {
                switch (event->get_censoring()) {
                    case censoring_type::NONE:
                        {
                            const std::string& value = static_cast< const CategoricalElementaryEvent* >(event)->get_value();
                            if (logarithm) {
                                p = this->ldf(value);
                            } else {
                                p = this->pdf(value);
                            }
                        }
                        break;
                    case censoring_type::CENSORED:
                        {
                            const std::vector< std::string >& values = static_cast< const CategoricalCensoredEvent* >(event)->get_values();
                            p = 0.;
                            for (std::vector< std::string >::const_iterator it = values.cbegin(), it_end = values.cend(); it != it_end; ++it) {
                                p += this->pdf(*it);
                            }
                            if (logarithm) {
                                p = log(p);
                            }
                        }
                        break;
                    default:
                        {
                            if (logarithm) {
                                p = -1 * std::numeric_limits< double >::infinity();
                            } else {
                                p = 0;
                            }
                            break;
                        }
                }
            } else if (logarithm) {
                p = -1 * std::numeric_limits< double >::infinity();
            } else {
                p = 0;
            }
        } else if (logarithm) {
            p = 0;
        } else {
            p = 1.;
        }
        return p;
    }

    BinaryDistribution::BinaryDistribution()
    {}

    BinaryDistribution::BinaryDistribution(const std::string& value, const std::string& reference_value)
    {
        if (value != reference_value) {
            this->value = value;
            this->reference_value = reference_value;
            this->pi = 0.5;
        } else {
            throw std::runtime_error("value and refrence_value must be different");
        } //TODO error
    }

    BinaryDistribution::BinaryDistribution(const std::string& value, const std::string& reference_value, const double& pi) : BinaryDistribution(value, reference_value) 
    { set_pi(pi); }

    BinaryDistribution::BinaryDistribution(const BinaryDistribution& binary)
    {
        this->value = binary.value;
        this->reference_value = binary.reference_value;
        this->pi = binary.pi;
    }

    unsigned int BinaryDistribution::get_nb_parameters() const
    {
        return 1;
    }
         
    double BinaryDistribution::ldf(const std::string& value) const
    { return log(this->pdf(value)); }

    double BinaryDistribution::pdf(const std::string& value) const
    {
        if (value == this->value) {
            return this->pi;
        } else if (value == this->reference_value) {
            return 1 - this->pi;
        } else {
            throw in_set_error("value", value, this->get_values());
        }
    }
     
    double BinaryDistribution::pdf(const int& position) const
    {
        if (position == 0) {
            return this->pi;
        } else if (position == 1) {
            return 1 - this->pi;
        } else { 
            std::set< int > positions;
            positions.insert(0);
            positions.insert(1);
            throw in_set_error("position", position, positions); 
        }        
    }

    std::unique_ptr< UnivariateEvent > BinaryDistribution::simulate() const
    {
        double sp = boost::uniform_01<boost::mt19937&>(__impl::get_random_generator())();
        if (sp < this->pi) {
            return std::make_unique< CategoricalElementaryEvent >(this->value);
        } else {
            return std::make_unique< CategoricalElementaryEvent >(this->reference_value);
        }
    }

    std::set< std::string > BinaryDistribution::get_values() const
    {
        std::set< std::string > values;
        values.insert(this->value);
        values.insert(this->reference_value);
        return values;
    }

    double BinaryDistribution::get_pi() const
    {
        return this->pi;
    }

    void BinaryDistribution::set_pi(const double& pi)
    {
        if (pi >= 0 && pi <= 1) {
            this->pi = pi;
        } else {
            throw interval_error("pi", pi, 0, 1, std::make_pair(false, false));
        }  
    }

    NominalDistribution::NominalDistribution(const std::set< std::string >& values)
    {
        this->init(values);
    }

    NominalDistribution::NominalDistribution(const std::set< std::string >& values, const Eigen::VectorXd& pi)
    {
        this->init(values, pi);
    }

    NominalDistribution::NominalDistribution(const NominalDistribution& nominal)
    {
        this->init(nominal);
    }

    double NominalDistribution::pdf(const int& position) const
    {
        return this->pi[position];
    }

    OrdinalDistribution::OrdinalDistribution(const std::vector< std::string >& values)
    {
        this->init(std::set< std::string >(values.cbegin(), values.cend()));
        this->rank = std::vector< Index >(this->values.size());
        for (Index size = 0, max_size = this->values.size(); size < max_size; ++size) {
            this->rank[distance(this->values.begin(), this->values.find(values[size]))] = size;
        }
    }

    OrdinalDistribution::OrdinalDistribution(const std::vector< std::string >& values, const Eigen::VectorXd& pi)
    {
        this->init(std::set< std::string >(values.cbegin(), values.cend()), pi);
        this->rank = std::vector< Index >(this->values.size());
        for (Index size = 0, max_size = this->values.size(); size < max_size; ++size) {
            this->rank[distance(this->values.begin(), this->values.find(values[size]))] = size;
        }
    }

    OrdinalDistribution::OrdinalDistribution(const OrdinalDistribution& ordinal)
    {
        this->init(ordinal);
        this->rank = ordinal.rank;
    }

    double OrdinalDistribution::pdf(const std::string& value) const
    {
        double p;
        std::set< std::string >::const_iterator it = this->values.find(value);
        if (it == this->values.end()) {
            p = 0.;
        } else {
            p = this->pi[distance(this->values.cbegin(), it)];
        }
        return p;
     }

    double OrdinalDistribution::pdf(const int& position) const
    {
        return this->pi[this->rank[position]];
    }
    
    double OrdinalDistribution::cdf(const std::string& value) const
    {
        Index rank_value = this->rank[distance(this->values.cbegin(), this->values.find(value))];
        if (rank_value == (this->rank.size()-1)) {
            return 1;
        } else {
            double p = 0.;
            for (Index i = 0; i < this->rank.size(); ++i) {
                if (this->rank[i] <= rank_value) {
                    p += this->pi[i];
                }
            }
            return p;            
        }
    }

    std::string OrdinalDistribution::quantile(const double& p) const
    {
        std::vector< std::string > ordered = this->get_ordered_values();
        Index size = 0, max_size = ordered.size() - 1;
        double cp = this->pi[size];
        while (cp < p && size < max_size) {
            ++size;
            cp += this->pi[size];
        }
        if (size == max_size) {
            --size;
        }
        return ordered[size];
    }

    const std::vector< Index >& OrdinalDistribution::get_rank() const
    {
        return this->rank;
    }

    void OrdinalDistribution::set_rank(const std::vector< Index >& rank)
    {
        if (rank.size() != this->values.size()) {
            throw size_error("rank", rank.size(), this->values.size());
        }
        Indices order = Indices();
        for (Index size = 0, max_size = this->values.size(); size < max_size; ++size) {
            order.insert(order.end(), size);
        }
        for (Index size = 0, max_size = this->values.size(); size < max_size; ++size) {
            if (rank[size] >= this->values.size()) {
                throw interval_error("rank", rank[size], 0, this->values.size(), std::make_pair(false, true));
            }
            Indices::iterator it = order.find(rank[size]);
            if (it == order.end()){
                throw duplicated_value_error("rank", rank[size]);
            }
            order.erase(it);
        }
        this->rank = rank;
    }

    std::vector< std::string > OrdinalDistribution::get_ordered_values() const
    {
        std::vector< std::string > order(this->values.size());
        for (std::set< std::string >::const_iterator it = this->values.cbegin(), it_end = this->values.cend(); it != it_end; ++it) {
            order[this->rank[distance(this->values.cbegin(), it)]] = *it;
        }
        return order;
    }

    void OrdinalDistribution::set_ordered_values(const std::vector< std::string >& ordered_values)
    {
        std::set< std::string > values(ordered_values.cbegin(), ordered_values.cend());
        if (values != this->values) {
            throw parameter_error("ordered_values","must contain the same string as in values parameter");
        }
        for (Index i = 0; i < ordered_values.size(); ++i) {
            this->rank[distance(this->values.cbegin(), this->values.find(ordered_values[i]))] = i;
        }
    }

    Eigen::VectorXd OrdinalDistribution::get_ordered_pi() const
    {
        Eigen::VectorXd ordered_pi(this->pi.rows());
        for (std::set< std::string >::const_iterator it = this->values.cbegin(), it_end = this->values.cend(); it != it_end; ++it) {
            ordered_pi[this->rank[distance(this->values.cbegin(), it)]] = pdf(*it);
        }
        return ordered_pi;  
    }

    void OrdinalDistribution::set_ordered_pi(const Eigen::VectorXd& ordered_pi)
    {
        if (ordered_pi.rows() == this->values.size() - 1) {
            Index index = 0, max_index = this->pi.size() - 1; 
            while (index < max_index && pi[index] >= 0.) {
                ++index;
            }
            if (index < max_index) {
                throw parameter_error("ordered_pi", "contains negative values");
            } 
            double sum = pi.sum();
            if (sum < 1) {
                for (index = 0; index < max_index; ++index) {
                    this->pi[index] = ordered_pi[this->rank[index]];
                }
                this->pi[max_index + 1] = 1 - sum;
            } else {
                throw parameter_error("ordered_pi", "sum superior to 1.0");
            }    
        } else if (ordered_pi.rows() == this->values.size()) {
            Index index = 0, max_index = ordered_pi.rows(); 
            while (index < max_index && ordered_pi[index] >= 0.) {
                ++index;
            }
            if (index < max_index) {
                throw parameter_error("ordered_pi", "contains negative values");
            } 
            double sum = ordered_pi.sum();
            for (index = 0; index < max_index; ++index) {
                this->pi[index] = ordered_pi[this->rank[index]] / sum;
            }
        } else {
            throw parameter_error("ordered_pi", "number of dimension");
        }  
    }

    HierarchicalDistribution::HierarchicalDistribution()
    {}

    HierarchicalDistribution::HierarchicalDistribution(const HierarchicalSampleSpace& hss)
    {
        for (HierarchicalSampleSpace::const_iterator it = hss.cbegin(), it_end = hss.cend(); it != it_end; ++it) {
            switch (it->second->get_ordering()) {
                case NONE:
                    this->tree_distribution[it->first] = new NominalDistribution(it->second->get_values());
                    break;
                case TOTAL:
                    this->tree_distribution[it->first] = new OrdinalDistribution(static_cast< OrdinalSampleSpace* >(it->second.get())->get_ordered());
                    break;
                case PARTIAL:
                    this->tree_distribution[it->first] = new HierarchicalDistribution(*(static_cast< HierarchicalSampleSpace* >(it->second.get())));
                    break;
            }
        }
        this->values = hss.get_values();
        this->parents = hss.get_parents();
    }

    HierarchicalDistribution::HierarchicalDistribution(const HierarchicalDistribution& hd)
    {
        for (std::map< std::string, CategoricalUnivariateDistribution* >::const_iterator it = hd.tree_distribution.cbegin(), it_end = hd.tree_distribution.cend(); it != it_end; ++it) {
            this->tree_distribution[it->first] = static_cast< CategoricalUnivariateDistribution* >(it->second->copy().release());
        }
        this->values = hd.values;
        this->parents = hd.parents;
    }

    HierarchicalDistribution::~HierarchicalDistribution()
    {
        for (std::map< std::string, CategoricalUnivariateDistribution* >::iterator it = this->tree_distribution.begin(), it_end = this->tree_distribution.end(); it != it_end; ++it) { 
            if (it->second) {
                delete it->second;
                it->second = nullptr;
            }
        }
        this->tree_distribution.clear();
    }

    unsigned int HierarchicalDistribution::get_nb_parameters() const
    {
        unsigned int nb_parameters = 0;
        for (std::map< std::string, CategoricalUnivariateDistribution* >::const_iterator it = this->tree_distribution.cbegin(), it_end = this->tree_distribution.cend(); it != it_end; ++it) {
            nb_parameters += it->second->get_nb_parameters();
        }
        return nb_parameters;
    }

    std::unique_ptr< UnivariateEvent > HierarchicalDistribution::simulate() const
    {
        std::map< std::string, CategoricalUnivariateDistribution* >::const_iterator it_dist = this->tree_distribution.find("");
        std::string value;
        if (it_dist != this->tree_distribution.cend()) {
            value = (static_cast< CategoricalElementaryEvent* >((it_dist->second->simulate()).get()))->get_value();
            std::set< std::string >::const_iterator it_leave = this->values.find(value);
            while (it_leave == this->values.cend()) {
                it_dist = this->tree_distribution.find(value);
                if (it_dist != this->tree_distribution.cend()) {
                    value = (static_cast< CategoricalElementaryEvent* >((it_dist->second->simulate()).get()))->get_value();
                    it_leave = this->values.find(value);
                } else {
                    throw std::runtime_error("internal error");
                }
            }
        } else {
            throw std::runtime_error("internal error");
        }
        return std::make_unique< CategoricalElementaryEvent >(value);
    }
   
    double HierarchicalDistribution::ldf(const std::string& value) const
    {
        double l;
        std::set< std::string >::const_iterator it = this->values.find(value);
        if (it != this->values.cend()) {   
            std::map< std::string, std::string >::const_iterator it_par = this->parents.find(value);
            if (it_par != this->parents.cend()) {
                std::map< std::string, CategoricalUnivariateDistribution* >::const_iterator it_dist = this->tree_distribution.find(it_par->second);
                if (it_dist != this->tree_distribution.cend()) {
                    l = (it_dist->second)->ldf(value); 
                    std::string current_value = it_par->second;
                    while (current_value != "") {
                        l += this->internal_ldf(current_value);
                        it_par = this->parents.find(current_value);
                        if (it_par != this->parents.cend()) {
                            current_value = it_par->second;
                        } else {
                            throw std::runtime_error("internal error");
                        }
                    }                        

                } else {
                    throw std::runtime_error("internal error");
                }  
            } else {
                throw std::runtime_error("internal error");
            }
        } else {
            throw in_set_error("value", value, this->values);
        }    
        return l;
    }

    double HierarchicalDistribution::pdf(const std::string& value) const
    {
        return exp(this->ldf(value));
    }

    double HierarchicalDistribution::pdf(const int& position) const
    {
        double p;
        if (position >= 0 && position < this->values.size()) {
            std::set< std::string >::const_iterator it = this->values.cbegin();
            std::advance(it, position);
            p = pdf(*it);
        } else {
            throw interval_error("position", position, 0, this->values.size()-1, std::make_pair(false,false));
        }
        return p;
    }
            
    std::set< std::string > HierarchicalDistribution::get_values() const
    {
        return this->values;
    }

    double HierarchicalDistribution::internal_ldf(const std::string& value) const
    {
        this->check_internal(value);
        double l;
        if (value == "") {
            l = 0;
        } else {
            std::map< std::string, CategoricalUnivariateDistribution* >::const_iterator it = this->tree_distribution.find(value);
            if (it != this->tree_distribution.cend()) {
                std::map< std::string, std::string >::const_iterator it_par = this->parents.find(value);
                if (it_par != this->parents.cend()) {
                    std::map< std::string, CategoricalUnivariateDistribution* >::const_iterator it_dist = this->tree_distribution.find(it_par->second);
                    if (it_dist != this->tree_distribution.cend()) {
                        l = (it_dist->second)->ldf(value);
                    } else {
                        throw std::runtime_error("internal error");
                    }
                } else {
                    throw std::runtime_error("internal error");
                }
            } else {
                throw in_set_error("value", value, __impl::keys(this->tree_distribution));
            }
        } 
        return l;       
    }

    double HierarchicalDistribution::internal_pdf(const std::string& value) const
    {
        return exp(this->internal_ldf(value));
    }

    HierarchicalDistribution::const_iterator HierarchicalDistribution::cbegin() const
    {
        return this->tree_distribution.cbegin();
    }

    HierarchicalDistribution::const_iterator HierarchicalDistribution::cend() const
    {
        return this->tree_distribution.cend();
    }

    const CategoricalUnivariateDistribution* HierarchicalDistribution::get_distribution(const std::string& value) const
    {
        this->check_internal(value);
        return this->tree_distribution.find(value)->second;
    }

    void HierarchicalDistribution::set_distribution(const std::string& value, const CategoricalUnivariateDistribution& distribution)
    {
        this->check_internal(value);
        this->tree_distribution[value] = static_cast< CategoricalUnivariateDistribution* >(distribution.copy().release());
    }

    std::string HierarchicalDistribution::parent(const std::string& value) const
    {
        std::string parent;
        std::map< std::string, std::string >::const_iterator it = this->parents.find(value);
        if (it != this->parents.cend()) {
            parent = it->second;
        } else {
            throw in_set_error("value", value, __impl::keys(this->parents), false);
        }
        return parent;
    }

    void HierarchicalDistribution::check_internal(const std::string& value) const
    {
        if (this->tree_distribution.find(value) == this->tree_distribution.cend()) {
            throw in_set_error("value", value, __impl::keys(this->tree_distribution), false);
        }
    }

    unsigned int HierarchicalDistribution::index(const std::string& value) const
    {
        this->check_internal(value);
        return std::distance(this->tree_distribution.cbegin(), this->tree_distribution.find(value));
    }

    double DiscreteUnivariateDistribution::probability(const UnivariateEvent* event, const bool& logarithm) const
    {
        double p;
        if (event) {
            if (event->get_outcome() == outcome_type::DISCRETE) {
                switch(event->get_censoring()) {
                    case censoring_type::NONE:
                        {
                            const int& value = static_cast< const DiscreteElementaryEvent* >(event)->get_value();
                            if (logarithm) {
                                p = this->ldf(value);
                            } else {
                                p = this->pdf(value);
                            }
                        }
                        break;
                    case censoring_type::CENSORED:
                        {
                            const std::vector< int >& values = static_cast< const DiscreteCensoredEvent* >(event)->get_values();
                            p = 0.;
                            for (std::vector< int >::const_iterator it = values.cbegin(), it_end = values.cend(); it != it_end; ++it) {
                                p += this->pdf(*it);
                            }
                            if (logarithm) {
                                p = log(p);
                            }
                        }
                        break;
                    case censoring_type::LEFT:
                        {
                            const int& upper_bound = static_cast< const DiscreteLeftCensoredEvent* >(event)->get_upper_bound();
                            p = this->cdf(upper_bound);
                            if (logarithm) {
                                p = log(p);
                            }
                        }
                        break;
                    case censoring_type::RIGHT:
                        {
                            const int& lower_bound = static_cast< const DiscreteRightCensoredEvent* >(event)->get_lower_bound();
                            p = 1 - this->cdf(lower_bound - 1);
                            if (logarithm) {
                                p = log(p);
                            }
                        }
                        break;
                    case censoring_type::INTERVAL:
                        {
                            const DiscreteIntervalCensoredEvent* devent = static_cast< const DiscreteIntervalCensoredEvent* >(event);
                            const int& lower_bound = devent->get_lower_bound();
                            const int& upper_bound = devent->get_lower_bound();
                            p = this->cdf(upper_bound) - this->cdf(lower_bound - 1);
                            if (logarithm) {
                                p = log(p);
                            }
                        }
                        break;
                    default:
                        if (logarithm) {
                            p = -1 * std::numeric_limits< double >::infinity();
                        } else {
                            p = 0;
                        }
                        break;
                }
            } else if (logarithm) {
                p = -1 * std::numeric_limits< double >::infinity();
            } else {
                p = 0;
            }
        } else if (logarithm) {
            p = 0;
        } else {
            p = 1.;
        }
        return p;
    }

    double DiscreteUnivariateDistribution::ldf(const int& value) const
    {
        return log(this->pdf(value));
    }

    double DiscreteUnivariateDistribution::pdf(const int& value) const
    {
        return exp(this->ldf(value));
    }

    double DiscreteUnivariateDistribution::cdf(const int& value) const
    {
        double p = 0.;
        for (int k = 0; k <= value; ++k) {
            p += this->pdf(k);
        } 
        return p;
    }

    int DiscreteUnivariateDistribution::quantile(const double& p) const
    {
        int i = 0;
        double cp = pdf(i);
        while (cp < p) {
            ++i;
            cp += pdf(i);
        }
        return i;        
    }

    std::unique_ptr< UnivariateEvent > DiscreteUnivariateDistribution::simulate() const
    {
        return std::make_unique< ElementaryEvent< DiscreteEvent > >(quantile(boost::uniform_01<boost::mt19937&>(__impl::get_random_generator())()));
    }

    PoissonDistribution::PoissonDistribution()
    {
        this->theta = 1.;
    }

    PoissonDistribution::PoissonDistribution(const double& theta)
    {
        if (theta <= 0.) {
            throw lower_bound_error("theta", theta, 0., true);
        }
        this->theta = theta;
    }

    PoissonDistribution::PoissonDistribution(const PoissonDistribution& poisson)
    {
        this->theta = poisson.theta;
    }

    unsigned int PoissonDistribution::get_nb_parameters() const
    {
        return 1;
    }

    const double& PoissonDistribution::get_theta() const
    {
        return this->theta;
    }

    void PoissonDistribution::set_theta(const double& theta)
    {
        if (theta <= 0.) {
            throw lower_bound_error("theta", theta, 0., true);
        }
        this->theta = theta;
    }

    double PoissonDistribution::ldf(const int& value) const
    {
        double p;
        if (value < 0) {
            p = -1 * std::numeric_limits< double >::infinity();
        } else {
            p = value * log(this->theta) - this->theta - std::lgamma(value + 1);
        }
        return p;
    }
    
    double PoissonDistribution::pdf(const int& value) const
    {
        double p;
        if (value < 0) {
            p = 0;
        } else {
            p = pow(this->theta, value) * exp(-this->theta) / std::tgamma(value + 1);
        }
        return p;
    }

    double PoissonDistribution::cdf(const int& value) const
    { 
        double p;
        if (value < 0) {
            p = 0;
        } else {
            p = boost::math::gamma_q(value + 1, this->theta);
        }
        return p;
    }

    int PoissonDistribution::quantile(const double& p) const
    {
        return std::ceil(boost::math::gamma_q_inva(this->theta, p) - 1);
    }

    double PoissonDistribution::get_mean() const
    {
        return this->theta;
    }

    double PoissonDistribution::get_variance() const
    {
        return this->theta;
    }

    std::unique_ptr< UnivariateEvent > PoissonDistribution::simulate() const
    {
        boost::poisson_distribution<> dist(this->theta);
        boost::variate_generator<boost::mt19937&, boost::poisson_distribution<> > simulator(__impl::get_random_generator(), dist);
        return std::make_unique< DiscreteElementaryEvent >(simulator());
    }

    BinomialDistribution::BinomialDistribution()
    {
        this->kappa = 1;
        this->pi = .5;
    }

    BinomialDistribution::BinomialDistribution(const unsigned int& kappa, const double& pi)
    {
        if (pi < 0 || pi > 1) {
            throw interval_error("pi", pi, 0., 1., std::make_pair(false, false));
        }
        this->kappa = kappa;
        this->pi = pi;
    }

    BinomialDistribution::BinomialDistribution(const BinomialDistribution& binomial)
    {
        this->kappa = binomial.kappa;
        this->pi = binomial.pi;
    }

    unsigned int BinomialDistribution::get_nb_parameters() const
    {
        return 2;
    }

    const unsigned int& BinomialDistribution::get_kappa() const
    {
        return this->kappa;
    }

    void BinomialDistribution::set_kappa(const unsigned int& kappa)
    {
        this->kappa = kappa;
    }

    const double& BinomialDistribution::get_pi() const
    {
        return this->pi;
    }

    void BinomialDistribution::set_pi(const double& pi)
    {
        if (pi < 0 || pi > 1) {
            throw interval_error("pi", pi, 0., 1., std::make_pair(false, false));
        }
        this->pi = pi;
    }

    double BinomialDistribution::ldf(const int& value) const
    {
        double p;
        if (value < 0 || value > this->kappa) {
            p = -1 * std::numeric_limits< double >::infinity();
        } else if (value == 0) {
            p = this->kappa * log(1. - this->pi);
        } else if (value == this->kappa) {
            p =  value * log(this->pi);
        } else {
            p = std::lgamma(this->kappa + 1) - std::lgamma(this->kappa - value + 1) - std::lgamma(value + 1) + value * log(this->pi) + (this->kappa - value) * log(1. - this->pi);
        }
        return p;
    }
    
    double BinomialDistribution::pdf(const int& value) const
    {
        double p;
        if (value < 0 || value > this->kappa) {
            p = 0;
        } else if (value == 0) {
            p = pow(1 - this->pi, this->kappa);
        } else if (value == this->kappa) {
            p = pow(this->pi, this->kappa);
        } else {
            p = boost::math::ibeta_derivative(value + 1, this->kappa - value + 1, this->pi) / (this->kappa + 1);
        }
        return p;
    }

    double BinomialDistribution::cdf(const int& value) const
    {
        double p;
        if (value < 0) {
            p = 0.;
        } else if (value > this->kappa) {
            p = 1.;
        } else {
            p = boost::math::ibetac(value + 1, this->kappa - value, this->pi);
        }
        return p;
      }

    int BinomialDistribution::quantile(const double& p) const
    { 
        int value = 0;
        while (this->cdf(value) < p && value < this->kappa) {
            ++value;
        }
        return value;
    }

    std::unique_ptr< UnivariateEvent > BinomialDistribution::simulate() const
    {
        boost::binomial_distribution<> dist(this->kappa, this->pi);
        boost::variate_generator<boost::mt19937&, boost::binomial_distribution<> > simulator(__impl::get_random_generator(), dist);
        return std::make_unique< DiscreteElementaryEvent >(simulator());
    }

    double BinomialDistribution::get_mean() const
    {
        return this->kappa * this->pi;
    }

    double BinomialDistribution::get_variance() const
    {
        return this->kappa * this->pi * (1. - this->pi);
    }

    LogarithmicDistribution::LogarithmicDistribution()
    {
        this->theta = .5;
    }

    LogarithmicDistribution::LogarithmicDistribution(const double& theta)
    {
        if (theta < 0 || theta > 1) {
            throw interval_error("theta", theta, 0., 1., std::make_pair(false, false));
        }
        this->theta = theta;
    }

    LogarithmicDistribution::LogarithmicDistribution(const LogarithmicDistribution& logarithmic)
    {
        this->theta = logarithmic.theta;
    }

    unsigned int LogarithmicDistribution::get_nb_parameters() const
    {
        return 1;
    }

    const double& LogarithmicDistribution::get_theta() const
    {
        return this->theta;
    }

    void LogarithmicDistribution::set_theta(const double& theta)
    {
        if (theta < 0 || theta > 1) {
            throw interval_error("theta", theta, 0., 1., std::make_pair(false, false));
        }
        this->theta = theta;
    }

    double LogarithmicDistribution::ldf(const int& value) const
    {
        double p;
        if (value < 1) {
            p = -1 * std::numeric_limits< double >::infinity();
        } else {
            try {
                p = -log(- 1 * log(1 - this->theta)) + value * log(this->theta) - log(value);
            } catch (const std::exception& error) {
                p = std::numeric_limits< double >::quiet_NaN();
            }
        }
        return p;
    }
    
    double LogarithmicDistribution::pdf(const int& value) const
    {
        double p;
        if (value < 1) {
            p = 0;
        } else {
            try {
                p = - 1 / log(1 - this->theta) * pow(this->theta, value) / value;
            } catch (const std::exception& error) {
                p = std::numeric_limits< double >::quiet_NaN();
            }
        }
        return p;
    }

    double LogarithmicDistribution::get_mean() const
    {
        return  - 1 / log(1 - this->theta) * this->theta / (1 - this->theta);
    }

    double LogarithmicDistribution::get_variance() const
    { 
        double mean = this->get_mean();
        return mean * (1 / (1- this->theta) - mean);
    }

    GeometricDistribution::GeometricDistribution()
    {
        this->pi = .5;
    }

    GeometricDistribution::GeometricDistribution(const double& pi)
    {
        if (pi < 0 || pi > 1) {
            throw interval_error("pi", pi, 0., 1., std::make_pair(false, false));
        }
        this->pi = pi;
    }

    GeometricDistribution::GeometricDistribution(const GeometricDistribution& geometric)
    {
        this->pi = geometric.pi;
    }

    unsigned int GeometricDistribution::get_nb_parameters() const
    {
        return 1;
    }

    const double& GeometricDistribution::get_pi() const
    {
        return this->pi;
    }

    void GeometricDistribution::set_pi(const double& pi)
    {
        if (pi < 0 || pi > 1) {
            throw interval_error("pi", pi, 0., 1., std::make_pair(false, false));
        }
        this->pi = pi;
    }

    double GeometricDistribution::ldf(const int& value) const
    {
        double p;
        if (value < 1) {
            p = -1 * std::numeric_limits< double >::infinity();
        } else {
            try {
                p = (value - 1) * log(this->pi) + log(1 - this->pi);
            } catch (const std::exception& error)  {
                p = std::numeric_limits< double >::quiet_NaN();
            }
        }
        return p;
    }
    
    double GeometricDistribution::pdf(const int& value) const
    {
        double p;
        if (value < 1) {
            p = 0;
        } else {
            try {
                p = pow(this->pi, value - 1) * (1. - this->pi);
            } catch (const std::exception& error) {
                p = std::numeric_limits< double >::quiet_NaN();
            }
        }
        return p;
    }

    double GeometricDistribution::cdf(const int& value) const
    { 
        double p;
        if (value < 1) {
            p = 0;
        } else {
            p = 1 - pow(this->pi, value);
        }
        return p;
    }

    int GeometricDistribution::quantile(const double& p) const
    { 
        int q = 0;
        while (this->cdf(q) < p) {
            ++q;
        }
        return q;
    }

    double GeometricDistribution::get_mean() const
    {
        return 1 / (1 - this->pi);
    }

    double GeometricDistribution::get_variance() const
    {
        return this->pi / pow(1. - this->pi, 2);
    }

    std::unique_ptr< UnivariateEvent > GeometricDistribution::simulate() const
    {
        return std::make_unique< ElementaryEvent< DiscreteEvent > >(quantile(boost::uniform_01<boost::mt19937&>(__impl::get_random_generator())()));
    }

    NegativeBinomialDistribution::NegativeBinomialDistribution()
    {
        this->kappa = 1.;
        this->pi = .5;
    }

    NegativeBinomialDistribution::NegativeBinomialDistribution(const double& kappa, const double& pi)
    {
        if (kappa <= 0.) {
            throw lower_bound_error("kappa", kappa, 0., true);
        }
        if (pi < 0 || pi > 1) {
            throw interval_error("pi", pi, 0., 1., std::make_pair(false, false));
        }
        this->kappa = kappa;
        this->pi = pi;
    }

    NegativeBinomialDistribution::NegativeBinomialDistribution(const NegativeBinomialDistribution& negbinomial)
    {
        this->kappa = negbinomial.kappa;
        this->pi = negbinomial.pi;
    }

    unsigned int NegativeBinomialDistribution::get_nb_parameters() const
    {
        return 2;
    }

    const double& NegativeBinomialDistribution::get_kappa() const
    {
        return this->kappa;
    }

    void NegativeBinomialDistribution::set_kappa(const double& kappa)
    {
        if (kappa <= 0.) {
            throw lower_bound_error("kappa", kappa, 0., true);
        }
        this->kappa = kappa;
    }

    const double& NegativeBinomialDistribution::get_pi() const
    {
        return this->pi;
    }

    void NegativeBinomialDistribution::set_pi(const double& pi)
    {
        if (pi < 0 || pi > 1) {
            throw interval_error("pi", pi, 0., 1., std::make_pair(false, false));
        }
        this->pi = pi;
    }

    double NegativeBinomialDistribution::ldf(const int& value) const
    {
        double p;
        if (value < 0) {
            p = -1 * std::numeric_limits< double >::infinity();
        } else {
            try {
                p = boost::math::lgamma(value + this->kappa) - boost::math::lgamma(this->kappa) - boost::math::lgamma(value + 1.) + value * log(this->pi) + this->kappa * log(1 - this->pi);
            } catch (const std::exception& error) {
                p = std::numeric_limits< double >::quiet_NaN();
            }
        }
        return p;
    }
    
    double NegativeBinomialDistribution::pdf(const int& value) const
    {
        double p;
        if (value < 0) {
            p = 0;
        } else {
            try {
                p = boost::math::ibeta_derivative(this->kappa, value + 1., 1 - this->pi) * (1. - this->pi) / (this->kappa + value);
            } catch (const std::exception& error) {
                p = std::numeric_limits< double >::quiet_NaN();
            }
        }
        return p;
    }

    double NegativeBinomialDistribution::cdf(const int& value) const
    { 
        double p;
        if (value < 0) {
            p = 0;
        } else {
            p = boost::math::ibeta(this->kappa, value + 1., 1. - this->pi);
        }
        return p;
    }

    int NegativeBinomialDistribution::quantile(const double& p) const
    {
        return std::ceil(boost::math::ibeta_invb(this->kappa, 1. - this->pi, p) - 1);
    }

    double NegativeBinomialDistribution::get_mean() const
    {
        return this->kappa * this->pi / (1 - this->pi);
    }

    double NegativeBinomialDistribution::get_variance() const
    {
        return this->kappa * this->pi / pow(1. - this->pi, 2);
    }

    std::unique_ptr< UnivariateEvent > NegativeBinomialDistribution::simulate() const
    {
        return std::make_unique< ElementaryEvent< DiscreteEvent > >(quantile(boost::uniform_01<boost::mt19937&>(__impl::get_random_generator())()));
    }

    BetaCompoundDiscreteUnivariateDistribution::BetaCompoundDiscreteUnivariateDistribution()
    {
        this->alpha = 1.;
        this->gamma = 1.;
    }

    BetaCompoundDiscreteUnivariateDistribution::BetaCompoundDiscreteUnivariateDistribution(const BetaCompoundDiscreteUnivariateDistribution& distribution)
    {
        this->alpha = distribution.alpha;
        this->gamma = distribution.gamma;
    }

    BetaCompoundDiscreteUnivariateDistribution::~BetaCompoundDiscreteUnivariateDistribution()
    {}

    unsigned int BetaCompoundDiscreteUnivariateDistribution::get_nb_parameters() const
    {
        return 2;
    }

    const double& BetaCompoundDiscreteUnivariateDistribution::get_alpha() const
    { return this->alpha; }

    void BetaCompoundDiscreteUnivariateDistribution::set_alpha(const double& alpha)
    {
        if (alpha <= 0.) {
            throw lower_bound_error("alpha", alpha, 0., true);
        }
        this->alpha = alpha;
    }

    const double& BetaCompoundDiscreteUnivariateDistribution::get_gamma() const
    {
        return this->gamma;
    }

    void BetaCompoundDiscreteUnivariateDistribution::set_gamma(const double& gamma)
    {
        if (gamma <= 0.) {
            throw lower_bound_error("gamma", gamma, 0., true);
        }
        this->gamma = gamma;
    }

    BetaBinomialDistribution::BetaBinomialDistribution()
    {
        this->kappa = 1;
    }

    BetaBinomialDistribution::BetaBinomialDistribution(const unsigned int& kappa, const double& alpha, const double& gamma)
    { 
        this->set_alpha(alpha);
        this->set_gamma(gamma);
        this->set_kappa(kappa);
    }

    BetaBinomialDistribution::BetaBinomialDistribution(const BetaBinomialDistribution& binomial) : PolymorphicCopy< BetaBinomialDistribution, BetaCompoundDiscreteUnivariateDistribution >(binomial)
    {
        this->kappa = binomial.kappa;
    }

    BetaBinomialDistribution::~BetaBinomialDistribution()
    {}

    unsigned int BetaBinomialDistribution::get_nb_parameters() const
    {
        return 1 + BetaCompoundDiscreteUnivariateDistribution::get_nb_parameters();
    }

    const unsigned int& BetaBinomialDistribution::get_kappa() const
    {
        return this->kappa;
    }

    void BetaBinomialDistribution::set_kappa(const unsigned int& kappa)
    {
        this->kappa = kappa;
    }

    double BetaBinomialDistribution::ldf(const int& value) const
    {
        double p;
        if (value < 0) {
            p = -1 * std::numeric_limits< double >::infinity();
        } else {
            try { 
                p = boost::math::lgamma(this->kappa + 1)
                    - boost::math::lgamma(value + 1) - boost::math::lgamma(this->kappa - value + 1)
                    + boost::math::lgamma(this->alpha + value) + boost::math::lgamma(this->kappa - value + this->gamma) + boost::math::lgamma(this->alpha + this->gamma)
                    - boost::math::lgamma(this->alpha + this->gamma + this->kappa) - boost::math::lgamma(this->alpha) - boost::math::lgamma(this->gamma); 
            } catch (const std::exception& error) {
                p = std::numeric_limits< double >::quiet_NaN();
            }
        }
        return p;
    }
    
    double BetaBinomialDistribution::pdf(const int& value) const
    {
        double p;
        if (value < 0 || value > this->kappa) {
            p = 0;
        } else {
            try { 
                p = boost::math::tgamma(this->kappa + 1)
                    / (boost::math::tgamma(value + 1) * boost::math::tgamma(this->kappa - value + 1))
                    * boost::math::tgamma(this->alpha + value) * boost::math::tgamma(this->kappa - value + this->gamma) * boost::math::tgamma(this->alpha + this->gamma)
                    / (boost::math::tgamma(this->alpha + this->gamma + this->kappa) * boost::math::tgamma(this->alpha) * boost::math::tgamma(this->gamma)); 
            } catch (const std::exception& error) {
                p = std::numeric_limits< double >::quiet_NaN();
            }
        }
        return p;
    }

    double BetaBinomialDistribution::get_mean() const
    {
        return this->kappa * this->alpha / (this->alpha + this->gamma);
    }

    double BetaBinomialDistribution::get_variance() const
    {
        return this->kappa * this->alpha * this->gamma * (this->kappa + this->alpha + this->gamma) / (pow(this->alpha + this->gamma, 2) * (this->alpha + this->gamma + 1));
    }

    BetaNegativeBinomialDistribution::BetaNegativeBinomialDistribution()
    {
        this->kappa = 1.;
    }

    BetaNegativeBinomialDistribution::BetaNegativeBinomialDistribution(const double& kappa, const double& alpha, const double& gamma)
    {
        set_alpha(alpha);
        set_gamma(gamma);
        set_kappa(kappa);
    }

    BetaNegativeBinomialDistribution::BetaNegativeBinomialDistribution(const BetaNegativeBinomialDistribution& negbinomial) : PolymorphicCopy< BetaNegativeBinomialDistribution, BetaCompoundDiscreteUnivariateDistribution >(negbinomial)
    {
        this->kappa = negbinomial.kappa;
    }

    BetaNegativeBinomialDistribution::~BetaNegativeBinomialDistribution()
    {}

    unsigned int BetaNegativeBinomialDistribution::get_nb_parameters() const
    {
        return 1 + BetaCompoundDiscreteUnivariateDistribution::get_nb_parameters();
    }

    const double& BetaNegativeBinomialDistribution::get_kappa() const
    { return this->kappa; }

    void BetaNegativeBinomialDistribution::set_kappa(const double& kappa)
    {
        if (kappa <= 0.) {
            throw lower_bound_error("kappa", kappa, 0., true);
        }
        this->kappa = kappa;
    }

    double BetaNegativeBinomialDistribution::ldf(const int& value) const
    {
        double p;
        if (value < 0) {
            p = -1 * std::numeric_limits< double >::infinity();
        } else {
            try { 
                p = boost::math::lgamma(value + this->kappa)
                    - boost::math::lgamma(value + 1) - boost::math::lgamma(this->kappa)
                    + boost::math::lgamma(this->alpha + this->kappa) + boost::math::lgamma(this->gamma + value) + boost::math::lgamma(this->alpha + this->gamma)
                    - boost::math::lgamma(this->alpha + this->gamma + this->kappa + value) - boost::math::lgamma(this->alpha) - boost::math::lgamma(this->gamma); 
            } catch (const std::exception& error) {
                p = std::numeric_limits< double >::quiet_NaN();
            }
        }
        return p;
    }
    
    double BetaNegativeBinomialDistribution::pdf(const int& value) const
    {
        double p;
        if (value < 0) {
            p = 0;
        } else {
            try { 
                p = boost::math::tgamma(value + this->kappa)
                    / (boost::math::tgamma(value + 1) * boost::math::tgamma(this->kappa))
                    * boost::math::tgamma(this->alpha + this->kappa) * boost::math::tgamma(this->gamma + value) * boost::math::tgamma(this->alpha + this->gamma)
                    / (boost::math::tgamma(this->alpha + this->gamma + this->kappa + value) * boost::math::tgamma(this->alpha) * boost::math::tgamma(this->gamma)); 
            } catch (const std::exception& error) {
                p = std::numeric_limits< double >::quiet_NaN();
            }
        }
        return p;
    }

    double BetaNegativeBinomialDistribution::get_mean() const
    {
        double mean;
        if (this->alpha > 1.) {
            mean = this->kappa * this->gamma / (this->alpha - 1);
        } else {
            mean = std::numeric_limits< double >::infinity();
        }
        return mean;
    }

    double BetaNegativeBinomialDistribution::get_variance() const
    {
        double variance;
        if (this->alpha > 2) {
            variance = this->kappa * (this->alpha + this->kappa - 1) * this->gamma * (this->alpha + this->gamma - 1) / ((this->alpha - 2) * pow(this->alpha - 1, 2));
        } else {
            variance = std::numeric_limits< double >::infinity();
        }
        return variance;
    }

    double ContinuousUnivariateDistribution::probability(const UnivariateEvent* event, const bool& logarithm) const
    {
        double p;
        if (event) {
            if (event->get_outcome() == outcome_type::CONTINUOUS) {
                switch(event->get_censoring()) {
                    case censoring_type::NONE:
                        {
                            const double& value = static_cast< const ContinuousElementaryEvent* >(event)->get_value();
                            if (logarithm) {
                                p = this->ldf(value);
                            } else {
                                p = this->pdf(value);
                            }
                        }
                        break;
                    case censoring_type::CENSORED:
                        {
                            const std::vector< double >& values = static_cast< const ContinuousCensoredEvent* >(event)->get_values();
                            p = 0.;
                            for (std::vector< double >::const_iterator it = values.cbegin(), it_end = values.cend(); it != it_end; ++it) {
                                p += this->pdf(*it);
                            }
                            if (logarithm) {
                                p = log(p);
                            }
                        }
                        break;
                    case censoring_type::LEFT:
                        {
                            const double& upper_bound = static_cast< const ContinuousLeftCensoredEvent* >(event)->get_upper_bound();
                            p = this->cdf(upper_bound);
                            if (logarithm) {
                                p = log(p);
                            }
                        }
                        break;
                    case censoring_type::RIGHT:
                        {
                            const double& lower_bound = static_cast< const ContinuousRightCensoredEvent* >(event)->get_lower_bound();
                            p = 1 - this->cdf(lower_bound);
                            if (logarithm) {
                                p = log(p);
                            }
                        }
                        break;
                    case censoring_type::INTERVAL:
                        {
                            const ContinuousIntervalCensoredEvent* cevent = static_cast< const ContinuousIntervalCensoredEvent* >(event);
                            const double& lower_bound = cevent->get_lower_bound(), upper_bound = cevent->get_lower_bound();
                            p = this->cdf(upper_bound) - this->cdf(lower_bound);
                            if (logarithm) {
                                p = log(p);
                            }
                        }
                        break;
                    default:
                        if (logarithm) {
                            p = -1 * std::numeric_limits< double >::infinity();
                        } else {
                            p = 0;
                        }
                        break;
                }
            } else if (logarithm) {
                p = -1 * std::numeric_limits< double >::infinity();
            } else {
                p = 0;
            }
        }
        else if (logarithm) {
            p = 0;
        } else {
            p = 1.;
        }
        return p;
    }

    NormalDistribution::NormalDistribution() 
    {
        this->mu = 0.;
        this->sigma = 1.;
    }

    NormalDistribution::NormalDistribution(const double& mu, const double& sigma) 
    {
        this->mu = mu;
        this->sigma = sigma;
    }

    NormalDistribution::NormalDistribution(const NormalDistribution& normal)
    {
        this->mu = normal.mu;
        this->sigma = normal.sigma;
    }

    unsigned int NormalDistribution::get_nb_parameters() const
    {
        return 2;
    }

    const double& NormalDistribution::get_mu() const
    { return this->mu; }

    void NormalDistribution::set_mu(const double& mu)
    { 
        throw parameter_error("mu", "always");
        this->mu = mu;
    }

    const double& NormalDistribution::get_sigma() const
    { return this->sigma; }

    void NormalDistribution::set_sigma(const double& sigma)
    {
        if (sigma <= 0.)
        { throw lower_bound_error("sigma", sigma, 0., true); }
        this->sigma = sigma;
    }

    // double NormalDistribution::ldf(const double& value) const
    // { return - 1 / 2. * (pow((value - _mu) / _sigma, 2) + log(pow(_sigma, 2)) + log(2 * boost::math::constants::pi< double >())); }

    // double NormalDistribution::pdf(const double& value) const
    // { return exp(ldf(value)); }

    // double NormalDistribution::cdf(const double& value) const
    // { return 0.5 * erfc( (_mu - value) / (_sigma * boost::math::constants::root_two<double>()  )); }

    // double NormalDistribution::quantile(const double& p) const
    // { return _mu - _sigma * boost::math::constants::root_two<double>() * boost::math::erfc_inv(2 * p); 


    double NormalDistribution::ldf(const double& value) const
    { return log(this->pdf(value)); }

    double NormalDistribution::pdf(const double& value) const
    { 
        boost::math::normal dist(this->mu, this->sigma);
        return boost::math::pdf(dist, value); 
    }

    double NormalDistribution::cdf(const double& value) const
    { 
        boost::math::normal dist(this->mu, this->sigma);
        return boost::math::cdf(dist, value); 
    }

    double NormalDistribution::quantile(const double& p) const
    { 
        boost::math::normal dist(this->mu, this->sigma);
        return boost::math::quantile(dist, p); 
    }

    std::unique_ptr< UnivariateEvent > NormalDistribution::simulate() const
    {
        boost::normal_distribution<> dist(this->mu, this->sigma);
        boost::variate_generator<boost::mt19937&, boost::normal_distribution<> > simulator(__impl::get_random_generator(), dist);
        return std::make_unique< ContinuousElementaryEvent >(simulator());
    }

    double NormalDistribution::get_mean() const
    {
        return this->mu;
    }

    double NormalDistribution::get_variance() const
    {
        return pow(this->sigma, 2);
    }

    UnivariateHistogramDistribution::UnivariateHistogramDistribution(const std::set<double>& bins, const std::vector<double>& densities)
    {
        assert(bins.size() > 1);
        assert(bins.size() == densities.size()+1);
        this->bins = bins;
        this->densities = densities;
        this->normalize();
    }

    UnivariateHistogramDistribution::UnivariateHistogramDistribution(const UnivariateHistogramDistribution& histogram)
    {
        this->bins = histogram.bins;
        this->densities = histogram.densities;
    }

    UnivariateHistogramDistribution::~UnivariateHistogramDistribution()
    {}

    unsigned int UnivariateHistogramDistribution::get_nb_parameters() const
    {
        return this->densities.size();
    }

    const std::set<double>& UnivariateHistogramDistribution::get_bins() const
    {
        return this->bins;
    }

    const std::vector<double>& UnivariateHistogramDistribution::get_densities() const
    {
        return this->densities;
    }

    double UnivariateHistogramDistribution::ldf(const double& value) const
    {
        return log(this->pdf(value));
    }

    double UnivariateHistogramDistribution::pdf(const double& value) const
    {
        double p;
        if (value > *(this->bins.rbegin()) || value < *(this->bins.begin())) {
            p = 0;
        } else {
            std::set<double>::const_iterator it = this->bins.upper_bound(value);
            if (it == this->bins.end()) {
                p = this->densities.back();
            } else {
                --it;
                p = this->densities[distance(this->bins.begin(), it)];
            }
        }
        return p;
    }

    double UnivariateHistogramDistribution::cdf(const double& value) const
    {
        double cp;
        if (value <= (*this->bins.begin())) {
            cp = 0.;
        } else {
            cp = 0.;
            std::set<double>::const_iterator it = this->bins.upper_bound(value);
            std::set<double>::const_iterator itl = this->bins.begin();
            std::set<double>::const_iterator itu = itl;
            ++itu;
            while(itu != it)
            {
                cp += this->densities[distance(this->bins.begin(), itl)] * (*itu - *itl);
                ++itl;
                ++itu;
            }
            cp += (value - *itl) * this->densities[distance(this->bins.begin(), itl)];
        }
        return std::min(cp, 1.);
    }

    double UnivariateHistogramDistribution::quantile(const double& p) const
    {
        double q;
        if (p >= 1.) {
            q = *(this->bins.rbegin());
        } else if (p <= 0.) {
            q = *(this->bins.begin());
        } else {
            std::set<double>::const_iterator itl = this->bins.begin(), itu;
            itu = itl;
            ++itu;
            double cum = 0;
            while (distance(this->bins.begin(), itl) < this->densities.size() && cum < p) {
                cum += this->densities[distance(this->bins.begin(), itl)] * (*itu - *itl);
                if (cum < p) {
                    ++itl;
                    ++itu;
                }
            }
            if (distance(this->bins.begin(), itl) == this->densities.size()) {
                q = (*this->bins.rbegin());
            } else {
                cum -= this->densities[distance(this->bins.begin(), itl)] * (*itu - *itl);
                q = *itl + (p - cum) / this->densities[distance(this->bins.begin(), itl)];
            }
        }
        return q;
    }

    std::unique_ptr< UnivariateEvent > UnivariateHistogramDistribution::simulate() const
    {
        return std::make_unique< ContinuousElementaryEvent >(quantile(boost::uniform_01<boost::mt19937&>(__impl::get_random_generator())()));
    }

    double UnivariateHistogramDistribution::get_mean() const
    {
        double mean = 0.;
        std::set<double>::const_iterator itl = this->bins.begin();
        std::set<double>::const_iterator itu = itl;
        ++itl;
        while (itu != this->bins.end()) {
            mean += (*itl + (*itu - *itl) / 2.) * this->densities[distance(this->bins.begin(), itl)];
            ++itl;
            ++itu;
        }
        return mean;
    }

    double UnivariateHistogramDistribution::get_variance() const
    {
        double mean = this->get_mean(), variance = 0.;
        std::set<double>::const_iterator itl = this->bins.begin();
        std::set<double>::const_iterator itu = itl;
        ++itl;
        while (itu != this->bins.end()) {
            variance += pow((*itl + (*itu - *itl) / 2.) - mean, 2) * this->densities[distance(this->bins.begin(), itl)];
            ++itl;
            ++itu;
        }
        return variance;
    }

    void UnivariateHistogramDistribution::normalize()
    {
        double sum = 0.;
        std::set<double>::const_iterator itl = this->bins.begin();
        std::set<double>::const_iterator itu = itl;
        ++itu;
        while (itu != this->bins.end()) { 
            sum += (*itu - *itl) * this->densities[distance(this->bins.begin(), itl)];
            ++itl;
            ++itu;
        }
        if (sum != 1.) { 
            for(unsigned int i = 0; i < this->densities.size(); ++i) {
                this->densities[i] /= sum;
            }
        }
    }

    LogisticDistribution::LogisticDistribution() 
    {
        this->mu = 0.;
        this->sigma = 1.;
    }

    LogisticDistribution::LogisticDistribution(const double& mu, const double& sigma) 
    {
        this->mu = mu;
        this->sigma = sigma;
    }

    LogisticDistribution::LogisticDistribution(const LogisticDistribution& logistic)
    {
        this->mu = logistic.mu;
        this->sigma = logistic.sigma;
    }

    unsigned int LogisticDistribution::get_nb_parameters() const
    {
        return 2;
    }

    const double& LogisticDistribution::get_mu() const
    {
        return this->mu;
    }

    void LogisticDistribution::set_mu(const double& mu)
    {
        this->mu = mu;
    }

    const double& LogisticDistribution::get_sigma() const
    {
        return this->sigma;
    }

    void LogisticDistribution::set_sigma(const double& sigma)
    {
        if (sigma <= 0.) {
            throw lower_bound_error("sigma", sigma, 0., true);
        }
        this->sigma = sigma;
    }

    // double LogisticDistribution::ldf(const double& value) const
    // { return -2*log(cosh(0.5 * (value - _mu) / _sigma)) - log(4 * _sigma); }//(_mu-value)/_sigma - log(sigma) - 2*log(1+exp((_mu-value)/_sigma )); }

    // double LogisticDistribution::pdf(const double& value) const
    // { return  1/ (4. * _sigma * pow(cosh(0.5 * (value - _mu) / _sigma), 2) ); }

    // double LogisticDistribution::cdf(const double& value) const
    // { return 0.5 * (1 + tanh(0.5 * (value - _mu) / _sigma)); }

    // double LogisticDistribution::quantile(const double& p) const
    // { return _mu - _sigma * log(1 / p - 1); }

    double LogisticDistribution::ldf(const double& value) const
    { return log(this->pdf(value)); }

    double LogisticDistribution::pdf(const double& value) const
    { 
        boost::math::logistic dist(this->mu, this->sigma);
        return boost::math::pdf(dist, value); 
    }

    double LogisticDistribution::cdf(const double& value) const
    { 
        boost::math::logistic dist(this->mu, this->sigma);
        return boost::math::cdf(dist, value); 
    }

    double LogisticDistribution::quantile(const double& p) const
    { 
        boost::math::logistic dist(this->mu, this->sigma);
        return boost::math::quantile(dist, p); 
    }

    std::unique_ptr< UnivariateEvent > LogisticDistribution::simulate() const
    {       
        boost::uniform_01<> dist;
        boost::variate_generator<boost::mt19937&, boost::uniform_01<> > simulator(__impl::get_random_generator(), dist);
        return std::make_unique< ContinuousElementaryEvent >(this->quantile(simulator()));
    }

    double LogisticDistribution::get_mean() const
    {
        return this->mu;
    }

    double LogisticDistribution::get_variance() const
    { 
        return pow(this->sigma * boost::math::constants::pi<double>() , 2) / 3.;
    }
    
    
    LaplaceDistribution::LaplaceDistribution() 
    {
        this->mu = 0.;
        this->sigma = 1.;
    }

    LaplaceDistribution::LaplaceDistribution(const double& mu, const double& sigma) 
    {
        this->mu = mu;
        this->sigma = sigma;
    }

    LaplaceDistribution::LaplaceDistribution(const LaplaceDistribution& laplace)
    {
        this->mu = laplace.mu;
        this->sigma = laplace.sigma;
    }

    unsigned int LaplaceDistribution::get_nb_parameters() const
    {
        return 2;
    }

    const double& LaplaceDistribution::get_mu() const
    {
        return this->mu;
    }

    void LaplaceDistribution::set_mu(const double& mu)
    {
        this->mu = mu;
    }

    const double& LaplaceDistribution::get_sigma() const
    {
        return this->sigma;
    }

    void LaplaceDistribution::set_sigma(const double& sigma)
    {
        if (sigma <= 0.)
        { throw lower_bound_error("sigma", sigma, 0., true); }
        this->sigma = sigma;
    }

    // double LaplaceDistribution::ldf(const double& value) const
    // { return -fabs(value-_mu) / _sigma - log(2*_sigma); }
    
    // double LaplaceDistribution::pdf(const double& value) const
    // { return  exp(-fabs(value-_mu) / _sigma) / (2*_sigma); }

    // double LaplaceDistribution::cdf(const double& value) const
    // {
    // 	if (value < _mu)
    // 	{ return 0.5 * exp( (value - _mu) / _sigma); } 
    // 	else
    // 	{ return 1 - 0.5 * exp( (_mu - value) / _sigma); }
    // }

    // double LaplaceDistribution::quantile(const double& p) const
    // {
    // 	if (p < 0.5)
    // 	{ return _mu + _sigma * log(2*p); } 
    // 	else
    // 	{ return _mu - _sigma * log(2-2*p); }
    // }

    double LaplaceDistribution::ldf(const double& value) const
    {
        return log(this->pdf(value));
    }

    double LaplaceDistribution::pdf(const double& value) const
    { 
        boost::math::laplace dist(this->mu, this->sigma);
        return boost::math::pdf(dist, value); 
    }

    double LaplaceDistribution::cdf(const double& value) const
    { 
        boost::math::laplace dist(this->mu, this->sigma);
        return boost::math::cdf(dist, value); 
    }

    double LaplaceDistribution::quantile(const double& p) const
    { 
        boost::math::laplace dist(this->mu, this->sigma);
        return boost::math::quantile(dist, p); 
    }

    std::unique_ptr< UnivariateEvent > LaplaceDistribution::simulate() const
    {        
        boost::uniform_01<> dist;
        boost::variate_generator<boost::mt19937&, boost::uniform_01<> > simulator(__impl::get_random_generator(), dist);
        return std::make_unique< ContinuousElementaryEvent >(this->quantile(simulator()));
    }

    double LaplaceDistribution::get_mean() const
    {
        return this->mu;
    }

    double LaplaceDistribution::get_variance() const
    {
        return 2 * pow(this->sigma, 2);
    }
    
    CauchyDistribution::CauchyDistribution() 
    {
        this->mu = 0.;
        this->sigma = 1.;
    }

    CauchyDistribution::CauchyDistribution(const double& mu, const double& sigma) 
    {
        this->mu = mu;
        this->sigma = sigma;
    }

    CauchyDistribution::CauchyDistribution(const CauchyDistribution& cauchy)
    {
        this->mu = cauchy.mu;
        this->sigma = cauchy.sigma;
    }

    unsigned int CauchyDistribution::get_nb_parameters() const
    {
        return 2;
    }

    const double& CauchyDistribution::get_mu() const
    {
        return this->mu;
    }

    void CauchyDistribution::set_mu(const double& mu)
    {
        this->mu = mu;
    }

    const double& CauchyDistribution::get_sigma() const
    {
        return this->sigma;
    }

    void CauchyDistribution::set_sigma(const double& sigma)
    {
        if (sigma <= 0.) {
            throw lower_bound_error("sigma", sigma, 0., true);
        }
        this->sigma = sigma;
    }

    double CauchyDistribution::ldf(const double& value) const
    {
        return - log( boost::math::constants::pi<double>() * this->sigma) - log( 1 +  pow( (value - this->mu) / this->sigma, 2) );
    }
    
    double CauchyDistribution::pdf(const double& value) const
    {
        return 1/(boost::math::constants::pi<double>() * this->sigma * (1 +  pow( (value - this->mu) / this->sigma, 2) ) ) ;
    }

    double CauchyDistribution::cdf(const double& value) const
    {
        return 0.5 + atan((value - this->mu) / this->sigma)/boost::math::constants::pi<double>();
    }

    double CauchyDistribution::quantile(const double& p) const
    {
        return this->mu + this->sigma * tan(boost::math::constants::pi<double>() * (p - 0.5) );
    }

    std::unique_ptr< UnivariateEvent > CauchyDistribution::simulate() const
    {        
        boost::uniform_01<> dist;
        boost::variate_generator<boost::mt19937&, boost::uniform_01<> > simulator(__impl::get_random_generator(), dist);
        return std::make_unique< ContinuousElementaryEvent >(this->quantile(simulator()));
    }

    double CauchyDistribution::get_mean() const
    {
        return std::numeric_limits< double >::quiet_NaN();
    }

    double CauchyDistribution::get_variance() const
    {
        return std::numeric_limits< double >::quiet_NaN();
    }

    StudentDistribution::StudentDistribution() 
    {
        this->nu = 1.;
    }

    StudentDistribution::StudentDistribution(const double& nu) 
    {
        this->nu = nu;
    }

    StudentDistribution::StudentDistribution(const StudentDistribution& student)
    {
        this->nu = student.nu;
    }

    unsigned int StudentDistribution::get_nb_parameters() const
    {
        return 1;
    }
    
    const double& StudentDistribution::get_nu() const
    {
        return this->nu;
    }

    void StudentDistribution::set_nu(const double& nu)
    {
        if (nu <= 0.) {
            throw lower_bound_error("nu", nu, 0., true);
        }
        this->nu = nu;
    }    

    // double StudentDistribution::ldf(const double& value) const
    // { return (1+_nu) * 0.5 * ( log(_nu) - log(_nu + pow(value, 2) )  ) - 0.5*log(_nu) - log( boost::math::beta(_nu*0.5, 0.5) ); }
    
    // double StudentDistribution::pdf(const double& value) const
    // { return pow( _nu/(_nu + pow(value, 2)) , (1+_nu) * 0.5 ) / ( pow(_nu,0.5) * boost::math::beta(_nu*0.5, 0.5) ); }

    // double StudentDistribution::cdf(const double& value) const
    // {
    //     double z;
    //     if (_nu < 2 * pow(value, 2) )
    //     { z = boost::math::ibeta(_nu * 0.5, 0.5, _nu / (_nu + pow(value, 2))) * 0.5; }
    //     else
    //     { z = boost::math::ibetac(0.5, _nu * 0.5, pow(value, 2) / (_nu + pow(value, 2))) * 0.5; }
    //     if (value > 0)
    //     { return 1-z; }
    //     else
    //     {return z; }
    // }

    // double StudentDistribution::quantile(const double& p) const
    // {
    //     double x, q;
    //     if (p < 0.5)
    //     { 
    //         x = boost::math::ibeta_inv(_nu*0.5, 0.5, 2*p);
    //         q = -pow(_nu*(1-x)/x, 0.5); 
    //     }
    //     else if (p >= 0.5)
    //     { 
    //         x = boost::math::ibeta_inv(_nu*0.5, 0.5, 2*(1-p));
    //         q = pow(_nu*(1-x)/x, 0.5); 
    //     }
    //     return q;         
    // }

    double StudentDistribution::ldf(const double& value) const
    {
        return log(this->pdf(value));
    }

    double StudentDistribution::pdf(const double& value) const
    { 
        boost::math::students_t dist(this->nu);
        return boost::math::pdf(dist, value); 
    }

    double StudentDistribution::cdf(const double& value) const
    { 
        boost::math::students_t dist(this->nu);
        return boost::math::cdf(dist, value); 
    }

    double StudentDistribution::quantile(const double& p) const
    { 
        boost::math::students_t dist(this->nu);
        return boost::math::quantile(dist, p); 
    }

    std::unique_ptr< UnivariateEvent > StudentDistribution::simulate() const
    {        
        boost::uniform_01<> dist;
        boost::variate_generator<boost::mt19937&, boost::uniform_01<> > simulator(__impl::get_random_generator(), dist);
        return std::make_unique< ContinuousElementaryEvent >(this->quantile(simulator()));
    }

    double StudentDistribution::get_mean() const
    {
        if (this->nu > 1.) {
            return 0.;
        } else {
            return std::numeric_limits< double >::quiet_NaN();
        }
    }

    double StudentDistribution::get_variance() const
    {
        if (this->nu>2.) {
            return this->nu / (this->nu - 2.);
        }
        else if (this->nu > 1.) {
            return std::numeric_limits< double >::infinity();
        } else {
            return std::numeric_limits< double >::quiet_NaN();
        }
    }

    NonStandardStudentDistribution::NonStandardStudentDistribution() : StudentDistribution()
    {
        this->mu = 0.;
        this->sigma = 1.;
    }

    NonStandardStudentDistribution::NonStandardStudentDistribution(const double& mu, const double& sigma, const double& nu) : StudentDistribution(nu)
    {
        this->mu = mu;
        this->sigma = sigma;
    }

    NonStandardStudentDistribution::NonStandardStudentDistribution(const NonStandardStudentDistribution& nsstudent) : StudentDistribution(nsstudent)
    {
        this->mu = nsstudent.mu;
        this->sigma = nsstudent.sigma;
    }

    unsigned int NonStandardStudentDistribution::get_nb_parameters() const
    {
        return 3;
    }

    const double& NonStandardStudentDistribution::get_mu() const
    {
        return this->mu;
    }

    void NonStandardStudentDistribution::set_mu(const double& mu)
    {
        this->mu = mu;
    }

    const double& NonStandardStudentDistribution::get_sigma() const
    {
        return this->sigma;
    }

    void NonStandardStudentDistribution::set_sigma(const double& sigma)
    {
        if (sigma <= 0.) {
            throw lower_bound_error("sigma", sigma, 0., true);
        }
        this->sigma = sigma;
    }    

    double NonStandardStudentDistribution::ldf(const double& value) const
    {
        return log(this->pdf(value));
    }
    
    double NonStandardStudentDistribution::pdf(const double& value) const
    {
        return StudentDistribution::pdf((value - this->mu) / this->sigma) / this->sigma;
    }

    double NonStandardStudentDistribution::cdf(const double& value) const
    {
        return StudentDistribution::cdf((value - this->mu) / this->sigma);
    }

    double NonStandardStudentDistribution::quantile(const double& p) const
    {
        return this->mu + this->sigma * StudentDistribution::quantile(p);
    }

    std::unique_ptr< UnivariateEvent > NonStandardStudentDistribution::simulate() const
    {        
        boost::uniform_01<> dist;
        boost::variate_generator<boost::mt19937&, boost::uniform_01<> > simulator(__impl::get_random_generator(), dist);
        return std::make_unique< ContinuousElementaryEvent >(this->quantile(simulator()));
    }

    double NonStandardStudentDistribution::get_mean() const
    {
        return this->mu + this->sigma * StudentDistribution::get_mean();
    }

    double NonStandardStudentDistribution::get_variance() const
    { 
        return pow(this->sigma, 2) * StudentDistribution::get_variance(); 
    }

 

    GumbelDistribution::GumbelDistribution() 
    {
        this->mu = 0.;
        this->sigma = 1.;
    }

    GumbelDistribution::GumbelDistribution(const double& mu, const double& sigma) 
    {
        this->mu = mu;
        this->sigma = sigma;
    }

    GumbelDistribution::GumbelDistribution(const GumbelDistribution& gumbel_max)
    {
        this->mu = gumbel_max.mu;
        this->sigma = gumbel_max.sigma;
    }

    unsigned int GumbelDistribution::get_nb_parameters() const
    {
        return 2;
    }

    const double& GumbelDistribution::get_mu() const
    {
        return this->mu;
    }

    void GumbelDistribution::set_mu(const double& mu)
    { this->mu = mu; }

    const double& GumbelDistribution::get_sigma() const
    {
        return this->sigma;
    }

    void GumbelDistribution::set_sigma(const double& sigma)
    {
        if (sigma <= 0.) {
            throw lower_bound_error("sigma", sigma, 0., true);
        }
        this->sigma = sigma;
    }

    // double GumbelDistribution::ldf(const double& value) const
    // { return (_mu - value) / _sigma - exp((_mu - value) / _sigma) - log(_sigma); }
    
    // double GumbelDistribution::pdf(const double& value) const
    // { return exp( (_mu - value) / _sigma - exp((_mu - value) / _sigma) ) / _sigma ; }

    // double GumbelDistribution::cdf(const double& value) const
    // { return  exp( - exp((_mu - value) / _sigma) ); }

    // double GumbelDistribution::quantile(const double& p) const
    // { return _mu - _sigma * log( -log(p) ); }

    double GumbelDistribution::ldf(const double& value) const
    {
        return log(this->pdf(value));
    }

    double GumbelDistribution::pdf(const double& value) const
    { 
        boost::math::extreme_value dist(this->mu, this->sigma);
        return boost::math::pdf(dist, value); 
    }

    double GumbelDistribution::cdf(const double& value) const
    { 
        boost::math::extreme_value dist(this->mu, this->sigma);
        return boost::math::cdf(dist, value); 
    }

    double GumbelDistribution::quantile(const double& p) const
    { 
        boost::math::extreme_value dist(this->mu, this->sigma);
        return boost::math::quantile(dist, p); 
    }

    std::unique_ptr< UnivariateEvent > GumbelDistribution::simulate() const
    {        
        boost::uniform_01<> dist;
        boost::variate_generator<boost::mt19937&, boost::uniform_01<> > simulator(__impl::get_random_generator(), dist);
        return std::make_unique< ContinuousElementaryEvent >(this->quantile(simulator()));
    }

    double GumbelDistribution::get_mean() const
    {
        return this->mu + this->sigma * boost::math::constants::euler<double>();
    }

    double GumbelDistribution::get_variance() const
    {
        return pow(this->sigma *  boost::math::constants::pi<double>(), 2) / 6.;
    }
    
    GompertzDistribution::GompertzDistribution() 
    {
        this->mu = 0.;
        this->sigma = 1.;
    }

    GompertzDistribution::GompertzDistribution(const double& mu, const double& sigma) 
    {
        this->mu = mu;
        this->sigma = sigma;
    }

    GompertzDistribution::GompertzDistribution(const GompertzDistribution& gumbel_min)
    {
        this->mu = gumbel_min.mu;
        this->sigma = gumbel_min.sigma;
    }

    unsigned int GompertzDistribution::get_nb_parameters() const
    {
        return 2;
    }

    const double& GompertzDistribution::get_mu() const
    {
        return this->mu;
    }

    void GompertzDistribution::set_mu(const double& mu)
    {
        this->mu = mu;
    }

    const double& GompertzDistribution::get_sigma() const
    {
        return this->sigma;
    }

    void GompertzDistribution::set_sigma(const double& sigma)
    {
        if (sigma <= 0.) {
            throw lower_bound_error("sigma", sigma, 0., true);
        }
        this->sigma = sigma;
    }

    double GompertzDistribution::ldf(const double& value) const
    {
        return (value - this->mu) / this->sigma - exp((value - this->mu) / this->sigma) - log(this->sigma);
    }
    
    double GompertzDistribution::pdf(const double& value) const
    {
        return exp( (value - this->mu)/ this->sigma - exp((value - this->mu)/ this->sigma) ) / this->sigma;
    }

    double GompertzDistribution::cdf(const double& value) const
    {
        return  1 - exp(-exp((value - this->mu) / this->sigma));
    }

    double GompertzDistribution::quantile(const double& p) const
    {
        return this->mu + this->sigma * log(-log(1 - p));
    }

    std::unique_ptr< UnivariateEvent > GompertzDistribution::simulate() const
    {        
        boost::uniform_01<> dist;
        boost::variate_generator<boost::mt19937&, boost::uniform_01<> > simulator(__impl::get_random_generator(), dist);
        return std::make_unique< ContinuousElementaryEvent >(this->quantile(simulator()));
    }

    double GompertzDistribution::get_mean() const
    {
        return this->mu - this->sigma * boost::math::constants::euler<double>();
    }

    double GompertzDistribution::get_variance() const
    {
        return pow(this->sigma *  boost::math::constants::pi<double>(), 2) / 6.;
    }
     
    ExponentialDistribution::ExponentialDistribution()
    {
        this->lambda = 1.;
    }

    ExponentialDistribution::ExponentialDistribution(const double& lambda)
    {
        this->set_lambda(lambda);
    }

    ExponentialDistribution::ExponentialDistribution(const ExponentialDistribution& exponential)
    {
        this->lambda = exponential.lambda;
    }

    ExponentialDistribution::~ExponentialDistribution()
    {}

    unsigned int ExponentialDistribution::get_nb_parameters() const
    {
        return 1;
    }

    const double& ExponentialDistribution::get_lambda() const
    {
        return this->lambda;
    }

    void ExponentialDistribution::set_lambda(const double& lambda)
    {
        if (lambda <= 0.) {
            throw lower_bound_error("lambda", lambda, 0., true);
        } 
        this->lambda = lambda;
    }

    double ExponentialDistribution::ldf(const double& value) const
    { 
        double l;
        if (value <= 0.) {
            l = -1 * std::numeric_limits< double >::infinity();
        } else {
            l = log(this->lambda) - this->lambda * value;
        }
        return l;
    }

    double ExponentialDistribution::pdf(const double& value) const
    { 
        double p;
        if (value <= 0.) {
            p = 0.;
        } else {
            p = this->lambda * exp(-this->lambda * value);
        }
        return p;
    }

    double ExponentialDistribution::cdf(const double& value) const
    {
        double c;
        if (value <= 0.) {
            c = 0.;
        } else {
            c = 1 - exp(-this->lambda * value);
        }
        return c;
    }

    double ExponentialDistribution::quantile(const double& p) const
    {
        return -log(1 - p)/this->lambda;
    }

    std::unique_ptr< UnivariateEvent > ExponentialDistribution::simulate() const
    {
        boost::uniform_01<> dist;
        boost::variate_generator<boost::mt19937&, boost::uniform_01<> > simulator(__impl::get_random_generator(), dist);
        return std::make_unique< ContinuousElementaryEvent >(this->quantile(simulator()));
    }

    double ExponentialDistribution::get_mean() const
    {
        return 1 / this->lambda;
    }

    double ExponentialDistribution::get_variance() const
    {
        return 1 / pow(this->lambda, 2);
    }

    GammaDistribution::GammaDistribution()
    {
        this->alpha = 1.;
        this->beta = 1.;
    }

    GammaDistribution::GammaDistribution(const double& alpha, const double& beta)
    {
        this->set_alpha(alpha);
        this->set_beta(beta);
    }

    GammaDistribution::GammaDistribution(const GammaDistribution& gamma)
    {
        this->alpha = gamma.alpha;
        this->beta = gamma.beta;
    }

    GammaDistribution::~GammaDistribution()
    {}

    unsigned int GammaDistribution::get_nb_parameters() const
    {
        unsigned int nb_parameters = 2;
        if (this->alpha == 1.) {
            --nb_parameters;
        }
        return nb_parameters;
    }

    const double& GammaDistribution::get_alpha() const
    {
        return this->alpha;
    }

    void GammaDistribution::set_alpha(const double& alpha)
    {
        if (alpha <= 0.) {
            throw lower_bound_error("alpha", alpha, 0., true);
        } 
        this->alpha = alpha;
    }

    const double& GammaDistribution::get_beta() const
    {
        return this->beta;
    }

    void GammaDistribution::set_beta(const double& beta)
    {
        if (beta <= 0.) {
            throw lower_bound_error("beta", beta, 0., true);
        } 
        this->beta = beta;
    }

    double GammaDistribution::ldf(const double& value) const
    { 
        double p;
        if (value <= 0.) {
            p = 0.;
        } else {
            p = this->alpha * log(this->beta) + (this->alpha - 1) * log(value) - this->beta * value - boost::math::lgamma(this->alpha);
        }
        return p;
    }

    double GammaDistribution::pdf(const double& value) const
    { 
        double p;
        if (value <= 0.) {
            p = 0.;
        } else {
            p = (pow(this->beta, this->alpha) * pow(value, this->alpha - 1) * exp(- this->beta * value)) / boost::math::tgamma(this->alpha);
        }
        return p;
    }

    double GammaDistribution::cdf(const double& value) const
    {
        double p;
        if (value <= 0.) {
            p = 0.;
        } else {
            p = boost::math::gamma_p(this->alpha, this->beta * value);
        }
        return p;
    }

    double GammaDistribution::quantile(const double& p) const
    {
        return boost::math::gamma_p_inv(this->alpha, p) / this->beta;
    }

    std::unique_ptr< UnivariateEvent > GammaDistribution::simulate() const
    {
        boost::random::gamma_distribution<> dist(this->alpha, 1 / this->beta);
        boost::variate_generator<boost::mt19937&, boost::random::gamma_distribution<> > simulator(__impl::get_random_generator(), dist);
        return std::make_unique< ContinuousElementaryEvent >(simulator());
    }

    double GammaDistribution::get_mean() const
    {
        return this->alpha / this->beta;
    }

    double GammaDistribution::get_variance() const
    {
        return this->alpha / pow(this->beta, 2);
    }

    BetaDistribution::BetaDistribution()
    {
        this->alpha = 1.;
        this->beta = 1.;
    }

    BetaDistribution::BetaDistribution(const double& alpha, const double& beta)
    {
        this->set_alpha(alpha);
        this->set_beta(beta);
    }

    BetaDistribution::BetaDistribution(const BetaDistribution& beta)
    {
        this->alpha = beta.alpha;
        this->beta = beta.beta;
    }

    BetaDistribution::~BetaDistribution()
    {}

    unsigned int BetaDistribution::get_nb_parameters() const
    {
        return 2;
    }

    const double& BetaDistribution::get_alpha() const
    {
        return this->alpha;
    }

    void BetaDistribution::set_alpha(const double& alpha)
    {
        if (alpha <= 0.) {
            throw lower_bound_error("alpha", alpha, 0., true);
        } 
        this->alpha = alpha;
    }

    const double& BetaDistribution::get_beta() const
    {
        return this->beta;
    }

    void BetaDistribution::set_beta(const double& beta)
    {
        if (beta <= 0.) {
            throw lower_bound_error("beta", beta, 0., true);
        } 
        this->beta = beta;
    }

    double BetaDistribution::ldf(const double& value) const
    { 
        double l;
        if (value < 0. || value > 1.) {
            l = -1 * std::numeric_limits< double >::infinity();
        } else {
            l = boost::math::lgamma(this->alpha + this->beta)
                - boost::math::lgamma(this->alpha)
                - boost::math::lgamma(this->beta)
                + (this->alpha - 1) * log(value)
                + (this->beta - 1) * log(1 - value);
        }
        return l;
    }

    double BetaDistribution::pdf(const double& value) const
    { 
        double p;
        if (value < 0. || value > 1.) {
            p = 0.;
        } else {
            p = boost::math::tgamma(this->alpha + this->beta)
                 / (boost::math::tgamma(this->alpha) * boost::math::tgamma(this->beta))
                 * pow(value, this->alpha - 1)
                 * pow(1 - value, this->beta - 1);
        }
        return p;
    }

    double BetaDistribution::cdf(const double& value) const
    {
        double c;
        if (value < 0.) {
            c = 0.;
        } else {
            if (value > 1.) {
                c = 1.;
            } else {
                c = boost::math::ibeta(this->alpha, this->beta, value);
            } 
        }
        return c;
    }

    double BetaDistribution::quantile(const double& p) const
    {
        return boost::math::ibeta_inv(this->alpha, this->beta, p);
    }

    std::unique_ptr< UnivariateEvent > BetaDistribution::simulate() const
    {
        boost::random::beta_distribution<> dist(this->alpha, this->beta);
        boost::variate_generator<boost::mt19937&, boost::random::beta_distribution<> > simulator(__impl::get_random_generator(), dist);
        return std::make_unique< ContinuousElementaryEvent >(simulator());
    }

    double BetaDistribution::get_mean() const
    {
        return this->alpha / (this->alpha + this->beta);
    }

    double BetaDistribution::get_variance() const
    {
        return this->alpha * this->beta
                / (pow(this->alpha + this->beta, 2) * (this->alpha + this->beta + 1));
    }


    UniformDistribution::UniformDistribution()
    {
        this->alpha = 0.;
        this->beta = 1.;
    }

    UniformDistribution::UniformDistribution(const double& alpha, const double& beta)
    {
        this->set_alpha(alpha);
        this->set_beta(beta);
    }

    UniformDistribution::UniformDistribution(const UniformDistribution& uniform)
    {
        this->alpha = uniform.alpha;
        this->beta = uniform.beta;
    }

    UniformDistribution::~UniformDistribution()
    {}

    unsigned int UniformDistribution::get_nb_parameters() const
    {
        return 2;
    }

    const double& UniformDistribution::get_alpha() const
    {
        return this->alpha;
    }

    void UniformDistribution::set_alpha(const double& alpha)
    {
        this->alpha = alpha;
    }

    const double& UniformDistribution::get_beta() const
    {
        return this->beta;
    }

    void UniformDistribution::set_beta(const double& beta)
    {
        if (beta <= this->alpha) {
            throw lower_bound_error("beta", beta, this->alpha, true);
        } 
        this->beta = beta;
    }

    double UniformDistribution::ldf(const double& value) const
    { 
        double l;
        if (value < this->alpha || value > this->beta) {
            l = -1 * std::numeric_limits< double >::infinity();
        } else {
            l = -log(this->beta - this->alpha);
        }
        return l;
    }

    double UniformDistribution::pdf(const double& value) const
    { 
        double p;
        if (value < this->alpha || value > this->beta) {
            p = 0.;
        } else {
            p = 1 / (this->beta - this->alpha);
        }
        return p;
    }

    double UniformDistribution::cdf(const double& value) const
    {
        double c;
        if (value <= this->alpha) {
            c = 0.;
        } else {
            if (value >= this->beta) {
                c = 1.;
            } else {
                c = (value - this->alpha) / (this->beta - this->alpha);
            }
        }
        return c;
    }

    double UniformDistribution::quantile(const double& p) const
    {
        return this->alpha + p * (this->beta - this->alpha);
    }

    std::unique_ptr< UnivariateEvent > UniformDistribution::simulate() const
    {
        boost::uniform_01<> dist;
        boost::variate_generator<boost::mt19937&, boost::uniform_01<> > simulator(__impl::get_random_generator(), dist);
        return std::make_unique< ContinuousElementaryEvent >(this->alpha + (this->beta - this->alpha) * simulator());
    }

    double UniformDistribution::get_mean() const
    {
        return 0.5 * (this->alpha + this->beta);
    }

    double UniformDistribution::get_variance() const
    {
        return pow(this->beta - this->alpha, 2) / 12.;
    }
    
    // double UnivariateConditionalDistribution::loglikelihood(const UnivariateConditionalData& data) const
    // {
    //     double llh = 0.;
    //     Index index = 0;
    //     std::unique_ptr< UnivariateConditionalData::Generator > generator = data.generator();
    //     while(generator->is_valid() && boost::math::isfinite(llh))
    //     {
    //         ++index;
    //         double weight = generator->weight();
    //         if (weight > 0.)
    //         {
    //             const UnivariateDistribution* distribution = this->operator() (*(generator->explanatories()));
    //             llh += weight * distribution->probability(generator->response(), true);
    //             //std::cout << "weight = " << weight << std::endl;
    //             //std::cout << "proba = " << distribution->probability(generator->response(), true) << std::endl;
    //         }
    //         ++(*generator);
    //     }
    //     return llh;        
    // }

    UnivariateConditionalDistribution::~UnivariateConditionalDistribution()
    {}

    MultivariateDistribution::~MultivariateDistribution()
    {}

    double MultivariateDistribution::loglikelihood(const MultivariateData& data) const
    {
        double llh = 0.;
        std::unique_ptr< MultivariateData::Generator > generator = data.generator();
        while (generator->is_valid() && boost::math::isfinite(llh)) { 
            double weight = generator->get_weight();
            if (weight > 0.) {
                llh += weight * probability(generator.get(), true);
            }
            ++(*generator);
        }
        return llh;
    }

    MultinormalDistribution::MultinormalDistribution(const Eigen::VectorXd& mu, const Eigen::MatrixXd& sigma)
    {
        this->mu = mu;
        this->sigma = sigma;
    }
    
    MultinormalDistribution::MultinormalDistribution(const MultinormalDistribution& normal)
    {
        this->mu = normal.mu;
        this->sigma = normal.sigma;
    }

    MultinormalDistribution::~MultinormalDistribution()
    {}

    Index MultinormalDistribution::get_nb_components() const
    {
        return this->mu.size();
    }

    unsigned int MultinormalDistribution::get_nb_parameters() const
    {
        return this->sigma.size() + this->mu.size();
    }
    
    std::unique_ptr< MultivariateEvent > MultinormalDistribution::simulate() const
    {
        Eigen::VectorXd x(this->get_nb_components());
        boost::normal_distribution<> dist(0.,1.);
        boost::variate_generator<boost::mt19937&, boost::normal_distribution<> > simulator(__impl::get_random_generator(), dist);
        for (Index index = 0, max_index = x.size(); index < max_index; ++index) {
            x(index) = simulator();
        }
        Eigen::LLT<Eigen:: MatrixXd> llt(this->sigma);
        Eigen::MatrixXd B = llt.matrixL();
        x = this->mu + B * x;
        return std::make_unique< VectorEvent >(x);
    }

    const Eigen::VectorXd& MultinormalDistribution::get_mu() const
    {
        return this->mu;
    }

    void MultinormalDistribution::set_mu(const Eigen::VectorXd& mu)
    {
        this->mu = mu;
    }

    const Eigen::MatrixXd& MultinormalDistribution::get_sigma() const
    {
        return this->sigma;
    }

    void MultinormalDistribution::set_sigma(const Eigen::MatrixXd& sigma)
    {
        this->sigma = sigma;
    }

    double MultinormalDistribution::probability(const MultivariateEvent* event, const bool& logarithm) const
    {
        NOT_IMPLEMENTED();
        return 0.;
    }

    DirichletDistribution::DirichletDistribution(const Index& nb_components)
    {
        this->alpha = Eigen::VectorXd::Ones(nb_components + 1);
        this->set_alpha(this->alpha);
    }

    DirichletDistribution::DirichletDistribution(const Eigen::VectorXd& alpha)
    {
        this->set_alpha(this->alpha);
    }
    
    DirichletDistribution::DirichletDistribution(const DirichletDistribution& dirichlet)
    {
        this->alpha = dirichlet.alpha;
    }

    DirichletDistribution::~DirichletDistribution()
    {}

    Index DirichletDistribution::get_nb_components() const
    {
        return this->alpha.size() - 1;
    }

    unsigned int DirichletDistribution::get_nb_parameters() const
    {
        return this->alpha.size();
    }
    
    std::unique_ptr< MultivariateEvent > DirichletDistribution::simulate() const
    {
        Eigen::VectorXd x(get_nb_components());
        double sum = 0.;
        for (Index index = 0, max_index = x.size(); index < max_index; ++index) {
            boost::random::gamma_distribution<> dist(this->alpha(index), 1.);
            boost::variate_generator<boost::mt19937&, boost::random::gamma_distribution<> > simulator(__impl::get_random_generator(), dist);
            x(index) = simulator(); 
            sum += x(index);
        }
        boost::random::gamma_distribution<> dist(this->alpha(this->alpha.size() - 1), 1.);
        boost::variate_generator<boost::mt19937&, boost::random::gamma_distribution<> > simulator(__impl::get_random_generator(), dist);
        sum += simulator();
        x /= sum;
        return std::make_unique< VectorEvent >(x);
    }

    const Eigen::VectorXd& DirichletDistribution::get_alpha() const
    {
        return this->alpha;
    }

    void DirichletDistribution::set_alpha(const Eigen::VectorXd& alpha)
    {
        if (alpha.size() != this->alpha.size() && this->alpha.size() > 0) {
            throw size_error("alpha", alpha.size(), this->alpha.size(), size_error::size_type::equal);
        }
        double sum = 0.;
        for( Index index = 0, max_index = alpha.size(); index < max_index; ++index) {
            if (alpha(index) <= 0.) {
                throw lower_bound_error("alpha", alpha(index), 0., true);
            }
            sum += alpha(index);
        }
        this->constant = 0.;
        for (Index index = 0, max_index = alpha.size(); index < max_index; ++index) {
            this->constant *= boost::math::tgamma(alpha(index));
        }
        this->constant /= boost::math::tgamma(sum);
        this->alpha = alpha;
    }

    double DirichletDistribution::probability(const MultivariateEvent* event, const bool& logarithm) const
    {
        double p;
        if (event) {
            if (event->size() == this->get_nb_parameters()) {
                p = 0.;
                double sum = 0.;
                for(Index index = 0, max_index = event->size(); index < max_index; ++index) {
                    const UnivariateEvent* uevent = event->get_event(index);
                    if (uevent && uevent->get_outcome() == outcome_type::CONTINUOUS && uevent->get_censoring() == censoring_type::NONE) {
                        const double& value = static_cast< const ContinuousElementaryEvent* >(uevent)->get_value();
                        if (value < 1. && value > 0) {
                            sum += value;
                            p += (this->alpha(index) - 1) * log(value);
                        } else {
                            p = -1 * std::numeric_limits< double >::infinity();
                        }
                    } else {
                        p = std::numeric_limits< double >::quiet_NaN();
                    }
                }
                if (boost::math::isfinite(p)) {
                    p += (this->alpha(this->alpha.size() - 1) - 1) * log(1 - sum);
                }
                if (!logarithm)
                { p = exp(p); }
            } else if (logarithm) {
                p = -1 * std::numeric_limits< double >::infinity();
            } else {
                p = 0.;
            }
        } else if (logarithm) {
            p = 0.;
        } else {
            p = 1.;
        }
        return p;
    }

    MultivariateConditionalDistribution::~MultivariateConditionalDistribution()
    {}
}
