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
        while(generator->is_valid() && boost::math::isfinite(llh))
        { 
            double weight = generator->weight();
            if(weight > 0.)
            { llh += weight * probability(generator->event(), true); }
            ++(*generator);
        }
        return llh;
    }

    double CategoricalUnivariateDistribution::probability(const UnivariateEvent* event, const bool& logarithm) const
    {
        double p;
        if(event)
        {
            if(event->get_outcome() == CATEGORICAL)
            {
                switch(event->get_event())
                {
                    case ELEMENTARY:
                        {
                            const std::string& value = static_cast< const CategoricalElementaryEvent* >(event)->get_value();
                            if(logarithm)
                            { p = ldf(value); }
                            else
                            { p = pdf(value); }
                        }
                        break;
                    case CENSORED:
                        {
                            const std::vector< std::string >& values = static_cast< const CategoricalCensoredEvent* >(event)->get_values();
                            p = 0.;
                            for(std::vector< std::string >::const_iterator it = values.cbegin(), it_end = values.cend(); it != it_end; ++it)
                            { p += pdf(*it); }
                            if(logarithm)
                            { p = log(p); }
                        }
                        break;
                    default:
                        if(logarithm)
                        { p = -1 * std::numeric_limits< double >::infinity(); }
                        else
                        { p = 0; }
                        break;
                }
            }
            else if(logarithm)
            { p = -1 * std::numeric_limits< double >::infinity(); }
            else
            { p = 0; }
        }
        else if(logarithm)
        { p = 0; }
        else
        { p = 1.; }
        return p;
    }

    BinaryDistribution::BinaryDistribution()
    {}

    BinaryDistribution::BinaryDistribution(const std::string& value, const std::string& reference_value)
    {
        if(value != reference_value)
        {
            _value = value;
            _reference_value = reference_value;
            _pi = 0.5;
        }
        else
        { throw "value and refrence_value must be different"; } //TODO error
    }

    // BinaryDistribution::BinaryDistribution(const std::set< std::string >& values)
    // {
    //     if(values.size() == 2)
    //     {
    //         _value = *(values.begin());
    //         _reference_value = *(values.end());
    //     }
    //     else
    //     { throw size_error("values", values.size(), 2); }
    // }

    BinaryDistribution::BinaryDistribution(const std::string& value, const std::string& reference_value, const double& pi) : BinaryDistribution(value, reference_value) 
    { set_pi(pi); }

    // BinaryDistribution::BinaryDistribution(const std::set< std::string >& values, const double& pi) : BinaryDistribution(values)
    // { set_pi(pi); }

    BinaryDistribution::BinaryDistribution(const BinaryDistribution& binary)
    {
        _value = binary._value;
        _reference_value = binary._reference_value;
        _pi = binary._pi;
    }

    unsigned int BinaryDistribution::get_nb_parameters() const
    { return 1; }
         
    double BinaryDistribution::ldf(const std::string& value) const
    { return log(pdf(value)); }

    double BinaryDistribution::pdf(const std::string& value) const
    {
        if(value == _value)
        { return _pi; }
        else if(value == _reference_value)
        { return 1-_pi; }
        else
        { throw in_set_error("value", value, get_values()); }
    }
     
    double BinaryDistribution::pdf(const int& position) const
    {
        if(position == 0)
        { return _pi; }
        else if(position == 1)
        { return 1-_pi; }
        else
        { 
            std::set< int > positions;
            positions.insert(0);
            positions.insert(1);
            throw in_set_error("position", position, positions); 
        }        
    }

    std::unique_ptr< UnivariateEvent > BinaryDistribution::simulate() const
    {
        double sp = boost::uniform_01<boost::mt19937&>(__impl::get_random_generator())();
        if(sp < _pi)
        { return std::make_unique< CategoricalElementaryEvent >(_value); }
        else
        { return std::make_unique< CategoricalElementaryEvent >(_reference_value); }
    }

    std::set< std::string > BinaryDistribution::get_values() const
    {
        std::set< std::string > values;
        values.insert(_value);
        values.insert(_reference_value);
        return values;
    }

    double BinaryDistribution::get_pi() const
    { return _pi; }

    void BinaryDistribution::set_pi(const double& pi)
    {
        if(pi >= 0 && pi <= 1)
        { _pi = pi; }
        else
        { throw interval_error("pi", pi, 0, 1, std::make_pair(false, false)); }  
    }

    NominalDistribution::NominalDistribution(const std::set< std::string >& values)
    { init(values); }

    NominalDistribution::NominalDistribution(const std::set< std::string >& values, const Eigen::VectorXd& pi)
    { init(values, pi); }

    NominalDistribution::NominalDistribution(const NominalDistribution& nominal)
    { init(nominal); }

    double NominalDistribution::pdf(const int& position) const
    {  return _pi[position]; }

    OrdinalDistribution::OrdinalDistribution(const std::vector< std::string >& values)
    {
        init(std::set< std::string >(values.cbegin(), values.cend()));
        _rank = std::vector< Index >(_values.size());
        for(Index size = 0, max_size = _values.size(); size < max_size; ++size)
        { _rank[distance(_values.begin(), _values.find(values[size]))] = size; }
    }

    OrdinalDistribution::OrdinalDistribution(const std::vector< std::string >& values, const Eigen::VectorXd& pi)
    {
        init(std::set< std::string >(values.cbegin(), values.cend()), pi);
        _rank = std::vector< Index >(_values.size());
        for(Index size = 0, max_size = _values.size(); size < max_size; ++size)
        { _rank[distance(_values.begin(), _values.find(values[size]))] = size; }
    }

    OrdinalDistribution::OrdinalDistribution(const OrdinalDistribution& ordinal)
    {
        init(ordinal);
        _rank = ordinal._rank;
    }

    double OrdinalDistribution::pdf(const std::string& value) const
    {
        double p;
        std::set< std::string >::const_iterator it = _values.find(value);
        if(it == _values.end())
        { p = 0.; }
        else
        { p = _pi[distance(_values.cbegin(), it)]; }
        return p;
     }

    double OrdinalDistribution::pdf(const int& position) const
    { return _pi[_rank[position]]; }
    
    double OrdinalDistribution::cdf(const std::string& value) const
    {
        // double p = 0.;
        // std::set< std::string >::const_iterator it = _values.find(value);
        // if(it != _values.cend())
        // {
        //     for(Index size = 0, max_size = _rank[distance(_values.cbegin(), it)]; size <= max_size; ++size)
        //     { p += _pi[size]; }
        // }
        // return p;

        Index rank_value = _rank[distance(_values.cbegin(), _values.find(value))];
        if(rank_value == (_rank.size()-1))
        { return 1; }
        else
        {
            double p = 0.;
            for(Index i = 0; i < _rank.size(); ++i)
            {
                if(_rank[i] <= rank_value)
                    { p += _pi[i]; }
            }
            return p;            
        }
    }

    std::string OrdinalDistribution::quantile(const double& p) const
    {
        std::vector< std::string > ordered = get_ordered_values();
        Index size = 0, max_size = ordered.size() - 1;
        double _p = _pi[size];
        while(_p < p && size < max_size)
        {
            ++size;
            _p += _pi[size];
        }
        if(size == max_size)
        { --size; }
        return ordered[size];
    }

    const std::vector< Index >& OrdinalDistribution::get_rank() const
    { return _rank; }

    void OrdinalDistribution::set_rank(const std::vector< Index >& rank)
    {
        if(rank.size() != _values.size())
        { throw size_error("rank", rank.size(), _values.size()); }
        Indices order = Indices();
        for(Index size = 0, max_size = _values.size(); size < max_size; ++size)
        { order.insert(order.end(), size); }
        for(Index size = 0, max_size = _values.size(); size < max_size; ++size)
        {
            if(rank[size] >= _values.size())
            { throw interval_error("rank", rank[size], 0, _values.size(), std::make_pair(false, true)); }
            Indices::iterator it = order.find(rank[size]);
            if(it == order.end())
            { throw duplicated_value_error("rank", rank[size]); }
            order.erase(it);
        }
        _rank = rank;
    }

    std::vector< std::string > OrdinalDistribution::get_ordered_values() const
    {
        std::vector< std::string > order(_values.size());
        for(std::set< std::string >::const_iterator it = _values.cbegin(), it_end = _values.cend(); it != it_end; ++it)
        { order[_rank[distance(_values.cbegin(), it)]] = *it; }
        return order;
    }

    void OrdinalDistribution::set_ordered_values(const std::vector< std::string >& ordered_values)
    {
        std::set< std::string > values(ordered_values.cbegin(), ordered_values.cend());
        if(values != _values)
        { throw parameter_error("ordered_values","must contain the same string as in values parameter"); }
        for(Index j=0; j<ordered_values.size(); ++j)
        { _rank[distance(_values.cbegin(), _values.find(ordered_values[j]) ) ] = j; }
    }

    Eigen::VectorXd OrdinalDistribution::get_ordered_pi() const
    {
        Eigen::VectorXd ordered_pi(_pi.rows());
        for(std::set< std::string >::const_iterator it = _values.cbegin(), it_end = _values.cend(); it != it_end; ++it)
        { ordered_pi[_rank[distance(_values.cbegin(), it)]] = pdf(*it); }
        return ordered_pi;  
    }

    void OrdinalDistribution::set_ordered_pi(const Eigen::VectorXd& ordered_pi)
    {
        Eigen::VectorXd _ordered_pi(_pi.rows());
        if(ordered_pi.rows() == _values.size() - 1)
        {
            Index j = 0; 
            while(j < ordered_pi.rows() && ordered_pi[j] >= 0.)
            { ++j; }
            if(j < ordered_pi.rows())
            { throw parameter_error("ordered_pi", "contains negative values"); } 
            double sum = ordered_pi.sum();
            if(sum < 1)
            {
                _ordered_pi.segment(0, _values.size() - 1) = ordered_pi;
                _ordered_pi[_values.size()-1] = 1 - sum;
            }
            else
            { throw parameter_error("ordered_pi", "last category values"); }                
        }
        else if(ordered_pi.rows() == _values.size())
        {
            Index j = 0; 
            while(j < ordered_pi.rows() && ordered_pi[j] >= 0.)
            { ++j; }
            if(j < ordered_pi.rows())
            { throw parameter_error("ordered_pi", "contains negative values"); } 
            _ordered_pi = ordered_pi / ordered_pi.sum();
        }
        else
        { throw parameter_error("ordered_pi", "number of parameters"); }  

        for(Index j=0; j<_pi.size(); ++j)
        { _pi[j] = _ordered_pi[_rank[j]]; }
    }

    HierarchicalDistribution::HierarchicalDistribution()
    {}

    HierarchicalDistribution::HierarchicalDistribution(const HierarchicalSampleSpace& hss)
    {
        for(HierarchicalSampleSpace::const_iterator it = hss.cbegin(), it_end = hss.cend(); it != it_end; ++it)
        {
            switch(it->second->get_ordering())
            {
                case NONE:
                    _tree_distribution[it->first] = new NominalDistribution(it->second->get_values());
                    break;
                case TOTAL:
                    _tree_distribution[it->first] = new OrdinalDistribution(static_cast< OrdinalSampleSpace* >(it->second)->get_ordered());
                    break;
                case PARTIAL:
                    _tree_distribution[it->first] = new HierarchicalDistribution(*(static_cast< HierarchicalSampleSpace* >(it->second)));
                    break;
            }
            // for(std::set< std::string >::const_iterator it2 = it->second->get_values().cbegin(), it2_end = it->second->get_values().cend(); it2 != it2_end; ++it2)
            // { _parents[*it2] = it->first; }
        }
        _values = hss.get_values();
        _parents = hss.get_parents();
    }

    HierarchicalDistribution::HierarchicalDistribution(const HierarchicalDistribution& hd)
    { _tree_distribution =  hd._tree_distribution; }

    HierarchicalDistribution::~HierarchicalDistribution()
    {
        std::map< std::string, CategoricalUnivariateDistribution* >::iterator it, it_end = _tree_distribution.end();
        for(it = _tree_distribution.begin(); it != it_end; ++it)
        { 
            if(it->second)
            {
                delete it->second;
                it->second = nullptr;
            }
        } 
    }

    unsigned int HierarchicalDistribution::get_nb_parameters() const
    {
        unsigned int nb_parameters = 0;
        for(std::map< std::string, CategoricalUnivariateDistribution* >::const_iterator it = _tree_distribution.cbegin(), it_end = _tree_distribution.cend(); it != it_end; ++it)
        { nb_parameters += it->second->get_nb_parameters(); }
        return nb_parameters;
    }

    std::unique_ptr< UnivariateEvent > HierarchicalDistribution::simulate() const
    {
        std::map< std::string, CategoricalUnivariateDistribution* >::const_iterator it_dist = _tree_distribution.find("");
        std::set< std::string >::const_iterator it_leave;
        std::string value;
        if(it_dist != _tree_distribution.cend())
        {
            value = (static_cast< CategoricalElementaryEvent* >((it_dist->second->simulate()).get()))->get_value();
            it_leave = _values.find(value);
            while(it_leave == _values.cend())
            {
                it_dist = _tree_distribution.find(value);
                if(it_dist != _tree_distribution.cend())
                {
                    value = (static_cast< CategoricalElementaryEvent* >((it_dist->second->simulate()).get()))->get_value();
                    it_leave = _values.find(value);
                }
                else
                { throw std::runtime_error("internal error"); }
            }
        }
        else
        { throw std::runtime_error("internal error"); }
        return std::make_unique< CategoricalElementaryEvent >(value);
    }
   
    double HierarchicalDistribution::ldf(const std::string& value) const
    {
        double l;
        std::set< std::string >::const_iterator it = _values.find(value);
        if(it != _values.cend())
        {   
            std::map< std::string, std::string >::const_iterator it_par = _parents.find(value);
            if(it_par != _parents.cend())
            {
                std::map< std::string, CategoricalUnivariateDistribution* >::const_iterator it_dist = _tree_distribution.find(it_par->second);
                if(it_dist != _tree_distribution.cend())
                {
                    l = (it_dist->second)->ldf(value); 
                    std::string current_value = it_par->second;
                    while(current_value != "")
                    {
                        l += internal_ldf(current_value);
                        it_par = _parents.find(current_value);
                        if(it_par != _parents.cend())
                        { current_value = it_par->second; }
                        else
                        { throw std::runtime_error("internal error"); }
                    }                        

                }
                else
                { throw std::runtime_error("internal error"); }  
            }
            else
            { throw std::runtime_error("internal error"); }
        }
        else
        { throw in_set_error("value", value, _values); }    
        return l;
    }

    double HierarchicalDistribution::pdf(const std::string& value) const
    { return exp(ldf(value)); }

    double HierarchicalDistribution::pdf(const int& position) const
    {
        std::set< std::string >::const_iterator it = _values.cbegin();
        if(position >= 0 && position < _values.size())
        { std::advance(it, position); }
        else
        { throw interval_error("position", position, 0, _values.size()-1, std::make_pair(false,false)); }
        return pdf(*it);
    }
            
    std::set< std::string > HierarchicalDistribution::get_values() const
    { return _values; }

    double HierarchicalDistribution::internal_ldf(const std::string& value) const
    {
        check_internal(value);
        double l;
        if(value == "")
        { l = 0; }
        else
        {
            std::map< std::string, CategoricalUnivariateDistribution* >::const_iterator it = _tree_distribution.find(value);
            if(it != _tree_distribution.cend())
            {
                std::map< std::string, std::string >::const_iterator it_par = _parents.find(value);
                if(it_par != _parents.cend())
                {
                    std::map< std::string, CategoricalUnivariateDistribution* >::const_iterator it_dist = _tree_distribution.find(it_par->second);
                    if(it_dist != _tree_distribution.cend())
                    { l = (it_dist->second)->ldf(value); }
                    else
                    { throw std::runtime_error("internal error"); }
                }
                else
                { throw std::runtime_error("internal error"); }
            }
            else
            { throw in_set_error("value", value, __impl::keys(_tree_distribution)); }         
        } 
        return l;       
    }
    double HierarchicalDistribution::internal_pdf(const std::string& value) const
    { return exp(internal_ldf(value)); }

    HierarchicalDistribution::const_iterator HierarchicalDistribution::cbegin() const
    { return _tree_distribution.cbegin(); }

    HierarchicalDistribution::const_iterator HierarchicalDistribution::cend() const
    { return _tree_distribution.cend(); }

    const CategoricalUnivariateDistribution* HierarchicalDistribution::get_distribution(const std::string& value) const
    {
        check_internal(value);
        return _tree_distribution.find(value)->second;
    }

    void HierarchicalDistribution::set_distribution(const std::string& value, const CategoricalUnivariateDistribution& distribution)
    {
        check_internal(value);
        _tree_distribution[value] = static_cast< CategoricalUnivariateDistribution* >(distribution.copy().release());
    }

    const std::string HierarchicalDistribution::parent(const std::string& value) const
    {
        std::map< std::string, std::string >::const_iterator it = _parents.find(value);
        if(it != _parents.cend())
        { return it->second; }
        else
        { throw in_set_error("value", value, __impl::keys(_parents), false); }
    }

    void HierarchicalDistribution::check_internal(const std::string& value) const
    {
        if(_tree_distribution.find(value) == _tree_distribution.cend())
        { throw in_set_error("value", value, __impl::keys(_tree_distribution), false); }
    }

    // HierarchicalDistribution::iterator HierarchicalDistribution::begin()
    // { return _tree_distribution.begin(); }

    // HierarchicalDistribution::iterator HierarchicalDistribution::end()
    // { return _tree_distribution.end(); }

    unsigned int HierarchicalDistribution::index(const std::string& value) const
    {
        check_internal(value);
        return std::distance(_tree_distribution.cbegin(), _tree_distribution.find(value));
    }

    double DiscreteUnivariateDistribution::probability(const UnivariateEvent* event, const bool& logarithm) const
    {
        double p;
        if(event)
        {
            if(event->get_outcome() == DISCRETE)
            {
                switch(event->get_event())
                {
                    case ELEMENTARY:
                        {
                            const int& value = static_cast< const DiscreteElementaryEvent* >(event)->get_value();
                            if(logarithm)
                            { p = ldf(value); }
                            else
                            { p = pdf(value); }
                        }
                        break;
                    case CENSORED:
                        {
                            const std::vector< int >& values = static_cast< const DiscreteCensoredEvent* >(event)->get_values();
                            p = 0.;
                            for(std::vector< int >::const_iterator it = values.cbegin(), it_end = values.cend(); it != it_end; ++it)
                            { p += pdf(*it); }
                            if(logarithm)
                            { p = log(p); }
                        }
                        break;
                    case LEFT:
                        {
                            const int& upper_bound = static_cast< const DiscreteLeftCensoredEvent* >(event)->get_upper_bound();
                            p = cdf(upper_bound);
                            if(logarithm)
                            { p = log(p); }
                        }
                        break;
                    case RIGHT:
                        {
                            const int& lower_bound = static_cast< const DiscreteRightCensoredEvent* >(event)->get_lower_bound();
                            p = 1 - cdf(lower_bound - 1);
                            if(logarithm)
                            { p = log(p); }
                        }
                        break;
                    case INTERVAL:
                        {
                            const DiscreteIntervalCensoredEvent* devent = static_cast< const DiscreteIntervalCensoredEvent* >(event);
                            const int& lower_bound = devent->get_lower_bound(), upper_bound = devent->get_lower_bound();
                            p = cdf(upper_bound) - cdf(lower_bound - 1);
                            if(logarithm)
                            { p = log(p); }
                        }
                        break;
                    default:
                        if(logarithm)
                        { p = -1 * std::numeric_limits< double >::infinity(); }
                        else
                        { p = 0; }
                        break;
                }
            }
            else if(logarithm)
            { p = -1 * std::numeric_limits< double >::infinity(); }
            else
            { p = 0; }
        }
        else if(logarithm)
        { p = 0; }
        else
        { p = 1.; }
        return p;
    }

    double DiscreteUnivariateDistribution::ldf(const int& value) const
    { return log(pdf(value)); }

    double DiscreteUnivariateDistribution::pdf(const int& value) const
    { return exp(ldf(value)); }

    double DiscreteUnivariateDistribution::cdf(const int& value) const
    {
        double p = 0.;
        for(int k = 0; k <= value; ++k)
        { p += pdf(k); } 
        return p;
    }

    int DiscreteUnivariateDistribution::quantile(const double& p) const
    {
        int i = 0;
        double _p = pdf(i);
        while(_p < p)
        {
            ++i;
            _p += pdf(i);
        }
        return i;        
    }

    std::unique_ptr< UnivariateEvent > DiscreteUnivariateDistribution::simulate() const
    { return std::make_unique< ElementaryEvent< DiscreteEvent > >(quantile(boost::uniform_01<boost::mt19937&>(__impl::get_random_generator())())); }

    PoissonDistribution::PoissonDistribution()
    { _theta = 1.; }

    PoissonDistribution::PoissonDistribution(const double& theta)
    {
        if(theta <= 0.)
        { throw lower_bound_error("theta", theta, 0., true); }
        _theta = theta;
    }

    PoissonDistribution::PoissonDistribution(const PoissonDistribution& poisson)
    { _theta = poisson._theta; }

    unsigned int PoissonDistribution::get_nb_parameters() const
    { return 1; }

    const double& PoissonDistribution::get_theta() const
    { return _theta; }

    void PoissonDistribution::set_theta(const double& theta)
    {
        if(theta <= 0.)
        { throw lower_bound_error("theta", theta, 0., true); }
        _theta = theta;
    }

    double PoissonDistribution::ldf(const int& value) const
    {
        double p;
        if(value < 0)
        { p = -1 * std::numeric_limits< double >::infinity(); }
        else
        { p = value * log(_theta) - _theta - boost::math::lgamma(value + 1); }
        return p;
    }
    
    double PoissonDistribution::pdf(const int& value) const
    {
        double p;
        if(value < 0)
        { p = 0; }
        else
        { p = pow(_theta, value) * exp(-_theta) / boost::math::tgamma(value + 1); }
        return p;
    }

    double PoissonDistribution::cdf(const int& value) const
    { 
        double p;
        if(value < 0)
        { p = 0; }
        else
        { p = boost::math::gamma_q(value + 1, _theta); }
        return p;
    }

    int PoissonDistribution::quantile(const double& p) const
    { return std::ceil(boost::math::gamma_q_inva(_theta, p) - 1); }

    double PoissonDistribution::get_mean() const
    { return _theta; }

    double PoissonDistribution::get_variance() const
    { return _theta; }

    std::unique_ptr< UnivariateEvent > PoissonDistribution::simulate() const
    {
        boost::poisson_distribution<> dist(_theta);
        boost::variate_generator<boost::mt19937&, boost::poisson_distribution<> > simulator(__impl::get_random_generator(), dist);
        return std::make_unique< DiscreteElementaryEvent >(simulator());
    }

    BinomialDistribution::BinomialDistribution()
    {
        _kappa = 1;
        _pi = .5;
    }

    BinomialDistribution::BinomialDistribution(const unsigned int& kappa, const double& pi)
    {
        if(pi < 0 || pi > 1)
        { throw interval_error("pi", pi, 0., 1., std::make_pair(false, false)); }
        _kappa = kappa;
        _pi = pi;
    }

    BinomialDistribution::BinomialDistribution(const BinomialDistribution& binomial)
    {
        _kappa = binomial._kappa;
        _pi = binomial._pi;
    }

    unsigned int BinomialDistribution::get_nb_parameters() const
    { return 2; }

    const unsigned int& BinomialDistribution::get_kappa() const
    { return _kappa; }

    void BinomialDistribution::set_kappa(const unsigned int& kappa)
    { _kappa = kappa; }

    const double& BinomialDistribution::get_pi() const
    { return _pi; }

    void BinomialDistribution::set_pi(const double& pi)
    {
        if(pi < 0 || pi > 1)
        { throw interval_error("pi", pi, 0., 1., std::make_pair(false, false)); }
        _pi = pi;
    }

    double BinomialDistribution::ldf(const int& value) const
    {
        double p;
        if(value < 0 || value > _kappa)
        { p = -1 * std::numeric_limits< double >::infinity(); }
        else if(value == 0)
        { p = _kappa * log(1. - _pi); }
        else if(value == _kappa)
        {  p =  value * log(_pi); }
        else
        { p = boost::math::lgamma(_kappa + 1) - boost::math::lgamma(_kappa - value + 1) - boost::math::lgamma(value + 1) + value * log(_pi) + (_kappa - value) * log(1. - _pi); }
        return p;
    }
    
    double BinomialDistribution::pdf(const int& value) const
    {
        double p;
        if(value < 0 || value > _kappa)
        { p = 0; }
        else if(value == 0)
        { p = pow(1 - _pi, _kappa); }
        else if(value == _kappa)
        { p = pow(_pi, _kappa); }
        else
        { p = boost::math::ibeta_derivative(value + 1, _kappa - value + 1, _pi) / (_kappa + 1); }
        return p;
    }

    double BinomialDistribution::cdf(const int& value) const
    {
        double p;
        if(value < 0)
        { p = 0.; }
        else if(value > _kappa)
        { p = 1.; }
        else
        { p = boost::math::ibetac(value + 1, _kappa - value, _pi); }
        return p;
      }

    int BinomialDistribution::quantile(const double& p) const
    { 
        int value = 0;
        while(cdf(value) < p && value < _kappa)
        { ++value; }
        return value;
    }

    std::unique_ptr< UnivariateEvent > BinomialDistribution::simulate() const
    {
        boost::binomial_distribution<> dist(_kappa, _pi);
        boost::variate_generator<boost::mt19937&, boost::binomial_distribution<> > simulator(__impl::get_random_generator(), dist);
        return std::make_unique< DiscreteElementaryEvent >(simulator());
    }

    double BinomialDistribution::get_mean() const
    { return _kappa * _pi; }

    double BinomialDistribution::get_variance() const
    { return _kappa * _pi * (1. - _pi); }

    LogarithmicDistribution::LogarithmicDistribution()
    { _theta = .5; }

    LogarithmicDistribution::LogarithmicDistribution(const double& theta)
    {
        if(theta < 0 || theta > 1)
        { throw interval_error("theta", theta, 0., 1., std::make_pair(false, false)); }
        _theta = theta;
    }

    LogarithmicDistribution::LogarithmicDistribution(const LogarithmicDistribution& logarithmic)
    { _theta = logarithmic._theta; }

    unsigned int LogarithmicDistribution::get_nb_parameters() const
    { return 1; }

    const double& LogarithmicDistribution::get_theta() const
    { return _theta; }

    void LogarithmicDistribution::set_theta(const double& theta)
    {
        if(theta < 0 || theta > 1)
        { throw interval_error("theta", theta, 0., 1., std::make_pair(false, false)); }
        _theta = theta;
    }

    double LogarithmicDistribution::ldf(const int& value) const
    {
        double p;
        if(value < 1)
        { p = -1 * std::numeric_limits< double >::infinity(); }
        else
        {
            try
            { p = -log(- 1 * log(1 - _theta)) + value * log(_theta) - log(value); }
            catch(const std::exception& error)
            { p = std::numeric_limits< double >::quiet_NaN(); }
        }
        return p;
    }
    
    double LogarithmicDistribution::pdf(const int& value) const
    {
        double p;
        if(value < 1)
        { p = 0; }
        else
        {
            try
            { p = - 1 / log(1 - _theta) * pow(_theta, value) / value; }
            catch(const std::exception& error)
            { p = std::numeric_limits< double >::quiet_NaN(); }
        }
        return p;
    }

    double LogarithmicDistribution::get_mean() const
    { return  - 1 / log(1 - _theta) * _theta / (1 - _theta); }

    double LogarithmicDistribution::get_variance() const
    { 
        double mean = get_mean();
        return mean * (1 / (1- _theta) - mean);
        // return - _theta * (_theta + log(1 - _theta)) / pow((1 - _theta) * log(1 - _theta), 2); 
    }

    GeometricDistribution::GeometricDistribution()
    { _pi = .5; }

    GeometricDistribution::GeometricDistribution(const double& pi)
    {
        if(pi < 0 || pi > 1)
        { throw interval_error("pi", pi, 0., 1., std::make_pair(false, false)); }
        _pi = pi;
    }

    GeometricDistribution::GeometricDistribution(const GeometricDistribution& geometric)
    { _pi = geometric._pi; }

    unsigned int GeometricDistribution::get_nb_parameters() const
    { return 1; }

    const double& GeometricDistribution::get_pi() const
    { return _pi; }

    void GeometricDistribution::set_pi(const double& pi)
    {
        if(pi < 0 || pi > 1)
        { throw interval_error("pi", pi, 0., 1., std::make_pair(false, false)); }
        _pi = pi;
    }

    double GeometricDistribution::ldf(const int& value) const
    {
        double p;
        if(value < 1)
        { p = -1 * std::numeric_limits< double >::infinity(); }
        else
        {
            try
            { p = (value - 1) * log(_pi) + log(1 - _pi); }
            catch(const std::exception& error)
            { p = std::numeric_limits< double >::quiet_NaN(); }
        }
        return p;
    }
    
    double GeometricDistribution::pdf(const int& value) const
    {
        double p;
        if(value < 1)
        { p = 0; }
        else
        {
            try
            { p = pow(_pi, value - 1) * (1. - _pi); }
            catch(const std::exception& error)
            { p = std::numeric_limits< double >::quiet_NaN(); }
        }
        return p;
    }

    double GeometricDistribution::cdf(const int& value) const
    { 
        double p;
        if(value < 1)
        { p = 0; }
        else
        { p = 1 - pow(_pi, value); }
        return p;
    }

    int GeometricDistribution::quantile(const double& p) const
    { 
        int q = 0;
        while(cdf(q) < p)
        { ++q; }
        return q;
    }

    double GeometricDistribution::get_mean() const
    { return 1 / (1 - _pi); }

    double GeometricDistribution::get_variance() const
    { return _pi / pow(1. - _pi, 2); }

    std::unique_ptr< UnivariateEvent > GeometricDistribution::simulate() const
    { return std::make_unique< ElementaryEvent< DiscreteEvent > >(quantile(boost::uniform_01<boost::mt19937&>(__impl::get_random_generator())())); }

    NegativeBinomialDistribution::NegativeBinomialDistribution()
    {
        _kappa = 1.;
        _pi = .5;
    }

    NegativeBinomialDistribution::NegativeBinomialDistribution(const double& kappa, const double& pi)
    {
        if(kappa <= 0.)
        { throw lower_bound_error("kappa", kappa, 0., true); }
        if(pi < 0 || pi > 1)
        { throw interval_error("pi", pi, 0., 1., std::make_pair(false, false)); }
        _kappa = kappa;
        _pi = pi;
    }

    NegativeBinomialDistribution::NegativeBinomialDistribution(const NegativeBinomialDistribution& negbinomial)
    {
        _kappa = negbinomial._kappa;
        _pi = negbinomial._pi;
    }

    unsigned int NegativeBinomialDistribution::get_nb_parameters() const
    { return 2; }

    const double& NegativeBinomialDistribution::get_kappa() const
    { return _kappa; }

    void NegativeBinomialDistribution::set_kappa(const double& kappa)
    {
        if(kappa <= 0.)
        { throw lower_bound_error("kappa", kappa, 0., true); }
        _kappa = kappa;
    }

    const double& NegativeBinomialDistribution::get_pi() const
    { return _pi; }

    void NegativeBinomialDistribution::set_pi(const double& pi)
    {
        if(pi < 0 || pi > 1)
        { throw interval_error("pi", pi, 0., 1., std::make_pair(false, false)); }
        _pi = pi;
    }

    double NegativeBinomialDistribution::ldf(const int& value) const
    {
        double p;
        if(value < 0)
        { p = -1 * std::numeric_limits< double >::infinity(); }
        else
        {
            try
            { p = boost::math::lgamma(value + _kappa) - boost::math::lgamma(_kappa) - boost::math::lgamma(value + 1.) + value * log(_pi) + _kappa * log(1 - _pi); }
            catch(const std::exception& error)
            { p = std::numeric_limits< double >::quiet_NaN(); }
        }
        return p;
    }
    
    double NegativeBinomialDistribution::pdf(const int& value) const
    {
        double p;
        if(value < 0)
        { p = 0; }
        else
        {
            try
            { p = boost::math::ibeta_derivative(_kappa, value + 1., 1 - _pi) * (1. - _pi) / (_kappa + value); }
            catch(const std::exception& error)
            { p = std::numeric_limits< double >::quiet_NaN(); }
        }
        return p;
    }

    double NegativeBinomialDistribution::cdf(const int& value) const
    { 
        double p;
        if(value < 0)
        { p = 0; }
        else
        { p = boost::math::ibeta(_kappa, value + 1., 1. - _pi); }
        return p;
    }

    int NegativeBinomialDistribution::quantile(const double& p) const
    { return std::ceil(boost::math::ibeta_invb(_kappa, 1. - _pi, p) - 1); }

    double NegativeBinomialDistribution::get_mean() const
    { return _kappa * _pi / (1 - _pi); }

    double NegativeBinomialDistribution::get_variance() const
    { return _kappa * _pi / pow(1. - _pi, 2); }

    std::unique_ptr< UnivariateEvent > NegativeBinomialDistribution::simulate() const
    { return std::make_unique< ElementaryEvent< DiscreteEvent > >(quantile(boost::uniform_01<boost::mt19937&>(__impl::get_random_generator())())); }

    BetaCompoundDiscreteUnivariateDistribution::BetaCompoundDiscreteUnivariateDistribution()
    {
        _alpha = 1.;
        _gamma = 1.;
    }

    BetaCompoundDiscreteUnivariateDistribution::BetaCompoundDiscreteUnivariateDistribution(const BetaCompoundDiscreteUnivariateDistribution& distribution)
    {
        _alpha = distribution._alpha;
        _gamma = distribution._gamma;
    }

    BetaCompoundDiscreteUnivariateDistribution::~BetaCompoundDiscreteUnivariateDistribution()
    {}

    unsigned int BetaCompoundDiscreteUnivariateDistribution::get_nb_parameters() const
    { return 2; }

    const double& BetaCompoundDiscreteUnivariateDistribution::get_alpha() const
    { return _alpha; }

    void BetaCompoundDiscreteUnivariateDistribution::set_alpha(const double& alpha)
    {
        if(alpha <= 0.)
        { throw lower_bound_error("alpha", alpha, 0., true); }
        _alpha = alpha;
    }

    const double& BetaCompoundDiscreteUnivariateDistribution::get_gamma() const
    { return _gamma; }

    void BetaCompoundDiscreteUnivariateDistribution::set_gamma(const double& gamma)
    {
        if(gamma <= 0.)
        { throw lower_bound_error("gamma", gamma, 0., true); }
        _gamma = gamma;
    }

    BetaBinomialDistribution::BetaBinomialDistribution()
    { _kappa = 1; }

    BetaBinomialDistribution::BetaBinomialDistribution(const unsigned int& kappa, const double& alpha, const double& gamma)
    { 
        set_alpha(alpha);
        set_gamma(gamma);
        set_kappa(kappa);
    }

    BetaBinomialDistribution::BetaBinomialDistribution(const BetaBinomialDistribution& binomial) : PolymorphicCopy< UnivariateDistribution, BetaBinomialDistribution, BetaCompoundDiscreteUnivariateDistribution >(binomial)
    { _kappa = binomial._kappa; }

    BetaBinomialDistribution::~BetaBinomialDistribution()
    {}

    unsigned int BetaBinomialDistribution::get_nb_parameters() const
    { return 1 + BetaCompoundDiscreteUnivariateDistribution::get_nb_parameters(); }

    const unsigned int& BetaBinomialDistribution::get_kappa() const
    { return _kappa; }

    void BetaBinomialDistribution::set_kappa(const unsigned int& kappa)
    { _kappa = kappa; }

    double BetaBinomialDistribution::ldf(const int& value) const
    {
        double p;
        if(value < 0)
        { p = -1 * std::numeric_limits< double >::infinity(); }
        else
        {
            try
            { 
                p = boost::math::lgamma(_kappa + 1)
                    - boost::math::lgamma(value + 1) - boost::math::lgamma(_kappa - value + 1)
                    + boost::math::lgamma(_alpha + value) + boost::math::lgamma(_kappa - value + _gamma) + boost::math::lgamma(_alpha + _gamma)
                    - boost::math::lgamma(_alpha + _gamma + _kappa) - boost::math::lgamma(_alpha) - boost::math::lgamma(_gamma); 
            }
            catch(const std::exception& error)
            { p = std::numeric_limits< double >::quiet_NaN(); }
        }
        return p;
    }
    
    double BetaBinomialDistribution::pdf(const int& value) const
    {
        double p;
        if(value < 0 || value > _kappa)
        { p = 0; }
        else
        {
            try
            { 
                p = boost::math::tgamma(_kappa + 1)
                    / (boost::math::tgamma(value + 1) * boost::math::tgamma(_kappa - value + 1))
                    * boost::math::tgamma(_alpha + value) * boost::math::tgamma(_kappa - value + _gamma) * boost::math::tgamma(_alpha + _gamma)
                    / (boost::math::tgamma(_alpha + _gamma + _kappa) * boost::math::tgamma(_alpha) * boost::math::tgamma(_gamma)); 
            }
            catch(const std::exception& error)
            { p = std::numeric_limits< double >::quiet_NaN(); }
        }
        return p;
    }

    double BetaBinomialDistribution::get_mean() const
    { return _kappa * _alpha / (_alpha + _gamma); }

    double BetaBinomialDistribution::get_variance() const
    { return _kappa * _alpha * _gamma * (_kappa + _alpha + _gamma) / (pow(_alpha + _gamma, 2) * (_alpha + _gamma + 1)); }

    BetaNegativeBinomialDistribution::BetaNegativeBinomialDistribution()
    { _kappa = 1.; }

    BetaNegativeBinomialDistribution::BetaNegativeBinomialDistribution(const double& kappa, const double& alpha, const double& gamma)
    {
        set_alpha(alpha);
        set_gamma(gamma);
        set_kappa(kappa);
    }

    BetaNegativeBinomialDistribution::BetaNegativeBinomialDistribution(const BetaNegativeBinomialDistribution& negbinomial) : PolymorphicCopy< UnivariateDistribution, BetaNegativeBinomialDistribution, BetaCompoundDiscreteUnivariateDistribution >(negbinomial)
    { _kappa = negbinomial._kappa; }

    BetaNegativeBinomialDistribution::~BetaNegativeBinomialDistribution()
    {}

    unsigned int BetaNegativeBinomialDistribution::get_nb_parameters() const
    { return 1 + BetaCompoundDiscreteUnivariateDistribution::get_nb_parameters(); }

    const double& BetaNegativeBinomialDistribution::get_kappa() const
    { return _kappa; }

    void BetaNegativeBinomialDistribution::set_kappa(const double& kappa)
    {
        if(kappa <= 0.)
        { throw lower_bound_error("kappa", kappa, 0., true); }
        _kappa = kappa;
    }

    double BetaNegativeBinomialDistribution::ldf(const int& value) const
    {
        double p;
        if(value < 0)
        { p = -1 * std::numeric_limits< double >::infinity(); }
        else
        {
            try
            { 
                p = boost::math::lgamma(value + _kappa)
                    - boost::math::lgamma(value + 1) - boost::math::lgamma(_kappa)
                    + boost::math::lgamma(_alpha + _kappa) + boost::math::lgamma(_gamma + value) + boost::math::lgamma(_alpha + _gamma)
                    - boost::math::lgamma(_alpha + _gamma + _kappa + value) - boost::math::lgamma(_alpha) - boost::math::lgamma(_gamma); 
            }
            catch(const std::exception& error)
            { p = std::numeric_limits< double >::quiet_NaN(); }
        }
        return p;
    }
    
    double BetaNegativeBinomialDistribution::pdf(const int& value) const
    {
        double p;
        if(value < 0)
        { p = 0; }
        else
        {
            try
            { 
                p = boost::math::tgamma(value + _kappa)
                    / (boost::math::tgamma(value + 1) * boost::math::tgamma(_kappa))
                    * boost::math::tgamma(_alpha + _kappa) * boost::math::tgamma(_gamma + value) * boost::math::tgamma(_alpha + _gamma)
                    / (boost::math::tgamma(_alpha + _gamma + _kappa + value) * boost::math::tgamma(_alpha) * boost::math::tgamma(_gamma)); 
            }
            catch(const std::exception& error)
            { p = std::numeric_limits< double >::quiet_NaN(); }
        }
        return p;
    }

    double BetaNegativeBinomialDistribution::get_mean() const
    {
        double mean;
        if(_alpha > 1.) 
        { mean = _kappa * _gamma / (_alpha - 1); }
        else
        { mean = std::numeric_limits< double >::infinity(); }
        return mean;
    }

    double BetaNegativeBinomialDistribution::get_variance() const
    {
        double variance;
        if(_alpha > 2) 
        { variance = _kappa * (_alpha + _kappa - 1) * _gamma * (_alpha + _gamma - 1) / ((_alpha - 2) * pow(_alpha - 1, 2)); }
        else
        { variance = std::numeric_limits< double >::infinity(); }
        return variance;
    }

    double ContinuousUnivariateDistribution::probability(const UnivariateEvent* event, const bool& logarithm) const
    {
        double p;
        if(event)
        {
            if(event->get_outcome() == CONTINUOUS)
            {
                switch(event->get_event())
                {
                    case ELEMENTARY:
                        {
                            const double& value = static_cast< const ContinuousElementaryEvent* >(event)->get_value();
                            if(logarithm)
                            { p = ldf(value); }
                            else
                            { p = pdf(value); }
                        }
                        break;
                    case CENSORED:
                        {
                            const std::vector< double >& values = static_cast< const ContinuousCensoredEvent* >(event)->get_values();
                            p = 0.;
                            for(std::vector< double >::const_iterator it = values.cbegin(), it_end = values.cend(); it != it_end; ++it)
                            { p += pdf(*it); }
                            if(logarithm)
                            { p = log(p); }
                        }
                        break;
                    case LEFT:
                        {
                            const double& upper_bound = static_cast< const ContinuousLeftCensoredEvent* >(event)->get_upper_bound();
                            p = cdf(upper_bound);
                            if(logarithm)
                            { p = log(p); }
                        }
                        break;
                    case RIGHT:
                        {
                            const double& lower_bound = static_cast< const ContinuousRightCensoredEvent* >(event)->get_lower_bound();
                            p = 1 - cdf(lower_bound);
                            if(logarithm)
                            { p = log(p); }
                        }
                        break;
                    case INTERVAL:
                        {
                            const ContinuousIntervalCensoredEvent* cevent = static_cast< const ContinuousIntervalCensoredEvent* >(event);
                            const double& lower_bound = cevent->get_lower_bound(), upper_bound = cevent->get_lower_bound();
                            p = cdf(upper_bound) - cdf(lower_bound);
                            if(logarithm)
                            { p = log(p); }
                        }
                        break;
                    default:
                        if(logarithm)
                        { p = -1 * std::numeric_limits< double >::infinity(); }
                        else
                        { p = 0; }
                        break;
                }
            }
            else if(logarithm)
            { p = -1 * std::numeric_limits< double >::infinity(); }
            else
            { p = 0; }
        }
        else if(logarithm)
        { p = 0; }
        else
        { p = 1.; }
        return p;
    }

    NormalDistribution::NormalDistribution() 
    {
        _mu = 0.;
        _sigma = 1.;
    }

    NormalDistribution::NormalDistribution(const double& mu, const double& sigma) 
    {
        _mu = mu;
        _sigma = sigma;
    }

    NormalDistribution::NormalDistribution(const NormalDistribution& normal)
    {
        _mu = normal._mu;
        _sigma = normal._sigma;
    }

    unsigned int NormalDistribution::get_nb_parameters() const
    { return 2; }

    const double& NormalDistribution::get_mu() const
    { return _mu; }

    void NormalDistribution::set_mu(const double& mu)
    { 
        throw parameter_error("mu", "always");
        _mu = mu;
    }

    const double& NormalDistribution::get_sigma() const
    { return _sigma; }

    void NormalDistribution::set_sigma(const double& sigma)
    {
        if(sigma <= 0.)
        { throw lower_bound_error("sigma", sigma, 0., true); }
        _sigma = sigma;
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
    { return log(pdf(value)); }

    double NormalDistribution::pdf(const double& value) const
    { 
        boost::math::normal dist(_mu, _sigma);
        return boost::math::pdf(dist, value); 
    }

    double NormalDistribution::cdf(const double& value) const
    { 
        boost::math::normal dist(_mu, _sigma);
        return boost::math::cdf(dist, value); 
    }

    double NormalDistribution::quantile(const double& p) const
    { 
        boost::math::normal dist(_mu, _sigma);
        return boost::math::quantile(dist, p); 
    }

    std::unique_ptr< UnivariateEvent > NormalDistribution::simulate() const
    {
        boost::normal_distribution<> dist(_mu, _sigma);
        boost::variate_generator<boost::mt19937&, boost::normal_distribution<> > simulator(__impl::get_random_generator(), dist);
        return std::make_unique< ContinuousElementaryEvent >(simulator());
    }

    double NormalDistribution::get_mean() const
    { return _mu; }

    double NormalDistribution::get_variance() const
    { return pow(_sigma, 2); }

    UnivariateHistogramDistribution::UnivariateHistogramDistribution(const std::set<double>& bins, const std::vector<double>& densities)
    {
        assert(bins.size() > 1);
        assert(bins.size() == densities.size()+1);
        _bins = bins;
        _densities = densities;
        normalize();
    }

    UnivariateHistogramDistribution::UnivariateHistogramDistribution(const UnivariateHistogramDistribution& histogram)
    {
        _bins = histogram._bins;
        _densities = histogram._densities;
    }

    UnivariateHistogramDistribution::~UnivariateHistogramDistribution()
    {}

    unsigned int UnivariateHistogramDistribution::get_nb_parameters() const
    { return _densities.size(); }

    const std::set<double>& UnivariateHistogramDistribution::get_bins() const
    { return _bins; }

    const std::vector<double>& UnivariateHistogramDistribution::get_densities() const
    { return _densities; }

    /*double UnivariateHistogramDistribution::get_bin(const event_type& event) const
    { 
        double bin;
        if(boost::get<double>(event) < *(bins.begin()))
        { bin = -1*INFINITY; }
        else if(boost::get<double>(event) > *(bins.rbegin()))
        { bin = INFINITY ; }
        else
        {
            std::set<double>::const_iterator it = bins.upper_bound(boost::get<double>(event));
            if(it == bins.end())
            { --it; }
            --it;
            bin = *it;
        }
        return bin;
    }*/

    double UnivariateHistogramDistribution::ldf(const double& value) const
    { return log(pdf(value)); }

    double UnivariateHistogramDistribution::pdf(const double& value) const
    {
        double p;
        if(value > *(_bins.rbegin()) || value < *(_bins.begin()))
        { p = 0; }
        else
        {
            std::set<double>::const_iterator it = _bins.upper_bound(value);
            if(it == _bins.end())
            { p = _densities.back(); }
            else
            {
                --it;
                p = _densities[distance(_bins.begin(), it)];
            }
        }
        return p;
    }

    double UnivariateHistogramDistribution::cdf(const double& value) const
    {
        double cp;
        if(value <= (*_bins.begin()))
        { cp = 0.; }
        else
        {
            cp = 0.;
            std::set<double>::const_iterator it = _bins.upper_bound(value);
            std::set<double>::const_iterator itl = _bins.begin(), itu;
            itu = itl;
            ++itu;
            while(itu != it)
            {
                cp += _densities[distance(_bins.begin(), itl)] * (*itu - *itl);
                ++itl;
                ++itu;
            }
            cp += (value - *itl) * _densities[distance(_bins.begin(), itl)];
        }
        return std::min(cp, 1.);
    }

    double UnivariateHistogramDistribution::quantile(const double& p) const
    {
        double q;
        if(p >= 1.)
        { q = *(_bins.rbegin()); }
        else if (p <= 0.)
        { q = *(_bins.begin()); }
        else
        {
            std::set<double>::const_iterator itl = _bins.begin(), itu;
            itu = itl;
            ++itu;
            double cum = 0;
            while(distance(_bins.begin(), itl) < _densities.size() && cum < p)
            {
                cum += _densities[distance(_bins.begin(), itl)] * (*itu - *itl);
                if(cum < p)
                {
                    ++itl;
                    ++itu;
                }
            }
            if(distance(_bins.begin(), itl) == _densities.size())
            { q = (*_bins.rbegin()); }
            else
            {
                cum -= _densities[distance(_bins.begin(), itl)] * (*itu - *itl);
                q = *itl + (p - cum) / _densities[distance(_bins.begin(), itl)];
            }
        }
        return q;
    }

    std::unique_ptr< UnivariateEvent > UnivariateHistogramDistribution::simulate() const
    { return std::make_unique< ContinuousElementaryEvent >(quantile(boost::uniform_01<boost::mt19937&>(__impl::get_random_generator())())); }

    double UnivariateHistogramDistribution::get_mean() const
    {
        double mean = 0.;
        std::set<double>::const_iterator itl = _bins.begin(), itu;
        itu = itl;
        ++itl;
        while(itu != _bins.end())
        {
            mean += (*itl + (*itu - *itl) / 2.) * _densities[distance(_bins.begin(), itl)];
            ++itl;
            ++itu;
        }
        return mean;
    }

    double UnivariateHistogramDistribution::get_variance() const
    {
        double mean = get_mean(), variance = 0.;
        std::set<double>::const_iterator itl = _bins.begin(), itu;
        itu = itl;
        ++itl;
        while(itu != _bins.end())
        {
            variance += pow((*itl + (*itu - *itl) / 2.) - mean, 2) * _densities[distance(_bins.begin(), itl)];
            ++itl;
            ++itu;
        }
        return variance;
    }

    void UnivariateHistogramDistribution::normalize()
    {
        double sum = 0.;
        std::set<double>::const_iterator itl = _bins.begin(), itu;
        itu = itl;
        ++itu;
        while(itu != _bins.end())
        { 
            sum += (*itu - *itl) * _densities[distance(_bins.begin(), itl)];
            ++itl;
            ++itu;
        }
        if(sum != 1.)
        { 
            for(unsigned int i = 0; i < _densities.size(); ++i)
            { _densities[i] /= sum; }
        }
    }

    LogisticDistribution::LogisticDistribution() 
    {
        _mu = 0.;
        _sigma = 1.;
    }

    LogisticDistribution::LogisticDistribution(const double& mu, const double& sigma) 
    {
        _mu = mu;
        _sigma = sigma;
    }

    LogisticDistribution::LogisticDistribution(const LogisticDistribution& logistic)
    {
        _mu = logistic._mu;
        _sigma = logistic._sigma;
    }

    unsigned int LogisticDistribution::get_nb_parameters() const
    { return 2; }

    const double& LogisticDistribution::get_mu() const
    { return _mu; }

    void LogisticDistribution::set_mu(const double& mu)
    { _mu = mu; }

    const double& LogisticDistribution::get_sigma() const
    { return _sigma; }

    void LogisticDistribution::set_sigma(const double& sigma)
    {
        if(sigma <= 0.)
        { throw lower_bound_error("sigma", sigma, 0., true); }
        _sigma = sigma;
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
    { return log(pdf(value)); }

    double LogisticDistribution::pdf(const double& value) const
    { 
        boost::math::logistic dist(_mu, _sigma);
        return boost::math::pdf(dist, value); 
    }

    double LogisticDistribution::cdf(const double& value) const
    { 
        boost::math::logistic dist(_mu, _sigma);
        return boost::math::cdf(dist, value); 
    }

    double LogisticDistribution::quantile(const double& p) const
    { 
        boost::math::logistic dist(_mu, _sigma);
        return boost::math::quantile(dist, p); 
    }

    std::unique_ptr< UnivariateEvent > LogisticDistribution::simulate() const
    {       
        boost::uniform_01<> dist;
        boost::variate_generator<boost::mt19937&, boost::uniform_01<> > simulator(__impl::get_random_generator(), dist);
        return std::make_unique< ContinuousElementaryEvent >(quantile(simulator()));
    }

    double LogisticDistribution::get_mean() const
    { return _mu; }

    double LogisticDistribution::get_variance() const
    { return pow(_sigma * boost::math::constants::pi<double>() , 2) / 3.; }
    
    
    LaplaceDistribution::LaplaceDistribution() 
    {
        _mu = 0.;
        _sigma = 1.;
    }

    LaplaceDistribution::LaplaceDistribution(const double& mu, const double& sigma) 
    {
        _mu = mu;
        _sigma = sigma;
    }

    LaplaceDistribution::LaplaceDistribution(const LaplaceDistribution& laplace)
    {
        _mu = laplace._mu;
        _sigma = laplace._sigma;
    }

    unsigned int LaplaceDistribution::get_nb_parameters() const
    { return 2; }

    const double& LaplaceDistribution::get_mu() const
    { return _mu; }

    void LaplaceDistribution::set_mu(const double& mu)
    { _mu = mu; }

    const double& LaplaceDistribution::get_sigma() const
    { return _sigma; }

    void LaplaceDistribution::set_sigma(const double& sigma)
    {
        if(sigma <= 0.)
        { throw lower_bound_error("sigma", sigma, 0., true); }
        _sigma = sigma;
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
    { return log(pdf(value)); }

    double LaplaceDistribution::pdf(const double& value) const
    { 
        boost::math::laplace dist(_mu, _sigma);
        return boost::math::pdf(dist, value); 
    }

    double LaplaceDistribution::cdf(const double& value) const
    { 
        boost::math::laplace dist(_mu, _sigma);
        return boost::math::cdf(dist, value); 
    }

    double LaplaceDistribution::quantile(const double& p) const
    { 
        boost::math::laplace dist(_mu, _sigma);
        return boost::math::quantile(dist, p); 
    }

    std::unique_ptr< UnivariateEvent > LaplaceDistribution::simulate() const
    {        
        boost::uniform_01<> dist;
        boost::variate_generator<boost::mt19937&, boost::uniform_01<> > simulator(__impl::get_random_generator(), dist);
        return std::make_unique< ContinuousElementaryEvent >(quantile(simulator()));
    }

    double LaplaceDistribution::get_mean() const
    { return _mu; }

    double LaplaceDistribution::get_variance() const
    { return 2 * pow(_sigma, 2); }
    
    CauchyDistribution::CauchyDistribution() 
    {
        _mu = 0.;
        _sigma = 1.;
    }

    CauchyDistribution::CauchyDistribution(const double& mu, const double& sigma) 
    {
        _mu = mu;
        _sigma = sigma;
    }

    CauchyDistribution::CauchyDistribution(const CauchyDistribution& cauchy)
    {
        _mu = cauchy._mu;
        _sigma = cauchy._sigma;
    }

    unsigned int CauchyDistribution::get_nb_parameters() const
    { return 2; }

    const double& CauchyDistribution::get_mu() const
    { return _mu; }

    void CauchyDistribution::set_mu(const double& mu)
    { _mu = mu; }

    const double& CauchyDistribution::get_sigma() const
    { return _sigma; }

    void CauchyDistribution::set_sigma(const double& sigma)
    {
        if(sigma <= 0.)
        { throw lower_bound_error("sigma", sigma, 0., true); }
        _sigma = sigma;
    }

    double CauchyDistribution::ldf(const double& value) const
    { return - log( boost::math::constants::pi<double>() *_sigma) - log( 1 +  pow( (value - _mu)/_sigma, 2) ); }
    
    double CauchyDistribution::pdf(const double& value) const
    { return  1/(boost::math::constants::pi<double>() *_sigma * (1 +  pow( (value - _mu)/_sigma, 2) ) ) ; }

    double CauchyDistribution::cdf(const double& value) const
    { return 0.5 + atan((value - _mu)/_sigma)/boost::math::constants::pi<double>() ; }

    double CauchyDistribution::quantile(const double& p) const
    { return _mu + _sigma * tan(boost::math::constants::pi<double>() * (p-0.5) ); }

    std::unique_ptr< UnivariateEvent > CauchyDistribution::simulate() const
    {        
        boost::uniform_01<> dist;
        boost::variate_generator<boost::mt19937&, boost::uniform_01<> > simulator(__impl::get_random_generator(), dist);
        return std::make_unique< ContinuousElementaryEvent >(quantile(simulator()));
    }

    double CauchyDistribution::get_mean() const
    { return std::numeric_limits< double >::quiet_NaN(); }

    double CauchyDistribution::get_variance() const
    { return std::numeric_limits< double >::quiet_NaN(); }

    StudentDistribution::StudentDistribution() 
    {_nu = 1.; }

    StudentDistribution::StudentDistribution(const double& nu) 
    { _nu = nu; }

    StudentDistribution::StudentDistribution(const StudentDistribution& student)
    { _nu = student._nu; }

    unsigned int StudentDistribution::get_nb_parameters() const
    { return 1; }
    
    const double& StudentDistribution::get_nu() const
    { return _nu; }

    void StudentDistribution::set_nu(const double& nu)
    {
        if(nu <= 0.)
        { throw lower_bound_error("nu", nu, 0., true); }
        _nu = nu;
    }    

    // double StudentDistribution::ldf(const double& value) const
    // { return (1+_nu) * 0.5 * ( log(_nu) - log(_nu + pow(value, 2) )  ) - 0.5*log(_nu) - log( boost::math::beta(_nu*0.5, 0.5) ); }
    
    // double StudentDistribution::pdf(const double& value) const
    // { return pow( _nu/(_nu + pow(value, 2)) , (1+_nu) * 0.5 ) / ( pow(_nu,0.5) * boost::math::beta(_nu*0.5, 0.5) ); }

    // double StudentDistribution::cdf(const double& value) const
    // {
    //     double z;
    //     if(_nu < 2 * pow(value, 2) )
    //     { z = boost::math::ibeta(_nu * 0.5, 0.5, _nu / (_nu + pow(value, 2))) * 0.5; }
    //     else
    //     { z = boost::math::ibetac(0.5, _nu * 0.5, pow(value, 2) / (_nu + pow(value, 2))) * 0.5; }
    //     if(value > 0)
    //     { return 1-z; }
    //     else
    //     {return z; }
    // }

    // double StudentDistribution::quantile(const double& p) const
    // {
    //     double x, q;
    //     if(p < 0.5)
    //     { 
    //         x = boost::math::ibeta_inv(_nu*0.5, 0.5, 2*p);
    //         q = -pow(_nu*(1-x)/x, 0.5); 
    //     }
    //     else if(p >= 0.5)
    //     { 
    //         x = boost::math::ibeta_inv(_nu*0.5, 0.5, 2*(1-p));
    //         q = pow(_nu*(1-x)/x, 0.5); 
    //     }
    //     return q;         
    // }

    double StudentDistribution::ldf(const double& value) const
    { return log(pdf(value)); }

    double StudentDistribution::pdf(const double& value) const
    { 
        boost::math::students_t dist(_nu);
        return boost::math::pdf(dist, value); 
    }

    double StudentDistribution::cdf(const double& value) const
    { 
        boost::math::students_t dist(_nu);
        return boost::math::cdf(dist, value); 
    }

    double StudentDistribution::quantile(const double& p) const
    { 
        boost::math::students_t dist(_nu);
        return boost::math::quantile(dist, p); 
    }

    std::unique_ptr< UnivariateEvent > StudentDistribution::simulate() const
    {        
        boost::uniform_01<> dist;
        boost::variate_generator<boost::mt19937&, boost::uniform_01<> > simulator(__impl::get_random_generator(), dist);
        return std::make_unique< ContinuousElementaryEvent >(quantile(simulator()));
    }

    double StudentDistribution::get_mean() const
    {
        if(_nu>1.)
        { return 0.; }
        else
        { return std::numeric_limits< double >::quiet_NaN(); }
    }

    double StudentDistribution::get_variance() const
    {
        if(_nu>2.)
        { return _nu/(_nu-2.); }
        else if(_nu>1.)
        { return std::numeric_limits< double >::infinity(); } 
        else
        { return std::numeric_limits< double >::quiet_NaN(); }
    }

    NonStandardStudentDistribution::NonStandardStudentDistribution() : StudentDistribution()
    {
        _mu = 0.;
        _sigma = 1.;
    }

    NonStandardStudentDistribution::NonStandardStudentDistribution(const double& mu, const double& sigma, const double& nu) : StudentDistribution(nu)
    {
        _mu = mu;
        _sigma = sigma;
    }

    NonStandardStudentDistribution::NonStandardStudentDistribution(const NonStandardStudentDistribution& nsstudent) : StudentDistribution(nsstudent)
    {
        _mu = nsstudent._mu;
        _sigma = nsstudent._sigma;
    }

    unsigned int NonStandardStudentDistribution::get_nb_parameters() const
    { return 3; }

    const double& NonStandardStudentDistribution::get_mu() const
    { return _mu; }

    void NonStandardStudentDistribution::set_mu(const double& mu)
    { _mu = mu; }

    const double& NonStandardStudentDistribution::get_sigma() const
    { return _sigma; }

    void NonStandardStudentDistribution::set_sigma(const double& sigma)
    {
        if(sigma <= 0.)
        { throw lower_bound_error("sigma", sigma, 0., true); }
        _sigma = sigma;
    }    

    double NonStandardStudentDistribution::ldf(const double& value) const
    { return log(pdf(value)); }
    
    double NonStandardStudentDistribution::pdf(const double& value) const
    { return StudentDistribution::pdf( (value - _mu) / _sigma ) / _sigma; }

    double NonStandardStudentDistribution::cdf(const double& value) const
    { return StudentDistribution::cdf( (value - _mu) / _sigma ); }

    double NonStandardStudentDistribution::quantile(const double& p) const
    { return _mu + _sigma * StudentDistribution::quantile(p); }

    std::unique_ptr< UnivariateEvent > NonStandardStudentDistribution::simulate() const
    {        
        boost::uniform_01<> dist;
        boost::variate_generator<boost::mt19937&, boost::uniform_01<> > simulator(__impl::get_random_generator(), dist);
        return std::make_unique< ContinuousElementaryEvent >(quantile(simulator()));
    }

    double NonStandardStudentDistribution::get_mean() const
    { return _mu + _sigma * StudentDistribution::get_mean(); }

    double NonStandardStudentDistribution::get_variance() const
    { return pow(_sigma, 2) * StudentDistribution::get_variance(); }

 

    GumbelDistribution::GumbelDistribution() 
    {
        _mu = 0.;
        _sigma = 1.;
    }

    GumbelDistribution::GumbelDistribution(const double& mu, const double& sigma) 
    {
        _mu = mu;
        _sigma = sigma;
    }

    GumbelDistribution::GumbelDistribution(const GumbelDistribution& gumbel_max)
    {
        _mu = gumbel_max._mu;
        _sigma = gumbel_max._sigma;
    }

    unsigned int GumbelDistribution::get_nb_parameters() const
    { return 2; }

    const double& GumbelDistribution::get_mu() const
    { return _mu; }

    void GumbelDistribution::set_mu(const double& mu)
    { _mu = mu; }

    const double& GumbelDistribution::get_sigma() const
    { return _sigma; }

    void GumbelDistribution::set_sigma(const double& sigma)
    {
        if(sigma <= 0.)
        { throw lower_bound_error("sigma", sigma, 0., true); }
        _sigma = sigma;
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
    { return log(pdf(value)); }

    double GumbelDistribution::pdf(const double& value) const
    { 
        boost::math::extreme_value dist(_mu, _sigma);
        return boost::math::pdf(dist, value); 
    }

    double GumbelDistribution::cdf(const double& value) const
    { 
        boost::math::extreme_value dist(_mu, _sigma);
        return boost::math::cdf(dist, value); 
    }

    double GumbelDistribution::quantile(const double& p) const
    { 
        boost::math::extreme_value dist(_mu, _sigma);
        return boost::math::quantile(dist, p); 
    }

    std::unique_ptr< UnivariateEvent > GumbelDistribution::simulate() const
    {        
        boost::uniform_01<> dist;
        boost::variate_generator<boost::mt19937&, boost::uniform_01<> > simulator(__impl::get_random_generator(), dist);
        return std::make_unique< ContinuousElementaryEvent >(quantile(simulator()));
    }

    double GumbelDistribution::get_mean() const
    { return _mu + _sigma * boost::math::constants::euler<double>(); }

    double GumbelDistribution::get_variance() const
    { return pow(_sigma *  boost::math::constants::pi<double>(), 2) / 6.; }
    
    GompertzDistribution::GompertzDistribution() 
    {
        _mu = 0.;
        _sigma = 1.;
    }

    GompertzDistribution::GompertzDistribution(const double& mu, const double& sigma) 
    {
        _mu = mu;
        _sigma = sigma;
    }

    GompertzDistribution::GompertzDistribution(const GompertzDistribution& gumbel_min)
    {
        _mu = gumbel_min._mu;
        _sigma = gumbel_min._sigma;
    }

    unsigned int GompertzDistribution::get_nb_parameters() const
    { return 2; }

    const double& GompertzDistribution::get_mu() const
    { return _mu; }

    void GompertzDistribution::set_mu(const double& mu)
    { _mu = mu; }

    const double& GompertzDistribution::get_sigma() const
    { return _sigma; }

    void GompertzDistribution::set_sigma(const double& sigma)
    {
        if(sigma <= 0.)
        { throw lower_bound_error("sigma", sigma, 0., true); }
        _sigma = sigma;
    }

    double GompertzDistribution::ldf(const double& value) const
    { return (value - _mu) / _sigma - exp( (value - _mu) / _sigma) - log(_sigma); }
    
    double GompertzDistribution::pdf(const double& value) const
    { return exp( (value - _mu)/ _sigma - exp( (value - _mu)/ _sigma) ) / _sigma ; }

    double GompertzDistribution::cdf(const double& value) const
    { return  1 - exp( - exp((value - _mu) / _sigma) ); }

    double GompertzDistribution::quantile(const double& p) const
    { return _mu + _sigma * log( -log(1-p) ); }

    std::unique_ptr< UnivariateEvent > GompertzDistribution::simulate() const
    {        
        boost::uniform_01<> dist;
        boost::variate_generator<boost::mt19937&, boost::uniform_01<> > simulator(__impl::get_random_generator(), dist);
        return std::make_unique< ContinuousElementaryEvent >(quantile(simulator()));
    }

    double GompertzDistribution::get_mean() const
    { return _mu - _sigma * boost::math::constants::euler<double>(); }

    double GompertzDistribution::get_variance() const
    { return pow(_sigma *  boost::math::constants::pi<double>(), 2) / 6.; }
     
    ExponentialDistribution::ExponentialDistribution()
    { _lambda = 1.; }

    ExponentialDistribution::ExponentialDistribution(const double& lambda)
    { set_lambda(lambda); }

    ExponentialDistribution::ExponentialDistribution(const ExponentialDistribution& exponential)
    { _lambda = exponential._lambda; }

    ExponentialDistribution::~ExponentialDistribution()
    {}

    unsigned int ExponentialDistribution::get_nb_parameters() const
    { return 1; }

    const double& ExponentialDistribution::get_lambda() const
    { return _lambda; }

    void ExponentialDistribution::set_lambda(const double& lambda)
    {
        if(lambda <= 0.)
        { throw lower_bound_error("lambda", lambda, 0., true); } 
        _lambda = lambda;
    }

    double ExponentialDistribution::ldf(const double& value) const
    { 
        double l;
        if(value <= 0.)
        { l = -1 * std::numeric_limits< double >::infinity();; }
        else
        { l = log(_lambda) - _lambda * value; }
        return l;
    }

    double ExponentialDistribution::pdf(const double& value) const
    { 
        double p;
        if(value <= 0.)            
        { p = 0.; }
        else
        { p = _lambda * exp(-_lambda * value);; }
        return p;
    }

    double ExponentialDistribution::cdf(const double& value) const
    {
        double c;
        if(value <= 0.)
        { c = 0.; }
        else
        { c = 1 - exp(-_lambda * value); }
        return c;
    }

    double ExponentialDistribution::quantile(const double& p) const
    { return -log(1-p)/_lambda; }

    std::unique_ptr< UnivariateEvent > ExponentialDistribution::simulate() const
    {
        boost::uniform_01<> dist;
        boost::variate_generator<boost::mt19937&, boost::uniform_01<> > simulator(__impl::get_random_generator(), dist);
        return std::make_unique< ContinuousElementaryEvent >(quantile(simulator()));
    }

    double ExponentialDistribution::get_mean() const
    { return 1/_lambda; }

    double ExponentialDistribution::get_variance() const
    { return 1/pow(_lambda, 2); }

    GammaDistribution::GammaDistribution()
    {
        _alpha = 1.;
        _beta = 1.;
    }

    GammaDistribution::GammaDistribution(const double& alpha, const double& beta)
    {
        set_alpha(alpha);
        set_beta(beta);
    }

    GammaDistribution::GammaDistribution(const GammaDistribution& gamma)
    {
        _alpha = gamma._alpha;
        _beta = gamma._beta;
    }

    GammaDistribution::~GammaDistribution()
    {}

    unsigned int GammaDistribution::get_nb_parameters() const
    {
        unsigned int nb_parameters = 2;
        if(_alpha == 1.)
        { --nb_parameters; }
        return nb_parameters;
    }

    const double& GammaDistribution::get_alpha() const
    { return _alpha; }

    void GammaDistribution::set_alpha(const double& alpha)
    {
        if(alpha <= 0.)
        { throw lower_bound_error("alpha", alpha, 0., true); } 
        _alpha = alpha;
    }

    const double& GammaDistribution::get_beta() const
    { return _beta; }

    void GammaDistribution::set_beta(const double& beta)
    {
        if(beta <= 0.)
        { throw lower_bound_error("beta", beta, 0., true); } 
        _beta = beta;
    }

    double GammaDistribution::ldf(const double& value) const
    { 
        double p;
        if(value <= 0.)
        { p = 0.; }
        else
        { p = _alpha * log(_beta) + (_alpha - 1) * log(value) - _beta * value - boost::math::lgamma(_alpha); }
        return p;
    }

    double GammaDistribution::pdf(const double& value) const
    { 
        double p;
        if(value <= 0.)            
        { p = 0.; }
        else
        { p = (pow(_beta, _alpha) * pow(value, _alpha - 1) * exp( - _beta * value)) / boost::math::tgamma(_alpha); }
        return p;
    }

    double GammaDistribution::cdf(const double& value) const
    {
        double p;
        if(value <= 0.)
        { p = 0.; }
        else
        { p = boost::math::gamma_p(_alpha, _beta * value); }
        return p;
    }

    double GammaDistribution::quantile(const double& p) const
    { return boost::math::gamma_p_inv(_alpha, p) / _beta; }

    std::unique_ptr< UnivariateEvent > GammaDistribution::simulate() const
    {
        boost::random::gamma_distribution<> dist(_alpha, 1 / _beta);
        boost::variate_generator<boost::mt19937&, boost::random::gamma_distribution<> > simulator(__impl::get_random_generator(), dist);
        return std::make_unique< ContinuousElementaryEvent >(simulator());
    }

    double GammaDistribution::get_mean() const
    { return _alpha / _beta; }

    double GammaDistribution::get_variance() const
    { return _alpha / pow(_beta, 2); }

    BetaDistribution::BetaDistribution()
    {
        _alpha = 1.;
        _beta = 1.;
    }

    BetaDistribution::BetaDistribution(const double& alpha, const double& beta)
    {
        set_alpha(alpha);
        set_beta(beta);
    }

    BetaDistribution::BetaDistribution(const BetaDistribution& beta)
    {
        _alpha = beta._alpha;
        _beta = beta._beta;
    }

    BetaDistribution::~BetaDistribution()
    {}

    unsigned int BetaDistribution::get_nb_parameters() const
    { return 2; }

    const double& BetaDistribution::get_alpha() const
    { return _alpha; }

    void BetaDistribution::set_alpha(const double& alpha)
    {
        if(alpha <= 0.)
        { throw lower_bound_error("alpha", alpha, 0., true); } 
        _alpha = alpha;
    }

    const double& BetaDistribution::get_beta() const
    { return _beta; }

    void BetaDistribution::set_beta(const double& beta)
    {
        if(beta <= 0.)
        { throw lower_bound_error("beta", beta, 0., true); } 
        _beta = beta;
    }

    double BetaDistribution::ldf(const double& value) const
    { 
        double l;
        if(value < 0. || value > 1.)
        { l = -1 * std::numeric_limits< double >::infinity(); }
        else
        { l = boost::math::lgamma(_alpha + _beta) - boost::math::lgamma(_alpha) - boost::math::lgamma(_beta) + (_alpha - 1) * log(value) + (_beta - 1) * log(1 - value); }
        return l;
    }

    double BetaDistribution::pdf(const double& value) const
    { 
        double p;
        if(value < 0. || value > 1.)            
        { p = 0.; }
        else
        { p = boost::math::tgamma(_alpha + _beta) / (boost::math::tgamma(_alpha) * boost::math::tgamma(_beta)) * pow(value, _alpha - 1) * pow(1 - value, _beta - 1); }
        return p;
    }

    double BetaDistribution::cdf(const double& value) const
    {
        double c;
        if(value < 0.)
        { c = 0.; }
        else
        {
            if(value > 1.)
            { c = 1.; }
            else
            { c = boost::math::ibeta(_alpha, _beta, value); } 
        }
        return c;
    }

    double BetaDistribution::quantile(const double& p) const
    { return boost::math::ibeta_inv(_alpha, _beta, p); }

    std::unique_ptr< UnivariateEvent > BetaDistribution::simulate() const
    {
        boost::random::beta_distribution<> dist(_alpha, _beta);
        boost::variate_generator<boost::mt19937&, boost::random::beta_distribution<> > simulator(__impl::get_random_generator(), dist);
        return std::make_unique< ContinuousElementaryEvent >(simulator());
    }

    double BetaDistribution::get_mean() const
    { return _alpha / (_alpha + _beta); }

    double BetaDistribution::get_variance() const
    { return _alpha * _beta / (pow(_alpha + _beta, 2) * (_alpha + _beta + 1)); }


    UniformDistribution::UniformDistribution()
    {
        _alpha = 0.;
        _beta = 1.;
    }

    UniformDistribution::UniformDistribution(const double& alpha, const double& beta)
    {
        set_alpha(alpha);
        set_beta(beta);
    }

    UniformDistribution::UniformDistribution(const UniformDistribution& uniform)
    {
        _alpha = uniform._alpha;
        _beta = uniform._beta;
    }

    UniformDistribution::~UniformDistribution()
    {}

    unsigned int UniformDistribution::get_nb_parameters() const
    { return 2; }

    const double& UniformDistribution::get_alpha() const
    { return _alpha; }

    void UniformDistribution::set_alpha(const double& alpha)
    {_alpha = alpha; }

    const double& UniformDistribution::get_beta() const
    { return _beta; }

    void UniformDistribution::set_beta(const double& beta)
    {
        if(beta <= _alpha)
        { throw lower_bound_error("beta", beta, _alpha, true); } 
        _beta = beta;
    }

    double UniformDistribution::ldf(const double& value) const
    { 
        double l;
        if(value < _alpha || value > _beta)
        { l = -1 * std::numeric_limits< double >::infinity(); }
        else
        { l = -log(_beta - _alpha); }
        return l;
    }

    double UniformDistribution::pdf(const double& value) const
    { 
        double p;
        if(value < _alpha || value > _beta)            
        { p = 0.; }
        else
        { p = 1/(_beta - _alpha); }
        return p;
    }

    double UniformDistribution::cdf(const double& value) const
    {
        double c;
        if(value <= _alpha)
        { c = 0.; }
        else 
        {
            if (value >= _beta)
            { c = 1.; }
            else
            { c = (value - _alpha)/(_beta - _alpha); }
        }
        return c;
    }

    double UniformDistribution::quantile(const double& p) const
    { return _alpha + p * (_beta - _alpha); }

    std::unique_ptr< UnivariateEvent > UniformDistribution::simulate() const
    {
        boost::uniform_01<> dist;
        boost::variate_generator<boost::mt19937&, boost::uniform_01<> > simulator(__impl::get_random_generator(), dist);
        return std::make_unique< ContinuousElementaryEvent >(_alpha + (_beta - _alpha) * simulator());
    }

    double UniformDistribution::get_mean() const
    { return 0.5 * (_alpha + _beta); }

    double UniformDistribution::get_variance() const
    { return pow(_beta - _alpha, 2)/12.; }
    

    double UnivariateConditionalDistribution::loglikelihood(const UnivariateConditionalData& data) const
    {
        double llh = 0.;
        Index index = 0;
        std::unique_ptr< UnivariateConditionalData::Generator > generator = data.generator();
        while(generator->is_valid() && boost::math::isfinite(llh))
        {
            ++index;
            double weight = generator->weight();
            if(weight > 0.)
            {
                const UnivariateDistribution* distribution = this->operator() (*(generator->explanatories()));
                llh += weight * distribution->probability(generator->response(), true);
                //std::cout << "weight = " << weight << std::endl;
                //std::cout << "proba = " << distribution->probability(generator->response(), true) << std::endl;
            }
            ++(*generator);
        }
        return llh;        
    }

    UnivariateConditionalDistribution::~UnivariateConditionalDistribution()
    {}

    MultivariateDistribution::~MultivariateDistribution()
    {}

    double MultivariateDistribution::loglikelihood(const MultivariateData& data) const
    {
        double llh = 0.;
        std::unique_ptr< MultivariateData::Generator > generator = data.generator();
        while(generator->is_valid() && boost::math::isfinite(llh))
        { 
            double weight = generator->weight();
            if(weight > 0.)
            { llh += weight * probability(generator->event(), true); }
            ++(*generator);
        }
        return llh;
    }

    CategoricalUnivariateMixtureDistribution::CategoricalUnivariateMixtureDistribution(const std::vector< CategoricalUnivariateDistribution* > observations, const Eigen::VectorXd& pi)
    { init(observations, pi); }

    CategoricalUnivariateMixtureDistribution::CategoricalUnivariateMixtureDistribution(const CategoricalUnivariateMixtureDistribution& mixture)
    { init(mixture); }

    CategoricalUnivariateMixtureDistribution::~CategoricalUnivariateMixtureDistribution()
    {}

    double CategoricalUnivariateMixtureDistribution::pdf(const int& position) const
    {
        double p = 0.;
        for(Index index = 0, max_index = get_nb_states(); index < max_index; ++index)
        { p += _pi[index] * _observations[index]->pdf(position); }
        return p;        
    }

    std::set< std::string > CategoricalUnivariateMixtureDistribution::get_values() const
    {
        std::set< std::string > values = std::set< std::string >();
        for(Index index = 0, max_index = get_nb_states(); index < max_index; ++index)
        { 
            std::set< std::string > _values = _observations[index]->get_values();
            values.insert(_values.cbegin(), _values.cend());
        }
        return values;
    }

    SplittingDistribution::SplittingDistribution(const DiscreteUnivariateDistribution& sum, const SingularDistribution& singular)
    {
        _sum = nullptr;
        _singular = nullptr;
        set_sum(sum);
        set_singular(singular);
    }

    SplittingDistribution::SplittingDistribution(const SplittingDistribution& splitting)
    {
        if(splitting._sum)
        { _sum = static_cast< DiscreteUnivariateDistribution* >(splitting._sum->copy().release()); }
        else
        { _sum = nullptr; }
        if(splitting._singular)
        { _singular = splitting._singular->copy().release(); }
        else
        { _singular = nullptr; }
    }

    SplittingDistribution::~SplittingDistribution()
    {
        if(_sum)
        {
            delete _sum;
            _sum = nullptr;
        }
        if(_singular)
        {
            delete _singular;
            _singular = nullptr;
        }
    }

    Index SplittingDistribution::get_nb_components() const
    { return _singular->get_nb_components(); }

    unsigned int SplittingDistribution::get_nb_parameters() const
    { return _sum->get_nb_parameters() + _singular->get_nb_parameters(); }

    double SplittingDistribution::probability(const MultivariateEvent* event, const bool& logarithm) const
    {
        double p;
        if(event && event->size() == get_nb_components())
        {
            try
            {
                int sum = 0;
                for(Index component = 0, max_component = get_nb_components(); component < max_component; ++component)
                {
                    const UnivariateEvent* uevent = event->get(component);
                    if(uevent)
                    {
                        if(uevent->get_outcome() == DISCRETE && uevent->get_event() == ELEMENTARY)
                        { sum += static_cast< const DiscreteElementaryEvent* >(uevent)->get_value(); }
                        else
                        { throw std::exception(); }
                    }
                }  
                p = _sum->ldf(sum) + _singular->probability(event, logarithm);
            }
            catch(const std::exception& error)
            { p = log(0.); }
        }
        else
        { p = log(0.); }
        if(!logarithm)
        { p = exp(p); }
        return p;
    }

    std::unique_ptr< MultivariateEvent > SplittingDistribution::simulate() const
    {
        int sum = static_cast< DiscreteElementaryEvent* >(_sum->simulate().get())->get_value();
        return _singular->simulate(sum);
    }

    const DiscreteUnivariateDistribution* SplittingDistribution::get_sum() const
    { return _sum; }
    
    void SplittingDistribution::set_sum(const DiscreteUnivariateDistribution& sum)
    { 
        if(sum.cdf(-1) > 0.)
        { throw parameter_error("sum", "must have a natural numbers subset as support"); }
        if(_sum)
        { delete _sum; }
        _sum = static_cast< DiscreteUnivariateDistribution* >(sum.copy().release()); 
    }

    SingularDistribution* SplittingDistribution::get_singular() const
    { return _singular; }

    void SplittingDistribution::set_singular(const SingularDistribution& singular)
    {
        if(_singular && !singular.get_nb_components() == get_nb_components())
        { throw parameter_error("singular", "has not the required number of components"); } 
        if(_singular)
        { delete _singular; }
        _singular = singular.copy().release();
    }

    SplittingDistribution::SplittingDistribution()
    {
        _sum = nullptr;
        _singular = nullptr;
    }
    
    MultinormalDistribution::MultinormalDistribution(const Eigen::VectorXd& mu, const Eigen::MatrixXd& sigma)
    {
        _mu = mu;
        _sigma = sigma;
    }
    
    MultinormalDistribution::MultinormalDistribution(const MultinormalDistribution& normal)
    {
        _mu = normal._mu;
        _sigma = normal._mu;
    }

    MultinormalDistribution::~MultinormalDistribution()
    {}

    Index MultinormalDistribution::get_nb_components() const
    { return _mu.size(); }

    unsigned int MultinormalDistribution::get_nb_parameters() const
    { return _sigma.size() + _mu.size(); }
    
    std::unique_ptr< MultivariateEvent > MultinormalDistribution::simulate() const
    {
        Eigen::VectorXd x(get_nb_components());
        boost::normal_distribution<> dist(0.,1.);
        boost::variate_generator<boost::mt19937&, boost::normal_distribution<> > simulator(__impl::get_random_generator(), dist);
        for (Index index = 0, max_index = x.size(); index < max_index; ++index)
        { x(index) = simulator(); }
        Eigen::LLT<Eigen:: MatrixXd> llt(_sigma);
        Eigen::MatrixXd B = llt.matrixL();
        x = _mu + B*x;
        return std::make_unique< VectorEvent >(x);
    }

    const Eigen::VectorXd& MultinormalDistribution::get_mu() const
    { return _mu; }

    void MultinormalDistribution::set_mu(const Eigen::VectorXd& mu)
    {_mu = mu; }

    const Eigen::MatrixXd& MultinormalDistribution::get_sigma() const
    {return _sigma; }

    void MultinormalDistribution::set_sigma(const Eigen::MatrixXd& sigma)
    {_sigma = sigma; }

    double MultinormalDistribution::probability(const MultivariateEvent* event, const bool& logarithm) const
    {
        NOT_IMPLEMENTED();
        return 0.;
    }

    DirichletDistribution::DirichletDistribution(const Index& nb_components)
    {
        _alpha = Eigen::VectorXd::Ones(nb_components + 1);
        set_alpha(_alpha);
    }

    DirichletDistribution::DirichletDistribution(const Eigen::VectorXd& alpha)
    {
        _alpha = alpha;
        set_alpha(_alpha);
    }
    
    DirichletDistribution::DirichletDistribution(const DirichletDistribution& dirichlet)
    { _alpha = dirichlet._alpha; }

    DirichletDistribution::~DirichletDistribution()
    {}

    Index DirichletDistribution::get_nb_components() const
    { return _alpha.size() - 1; }

    unsigned int DirichletDistribution::get_nb_parameters() const
    { return _alpha.size(); }
    
    std::unique_ptr< MultivariateEvent > DirichletDistribution::simulate() const
    {
        Eigen::VectorXd x(get_nb_components());
        double sum = 0.;
        for (Index index = 0, max_index = x.size(); index < max_index; ++index)
        {
            boost::random::gamma_distribution<> dist(_alpha(index), 1.);
            boost::variate_generator<boost::mt19937&, boost::random::gamma_distribution<> > simulator(__impl::get_random_generator(), dist);
            x(index) = simulator(); 
            sum += x(index);
        }
        boost::random::gamma_distribution<> dist(_alpha(_alpha.size() - 1), 1.);
        boost::variate_generator<boost::mt19937&, boost::random::gamma_distribution<> > simulator(__impl::get_random_generator(), dist);
        sum += simulator();
        x /= sum;
        return std::make_unique< VectorEvent >(x);
    }

    const Eigen::VectorXd& DirichletDistribution::get_alpha() const
    { return _alpha; }

    void DirichletDistribution::set_alpha(const Eigen::VectorXd& alpha)
    {
        if(alpha.size() != _alpha.size())
        { throw size_error("alpha", alpha.size(), _alpha.size(), size_error::size_type::equal); }
        double sum = 0.;
        for(Index index = 0, max_index = alpha.size(); index < max_index; ++index)
        {
            if(alpha(index) <= 0.)
            { throw lower_bound_error("alpha", alpha(index), 0., true); }
            sum += alpha(index);
        }
        _constant = 0.;
        for(Index index = 0, max_index = alpha.size(); index < max_index; ++index)
        { _constant *= boost::math::tgamma(alpha(index)); }
        _constant /= boost::math::tgamma(sum);
        _alpha = alpha;
    }

    double DirichletDistribution::probability(const MultivariateEvent* event, const bool& logarithm) const
    {
        double p;
        if(event)
        {
            if(event->size() == get_nb_parameters())
            {
                p = 0.;
                double sum = 0.;
                for(Index index = 0, max_index = event->size(); index < max_index; ++index)
                {
                    const UnivariateEvent* uevent = event->get(index);
                    if(uevent && uevent->get_outcome() == CONTINUOUS && uevent->get_event() == ELEMENTARY)
                    {
                        const double& value = static_cast< const ContinuousElementaryEvent* >(uevent)->get_value();
                        if(value < 1. && value > 0)
                        {
                            sum += value;
                            p += (_alpha(index) - 1) * log(value);
                        }
                        else
                        { p = -1 * std::numeric_limits< double >::infinity(); }
                    }
                    else
                    { p = std::numeric_limits< double >::quiet_NaN(); }
                }
                if(boost::math::isfinite(p))
                { p += (_alpha(_alpha.size() - 1) - 1) * log(1 - sum); }
                if(!logarithm)
                { p = exp(p); }
            }
            else if(logarithm)
            { p = -1 * std::numeric_limits< double >::infinity(); }
            else 
            { p = 0.; }
        }
        else if(logarithm)
        { p = 0.; }
        else
        { p = 1.; }
        return p;
    }

    MultivariateConditionalDistribution::~MultivariateConditionalDistribution()
    {}
    
    double MultivariateConditionalDistribution::loglikelihood(const MultivariateConditionalData& data) const
    {
        double llh = 0.;
        std::unique_ptr< MultivariateConditionalData::Generator > generator = data.generator();
        while(generator->is_valid() && boost::math::isfinite(llh))
        { 
            double weight = generator->weight();
            if(weight > 0.)
            {
                const MultivariateDistribution* distribution = this->operator() (*(generator->explanatories()));
                llh += weight * distribution->probability(generator->responses(), true);
            }
            ++(*generator);
        }
        return llh;        
    }

    DiscreteUnivariateMixtureDistribution::DiscreteUnivariateMixtureDistribution(const std::vector< DiscreteUnivariateDistribution* > observations, const Eigen::VectorXd& pi)
    { init(observations, pi); }

    DiscreteUnivariateMixtureDistribution::DiscreteUnivariateMixtureDistribution(const DiscreteUnivariateMixtureDistribution& mixture)
    { init(mixture); }

    DiscreteUnivariateMixtureDistribution::~DiscreteUnivariateMixtureDistribution()
    {}

    int DiscreteUnivariateMixtureDistribution::quantile(const double& p) const
    {
        int lv = _observations[0]->quantile(p);
        int rv = lv;
        for(Index index = 1, max_index = get_nb_states(); index < max_index; ++index)
        {
            int current = _observations[index]->quantile(p);
            if(current < lv)
            { lv = current; }
            else if(current > rv)
            { rv = current; }
        }
        --lv;
        while(cdf(lv) >= p)
        { --lv; }
        ++rv;
        while(cdf(rv) <= p)
        { ++rv; }
        double lp = cdf(lv), rp = cdf(rv);
        do
        {
            int mv = (rv + lv)/2;
            double mp = cdf(mv);
            if(mp < p)
            {
                lv = mv;
                lp = mp;
            }
            else
            {
                rv = mv;
                rp = mp;
            }
        } while(rv - lv > 1);
        return rv;
    }

    ContinuousUnivariateMixtureDistribution::ContinuousUnivariateMixtureDistribution(const std::vector< ContinuousUnivariateDistribution* > observations, const Eigen::VectorXd& pi)
    { 
        init(observations, pi);
        _epsilon = 1e-6;
    }

    ContinuousUnivariateMixtureDistribution::ContinuousUnivariateMixtureDistribution(const ContinuousUnivariateMixtureDistribution& mixture)
    {
        init(mixture);
        _epsilon = mixture._epsilon;
    }

    ContinuousUnivariateMixtureDistribution::~ContinuousUnivariateMixtureDistribution()
    {}

    double ContinuousUnivariateMixtureDistribution::quantile(const double& p) const
    {
        double lv = _observations[0]->quantile(p);
        double rv = lv;
        for(Index index = 1, max_index = get_nb_states(); index < max_index; ++index)
        {
            double current = _observations[0]->quantile(p);
            if(current < lv)
            { lv = current; }
            else if(current > rv)
            { rv = current; }
        }
        double lp = cdf(lv), rp = cdf(rv);
        do
        {
            int mv = (rv + lv)/2;
            double mp = cdf(mv);
            if(mp < p)
            {
                lv = mv;
                lp = mp;
            }
            else
            {
                rv = mv;
                rp = mp;
            } 
        } while(rv - lv > _epsilon);
        return rv;
    }

    double ContinuousUnivariateMixtureDistribution::get_epsilon() const
    { return _epsilon; }

    void ContinuousUnivariateMixtureDistribution::set_epsilon(const double& epsilon)
    { 
        if(epsilon <= 0.)
        { throw lower_bound_error("epsilon", epsilon, 0., true); }
        _epsilon = epsilon;
    }


    MixtureSingularDistribution::MixtureSingularDistribution(const std::vector< SingularDistribution* > observations, const Eigen::VectorXd& pi)
    {
        this->init(observations, pi);
        std::vector< SingularDistribution* >::const_iterator it = observations.cbegin(), it_end = observations.cend();
        Index nb_components = (*it)->get_nb_components();
        ++it;
        while(it != it_end)
        {
            if((*it)->get_nb_components() != nb_components)
            { throw parameter_error("observations", "not same number of components"); }
            ++it;
        }

    }

    MixtureSingularDistribution::MixtureSingularDistribution(const MixtureSingularDistribution& mixture)
    { init(mixture); } 

    MixtureSingularDistribution::~MixtureSingularDistribution()
    {} 

    void MixtureSingularDistribution::set_observation(const Index& index, const SingularDistribution& observation)
    { 
        if(observation.get_nb_components() != get_nb_components())
        { throw parameter_error("observation", "not same number of components"); }
        MixtureDistribution< SingularDistribution >::set_observation(index, observation);
    }

    Index MixtureSingularDistribution::get_nb_components() const
    { return this->_observations.back()->get_nb_components(); }

    double MixtureSingularDistribution::probability(const MultivariateEvent* event, const bool& logarithm) const
    {
        double p = 0.;
        for(Index index = 0, max_index = get_nb_states(); index < max_index; ++index)
        { p += _pi[index] * _observations[index]->probability(event, false); }
        if(logarithm)
        { p = log(p); }
        return p;
    }

    std::unique_ptr< MultivariateEvent > MixtureSingularDistribution::simulate(unsigned int sum) const
    {
        double cp = _pi[0], sp = boost::uniform_01<boost::mt19937&>(__impl::get_random_generator())();
        Index index = 0, max_index = get_nb_states();
        while(cp < sp && index < max_index)
        {
            ++index;
            cp += _pi[index];
        }
        return _observations[index]->simulate(sum);
    }
}
