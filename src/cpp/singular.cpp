#include "singular.h"

#include <boost/random/poisson_distribution.hpp>
#include <boost/random/binomial_distribution.hpp>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/gamma_distribution.hpp>
#include <boost/random/beta_distribution.hpp>
#include <boost/random/uniform_int_distribution.hpp>
#include <boost/random/variate_generator.hpp>
#include <boost/math/special_functions/erf.hpp>
#include <boost/math/special_functions/gamma.hpp>
#include <boost/math/special_functions/beta.hpp>

namespace statiskit
{
    SingularDistribution::~SingularDistribution()
    {}
    
    double SingularDistribution::loglikelihood(const MultivariateData& data) const
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

    MultinomialSingularDistribution::MultinomialSingularDistribution(const Eigen::VectorXd& pi)
    {
        _pi = Eigen::VectorXd::Zero(pi.size());
        set_pi(pi);
    }

    MultinomialSingularDistribution::MultinomialSingularDistribution(const MultinomialSingularDistribution& splitting)
    { _pi = splitting._pi; }

    MultinomialSingularDistribution::~MultinomialSingularDistribution()
    {}

    Index MultinomialSingularDistribution::get_nb_components() const
    { return _pi.size(); }

    unsigned int MultinomialSingularDistribution::get_nb_parameters() const
    { return _pi.size() - 1; }

    double MultinomialSingularDistribution::probability(const MultivariateEvent* event, const bool& logarithm) const
    {
        double p;
        if(event && event->size() == get_nb_components())
        {
            try
            {
                p = 0.;
                int sum = 0;
                for(Index component = 0, max_component = get_nb_components(); component < max_component; ++component)
                {
                    const UnivariateEvent* uevent = event->get(component);
                    if(uevent)
                    {
                        if(uevent->get_outcome() == DISCRETE && uevent->get_event() == ELEMENTARY)
                        {
                            int value = static_cast< const DiscreteElementaryEvent* >(uevent)->get_value();
                            if(!(_pi[component] <= 0. && value == 0))
                            {
                                p += value * log(_pi[component]) - boost::math::lgamma(value + 1);
                                sum += value;
                            }
                        }
                        else
                        { throw std::exception(); }
                    }
                }
                p += boost::math::lgamma(sum + 1);
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

    std::unique_ptr< MultivariateEvent > MultinomialSingularDistribution::simulate(unsigned int sum) const
    {
        double pi = 0.;
        Index component = 0, max_component = get_nb_components() - 1;
        std::unique_ptr< VectorEvent > event = std::make_unique< VectorEvent >(max_component + 1);
        while(component < max_component && sum > 0)
        {
            boost::binomial_distribution<> dist(sum, _pi[component] / (1 - pi));
            boost::variate_generator<boost::mt19937&, boost::binomial_distribution<> > simulator(__impl::get_random_generator(), dist);
            int value = simulator();
            pi += _pi[component];
            event->set(component, DiscreteElementaryEvent(value));
            sum -= value;
            ++component;
        }
        for(; component < max_component; ++component)
        { event->set(component, DiscreteElementaryEvent(0)); }
        event->set(max_component, DiscreteElementaryEvent(sum));
        return std::move(event);
    }

    const Eigen::VectorXd& MultinomialSingularDistribution::get_pi() const
    { return _pi; }

    void MultinomialSingularDistribution::set_pi(const Eigen::VectorXd& pi)
    {
        if(pi.rows() == _pi.size() - 1)
        {
            Index j = 0; 
            while(j < pi.rows() && pi[j] >= 0.)
            { ++j; }
            if(j < pi.rows())
            { throw parameter_error("pi", "contains negative values"); } 
            double sum = pi.sum();
            if(sum < 1)
            {
                _pi.block(0, 0, _pi.size() - 1, 1) = pi / sum;
                _pi[_pi.size()-1] = 1 - sum;
            }
            else
            { throw parameter_error("pi", "last category values"); }                
        }
        else if(pi.rows() == _pi.size())
        {
            Index j = 0; 
            while(j < pi.rows() && pi[j] >= 0.)
            { ++j; }
            if(j < pi.rows())
            { throw parameter_error("pi", "contains negative values"); } 
            _pi = pi / pi.sum();
        }
        else
        { throw parameter_error("pi", "number of parameters"); }
    }

    DirichletMultinomialSingularDistribution::DirichletMultinomialSingularDistribution(const Eigen::VectorXd& alpha)
    {
        _alpha = Eigen::VectorXd::Zero(alpha.size());
        set_alpha(alpha);
    }

    DirichletMultinomialSingularDistribution::DirichletMultinomialSingularDistribution(const DirichletMultinomialSingularDistribution& splitting)
    { _alpha = splitting._alpha; }

    DirichletMultinomialSingularDistribution::~DirichletMultinomialSingularDistribution()
    {}

    Index DirichletMultinomialSingularDistribution::get_nb_components() const
    { return _alpha.size(); }


    unsigned int DirichletMultinomialSingularDistribution::get_nb_parameters() const
    { return _alpha.size(); }

    double DirichletMultinomialSingularDistribution::probability(const MultivariateEvent* event, const bool& logarithm) const
    {
        double p;
        if(event && event->size() == get_nb_components())
        {
            try
            {
                p = 0.;
                int sum = 0;
                for(Index component = 0, max_component = get_nb_components(); component < max_component; ++component)
                {
                    const UnivariateEvent* uevent = event->get(component);
                    if(uevent)
                    {
                        if(uevent->get_outcome() == DISCRETE && uevent->get_event() == ELEMENTARY)
                        {
                            int value = static_cast< const DiscreteElementaryEvent* >(uevent)->get_value();
                            if(!(_alpha[component] <= 0. && value == 0))
                            {
                                p += boost::math::lgamma(_alpha[component] + value);
                                p -= boost::math::lgamma(_alpha[component]) + boost::math::lgamma(value + 1);
                                sum += value;
                            }
                        }
                        else
                        { throw std::exception(); }
                    }
                }
                double alpha = _alpha.sum();
                p += boost::math::lgamma(sum + 1) + boost::math::lgamma(alpha) - boost::math::lgamma(alpha + sum);
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

    std::unique_ptr< MultivariateEvent > DirichletMultinomialSingularDistribution::simulate(unsigned int sum) const
    {
        Eigen::VectorXd _pi = Eigen::VectorXd::Zero(get_nb_components());
        for(Index component = 0, max_component = get_nb_components(); component < max_component; ++component)
        {
            boost::random::gamma_distribution<> dist(_alpha(component), 1.);
            boost::variate_generator<boost::mt19937&, boost::random::gamma_distribution<> > simulator(__impl::get_random_generator(), dist);
            _pi(component) = simulator(); 
        }
        _pi /= _pi.sum();
        double pi = 0.;
        Index component = 0, max_component = get_nb_components() - 1;
        std::unique_ptr< VectorEvent > event = std::make_unique< VectorEvent >(max_component + 1);
        while(component < max_component && sum > 0)
        {
            boost::binomial_distribution<> dist(sum, _pi[component] / (1 - pi));
            boost::variate_generator<boost::mt19937&, boost::binomial_distribution<> > simulator(__impl::get_random_generator(), dist);
            int value = simulator();
            pi += _pi[component];
            event->set(component, DiscreteElementaryEvent(value));
            sum -= value;
            ++component;
        }
        for(; component < max_component; ++component)
        { event->set(component, DiscreteElementaryEvent(0)); }
        event->set(max_component, DiscreteElementaryEvent(sum));
        return std::move(event);
    }

    const Eigen::VectorXd& DirichletMultinomialSingularDistribution::get_alpha() const
    { return _alpha; }

    void DirichletMultinomialSingularDistribution::set_alpha(const Eigen::VectorXd& alpha)
    {
        if(alpha.rows() == _alpha.size())
        {
            Index j = 0; 
            while(j < alpha.rows() && alpha[j] >= 0.)
            { ++j; }
            if(j < alpha.rows())
            { throw parameter_error("alpha", "contains negative values"); } 
            _alpha = alpha;
        }
        else
        { throw parameter_error("alpha", "number of parameters"); }
    }
}