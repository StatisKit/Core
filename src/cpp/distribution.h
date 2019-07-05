#pragma once

#include "base.h"
#include "data.h"
#include "singular.h"
#include <statiskit/linalg/Eigen.h>

#include <boost/random/poisson_distribution.hpp>
#include <boost/random/binomial_distribution.hpp>
#include <boost/random/normal_distribution.hpp>

#include <boost/math/distributions/normal.hpp>
#include <boost/math/distributions/logistic.hpp>
#include <boost/math/distributions/laplace.hpp>
#include <boost/math/distributions/students_t.hpp>
#include <boost/math/distributions/extreme_value.hpp>

#include <boost/random/gamma_distribution.hpp>
#include <boost/random/beta_distribution.hpp>
#include <boost/random/uniform_int_distribution.hpp>
#include <boost/random/variate_generator.hpp>
#include <boost/math/special_functions/erf.hpp>
#include <boost/math/special_functions/gamma.hpp>
#include <boost/math/special_functions/beta.hpp>

namespace statiskit
{
    /// \brief This virtual class UnivariateDistribution represents the distribution of a random univariate component \f$ X \f$. The support of this distribution is a set \f$ \mathcal{X} \f$ with one dimension.
    struct STATISKIT_CORE_API UnivariateDistribution
    {	
        using data_type = UnivariateData;

        virtual ~UnivariateDistribution() = 0;

    	/// \brief Get the number of parameters of the distribution.
        virtual unsigned int get_nb_parameters() const = 0;
        
		/** \brief Compute the probability of a set of values.
         *
         * \details Let \f$A \subseteq \mathcal{X} \f$ denote the set of values. The probability function get the probability \f$ P\left(X \in A\right) \f$ or the log probability \f$ \ln P\left(X \in A\right) \f$ according to the boolean parameter logarithm.
         * \param UnivariateEvent* The considered set of values \f$A \f$.
         * \param logarithm The boolean.
         * */        
        virtual double probability(const UnivariateEvent* event, const bool& logarithm) const = 0;
        
		/** \brief Compute the log-likelihood of an univariate dataset according to the considered univariate distribution.
		 *
         * \param data The considered univariate dataset.
         * */ 
        double loglikelihood(const UnivariateData& data) const;

		/// Simulate an elementary event according to the considered univariate distribution.
        virtual std::unique_ptr< UnivariateEvent > simulate() const = 0;

        virtual std::unique_ptr< UnivariateDistribution > copy() const = 0;
    }; 

    template<class T> class UnivariateFrequencyDistribution : public T
    {
        public:
            UnivariateFrequencyDistribution();

            virtual unsigned int get_nb_parameters() const;

            virtual double ldf(const typename T::event_type::value_type& value) const;
            virtual double pdf(const typename T::event_type::value_type& value) const;
            
			//virtual double pdf(const int& position) const;
			
            virtual std::unique_ptr< UnivariateEvent > simulate() const;

            std::set< typename T::event_type::value_type > get_values() const;

            const Eigen::VectorXd& get_pi() const;
            void set_pi(const Eigen::VectorXd& pi);

        protected:
            std::set< typename T::event_type::value_type > _values;
            Eigen::VectorXd _pi;

            void init(const std::set< typename T::event_type::value_type >& values);
            void init(const std::set< typename T::event_type::value_type >& values, const Eigen::VectorXd& pi);
            void init(const UnivariateFrequencyDistribution< T >& frequency);
    };
    
    /** \brief This virtual class CategoricalUnivariateDistribution represents the distribution of a random categorical component \f$ X \f$. The support is a finite set of categories (string) \f$ \mathcal{X} \f$ and we have \f$ \sum_{s\in \mathcal{S}} P(S=s) = 1\f$.
     * 
     * */
    struct STATISKIT_CORE_API CategoricalUnivariateDistribution : UnivariateDistribution
    {
        typedef CategoricalEvent event_type;
        
		/** \brief Compute the probability of a set of values.
         *
         * \details Let \f$A \in \mathcal{S} \f$ denote the set of values. The probability function get \f$ P\left(S \in A\right) \f$ or \f$ \ln P\left(S \in A\right) \f$ according to the boolean parameter logarithm.
         * \param UnivariateEvent* The considered set of values.
         * \param logarithm The boolean.
         *
         * */  
        virtual double probability(const UnivariateEvent*, const bool& logarithm) const;
        
		/** \brief Compute the log-probability of a value.
         *
         * \details Let \f$c \in \mathcal{S} \f$ denote the value, \f$ \ln P\left(S = s\right) \f$.
         * \param value The considered value.
         * */         
        virtual double ldf(const std::string& value) const = 0;
        
		/** \brief Compute the probability of a value
         *
         * \details Let \f$c \in \mathcal{S} \f$ denote the value, \f$ P\left(S = s\right) \f$.
         * \param value The considered value.
         * */         
        virtual double pdf(const std::string& value) const = 0;
        
		/** \brief Compute the probability of a value
         *
         * \details Let \f$c \in \mathcal{S} \f$ denote the value, \f$ P\left(S = s\right) \f$.
         * \param value The considered value.
         * */         
        virtual double pdf(const int& position) const = 0;
        
        /// \brief Get the set of categories (string) \f$ \mathcal{S} \f$.
        virtual std::set< std::string > get_values() const = 0;
    };
    

    struct STATISKIT_CORE_API BinaryDistribution : public PolymorphicCopy< UnivariateDistribution, BinaryDistribution, CategoricalUnivariateDistribution >
    {
        public:
            BinaryDistribution();
            BinaryDistribution(const std::string& value, const std::string& reference_value);
            //BinaryDistribution(const std::set< std::string >& values);
            BinaryDistribution(const std::string& value, const std::string& reference_value, const double& pi);
            //BinaryDistribution(const std::set< std::string >& values, const double& pi);
            BinaryDistribution(const BinaryDistribution& binary);

            /// \brief Get the number of parameters of the binary distribution.
            virtual unsigned int get_nb_parameters() const;

            /** \brief Compute the log-probability of a value.
             *
             * \details Let \f$c \in \mathcal{S} \f$ denote the value, \f$ \ln P\left(S = s\right) \f$.
             * \param value The considered value.
             * */         
            virtual double ldf(const std::string& value) const;
            
            /** \brief Compute the probability of a value
             *
             * \details Let \f$c \in \mathcal{S} \f$ denote the value, \f$ P\left(S = s\right) \f$.
             * \param value The considered value.
             * */         
            virtual double pdf(const std::string& value) const;
            
            /** \brief Compute the probability of a value
             *
             * \details Let \f$c \in \mathcal{S} \f$ denote the value, \f$ P\left(S = s\right) \f$.
             * \param value The considered value.
             * */         
            virtual double pdf(const int& position) const;

            virtual std::unique_ptr< UnivariateEvent > simulate() const;

            /// \brief Get the set of categories (string) \f$ \mathcal{S} \f$.
            virtual std::set< std::string > get_values() const;

            double get_pi() const;
            void set_pi(const double& pi);

            //virtual std::unique_ptr< UnivariateDistribution > copy() const;

        protected:
            std::string _value;
            std::string _reference_value;
            double _pi;
    };

    /** \brief This class NominalDistribution represents the distribution of a random nominal component \f$ S\f$. The support is a finite non-ordered set of categories (string) \f$ \mathcal{S} \f$ and we have \f$ \sum_{s\in \mathcal{S}} P(S=s) = 1\f$.
     * 
     * */
    struct STATISKIT_CORE_API NominalDistribution : PolymorphicCopy< UnivariateDistribution, NominalDistribution, UnivariateFrequencyDistribution< CategoricalUnivariateDistribution > >
    { 
        NominalDistribution(const std::set< std::string >& values);
        NominalDistribution(const std::set< std::string >& values, const Eigen::VectorXd& pi);
        NominalDistribution(const NominalDistribution& nominal);

        virtual double pdf(const int& position) const;
    };

    /** \brief This class OrdinalDistribution represents the distribution of a random ordinal component \f$ S\f$. The support is a finite ordered set of categories (string) \f$ \mathcal{S} =\left\lbrace s_1, \ldots, s_J \right\rbrace \f$ and we have \f$ \sum_{j=1}^J P(S=s_j) = 1 \f$.
     * 
     * */
    class STATISKIT_CORE_API  OrdinalDistribution : public PolymorphicCopy< UnivariateDistribution, OrdinalDistribution, UnivariateFrequencyDistribution< CategoricalUnivariateDistribution > >
    {
        public:
             /** \brief An alternative constructor
             *
             * \details This constructor is usefull for ordinal distribution instantiation with specified set of string \f$ \mathcal{S} \f$.
             *			The ordering relation is given by the lexicographic order.
             *			The probabilities are uniform on the finite set \f$ \mathcal{S} \f$.
             *
             * \param values The specified set of string.
             * */
            OrdinalDistribution(const std::vector< std::string >& values);
            
             /** \brief An alternative constructor
             *
             * \details This constructor is usefull for ordinal distribution instantiation with specified set of string \f$ \mathcal{S} \f$ and specified ordering relation.
             *			The ordering relation is given by the rank (the categories are ordered by lexicographic order in \f$ \mathcal{S} \f$ and each of them has a specific rank).
             *			The probabilities are given by the vector \f$ \pi \f$.
             *
             * \param values The specified set of string.
             * \param rank The specified vector of rank.
             * \param pi The specified vector of probabilities \f$ \pi=\left\lbrace P(S=s_1),\ldots,P(S=s_J) \right\rbrace \f$.
             * */            
            OrdinalDistribution(const std::vector< std::string >& values, const Eigen::VectorXd& pi);
            
            /** \brief Copy constructor */
            OrdinalDistribution(const OrdinalDistribution& ordinal); 
                              
            virtual double pdf(const std::string& value) const;
                
            virtual double pdf(const int& position) const;

			/** \brief Compute the cumulative probability of a category
			 *
			 * \details Let \f$s_j \in \mathcal{S} \f$ denote the category
			 *          \f[
			 *              P\left(S \leq s_j\right)  =   \sum_{i \leq j} P\left(S = s_i\right).
			 *          \f]
			 * \param value The considered category.
			 * */
            double cdf(const std::string& value) const;
            
		    /** \brief Compute the quantile of a probability \f$ p \in (0,1) \f$. This is the category \f$ s_j \in \mathcal{S} \f$ such that \f$ P(S \leq s_j) \leq p < P(N \leq s_{j+1}) \f$.
		      * \param p The considered probability p.       
		    * */
            std::string quantile(const double& p) const;

            /// \brief Get the rank of each category in lexicographic order.
            const std::vector< Index >& get_rank() const;
            
            /// \brief Set the rank of each category in lexicographic order.
            void set_rank(const std::vector< Index >& rank);

			/// \brief Get the vector of ordered categories.
            std::vector< std::string > get_ordered_values() const;

            /// \brief set the vector of ordered categories.
            void set_ordered_values(const std::vector< std::string >& ordered_values); 

            /// \brief Get the probabilities vector of ordered categories.
            Eigen::VectorXd get_ordered_pi() const;

            /// \brief Set the probabilities vector of ordered categories.
            void set_ordered_pi(const Eigen::VectorXd& ordered_pi);                        
            
        protected:
            std::vector< Index > _rank;
    };

    class STATISKIT_CORE_API HierarchicalDistribution : public PolymorphicCopy< UnivariateDistribution, HierarchicalDistribution, CategoricalUnivariateDistribution >
    {
        public:
            typedef std::map< std::string, CategoricalUnivariateDistribution* >::const_iterator const_iterator;

            HierarchicalDistribution();
            HierarchicalDistribution(const HierarchicalSampleSpace& hss);
            HierarchicalDistribution(const HierarchicalDistribution& hd);
            ~HierarchicalDistribution();

            virtual unsigned int get_nb_parameters() const;

            virtual std::unique_ptr< UnivariateEvent > simulate() const;

            virtual double ldf(const std::string& value) const;
           
            virtual double pdf(const std::string& value) const;
                   
            virtual double pdf(const int& position) const;
            
            virtual std::set< std::string > get_values() const;

            double internal_ldf(const std::string& value) const;
            double internal_pdf(const std::string& value) const;

            const_iterator cbegin() const;
            const_iterator cend() const;
            unsigned int index(const std::string& value) const;

            const CategoricalUnivariateDistribution* get_distribution(const std::string& value) const;
            void set_distribution(const std::string& value, const CategoricalUnivariateDistribution& distribution);

            const std::string parent(const std::string& value) const;

        protected:
            std::map< std::string, CategoricalUnivariateDistribution* > _tree_distribution;
            std::map< std::string, std::string > _parents; 
            std::set< std::string > _values;

            void check_internal(const std::string& value) const;

            // typedef std::map< std::string, CategoricalUnivariateDistribution* >::iterator iterator;
            // iterator begin();
            // iterator end();
    };    
 
    template<class T> struct QuantitativeUnivariateFrequencyDistribution : PolymorphicCopy< UnivariateDistribution, QuantitativeUnivariateFrequencyDistribution< T >, UnivariateFrequencyDistribution< T > >
    {
        // using UnivariateFrequencyDistribution< T >::UnivariateFrequencyDistribution;
        QuantitativeUnivariateFrequencyDistribution(const std::set< typename T::event_type::value_type >& values);
        QuantitativeUnivariateFrequencyDistribution(const std::set< typename T::event_type::value_type >& values, const Eigen::VectorXd& pi);
        QuantitativeUnivariateFrequencyDistribution(const UnivariateFrequencyDistribution< T >& QuantitativeUnivariateFrequencyDistribution);

        virtual double cdf(const typename T::event_type::value_type& value) const;
        
        virtual typename T::event_type::value_type quantile(const double& p) const;
    
        virtual double get_mean() const;
        
        virtual double get_variance() const;
    };
    
    template<class T> class ShiftedDistribution : public PolymorphicCopy< UnivariateDistribution, ShiftedDistribution< T >, T >
    {
        public:
            ShiftedDistribution(const T& distribution, const typename T::event_type::value_type& shift);
            ShiftedDistribution(const ShiftedDistribution< T >& distribution);
            virtual ~ShiftedDistribution();

            virtual unsigned int get_nb_parameters() const;

            virtual std::unique_ptr< UnivariateEvent > simulate() const;
            
            virtual double ldf(const typename T::event_type::value_type& value) const;
            virtual double pdf(const typename T::event_type::value_type& value) const;
            virtual double cdf(const typename T::event_type::value_type& value) const;
            
            virtual typename T::event_type::value_type quantile(const double& p) const;
        
            virtual double get_mean() const;
            
            virtual double get_variance() const;

            const typename T::event_type::value_type& get_shift() const;
            void set_shift(const typename T::event_type::value_type& shift);

            const T* get_distribution() const;
            void set_distribution(const T& distribution);

        protected:
            typename T::event_type::value_type _shift;
            T* _distribution;
    };

    /** \brief This virtual class DiscreteUnivariateDistribution represents the distribution of a random discrete component \f$ N\f$. The support is \f$ \mathbb{Z} \f$ and we have \f$ \sum_{n\in \mathbb{Z}} P(N=n) = 1\f$.
     * 
     * */
    struct STATISKIT_CORE_API DiscreteUnivariateDistribution : UnivariateDistribution
    {
        typedef DiscreteEvent event_type;
        
		/** \brief Compute the probability of a set of values.
         *
         * \details Let \f$A \in \mathbb{Z} \f$ denote the set of values. The probability function get \f$ P\left(N \in A\right) \f$ or \f$ \ln P\left(N \in A\right) \f$ according to the boolean parameter logarithm.
         * \param UnivariateEvent* The considered set of values.
         * \param logarithm The boolean.
         * */ 
        virtual double probability(const UnivariateEvent*, const bool& logarithm) const;
        
		/** \brief Compute the log-probability of a value.
         *
         * \details Let \f$n \in \mathbb{Z} \f$ denote the value, \f$ \ln P\left(N = n\right) \f$.
         * \param value The considered value.
         * */ 
        virtual double ldf(const int& value) const;
        
		/** \brief Compute the probability of a value
         *
         * \details Let \f$n \in \mathbb{Z} \f$ denote the value, \f$ P\left(N = n\right) \f$.
         * \param value The considered value.
         * */        
        virtual double pdf(const int& value) const;  
                  
		/** \brief Compute the cumulative probability of a value
         *
         * \details Let \f$n \in \mathbb{Z} \f$ denote the value
         *          \f[
         *              P\left(N \leq n\right)  =   \sum_{k \leq n} P\left(N = k\right).
         *          \f]
         * \param value The considered value.
         * */
        virtual double cdf(const int& value) const;
        
        /** \brief Compute the quantile of a probability. This is the value \f$ n \in \mathbb{Z} \f$ such that \f$ P(N \leq n) \leq p < P(N \leq n+1) \f$.
          * \param value The considered value.       
        * */
        virtual int quantile(const double& p) const;
        
        virtual std::unique_ptr< UnivariateEvent > simulate() const;

        /// \brief Get mean of a discrete random component \f$ E(N) = \sum_{n\in\mathbb{Z}} n P(N=n) \f$.
        virtual double get_mean() const = 0;
        
        /// \brief Get variance of a discrete random component \f$ V(N) = \sum_{n\in\mathbb{Z}} \lbrace n-E(n) \rbrace^2 P(N=n) \f$  \f$ \mathbb{N} \f$.
        virtual double get_variance() const = 0;
    };

    typedef QuantitativeUnivariateFrequencyDistribution< DiscreteUnivariateDistribution > DiscreteUnivariateFrequencyDistribution;
    typedef ShiftedDistribution< DiscreteUnivariateDistribution > ShiftedDiscreteUnivariateDistribution;

    /** \brief This class PoissonDistribution represents a [Poisson distribution](https://en.wikipedia.org/wiki/Poisson_distribution)
     * 
     * \details The Poisson distribution is an univariate discrete distribution that expresses the probability of a given number of events occurring in a fixed interval of time and/or space if these events occur with a known average rate \f$\theta  \in \mathbb{R}_+^*  \f$ and independently of the time since the last event. The support of the Poisson distribution is the set of non-negative integer \f$ \mathbb{N} \f$.
     * */
    class STATISKIT_CORE_API PoissonDistribution : public PolymorphicCopy< UnivariateDistribution, PoissonDistribution, DiscreteUnivariateDistribution >
    {
        public:
            /** \brief The default constructor
             *
             * \details The default constructor instantiate a Poisson distribution with \f$ \theta = 1. \f$
             * */
            PoissonDistribution();
            
            /** \brief An alternative constructor
             *
             * \details This constructor is usefull for Poisson distribution instantiation with specified \f$\theta \f$ parameter.
             *
             * \param theta The specified average rate \f$ \theta \in \mathbb{R}_+^* \f$.
             * */
            PoissonDistribution(const double& theta);
            PoissonDistribution(const PoissonDistribution& poisson);
            
            /** \brief Returns the number of parameters of the Poisson distribution
             *
             * \details The number of parameters of a Poisson distribution is \f$1\f$ (\f$\theta\f$).
             * */
            virtual unsigned int get_nb_parameters() const; 
            
            /** \brief Get the value of theta.
             * */           
            const double& get_theta() const;       
              
            /** \brief Set the value of theta.
             * */             
            void set_theta(const double& theta);

            /** \brief Compute the log-probability of an outcome
             *
             * \details Let \f$ n \in \mathbb{N} \f$ denote the outcome
             *          \f[
             *              \ln P\left(N = n\right) = n \ln \theta - \theta - \ln \Gamma (n+1),
             *          \f]      
             * where [\f$ \ln \Gamma \f$](http://www.boost.org/doc/libs/1_50_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_gamma/lgamma.html) is the log-Gamma function implemented in the Boost.Math library.       
             * \param value The considered outcome.
             * */
            virtual double ldf(const int& value) const;
            
            /** \brief Compute the probability of an outcome
             *
             * \details Let \f$ n \in \mathbb{N} \f$ denote the outcome
             *          \f[
             *              P\left(N = n\right) = \exp(-\theta) \frac{ \theta^n }{ \Gamma (n+1) },
             *          \f]      
             * where [\f$ \Gamma \f$](http://www.boost.org/doc/libs/1_42_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_gamma/tgamma.html) is the Gamma function implemented in the Boost.Math library.       
             * \param value The considered outcome.
             * */            
            virtual double pdf(const int& value) const;
            
			/** \brief Compute the cumulative probability of an outcome
             *
             * \details Let \f$n \in \mathbb{N} \f$ denote the outcome
             *          \f{eqnarray*}{
             *              P\left(N \leq n\right) & = &  \sum_{k = 0}^n P\left(N = k\right), \\
             *              P\left(N \leq n\right) & = &  Q(n+1, \theta),
             *          \f}
             *
             * where [\f$Q(a,z)\f$](http://www.boost.org/doc/libs/1_46_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_gamma/igamma.html) is the normalised upper incomplete gamma function implemented in the Boost.Math library.
             * \param value The considered outcome.
             * */             
            virtual double cdf(const int& value) const;
            
			/** \brief Compute the quantile of a probability
             *
             * \details Let \f$p \in [0,1]\f$ denote the probability
             *   \f[
             *       n = \textnormal{gamma}\_\textnormal{q}\_\textnormal{inva}(\theta, p)-1,  
             *   \f]
             * where [\f$\textnormal{gamma}\_\textnormal{q}\_\textnormal{inva}(x, q)\f$](http://www.boost.org/doc/libs/1_40_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_gamma/igamma_inv.html) a sepcific incomplete gamma function inverse implemented in the Boost.Math library.
             * \param p The considered probability.
             * */             
            virtual int quantile(const double& p) const;
            
 			/// \brief Simulate an outcome of a Poisson distribution.        
            virtual std::unique_ptr< UnivariateEvent > simulate() const;
            
			/// \brief Get mean of a Poisson distribution \f$ E(N) = \theta \f$.
            virtual double get_mean() const;
             
			/// \brief Get variance of a Poisson distribution \f$ V(N) = \theta \f$.           
            virtual double get_variance() const;

        protected:
            double _theta;
    };
    
    /** \brief This class BinomialDistribution represents a [binomial distribution](https://en.wikipedia.org/wiki/binomial_distribution)
     * 
     * \details The binomial distribution is an univariate discrete distribution of the number of successes in \f$ \kappa \in \mathbb{N}^* \f$ independent [Bernouilli trials](https://en.wikipedia.org/wiki/Bernoulli_trial) with a specified probability \f$\pi \in [0,1]\f$ of success.
     *          The support of the binomial distribution is the set all intergers betwwen $0$ and \f$ \kappa \f$.
     *          In the particular case of \f$ \kappa = 1\f$ the binomial distribution is the [Bernouilli distribution](https://en.wikipedia.org/wiki/Bernoulli_distribution). 
     * */
    class STATISKIT_CORE_API BinomialDistribution : public PolymorphicCopy< UnivariateDistribution, BinomialDistribution, DiscreteUnivariateDistribution >
    {
        public:
            /** \brief The default constructor
             *
             * \details The default constructor instantiate a binomial distribution with
             *
             * - \f$ \kappa = 1 \f$,
             * - \f$ \pi = 0.5 \f$. 
             * */
            BinomialDistribution();
            
            /** \brief An alternative constructor
             *
             * \details This constructor is usefull for binomial distribution instantiation with specified \f$ \kappa \f$ and \f$\pi\f$ parameters.
             *
             * \param kappa The specified number of Bernouilli \f$ \kappa \in \mathbb{N}^* \f$ trials .
             * \param pi The specified probability of success of Bernouilli trials \f$ \pi \in [0,1] \f$.
             * */
            BinomialDistribution(const unsigned int& kappa, const double& pi);
            
            /** \brief Copy constructor */
            BinomialDistribution(const BinomialDistribution& binomial);
            
            /** \brief Returns the number of parameters of the binomial distribution
             *
             * \details The number of parameters of a binomial distribution is \f$2\f$ (\f$\kappa\f$ and \f$\pi\f$).
             * */
            virtual unsigned int get_nb_parameters() const;

            /** \brief Get the value of kappa 
             * */
            const unsigned int& get_kappa() const;
            
            /** \brief Set the value of kappa 
             * */
            void set_kappa(const unsigned int& kappa);
			/** \brief Get the value of pi 
			* */
            const double& get_pi() const;
            
            /** \brief Set the value of pi 
             * */            
            void set_pi(const double& pi);

            /** \brief Compute the log-probability of an outcome
             *
             * \details Let \f$n\f$ denote the outcome
             *          \f[
             *              \ln P\left(N = n\right) = \ln \Gamma (\kappa +1) - \ln \Gamma (\kappa -n +1) - \ln \Gamma (n +1) + n \ln \pi + (\kappa - n) \ln (1-\pi),
             *          \f]      
             * where [\f$ \ln \Gamma \f$](http://www.boost.org/doc/libs/1_50_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_gamma/lgamma.html) is the log-Gamma function implemented in the Boost.Math library.       
             * \param value The considered outcome.
             * */
            virtual double ldf(const int& value) const;
            
			/** \brief Compute the probability of an outcome
             *
             * \details Let \f$n\f$ denote the outcome
             *          \f{eqnarray*}{
             *				P(N=n) & = & {\kappa \choose n} \pi^n (1-\pi)^{\kappa - n}, \\
             *              P(N=n) & = &  \textnormal{ibeta\_derivative}(n+1, \kappa -n + 1, \pi) / (\kappa +1),
             *          \f}            
			 *
			 * where [\f$\textnormal{ibeta\_derivative}(a,b,x)\f$](http://www.boost.org/doc/libs/1_52_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_beta/beta_derivative.html) is the inverse beta derivative function implemented in the Boost.Math library.
             * \param value The considered outcome.
             * */
            virtual double pdf(const int& value) const;
            
			/** \brief Compute the cumulative probability of an outcome
             *
             * \details Let \f$n\f$ denote the outcome
             *          \f{eqnarray*}{
             *              P\left(N \leq n\right) & = &  \sum_{k = 0}^n P\left(N = k\right), \\
             *              P\left(N \leq n\right) & = &  \textnormal{ibetac}(n+1,\kappa-n,\pi),
             *          \f}
             *
             * where [\f$\textnormal{ibetac}(a,b,x)\f$](http://www.boost.org/doc/libs/1_52_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_beta/ibeta_function.html) is the complement of the normalized incomplete beta function implemented in the Boost.Math library.
             * \param value The considered outcome.
             * */            
            virtual double cdf(const int& value) const;

			/** \brief Compute the quantile of a probability
             *
             * \param p The considered probability.
             * */            
            virtual int quantile(const double& p) const;
            
			/** \brief Simulate an outcome of a binomial distribution.
             *
             * */            
            virtual std::unique_ptr< UnivariateEvent > simulate() const;
            
            
			/** \brief Get mean of a binomial distribution \f$ E(N) = \kappa \pi \f$.
             *
             * */  
            virtual double get_mean() const;
            
 			/** \brief Get variance of a binomial distribution \f$ V(N) = \kappa \pi (1-\pi) \f$.
             *
             * */            
            virtual double get_variance() const;

        protected:
            unsigned int _kappa;
            double _pi;
    };

    class STATISKIT_CORE_API LogarithmicDistribution : public PolymorphicCopy< UnivariateDistribution, LogarithmicDistribution, DiscreteUnivariateDistribution >
    {
        public:
            LogarithmicDistribution();
            LogarithmicDistribution(const double& theta);
            LogarithmicDistribution(const LogarithmicDistribution& geometric);

            virtual unsigned int get_nb_parameters() const;

            /// \brief Get the value of theta 
            const double& get_theta() const;

            /// \brief Set the value of theta        
            void set_theta(const double& theta);

            virtual double ldf(const int& value) const;

            virtual double pdf(const int& value) const;
                                    
            virtual double get_mean() const;
            
            virtual double get_variance() const;

        protected:
            double _theta;
    };
    
    class STATISKIT_CORE_API GeometricDistribution : public PolymorphicCopy< UnivariateDistribution, GeometricDistribution, DiscreteUnivariateDistribution >
    {
        public:
            GeometricDistribution();
            GeometricDistribution(const double& pi);
            GeometricDistribution(const GeometricDistribution& geometric);

            virtual unsigned int get_nb_parameters() const;

            /// \brief Get the value of pi 
            const double& get_pi() const;

            /// \brief Set the value of pi        
            void set_pi(const double& pi);

            virtual double ldf(const int& value) const;

            virtual double pdf(const int& value) const;

            virtual double cdf(const int& value) const;
            
            virtual int quantile(const double& p) const;
            
            virtual std::unique_ptr< UnivariateEvent > simulate() const;
            
            virtual double get_mean() const;
            
            virtual double get_variance() const;

        protected:
            double _pi;
    };

    /** \brief This class NegativeBinomialDistribution represents a [negative binomial distribution](https://en.wikipedia.org/wiki/Negative_binomial_distribution)
     * 
     * \details The negative binomial distribution is an univariate discrete distribution of the number of successes in independent [Bernouilli trials](https://en.wikipedia.org/wiki/Bernoulli_trial) with a specified probability \f$\pi \in [0,1]\f$ of success before a specified number of failures denoted \f$\kappa \in \mathbb{R}_+^* \f$.
     *         The support of the negative binomial distribution is the set of non-negative integer \f$\mathbb{N}\f$.
     *         In the particular case of \f$\kappa = 1.\f$ the negative binomial distribution represents a [geometric distribution](https://en.wikipedia.org/wiki/Geometric_distribution) with \f$\mathbb{N}\f$ as support.
     * */
    class STATISKIT_CORE_API NegativeBinomialDistribution : public PolymorphicCopy< UnivariateDistribution, NegativeBinomialDistribution, DiscreteUnivariateDistribution >
    {
        public:
            /** \brief The default constructor
             *
             * \details The default constructor instantiate a negative binomial distribution with
             *
             * - \f$\kappa = 1.\f$,
             * - \f$\pi = 0.5\f$. 
             * */
            NegativeBinomialDistribution();

            /** \brief An alternative constructor
             *
             * \details This constructor is usefull for negative binomial distribution instantiation with specified \f$\kappa\f$ and \f$\pi\f$ parameters.
             *
             * \param kappa The specified number of failures \f$ \kappa \in \mathbb{R}_+^* \f$.
             * \param pi The specified probability of success of Bernouilli trials  \f$ \pi \in [0,1] \f$.
             * */
            NegativeBinomialDistribution(const double& kappa, const double& pi);

            /** \brief Copy constructor */
            NegativeBinomialDistribution(const NegativeBinomialDistribution& negbinomial);

            /** \brief Returns the number of parameters of the negative binomial distribution
             *
             * \details The number of parameters of a negative binomial distribution is \f$2\f$ (\f$\kappa\f$ and \f$\pi\f$).
             * */
            virtual unsigned int get_nb_parameters() const;

            /// \brief Get the value of kappa 
            const double& get_kappa() const;

            /// \brief Set the value of kappa 

            void set_kappa(const double& kappa);

            /// \brief Get the value of pi 
            const double& get_pi() const;

            /// \brief Set the value of pi        
            void set_pi(const double& pi);

            /** \brief Compute the log-probability of an outcome
             *
             * \details Let \f$n \in \mathbb{N} \f$ denote the outcome
             *          \f[
             *              \ln P\left(N = n\right) = \ln \Gamma (\kappa +n) - \ln \Gamma (\kappa ) - \ln \Gamma (n +1) + n \ln \pi + \kappa  \ln (1-\pi)
             *          \f]
             *          
             * where [\f$ \ln \Gamma \f$](http://www.boost.org/doc/libs/1_50_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_gamma/lgamma.html) is the log-Gamma function implemented in the Boost.Math library.                   
             * \param value The considered outcome.
             * */
            virtual double ldf(const int& value) const;

            /** \brief Compute the probability of an outcome
             *
             *
             * \param value The considered outcome.
             * \see \ref statiskit::NegativeBinomialDistribution::ldf.
             * */
            virtual double pdf(const int& value) const;

            /** \brief Compute the cumulative probability of an outcome
             *
             * \details Let \f$n\f$ denote the outcome
             *          \f{eqnarray*}{
             *              P\left(N \leq n\right) & = &  \sum_{k = 0}^n P\left(N = k\right), \\
             *              P\left(N \leq n\right) & = & \textnormal{ibeta}(\kappa ,n+1 ,1-\pi),
             *          \f}
             * where [\f$\textnormal{ibeta}(a,b,x)\f$](http://www.boost.org/doc/libs/1_52_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_beta/ibeta_function.html) is the normalized incomplete beta function implemented in the Boost.Math library. 
             * */
            virtual double cdf(const int& value) const;
            
 			/** \brief Compute the quantile of a probability
             *
             * \param p The considered probability.
             * */            
            virtual int quantile(const double& p) const;
            
			/// \brief Simulate an outcome of a negative binomial distribution.            
            virtual std::unique_ptr< UnivariateEvent > simulate() const;
            
 			/// \brief Get mean of a negative binomial distribution \f$ E(N) = \kappa \pi / (1-\pi) \f$.
            virtual double get_mean() const;
            
 			/// \brief Get variance of a negative binomial distribution \f$ V(N) = \kappa \pi / (1-\pi)^2 \f$.           
            virtual double get_variance() const;

        protected:
            double _kappa;
            double _pi;
    };
    
    class STATISKIT_CORE_API BetaCompoundDiscreteUnivariateDistribution : public DiscreteUnivariateDistribution
    {
        public:
            BetaCompoundDiscreteUnivariateDistribution();
            BetaCompoundDiscreteUnivariateDistribution(const BetaCompoundDiscreteUnivariateDistribution& distribution);
            virtual ~BetaCompoundDiscreteUnivariateDistribution();

            virtual unsigned int get_nb_parameters() const;

            const double& get_alpha() const;
            void set_alpha(const double& alpha);

            const double& get_gamma() const;
            void set_gamma(const double& gamma);

        protected:
            double _alpha;
            double _gamma;
    };

    class STATISKIT_CORE_API BetaBinomialDistribution : public PolymorphicCopy< UnivariateDistribution, BetaBinomialDistribution, BetaCompoundDiscreteUnivariateDistribution >
    {
        public:
            /** \brief The default constructor
             *
             * \details The default constructor instantiate a negative binomial distribution with
             *
             * - \f$\kappa = 1.\f$,
             * - \f$\pi = 0.5\f$. 
             * */
            BetaBinomialDistribution();

            /** \brief An alternative constructor
             *
             * \details This constructor is usefull for negative binomial distribution instantiation with specified \f$\kappa\f$ and \f$\pi\f$ parameters.
             *
             * \param kappa The specified number of failures \f$ \kappa \in \mathbb{R}_+^* \f$.
             * \param pi The specified probability of success of Bernouilli trials  \f$ \pi \in [0,1] \f$.
             * */
            BetaBinomialDistribution(const unsigned int& kappa, const double& alpha, const double& gamma);

            /** \brief Copy constructor */
            BetaBinomialDistribution(const BetaBinomialDistribution& binomial);

            virtual ~BetaBinomialDistribution();

            /** \brief Returns the number of parameters of the negative binomial distribution
             *
             * \details The number of parameters of a negative binomial distribution is \f$2\f$ (\f$\kappa\f$ and \f$\pi\f$).
             * */
            virtual unsigned int get_nb_parameters() const;

            /// \brief Get the value of kappa 
            const unsigned int& get_kappa() const;

            /// \brief Set the value of kappa 

            void set_kappa(const unsigned int& kappa);

            virtual double ldf(const int& value) const;

            /** \brief Compute the probability of an outcome
             *
             *
             * \param value The considered outcome.
             * \see \ref statiskit::NegativeBinomialDistribution::ldf.
             * */
            virtual double pdf(const int& value) const;
            
            /// \brief Get mean of a negative binomial distribution \f$ E(N) = \kappa \pi / (1-\pi) \f$.
            virtual double get_mean() const;
            
            /// \brief Get variance of a negative binomial distribution \f$ V(N) = \kappa \pi / (1-\pi)^2 \f$.           
            virtual double get_variance() const;

        protected:
            unsigned int _kappa;
    };

    class STATISKIT_CORE_API BetaNegativeBinomialDistribution : public PolymorphicCopy< UnivariateDistribution, BetaNegativeBinomialDistribution, BetaCompoundDiscreteUnivariateDistribution >
    {
        public:
            /** \brief The default constructor
             *
             * \details The default constructor instantiate a negative binomial distribution with
             *
             * - \f$\kappa = 1.\f$,
             * - \f$\pi = 0.5\f$. 
             * */
            BetaNegativeBinomialDistribution();

            /** \brief An alternative constructor
             *
             * \details This constructor is usefull for negative binomial distribution instantiation with specified \f$\kappa\f$ and \f$\pi\f$ parameters.
             *
             * \param kappa The specified number of failures \f$ \kappa \in \mathbb{R}_+^* \f$.
             * \param pi The specified probability of success of Bernouilli trials  \f$ \pi \in [0,1] \f$.
             * */
            BetaNegativeBinomialDistribution(const double& kappa, const double& alpha, const double& gamma);

            /** \brief Copy constructor */
            BetaNegativeBinomialDistribution(const BetaNegativeBinomialDistribution& negbinomial);

            virtual ~BetaNegativeBinomialDistribution();
            /** \brief Returns the number of parameters of the negative binomial distribution
             *
             * \details The number of parameters of a negative binomial distribution is \f$2\f$ (\f$\kappa\f$ and \f$\pi\f$).
             * */
            virtual unsigned int get_nb_parameters() const;

            /// \brief Get the value of kappa 
            const double& get_kappa() const;

            /// \brief Set the value of kappa 

            void set_kappa(const double& kappa);

            virtual double ldf(const int& value) const;

            /** \brief Compute the probability of an outcome
             *
             *
             * \param value The considered outcome.
             * \see \ref statiskit::NegativeBinomialDistribution::ldf.
             * */
            virtual double pdf(const int& value) const;
            
            /// \brief Get mean of a negative binomial distribution \f$ E(N) = \kappa \pi / (1-\pi) \f$.
            virtual double get_mean() const;
            
            /// \brief Get variance of a negative binomial distribution \f$ V(N) = \kappa \pi / (1-\pi)^2 \f$.           
            virtual double get_variance() const;

        protected:
            double _kappa;
    };

    /** \brief This virtual class ContinuousUnivariateDistribution represents the distribution of a random continuous component \f$ X\f$. The support is \f$ \mathbb{R} \f$ and we have \f$ \int_{-\infty}^{\infty} f(x) dx = 1\f$.
     * 
     * */
    struct STATISKIT_CORE_API ContinuousUnivariateDistribution : UnivariateDistribution
    { 
        typedef ContinuousEvent event_type;
        
		/** \brief Compute the probability of a set of values.
         *
         * \details Let \f$A \in \mathbb{R} \f$ denote the set of values. The probability function get \f$ P\left(X \in A\right) \f$ or \f$ \ln P\left(X \in A\right) \f$ according to the boolean parameter logarithm.
         * \param UnivariateEvent* The considered set of values.
         * \param logarithm The boolean.
         * */ 
        virtual double probability(const UnivariateEvent*, const bool& logarithm) const;
        
		/** \brief Compute the log-probability density of a value.
         *
         * \details Let \f$x \in \mathbb{R} \f$ denote the value, \f$ \ln f(x) = \ln P\left(X \in dx\right) \f$.
         * \param value The considered value.
         * */ 
        virtual double ldf(const double& value) const = 0;
         
		/** \brief Compute the probability density of a value.
         *
         * \details Let \f$x \in \mathbb{R} \f$ denote the value, \f$ f(x) = P\left(X \in dx\right) \f$.
         * \param value The considered value.
         * */        
        virtual double pdf(const double& value) const = 0;
         
		/** \brief Compute the cumulative probability of a value.
         *
         * \details Let \f$x \in \mathbb{R} \f$ denote the value, \f$ P\left(X \leq x \right) = \int_{-\infty}^x f(t) dt \f$.
         * \param value The considered value.
         * */         
        virtual double cdf(const double& value) const = 0;
               
        /** \brief Compute the quantile of a probability. This is the value \f$ x \in \mathbb{R} \f$ such that \f$ P(X \leq x) = p \f$.
          * \param value The considered value.       
        * */        
        virtual double quantile(const double& p) const = 0;
        
        /// \brief Get mean of a continuous random component \f$ E(X) = \int_{-\infty}^{\infty} x f(x) dx \f$.
        virtual double get_mean() const = 0;
        
        /// \brief Get variance of a continuous random component \f$ V(X) = \int_{-\infty}^{\infty} \lbrace x-E(X) \rbrace^2 f(x) dx \f$.
        virtual double get_variance() const = 0;    
    };

    typedef QuantitativeUnivariateFrequencyDistribution< ContinuousUnivariateDistribution > ContinuousUnivariateFrequencyDistribution;

    /** \brief This class NormalDistribution represents a [normal distribution](https://en.wikipedia.org/wiki/Normal_distribution).
     * 
     * \details The normal distribution is an univariate continuous distribution.
     *         The support is the set of real values \f$\mathbb{R}\f$.
     * */
    class STATISKIT_CORE_API NormalDistribution : public PolymorphicCopy< UnivariateDistribution, NormalDistribution, ContinuousUnivariateDistribution >
    {
        public:
            /** \brief The default constructor
             *
             * \details The default constructor instantiate a normal distribution with
             *
             * - \f$\mu = 0.\f$,
             * - \f$\sigma = 1.\f$. 
             * */
            NormalDistribution();
            
            /** \brief An alternative constructor
             *
             * \details This constructor is usefull for normal distribution instantiation with specified \f$\mu\f$ and \f$\sigma\f$ parameters.
             *
             * \param mu the specified location parameter \f$ \mu \in \mathbb{R} \f$.
             * \param sigma the specified scale parameter \f$ \sigma \in \mathbb{R}_+^* \f$.
             * */
            NormalDistribution(const double& mu, const double& sigma);
            
            /// \brief A copy constructor
            NormalDistribution(const NormalDistribution& normal);

            /** \brief Returns the number of parameters of the normal distribution
             *
             * \details The number of parameters of a normal distribution is \f$2\f$ (\f$\mu\f$ and \f$\sigma\f$).
             * */
            virtual unsigned int get_nb_parameters() const;
        
        	/// \brief Get the value of the location parameter mu.
            const double& get_mu() const;
            
            /// \brief Set the value of the location parameter mu.
            void set_mu(const double& mu);
            
			/// \brief Get the value of the scale parameter sigma.
            const double& get_sigma() const;
            
  			/// \brief Set the value of the scale parameter sigma.          
            void set_sigma(const double& sigma);
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::ldf()
		     *
		     * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
		     *			\f[
		     * 				 \ln f(x) = - \frac{1}{2} \left( \frac{x-\mu}{\sigma} \right)^2  - \ln \sigma  - \ln \sqrt{2\pi}, 
		     *			\f]
		     * where  [\f$ \sqrt{2\pi} \f$](http://www.boost.org/doc/libs/1_46_0/libs/math/doc/sf_and_dist/html/math_toolkit/toolkit/internals1/constants.html) is a constant computed in Boost.Math library.
		     * \param value The considered value \f$x\f$.
		     * */ 
            virtual double ldf(const double& value) const;
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::pdf()
			 * \details The pdf value is computed as the exponential of the ldf value.
			 *  @see statiskit::NormalDistribution::ldf()
			 * \param value The considered value \f$x\f$.
			 * */
            virtual double pdf(const double& value) const;
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::cdf()
		     * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
		     * 			\f{eqnarray*}{
		     *				P(X \leq x) & = & \frac{1}{\sigma \sqrt{2\pi}}  \int_{-\infty}^x  \exp\left\lbrace- \left( \frac{t-\mu}{2\sigma} \right)^2 \right\rbrace dt, \\
		     *				P(X \leq x) & = & 0.5 \; \textnormal{erfc}\left( \frac{\mu-x}{\sigma \sqrt{2}} \right),
		     *			\f}
		     * where [\f$ \textnormal{erfc} \f$](http://www.cplusplus.com/reference/cmath/erfc/) is a function implemented in C++ standard library and [\f$\sqrt{2}\f$](http://www.boost.org/doc/libs/1_46_0/libs/math/doc/sf_and_dist/html/math_toolkit/toolkit/internals1/constants.html) is a constant implemented in Boost.Math library.
		     * \param value The considered value \f$x\f$.
			 * */            
            virtual double cdf(const double& value) const;
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::quantile()
			*  The quantile for normal distribution is computed as \f$ x = \mu - \sigma \sqrt{2} \; \textnormal{erfc}\_\textnormal{inv}(2p) \f$ where [\f$\sqrt{2}\f$](http://www.boost.org/doc/libs/1_46_0/libs/math/doc/sf_and_dist/html/math_toolkit/toolkit/internals1/constants.html) is a constant implemented in Boost.Math library and [\f$ \textnormal{erfc}\_\textnormal{inv} \f$](http://www.boost.org/doc/libs/1_53_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_erf/error_inv.html) is a function implemented in Boost.Math library.
			* */
            virtual double quantile(const double& p) const;

            virtual std::unique_ptr< UnivariateEvent > simulate() const;

			/// \brief Get mean of normal distribution \f$ E(X) = \mu \f$.
            virtual double get_mean() const;
            
			/// \brief Get variance of normal distribution \f$ V(X) = \sigma^2 \f$.
            virtual double get_variance() const;

        protected:
            double _mu;
            double _sigma;
    };
    
    class STATISKIT_CORE_API UnivariateHistogramDistribution : public PolymorphicCopy< UnivariateDistribution, UnivariateHistogramDistribution, ContinuousUnivariateDistribution >
    {
        public: 
            UnivariateHistogramDistribution(const std::set<double>& bins, const std::vector<double>& densities);
            UnivariateHistogramDistribution(const UnivariateHistogramDistribution& histogram);
            virtual ~UnivariateHistogramDistribution();

            virtual unsigned int get_nb_parameters() const;

            const std::set<double>& get_bins() const;
            
            const std::vector<double>& get_densities() const;

            virtual double ldf(const double& value) const;
            virtual double pdf(const double& value) const;
            virtual double cdf(const double& value) const;

            virtual double quantile(const double& p) const;

            virtual std::unique_ptr< UnivariateEvent > simulate() const;

            virtual double get_mean() const;

            virtual double get_variance() const;

        protected:
            std::set<double> _bins;
            std::vector<double> _densities;

            void normalize();
    };

    /** \brief This class LogisticDistribution represents a [logistic distribution](https://en.wikipedia.org/wiki/Logistic_distribution).
     * 
     * \details The logistic distribution is an univariate continuous distribution.
     *         The support is the set of real values \f$\mathbb{R}\f$.
     * */                
    class STATISKIT_CORE_API LogisticDistribution : public PolymorphicCopy< UnivariateDistribution, LogisticDistribution, ContinuousUnivariateDistribution >
    {
        public:
            /** \brief The default constructor
             *
             * \details The default constructor instantiate a logistic distribution with
             *
             * - \f$\mu = 0.\f$,
             * - \f$\sigma = 1.\f$. 
             * */
            LogisticDistribution();
            
            /** \brief An alternative constructor
             *
             * \details This constructor is usefull for logistic distribution instantiation with specified \f$\mu\f$ and \f$\sigma\f$ parameters.
             *
             * \param mu the specified location parameter \f$ \mu \in \mathbb{R} \f$.
             * \param sigma the specified scale parameter \f$ \sigma \in \mathbb{R}_+^* \f$.
             * */            
            LogisticDistribution(const double& mu, const double& sigma);
            
            /// \brief A copy constructor
            LogisticDistribution(const LogisticDistribution& logistic);

            /** \brief Returns the number of parameters of the logistic distribution
             *
             * \details The number of parameters of a logistic distribution is \f$2\f$ (\f$\mu\f$ and \f$\sigma\f$).
             * */
            virtual unsigned int get_nb_parameters() const;
        	
        	/// \brief Get the value of the location parameter mu.
            const double& get_mu() const;
            
            /// \brief Set the value of the location parameter mu.
            void set_mu(const double& mu);

			/// \brief Get the value of the scale parameter sigma.
            const double& get_sigma() const;
            
            /// \brief Set the value of the scale parameter sigma.
            void set_sigma(const double& sigma);
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::ldf()
		     *
		     * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
		     *			\f[
		     * 				 \ln f(x) = - 2 \ln \left\lbrace \cosh \left( 0.5 \; \frac{x-\mu}{\sigma} \right) \right\rbrace - \ln (4\sigma).
		     *			\f]
		     * \param value The considered value \f$x\f$.
		     * */ 
            virtual double ldf(const double& value) const;
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::pdf()
		     *
		     * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
		     *			\f[
		     * 				 f(x) =  \frac{1}{4\sigma \cosh^2 \left( 0.5 \; \frac{x-\mu}{\sigma} \right)}.
		     *			\f]
		     * \param value The considered value \f$x\f$.
		     * */             
            virtual double pdf(const double& value) const;
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::cdf()
		     *
		     * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
		     *			\f[
		     * 				 P(X \leq x) = 0.5 \; \left\lbrace 1+\tanh \left( 0.5 \; \frac{x-\mu}{\sigma} \right) \right\rbrace.
		     *			\f]
		     * \param value The considered value \f$x\f$.
		     * */             
            virtual double cdf(const double& value) const;

			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::quantile()
			*  The quantile for logistic distribution is computed as \f$ x = \mu + \sigma \ln \left( \frac{p}{1-p} \right) \f$.
			* */
            virtual double quantile(const double& p) const;

            virtual std::unique_ptr< UnivariateEvent > simulate() const;

			/// \brief Get mean of logistic distribution \f$ E(X) = \mu \f$.
            virtual double get_mean() const;

			/// \brief Get variance of logistic distribution \f$ V(X) = \frac{\sigma^2 \pi^2}{3} \f$.
            virtual double get_variance() const;

        protected:
            double _mu;
            double _sigma;
    };

    /** \brief This class LaplaceDistribution represents a [Laplace distribution](https://en.wikipedia.org/wiki/Laplace_distribution).
     * 
     * \details The Laplace distribution is an univariate continuous distribution.
     *         The support is the set of real values \f$\mathbb{R}\f$.
     * */                
    class STATISKIT_CORE_API LaplaceDistribution : public PolymorphicCopy< UnivariateDistribution, LaplaceDistribution, ContinuousUnivariateDistribution >
    {
        public:
            /** \brief The default constructor
             *
             * \details The default constructor instantiate a Laplace distribution with
             *
             * - \f$\mu = 0.\f$,
             * - \f$\sigma = 1.\f$. 
             * */
            LaplaceDistribution();
            
            /** \brief An alternative constructor
             *
             * \details This constructor is usefull for Laplace distribution instantiation with specified \f$\mu\f$ and \f$\sigma\f$ parameters.
             *
             * \param mu The specified location parameter \f$ \mu \in \mathbb{R} \f$.
             * \param sigma The specified scale parameter \f$ \sigma \in \mathbb{R}_+^* \f$.
             * */            
            LaplaceDistribution(const double& mu, const double& sigma);
            
            /// \brief A copy constructor
            LaplaceDistribution(const LaplaceDistribution& laplace);

            /** \brief Returns the number of parameters of the Laplace distribution
             *
             * \details The number of parameters of a Laplace distribution is \f$2\f$ (\f$\mu\f$ and \f$\sigma\f$).
             * */
            virtual unsigned int get_nb_parameters() const;
        	
        	/// \brief Get the value of the location parameter mu.
            const double& get_mu() const;
            
            /// \brief Set the value of the location parameter mu.
            void set_mu(const double& mu);

			/// \brief Get the value of the scale parameter sigma.
            const double& get_sigma() const;
            
            /// \brief Set the value of the scale parameter sigma.
            void set_sigma(const double& sigma);
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::ldf()
		     *
		     * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
		     *			\f[
		     * 				 \ln f(x) =  \frac{\vert \mu - x \vert }{\sigma} - \ln (2\sigma).
		     *			\f]
		     * \param value The considered value \f$x\f$.
		     * */ 
            virtual double ldf(const double& value) const;
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::pdf()
		     *
		     * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
		     *			\f[
		     * 				 f(x) =  \frac{1}{2\sigma} \exp \left( \frac{\vert \mu - x \vert }{\sigma} \right).
		     *			\f]
		     * \param value The considered value \f$x\f$.
		     * */             
            virtual double pdf(const double& value) const;
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::cdf()
		     *
		     * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
		     *			\f[
		     * 				 P(X \leq x) = \left\{
			 *								\begin{array}{ll}
			 *								   0.5 \exp \left(  \frac{x - \mu  }{\sigma} \right) & x < \mu \\
			 *								  	1-0.5 \exp \left( \frac{\mu - x}{\sigma} \right)	 & x \geq \mu
			 *								\end{array}
			 *								\right.
		     *			\f]
		     * \param value The considered value \f$x\f$.
		     * */             
            virtual double cdf(const double& value) const;

			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::quantile()
			 *  The quantile for Laplace distribution is computed as 
		     *			\f[
		     * 				 x = \left\{
			 *								\begin{array}{ll}
			 *								\mu + \sigma \ln (2p)   & p < 0.5 \\
			 *								\mu - \sigma \ln (2-2p)      & p \geq 0.5
			 *								\end{array}
			 *								\right.
		     *			\f]			
			 * */
            virtual double quantile(const double& p) const;

            virtual std::unique_ptr< UnivariateEvent > simulate() const;

			/// \brief Get mean of Laplace distribution \f$ E(X) = \mu \f$.
            virtual double get_mean() const;

			/// \brief Get variance of Laplace distribution \f$ V(X) = 2\sigma^2 \f$.
            virtual double get_variance() const;

        protected:
            double _mu;
            double _sigma;
    };

    /** \brief This class CauchyDistribution represents a [Cauchy distribution](https://en.wikipedia.org/wiki/Cauchy_distribution).
     * 
     * \details The Cauchy distribution is an univariate continuous distribution.
     *         The support is the set of real values \f$\mathbb{R}\f$.
     * */   
    class STATISKIT_CORE_API CauchyDistribution : public PolymorphicCopy< UnivariateDistribution, CauchyDistribution, ContinuousUnivariateDistribution >
    {
        public:
            /** \brief The default constructor
             *
             * \details The default constructor instantiate a Cauchy distribution with
             *
             * - \f$\mu = 0.\f$,
             * - \f$\sigma = 1.\f$. 
             * */
            CauchyDistribution();
            
            /** \brief An alternative constructor
             *
             * \details This constructor is usefull for Cauchy distribution instantiation with specified \f$\mu\f$ and \f$\sigma\f$ parameters.
             *
             * \param mu The specified location parameter \f$ \mu \in \mathbb{R} \f$.
             * \param sigma The specified scale parameter \f$ \sigma \in \mathbb{R}_+^* \f$.
             * */            
            CauchyDistribution(const double& mu, const double& sigma);
            
            /// \brief A copy constructor
            CauchyDistribution(const CauchyDistribution& cauchy);

            /** \brief Returns the number of parameters of the Cauchy distribution
             *
             * \details The number of parameters of a Cauchy distribution is \f$2\f$ (\f$\mu\f$ and \f$\sigma\f$).
             * */
            virtual unsigned int get_nb_parameters() const;
        	
        	/// \brief Get the value of the location parameter mu.
            const double& get_mu() const;
            
            /// \brief Set the value of the location parameter mu.
            void set_mu(const double& mu);

			/// \brief Get the value of the scale parameter sigma.
            const double& get_sigma() const;
            
            /// \brief Set the value of the scale parameter sigma.
            void set_sigma(const double& sigma);
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::ldf()
		     *
		     * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
		     *			\f[
		     * 				 \ln f(x) =  -\ln \pi \sigma - \ln \left\lbrace 1+ \left( \frac{x-\mu}{\sigma} \right)^2 \right\rbrace,
		     *			\f]
		     * where [\f$\pi\f$](http://www.boost.org/doc/libs/1_40_0/libs/math/doc/sf_and_dist/html/math_toolkit/toolkit/internals1/constants.html) is the constant pi implemented in Boost.Math library.
		     * \param value The considered value \f$x\f$.
		     * */ 
            virtual double ldf(const double& value) const;
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::pdf()
		     *
		     * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
		     *			\f[
		     * 				 f(x) =  \frac{1}{ \pi \sigma \left\lbrace 1+ \left( \frac{x-\mu}{\sigma} \right)^2 \right\rbrace },
		     *			\f]
		     * where [\f$\pi\f$](http://www.boost.org/doc/libs/1_40_0/libs/math/doc/sf_and_dist/html/math_toolkit/toolkit/internals1/constants.html) is the constant pi implemented in Boost.Math library.
		     * \param value The considered value \f$x\f$.
		     * */             
            virtual double pdf(const double& value) const;
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::cdf()
		     *
		     * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
		     *			\f[
		     * 				 P(X \leq x) = \frac{1}{\pi} \arctan \left( \frac{x-\mu}{\sigma} \right) + \frac{1}{2},
		     *			\f]
		     * where [\f$\pi\f$](http://www.boost.org/doc/libs/1_40_0/libs/math/doc/sf_and_dist/html/math_toolkit/toolkit/internals1/constants.html) is the constant pi implemented in Boost.Math library.
		     * \param value The considered value \f$x\f$.
		     * */             
            virtual double cdf(const double& value) const;

			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::quantile()
			 *  The quantile for Cauchy distribution is defined as \f$ \mu + \sigma \tan \left\lbrace \pi (p-1/2) \right\rbrace \f$.		
			 * */
            virtual double quantile(const double& p) const;

            virtual std::unique_ptr< UnivariateEvent > simulate() const;

			/// \brief The mean of Cauchy distribution is undefined.
            virtual double get_mean() const;

			/// \brief The variance of Cauchy distribution is undefined.
            virtual double get_variance() const;

        protected:
            double _mu;
            double _sigma;
    };

    /** \brief This class NonStandardStudentDistribution represents a Student distribution</a>.
     * 
     * \details The Student distribution is an univariate continuous distribution.
     *         The support is the set of real values \f$\mathbb{R}\f$.
     * */   
    class STATISKIT_CORE_API StudentDistribution : public PolymorphicCopy< UnivariateDistribution, StudentDistribution, ContinuousUnivariateDistribution >
    {
        public:
            /** \brief The default constructor
             *
             * \details The default constructor instantiate a non-standardized Student distribution with
             *
             * - \f$\nu = 1.\f$,
             *
             * i.e. a standard Cauchy distribution.
             * */
            StudentDistribution();
            
            /** \brief An alternative constructor
             *
             * \details This constructor is usefull for non-standardized Student distribution instantiation with specified \f$\mu\f$, \f$\sigma\f$ and \f$\nu\f$ parameters.
             *
             * \param nu The specified degree of freedom parameter \f$ \nu \in \mathbb{R}_+^* \f$.
             * */            
            StudentDistribution(const double& nu);
            
            /// \brief A copy constructor
            StudentDistribution(const StudentDistribution& student);

            /** \brief Returns the number of parameters of the Student distribution
             *
             * \details The number of parameters of a Student distribution is \f$1\f$ (\f$\nu\f$).
             * */
            virtual unsigned int get_nb_parameters() const;
            
            /// \brief Get the value of the shape parameter nu.
            const double& get_nu() const;
            
            /// \brief Set the value of the shape parameter nu.
            void set_nu(const double& nu);            
             
            virtual double ldf(const double& value) const;
                      
            virtual double pdf(const double& value) const;
                        
            virtual double cdf(const double& value) const;

            virtual double quantile(const double& p) const;

            virtual std::unique_ptr< UnivariateEvent > simulate() const;

            /// \brief Get the mean of Student distribution \f$ E(X) = \mu \f$ if \f$ \nu > 1 \f$ and undefined otherwise.
            virtual double get_mean() const;

            /// \brief Get the variance of Student distribution \f$ V(X) = \frac{\nu}{\nu-2} \f$ if \f$ \nu >2 \f$,  \f$ V(X) = \infty \f$ if \f$ 1 < \nu \leq 2\f$ and undefined otherwise.
            virtual double get_variance() const;

        protected:
            double _nu;
    };

    /** \brief This class NonStandardStudentDistribution represents a <a href="https://en.wikipedia.org/wiki/Student's_t-distribution#Non-standardized_Student.27s_t-distribution">non standardized Student distribution</a>.
     * 
     * \details The non-standardized Student distribution is an univariate continuous distribution.
     *         The support is the set of real values \f$\mathbb{R}\f$.
     * */   
    class STATISKIT_CORE_API NonStandardStudentDistribution : public StudentDistribution
    {
        public:
            /** \brief The default constructor
             *
             * \details The default constructor instantiate a non-standardized Student distribution with
             *
             * - \f$\mu = 0.\f$,
             * - \f$\sigma = 1.\f$,
             * - \f$\nu = 1.\f$,
             *
             * i.e. a standard Cauchy distribution.
             * */
            NonStandardStudentDistribution();
            
            /** \brief An alternative constructor
             *
             * \details This constructor is usefull for non-standardized Student distribution instantiation with specified \f$\mu\f$, \f$\sigma\f$ and \f$\nu\f$ parameters.
             *
             * \param mu The specified location parameter \f$ \mu \in \mathbb{R} \f$.
             * \param sigma The specified scale parameter \f$ \sigma \in \mathbb{R}_+^* \f$.
             * \param nu The specified degree of freedom parameter \f$ \nu \in \mathbb{R}_+^* \f$.
             * */            
            NonStandardStudentDistribution(const double& mu, const double& sigma, const double& nu);
            
            /// \brief A copy constructor
            NonStandardStudentDistribution(const NonStandardStudentDistribution& nsstudent);

            /** \brief Returns the number of parameters of the non-standardized Student distribution
             *
             * \details The number of parameters of a non-standardized Student distribution is \f$3\f$ (\f$\mu\f$, \f$\sigma\f$ and \f$\nu\f$).
             * */
            virtual unsigned int get_nb_parameters() const;
        	
        	/// \brief Get the value of the location parameter mu.
            const double& get_mu() const;
            
            /// \brief Set the value of the location parameter mu.
            void set_mu(const double& mu);

			/// \brief Get the value of the scale parameter sigma.
            const double& get_sigma() const;
            
            /// \brief Set the value of the scale parameter sigma.
            void set_sigma(const double& sigma);           
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::ldf()
		     *
		     * \details Let \f$x \in \mathbb{R} \f$ denote the value, the ldf is computed as 
		     *			\f[
		     * 				 \ln f(x) = \left( \frac{1+\nu}{2} \right) \left[ \ln \nu - \ln \left\lbrace \nu + \left( \frac{x-\mu}{\sqrt{\nu}\sigma} \right)^2  \right\rbrace \right]  - 0.5  \ln \nu - \ln \sigma - \ln \textnormal{beta}(0.5 \nu, 0.5) ,
		     *			\f]
		     * where [\f$\textnormal{beta}(a,b)\f$](http://www.boost.org/doc/libs/1_37_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_beta/beta_function.html) is the beta  function implemented in the Boost.Math library.
		     * \param value The considered value \f$x\f$.
		     * */ 
            virtual double ldf(const double& value) const;
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::pdf()
		     *
		     * \details Let \f$x \in \mathbb{R} \f$ denote the value, the pdf is defined by 
		     *			\f[
		     * 				 f(x) =  \frac{\Gamma \left(\frac{1+\nu}{2} \right) }{\sqrt{\nu\pi}\sigma \Gamma(\frac{\nu}{2}) \left\lbrace 1 + \left( \frac{x-\mu}{\sqrt{\nu}\sigma}\right)^2  \right\rbrace^{\frac{1+\nu}{2}} },
		     *			\f]
		     * and computed as
		     *			\f[
		     * 				 f(x) =  \left\lbrace \frac{\nu}{\nu+\left( \frac{x-\mu}{\sqrt{\nu}\sigma}\right)^2} \right\rbrace^{\frac{1+\nu}{2}} \Bigg/ \left\lbrace \sqrt{\nu}\sigma \; \textnormal{beta}(0.5\nu, \; 0.5) \right\rbrace ,
		     *			\f]		     
		     * where [\f$\textnormal{beta}(a,b)\f$](http://www.boost.org/doc/libs/1_37_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_beta/beta_function.html) is the beta  function implemented in the Boost.Math library.
		     * \param value The considered value \f$x\f$.
		     * */              
            virtual double pdf(const double& value) const;
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::cdf()
		     *
		     * \details Let \f$x \in \mathbb{R} \f$ denote the value, the cdf is given by
		     *			\f[
		     * 				 P(X \leq x) = \left\{
			 *								\begin{array}{ll}
			 *								   z & x \leq \mu, \\
			 *								   1- z & x > \mu,
			 *								\end{array}
			 *								\right.
		     *			\f]
		     * where \f$ z \f$ is computed as
		     *			\f[
		     * 				 z = \left\{
			 *								\begin{array}{ll}
			 *								 \displaystyle 0.5 * \textnormal{ibeta} \left( 0.5 \nu, \; 0.5, \frac{\nu}{\nu+\left( \frac{x-\mu}{\sigma} \right)^2} \right) & \nu < 2 \left( \frac{x-\mu}{\sigma} \right)^2 , \\
			 *								 \displaystyle 0.5 * \textnormal{ibetac} \left( 0.5, \; 0.5 \nu, \frac{\left( \frac{x-\mu}{\sigma} \right)^2}{\nu+\left( \frac{x-\mu}{\sigma} \right)^2} \right)   & \textnormal{otherwise},
			 *								\end{array}
			 *								\right.
		     *			\f]		     
		     * where [\f$\textnormal{ibeta}(a,b,x)\f$](http://www.boost.org/doc/libs/1_52_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_beta/ibeta_function.html) is the normalized incomplete beta function and [\f$\textnormal{ibetac}(a,b,x)\f$](http://www.boost.org/doc/libs/1_52_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_beta/ibetac_function.html) is its complement, both implemented in the Boost.Math library. 
		     * \param value The considered value \f$x\f$.
		     * */             
            virtual double cdf(const double& value) const;

			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::quantile()
			 *  The quantile for non-standardized Student distribution is computed as 
		     *			\f[
		     * 				 x = \left\{
			 *								\begin{array}{ll}
			 *								\displaystyle  \mu - \sigma \left\lbrace \nu \frac{1-\textnormal{ibeta\_inv}(0.5 \nu, \; 0.5, \; 2p) }{\textnormal{ibeta\_inv}(0.5 \nu, \; 0.5, \; 2p) }  \right\rbrace^{0.5}  & p < 0.5, \\
			 *								  \mu                        & p = 0.5, \\
			 *								 \displaystyle  \mu + \sigma \left\lbrace \nu  \frac{1-\textnormal{ibeta\_inv}(0.5 \nu, \; 0.5, \; 2-2p) }{\textnormal{ibeta\_inv}(0.5 \nu, \; 0.5, \; 2-2p) } \right\rbrace^{0.5}  & p > 0.5,
			 *								\end{array}
			 *								\right.
		     *			\f]		
		     * where [\f$\textnormal{ibeta\_inv}(a,b,x)\f$](http://www.boost.org/doc/libs/1_37_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_beta/ibeta_inv_function.html) is the incomplete Beta function inverse implemented in the Boost.Math library.	
			 * */
            virtual double quantile(const double& p) const;

            virtual std::unique_ptr< UnivariateEvent > simulate() const;

			/// \brief Get the mean of non-standardized Student distribution \f$ E(X) = \mu \f$ if \f$ \nu > 1 \f$ and undefined otherwise.
            virtual double get_mean() const;

			/// \brief Get the variance of non-standardized Student distribution \f$ V(X) = \frac{\nu}{\nu-2} \f$ if \f$ \nu >2 \f$,  \f$ V(X) = \infty \f$ if \f$ 1 < \nu \leq 2\f$ and undefined otherwise.
            virtual double get_variance() const;

        protected:
            double _mu;
            double _sigma;
    };

        
    /** \brief This class GumbelDistribution represents a [Gumbel distribution](https://en.wikipedia.org/wiki/Gumbel_distribution) (maximum).
     * 
     * \details The Gumbel distribution (maximum) is an univariate continuous distribution.
     * 		   It is also called extreme value type I distribution (maximum).
     *         The support is the set of real values \f$\mathbb{R}\f$.
     * */                
    class STATISKIT_CORE_API GumbelDistribution : public PolymorphicCopy< UnivariateDistribution, GumbelDistribution, ContinuousUnivariateDistribution >
    {
        public:
            /** \brief The default constructor
             *
             * \details The default constructor instantiate a Gumbel distribution with
             *
             * - \f$ \mu = 0.\f$,
             * - \f$ \sigma = 1.\f$. 
             * */
            GumbelDistribution();
            
            /** \brief An alternative constructor
             *
             * \details This constructor is usefull for Gumbel distribution instantiation with specified \f$\mu\f$ and \f$\sigma\f$ parameters.
             *
             * \param mu the specified location parameter \f$ \mu \in \mathbb{R} \f$.
             * \param sigma the specified scale parameter\f$ \sigma \in \mathbb{R}_+^* \f$.
             * */            
            GumbelDistribution(const double& mu, const double& sigma);
            
            /// \brief A copy constructor
            GumbelDistribution(const GumbelDistribution& gumbel_max);

            /** \brief Returns the number of parameters of the Gumbel distribution
             *
             * \details The number of parameters of a Gumbel distribution is \f$2\f$ (\f$\mu\f$ and \f$\sigma\f$).
             * */
            virtual unsigned int get_nb_parameters() const;
        	
        	/// \brief Get the value of the location parameter mu.
            const double& get_mu() const;
            
            /// \brief Set the value of the location parameter mu.
            void set_mu(const double& mu);

			/// \brief Get the value of the scale prameter sigma.
            const double& get_sigma() const;
            
            /// \brief Set the value of the scale prameter sigma.
            void set_sigma(const double& sigma);
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::ldf()
		     *
		     * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
		     *			\f[
		     * 				 \ln f(x) = \frac{\mu-x}{\sigma} - \exp \left( \frac{\mu-x}{\sigma} \right) - \ln (\sigma).
		     *			\f]
		     * \param value The considered value \f$x\f$.
		     * */ 
            virtual double ldf(const double& value) const;
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::pdf()
		     *
		     * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
		     *			\f[
		     * 				 f(x) =  \frac{1}{\sigma} \exp \left\lbrace \frac{\mu-x}{\sigma} - \exp \left( \frac{\mu-x}{\sigma} \right)  \right\rbrace .
		     *			\f]
		     * \param value The considered value \f$x\f$.
		     * */             
            virtual double pdf(const double& value) const;
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::cdf()
		     *
		     * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
		     *			\f[
		     * 				 P(X \leq x) = \exp \left\lbrace - \exp \left( \frac{\mu-x}{\sigma} \right)  \right\rbrace.
		     *			\f]
		     * \param value The considered value \f$x\f$.
		     * */             
            virtual double cdf(const double& value) const;

			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::quantile()
			 *  The quantile for Gumbel distribution is computed as \f$ x = \mu - \sigma \ln \lbrace - \ln (p) \rbrace  \f$.		
			 * */
            virtual double quantile(const double& p) const;

            virtual std::unique_ptr< UnivariateEvent > simulate() const;

			///  \brief Get mean of Gumbel distribution \f$ E(X) = \mu + \sigma \gamma\f$, where [\f$\gamma\f$](http://www.boost.org/doc/libs/1_40_0/libs/math/doc/sf_and_dist/html/math_toolkit/toolkit/internals1/constants.html) is the Euler's constant implemented in Boost.Math library.
            virtual double get_mean() const;

			/// \brief Get variance of Gumbel distribution \f$ V(X) = \pi^2 \sigma^2 / 6 \f$.
            virtual double get_variance() const;

        protected:
            double _mu;
            double _sigma;
    };
    
    /** \brief This class GompertzDistribution represents a Gumbel distribution (minimum).
     * 
     * \details A random component \f$X\f$ is said to folloow a Gumbel distribution (minimum) if \f$Y=-X\f$ follows a Gumbel distribution (maximum).
     *         The Gumbel distribution (minimum) is an univariate continuous distribution.
     *			It is also called extreme value type I distribution (minimum).
     *         The support is the set of real values \f$\mathbb{R}\f$.
     * @see statiskit::GumbelMaxDistribution
     * */                
    class STATISKIT_CORE_API GompertzDistribution : public PolymorphicCopy< UnivariateDistribution, GompertzDistribution, ContinuousUnivariateDistribution >
    {
        public:
            /** \brief The default constructor
             *
             * \details The default constructor instantiate a Gumbel distribution (minimum) with
             *
             * - \f$ \mu = 0.\f$,
             * - \f$ \sigma = 1.\f$. 
             * */
            GompertzDistribution();
            
            /** \brief An alternative constructor
             *
             * \details This constructor is usefull for Gumbel distribution (minimum) instantiation with specified \f$\mu\f$ and \f$\sigma\f$ parameters.
             *
             * \param mu the specified location parameter \f$ \mu \in \mathbb{R} \f$.
             * \param sigma the specified scale parameter \f$ \sigma \in \mathbb{R}_+^* \f$.
             * */            
            GompertzDistribution(const double& mu, const double& sigma);
            
            /// \brief A copy constructor
            GompertzDistribution(const GompertzDistribution& gumbel_min);

            /** \brief Returns the number of parameters of the Gumbel distribution (minimum).
             *
             * \details The number of parameters of a Gumbel distribution (minimum) is \f$2\f$ (\f$m\f$ and \f$s\f$).
             * */
            virtual unsigned int get_nb_parameters() const;
        	
        	/// \brief Get the value of the location parameter mu.
            const double& get_mu() const;
            
            /// \brief Set the value of the location parameter mu.
            void set_mu(const double& mu);

			/// \brief Get the value of the scale parameter sigma.
            const double& get_sigma() const;
            
            /// \brief Set the value of the scale parameter sigma.
            void set_sigma(const double& sigma);
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::ldf()
		     *
		     * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
		     *			\f[
		     * 				 \ln f(x) = \frac{x-\mu}{\sigma} - \exp \left( \frac{x-m}{\sigma} \right) - \ln (\sigma).
		     *			\f]
		     * \param value The considered value \f$x\f$.
		     * */ 
            virtual double ldf(const double& value) const;
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::pdf()
		     *
		     * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
		     *			\f[
		     * 				 f(x) =  \frac{1}{\sigma} \exp \left\lbrace \frac{x-\mu}{\sigma} - \exp \left( \frac{x-\mu}{\sigma} \right)  \right\rbrace .
		     *			\f]
		     * \param value The considered value \f$x\f$.
		     * */             
            virtual double pdf(const double& value) const;
            
			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::cdf()
		     *
		     * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
		     *			\f[
		     * 				 P(X \leq x) = 1 - \exp \left\lbrace - \exp \left( \frac{x-\mu}{\sigma} \right)  \right\rbrace.
		     *			\f]
		     * \param value The considered value \f$x\f$.
		     * */             
            virtual double cdf(const double& value) const;

			/** \brief \copybrief statiskit::ContinuousUnivariateDistribution::quantile()
			 *  The quantile for Gompertz distribution is computed as \f$ x = \mu + \sigma \ln \lbrace - \ln (1-p) \rbrace  \f$.		
			 * */
            virtual double quantile(const double& p) const;

            virtual std::unique_ptr< UnivariateEvent > simulate() const;

			///  \brief Get mean of Gompertz distribution \f$ E(X) = - \mu + \sigma \gamma\f$, where [\f$\gamma\f$](http://www.boost.org/doc/libs/1_40_0/libs/math/doc/sf_and_dist/html/math_toolkit/toolkit/internals1/constants.html) is the Euler's constant implemented in Boost.Math library.
            virtual double get_mean() const;

			/// \brief Get variance of Gompertz distribution \f$ V(X) = \pi^2 \sigma^2 / 6 \f$.
            virtual double get_variance() const;

        protected:
            double _mu;
            double _sigma;
    };


    /** \brief This class represents a exponential distribution.
     * 
     * \details The exponential distribution is an univariate continuous distribution.
     *          The support is the set of positive real values \f$\mathbb{R}_+^*\f$.
     * */                
    class STATISKIT_CORE_API ExponentialDistribution : public PolymorphicCopy< UnivariateDistribution, ExponentialDistribution, ContinuousUnivariateDistribution >
    {
        public:
            /** \brief The default constructor
             *
             * \details The default constructor instantiate a Exponential distribution with
             *
             * - \f$ \lambda = 1.\f$,
             * */
            ExponentialDistribution();
            
            /** \brief An alternative constructor
             *
             * \details This constructor is usefull for exponential distribution instantiation with specified \f$\lambda\f$ parameter.
             *
             * \param lambda the specified scale parameter \f$ \lambda \in \mathbb{R}_+^* \f$.
             * */            
            ExponentialDistribution(const double& lambda);
            
            /// \brief A copy constructor
            ExponentialDistribution(const ExponentialDistribution& exponential);

            /// \brief A destructor
            virtual ~ExponentialDistribution();

            /** \brief Returns the number of parameters of the exponential distribution.
             *
             * \details The number of parameters of an exponential distribution is \f$1\f$ (\f$lambda\f$).
             * */
            virtual unsigned int get_nb_parameters() const;
            
            /// \brief Get the value of the scale parameter \f$\lambda\f$.
            const double& get_lambda() const;
            
            /// \brief Set the value of the scale parameter \f$\lambda\f$.
            void set_lambda(const double& lambda);
            
            /** \brief \copybrief statiskit::ContinuousUnivariateDistribution::ldf()
             *
             * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
             *          \f[
             *               \ln f(x) =  \ln \lambda - \lambda x.
             *          \f]
             * \param value The considered value \f$x\f$.
             * */ 
            virtual double ldf(const double& value) const;
            
            /** \brief \copybrief statiskit::ContinuousUnivariateDistribution::pdf()
             *
             * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
             *          \f[
             *               f(x) =  \lambda \exp \left( -\lambda x\right).
             *          \f]
             * \param value The considered value \f$x\f$.
             * */             
            virtual double pdf(const double& value) const;
            
            /** \brief \copybrief statiskit::ContinuousUnivariateDistribution::cdf()
             *
             * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
             *          \f[
             *               P(X \leq x) = 1- \exp \left( -\lambda x\right).
             *          \f]
             * \param value The considered value \f$x\f$.
             * */             
            virtual double cdf(const double& value) const;

            /** \brief \copybrief statiskit::ContinuousUnivariateDistribution::quantile()
             *
             *  \details Let \f$x \in \mathbb{R}^{+}_{*} \f$ denote the value to compute and $p \in \left(0,1\right)$ denote a given probability, 
             *           \f[
             *               x = -\ln (1-p) / \lambda
             *           \f]       
             * */
            virtual double quantile(const double& p) const;

            virtual std::unique_ptr< UnivariateEvent > simulate() const;

            ///  \brief Get mean of the Gamma distribution \f$ E(X) = \frac{\alpha}{\beta}\f$ 
            virtual double get_mean() const;

            /// \brief Get variance of the Gamma distribution \f$ V(X) = \frac{\alpha}{\beta^2} \f$.
            virtual double get_variance() const;

        protected:
            double _lambda;
    };


    /** \brief This class represents a Gamma distribution.
     * 
     * \details The Gamma distribution is an univariate continuous distribution.
     *          The support is the set of positive real values \f$\mathbb{R}_+^*\f$.
     * */                
    class STATISKIT_CORE_API GammaDistribution : public PolymorphicCopy< UnivariateDistribution, GammaDistribution, ContinuousUnivariateDistribution >
    {
        public:
            /** \brief The default constructor
             *
             * \details The default constructor instantiate a Gamma distribution with
             *
             * - \f$ \alpha = 1.\f$,
             * - \f$ \beta = 1.\f$. 
             * */
            GammaDistribution();
            
            /** \brief An alternative constructor
             *
             * \details This constructor is usefull for Gamma distribution instantiation with specified \f$\alpha\f$ and \f$\beta\f$ parameters.
             *
             * \param alpha the specified shape parameter \f$ \alpha \in \mathbb{R}_+^* \f$.
             * \param beta the specified rate parameter \f$ \beta \in \mathbb{R}_+^* \f$.
             * */            
            GammaDistribution(const double& alpha, const double& beta);
            
            /// \brief A copy constructor
            GammaDistribution(const GammaDistribution& gamma);

            /// \brief A destructor
            virtual ~GammaDistribution();

            /** \brief Returns the number of parameters of the Gamma distribution.
             *
             * \details In the general case the number of parameters of a Gamma distribution is \f$2\f$ (\f$alpha\f$ and \f$beta\f$).
             *          When \f$\alpha=1.\f$, the Gamma distribution is equivalent to the exponential distribution.
             *          Therefore, in this case the number of parameters is \f$1\f$.
             * */
            virtual unsigned int get_nb_parameters() const;
            
            /// \brief Get the value of the shape parameter \f$\alpha\f$.
            const double& get_alpha() const;
            
            /// \brief Set the value of the shape parameter \f$\alpha\f$.
            void set_alpha(const double& mu);

            /// \brief Get the value of the rate parameter \f$\beta\f$.
            const double& get_beta() const;
            
            /// \brief Set the value of the rate parameter \f$\beta\f$.
            void set_beta(const double& sigma);
            
            /** \brief \copybrief statiskit::ContinuousUnivariateDistribution::ldf()
             *
             * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
             *          \f[
             *               \ln f(x) = \alpha \log\left(\beta\right) + \left(\alpha - 1\right) \log\left(x\right) - \beta x - \log \Gamma \left(\alpha\right).
             *          \f]
             * \param value The considered value \f$x\f$.
             * */ 
            virtual double ldf(const double& value) const;
            
            /** \brief \copybrief statiskit::ContinuousUnivariateDistribution::pdf()
             *
             * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
             *          \f[
             *               f(x) =  \frac{\beta^{\alpha} x^{\alpha - 1}  \exp \left( - \beta x \right)}{\Gamma \left(\alpha\right)}.
             *          \f]
             * \param value The considered value \f$x\f$.
             * */             
            virtual double pdf(const double& value) const;
            
            /** \brief \copybrief statiskit::ContinuousUnivariateDistribution::cdf()
             *
             * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
             *          \f[
             *               P(X \leq x) = \frac{\gamma\left(\alpha, \beta x\right)}{\Gamma\left(\alpha\right)}.
             *          \f]
             * \param value The considered value \f$x\f$.
             * */             
            virtual double cdf(const double& value) const;

            /** \brief \copybrief statiskit::ContinuousUnivariateDistribution::quantile()
             *
             *  \details Let \f$x \in \mathbb{R}^{+}_{*} \f$ denote the value to compute and $p \in \left(0,1\right)$ denote a given probability, 
             *           \f[
             *               x = \frac{\gamma^{-1}_p\left(\alpha, p\right)}{\beta}
             *           \f]       
             * */
            virtual double quantile(const double& p) const;

            virtual std::unique_ptr< UnivariateEvent > simulate() const;

            ///  \brief Get mean of the Gamma distribution \f$ E(X) = \frac{\alpha}{\beta}\f$ 
            virtual double get_mean() const;

            /// \brief Get variance of the Gamma distribution \f$ V(X) = \frac{\alpha}{\beta^2} \f$.
            virtual double get_variance() const;

        protected:
            double _alpha;
            double _beta;
    };


    /** \brief This class represents a beta distribution.
     * 
     * \details The beta distribution is an univariate continuous distribution.
     *          The support is the set of positive real values \f$\mathbb{R}_+^*\f$.
     * */                
    class STATISKIT_CORE_API BetaDistribution : public PolymorphicCopy< UnivariateDistribution, BetaDistribution, ContinuousUnivariateDistribution >
    {
        public:
            /** \brief The default constructor
             *
             * \details The default constructor instantiate a Gamma distribution with
             *
             * - \f$ \alpha = 1.\f$,
             * - \f$ \beta = 1.\f$. 
             * */
            BetaDistribution();
            
            /** \brief An alternative constructor
             *
             * \details This constructor is usefull for beta distribution instantiation with specified \f$\alpha\f$ and \f$\beta\f$ parameters.
             *
             * \param alpha the specified shape parameter \f$ \alpha \in \mathbb{R}_+^* \f$.
             * \param beta the specified shape parameter \f$ \beta \in \mathbb{R}_+^* \f$.
             * */            
            BetaDistribution(const double& alpha, const double& beta);
            
            /// \brief A copy constructor
            BetaDistribution(const BetaDistribution& beta);

            /// \brief A destructor
            virtual ~BetaDistribution();

            /** \brief Returns the number of parameters of the beta distribution.
             *
             * \details In the general case the number of parameters of a beta distribution is \f$2\f$ (\f$alpha\f$ and \f$beta\f$).
             *          When \f$\alpha=1.\f$, the beta distribution is equivalent to the exponential distribution.
             *          Therefore, in this case the number of parameters is \f$1\f$.
             * */
            virtual unsigned int get_nb_parameters() const;
            
            /// \brief Get the value of the shape parameter \f$\alpha\f$.
            const double& get_alpha() const;
            
            /// \brief Set the value of the shape parameter \f$\alpha\f$.
            void set_alpha(const double& mu);

            /// \brief Get the value of the shape parameter \f$\beta\f$.
            const double& get_beta() const;
            
            /// \brief Set the value of the shape parameter \f$\beta\f$.
            void set_beta(const double& sigma);
            
            /** \brief \copybrief statiskit::ContinuousUnivariateDistribution::ldf()
             *
             * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
             *          \f[
             *               \ln f(x) = \alpha \log\left(\beta\right) + \left(\alpha - 1\right) \log\left(x\right) - \beta x - \log \Gamma \left(\alpha\right).
             *          \f]
             * \param value The considered value \f$x\f$.
             * */ 
            virtual double ldf(const double& value) const;
            
            /** \brief \copybrief statiskit::ContinuousUnivariateDistribution::pdf()
             *
             * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
             *          \f[
             *               f(x) =  \frac{\beta^{\alpha} x^{\alpha - 1}  \exp \left( - \beta x \right)}{\Gamma \left(\alpha\right)}.
             *          \f]
             * \param value The considered value \f$x\f$.
             * */             
            virtual double pdf(const double& value) const;
            
            /** \brief \copybrief statiskit::ContinuousUnivariateDistribution::cdf()
             *
             * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
             *          \f[
             *               P(X \leq x) = \frac{\gamma\left(\alpha, \beta x\right)}{\Gamma\left(\alpha\right)}.
             *          \f]
             * \param value The considered value \f$x\f$.
             * */             
            virtual double cdf(const double& value) const;

            /** \brief \copybrief statiskit::ContinuousUnivariateDistribution::quantile()
             *
             *  \details Let \f$x \in \mathbb{R}^{+}_{*} \f$ denote the value to compute and $p \in \left(0,1\right)$ denote a given probability, 
             *           \f[
             *               x = \frac{\gamma^{-1}_p\left(\alpha, p\right)}{\beta}
             *           \f]       
             * */
            virtual double quantile(const double& p) const;

            virtual std::unique_ptr< UnivariateEvent > simulate() const;

            ///  \brief Get mean of the beta distribution \f$ E(X) = \frac{\alpha}{\beta}\f$ 
            virtual double get_mean() const;

            /// \brief Get variance of the beta distribution \f$ V(X) = \frac{\alpha}{\beta^2} \f$.
            virtual double get_variance() const;

        protected:
            double _alpha;
            double _beta;
    };




    /** \brief This class represents a uniform distribution.
     * 
     * \details The uniform distribution is an univariate continuous distribution.
     *          The support is the interval \f$[\alpha,\beta]\f$ where \f$\alpha\f$ and \f$\beta\f$ are two real values such that \f$\alpha<\beta\f$.
     * */                
    class STATISKIT_CORE_API UniformDistribution : public PolymorphicCopy< UnivariateDistribution, UniformDistribution, ContinuousUnivariateDistribution >
    {
        public:
            /** \brief The default constructor
             *
             * \details The default constructor instantiate a uniform distribution with
             *
             * - \f$ \alpha = 0.\f$,
             * - \f$ \beta = 1.\f$. 
             * */
            UniformDistribution();
            
            /** \brief An alternative constructor
             *
             * \details This constructor is usefull for uniform distribution instantiation with specified \f$\alpha\f$ and \f$\beta\f$ parameters.
             *
             * \param alpha the specified support parameter \f$ \alpha \in \mathbb{R} \f$.
             * \param beta the specified support parameter \f$ \beta \in \mathbb{R} \f$ such that \f$\alpha<\beta\f$.
             * */            
            UniformDistribution(const double& alpha, const double& beta);
            
            /// \brief A copy constructor
            UniformDistribution(const UniformDistribution& uniform);

            /// \brief A destructor
            virtual ~UniformDistribution();

            /** \brief Returns the number of parameters of the uniform distribution.
             *
             * \details The number of parameters is \f$2\f$.
             * */
            virtual unsigned int get_nb_parameters() const;
            
            /// \brief Get the value of the support parameter \f$\alpha\f$.
            const double& get_alpha() const;
            
            /// \brief Set the value of the support parameter \f$\alpha\f$.
            void set_alpha(const double& mu);

            /// \brief Get the value of the support parameter \f$\beta\f$.
            const double& get_beta() const;
            
            /// \brief Set the value of the support parameter \f$\beta\f$.
            void set_beta(const double& sigma);
            
            /** \brief \copybrief statiskit::ContinuousUnivariateDistribution::ldf()
             *
             * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
             *          \f[
             *               \ln f(x) = \ln \{ \boldsymbol{1}_{[\alpha,\beta]}(x) \} - \ln (\beta-\alpha).
             *          \f]
             * \param value The considered value \f$x\f$.
             *  */
            virtual double ldf(const double& value) const;
            
            /** \brief \copybrief statiskit::ContinuousUnivariateDistribution::pdf()
             *
             * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
             *          \f[
             *               f(x) = \frac{1}{\beta-\alpha} \boldsymbol{1}_{[\alpha,\beta]}(x).
             *          \f]
             * \param value The considered value \f$x\f$.
             * */             
            virtual double pdf(const double& value) const;
            
            /** \brief \copybrief statiskit::ContinuousUnivariateDistribution::cdf()
             *
             * \details Let \f$x \in \mathbb{R} \f$ denote the value, 
             *          \f[
             *               P(X \leq x) = \frac{x-\alpha}{\beta-\alpha} \boldsymbol{1}_{(\alpha,\beta)}(x) + \boldsymbol{1}_{[\beta,+\infty)}(x).
             *          \f]
             * \param value The considered value \f$x\f$.
             * */             
            virtual double cdf(const double& value) const;

            /** \brief \copybrief statiskit::ContinuousUnivariateDistribution::quantile()
             *
             *  \details Let \f$x \in \mathbb{R}^{+}_{*} \f$ denote the value to compute and $p \in \left(0,1\right)$ denote a given probability, 
             *           \f[
             *               x = \alpha + p (\beta-\alpha) 
             *           \f]       
             * */
            virtual double quantile(const double& p) const;

            virtual std::unique_ptr< UnivariateEvent > simulate() const;

            ///  \brief Get mean of the beta distribution \f$ E(X) = \frac{1}{2} (\alpha+\beta)\f$ 
            virtual double get_mean() const;

            /// \brief Get variance of the beta distribution \f$ V(X) = \frac{1}{12} (\alpha-\beta)^2 \f$.
            virtual double get_variance() const;

        protected:
            double _alpha;
            double _beta;
    };



    /** \Brief This class UnivariateConditionalDistribution represents the conditional distribution \f$ Y \vert \boldsymbol{X} \f$ of an univariate random component \f$ Y\f$ given a multivariate component \f$ \boldsymbol{X} \f$.
     *
     */
    struct STATISKIT_CORE_API UnivariateConditionalDistribution
    {
        typedef UnivariateDistribution response_type;
        
        virtual ~UnivariateConditionalDistribution() = 0;

        /// \Brief This is an operation of conditioning that returns the conditional distribution \f$ Y \vert \boldsymbol{X} = \boldsymbol{x} \f$.
        virtual const UnivariateDistribution* operator() (const MultivariateEvent& event) const = 0;

        double loglikelihood(const UnivariateConditionalData& data) const;

    	/// \Brief Get the sample space of the response component \f$ Y \f$.
        //virtual std::unique_ptr< UnivariateSampleSpace > get_response_space() const = 0;

    	/// \Brief Get the sample space of the explanatory components \f$ \boldsymbol{X} \f$.
        virtual const MultivariateSampleSpace* get_explanatory_space() const = 0;

    	/// \Brief Get the number of parameters of the \f$ Y \vert \boldsymbol{X} \f$.
        virtual unsigned int get_nb_parameters() const = 0;

        virtual std::unique_ptr< UnivariateConditionalDistribution > copy() const = 0;
    }; 
    
    struct STATISKIT_CORE_API CategoricalUnivariateConditionalDistribution : UnivariateConditionalDistribution
    {
        typedef CategoricalEvent event_type;
        typedef CategoricalUnivariateDistribution response_type; 
    };
    
    struct STATISKIT_CORE_API DiscreteUnivariateConditionalDistribution : UnivariateConditionalDistribution
    {
        typedef DiscreteEvent event_type;
        typedef DiscreteUnivariateDistribution response_type; 
    };        
    
    struct STATISKIT_CORE_API ContinuousUnivariateConditionalDistribution : UnivariateConditionalDistribution
    {
        typedef ContinuousEvent event_type;
        typedef ContinuousUnivariateDistribution response_type; 
    };      

    struct STATISKIT_CORE_API MultivariateDistribution
    {
        typedef MultivariateData data_type;
        typedef UnivariateDistribution marginal_type;
            
        virtual ~MultivariateDistribution() = 0;

        /// \brief Get the number of components of the distribution.
        virtual Index get_nb_components() const = 0;

        /// \brief Get the number of parameters of the distribution.
        virtual unsigned int get_nb_parameters() const = 0;
        
        virtual double probability(const MultivariateEvent* event, const bool& logarithm) const = 0;

        /** \brief Compute the log-likelihood of an univariate dataset according to the considered multiivariate distribution.
         *
         * \param data The considered multivariate dataset.
         * */ 
        double loglikelihood(const MultivariateData& data) const;

        /// Simulate an elementary event according to the considered univariate distribution.
        virtual std::unique_ptr< MultivariateEvent > simulate() const = 0;

        virtual std::unique_ptr< MultivariateDistribution > copy() const = 0;
    };

    struct STATISKIT_CORE_API CategoricalMultivariateDistribution : MultivariateDistribution
    {
        typedef CategoricalUnivariateDistribution marginal_type;
    };

    struct STATISKIT_CORE_API DiscreteMultivariateDistribution : MultivariateDistribution
    {
        typedef DiscreteUnivariateDistribution marginal_type;
    };

    class STATISKIT_CORE_API SplittingDistribution : public PolymorphicCopy< MultivariateDistribution, SplittingDistribution, DiscreteMultivariateDistribution >
    {
        public:
            SplittingDistribution(const DiscreteUnivariateDistribution& sum, const SingularDistribution& singular);
            SplittingDistribution(const SplittingDistribution& splitting);
            virtual ~SplittingDistribution();

            virtual Index get_nb_components() const;

            virtual unsigned int get_nb_parameters() const;

            virtual double probability(const MultivariateEvent* event, const bool& logarithm) const;

            std::unique_ptr< MultivariateEvent > simulate() const;

            const DiscreteUnivariateDistribution* get_sum() const;
            void set_sum(const DiscreteUnivariateDistribution& sum);

            SingularDistribution* get_singular() const;
            void set_singular(const SingularDistribution& singular);

        protected:
            DiscreteUnivariateDistribution* _sum;
            SingularDistribution* _singular;

            SplittingDistribution();
    };

    struct STATISKIT_CORE_API ContinuousMultivariateDistribution : MultivariateDistribution
    {
        typedef ContinuousUnivariateDistribution marginal_type;
    };

    class STATISKIT_CORE_API MultinormalDistribution : public PolymorphicCopy< MultivariateDistribution, MultinormalDistribution, ContinuousMultivariateDistribution >
    {
        public:
            MultinormalDistribution(const Eigen::VectorXd& mu, const Eigen::MatrixXd& sigma);
            MultinormalDistribution(const MultinormalDistribution& multinormal);
            virtual ~MultinormalDistribution();

            virtual Index get_nb_components() const;

            virtual unsigned int get_nb_parameters() const;

            virtual double probability(const MultivariateEvent* event, const bool& logarithm) const;

            std::unique_ptr< MultivariateEvent > simulate() const;

            const Eigen::VectorXd& get_mu() const;
            void set_mu(const Eigen::VectorXd& mu);

            const Eigen::MatrixXd& get_sigma() const;
            void set_sigma(const Eigen::MatrixXd& sigma);

        protected:
            Eigen::VectorXd _mu;
            Eigen::MatrixXd _sigma;
    };

    class STATISKIT_CORE_API DirichletDistribution : public PolymorphicCopy< MultivariateDistribution, DirichletDistribution, ContinuousMultivariateDistribution >
    {
        public:
            DirichletDistribution(const Index& nb_components);
            DirichletDistribution(const Eigen::VectorXd& alpha);
            DirichletDistribution(const DirichletDistribution& dirichlet);
            virtual ~DirichletDistribution();

            virtual Index get_nb_components() const;

            virtual unsigned int get_nb_parameters() const;

            virtual double probability(const MultivariateEvent* event, const bool& logarithm) const;

            std::unique_ptr< MultivariateEvent > simulate() const;

            const Eigen::VectorXd& get_alpha() const;
            void set_alpha(const Eigen::VectorXd& alpha);

        protected:
            Eigen::VectorXd _alpha;
            double _constant;
    };

    /*template<class D> class IndependentMultivariateDistribution : public PolymorphicCopy< MultivariateDistribution, IndependentMultivariateDistribution< D >, D >
    {
        public:
            IndependentMultivariateDistribution(const std::vector< typename D::marginal_type* >& marginals);
            IndependentMultivariateDistribution(const IndependentMultivariateDistribution< D >& independent);
            virtual ~IndependentMultivariateDistribution();
            
            virtual Index get_nb_components() const;

            virtual unsigned int get_nb_parameters() const;

            virtual double probability(const MultivariateEvent* event, const bool& logarithm) const;

            typename D::marginal_type* get_marginal(const Index& index) const;
            void set_marginal(const Index& index, const typename D::marginal_type& marginal);

            virtual std::unique_ptr< MultivariateEvent > simulate() const;

        protected:
            std::vector< typename D::marginal_type* > _marginals;
    };

    typedef IndependentMultivariateDistribution< MultivariateDistribution > MixedIndependentMultivariateDistribution;
    typedef IndependentMultivariateDistribution< CategoricalMultivariateDistribution > CategoricalIndependentMultivariateDistribution;
    typedef IndependentMultivariateDistribution< DiscreteMultivariateDistribution > DiscreteIndependentMultivariateDistribution;
    typedef IndependentMultivariateDistribution< ContinuousMultivariateDistribution > ContinuousIndependentMultivariateDistribution;*/


    struct STATISKIT_CORE_API MultivariateConditionalDistribution
    {
        typedef MultivariateDistribution response_type;
        
        virtual ~MultivariateConditionalDistribution() = 0;
        
        virtual Index get_nb_components() const = 0;

        virtual const MultivariateDistribution* operator() (const MultivariateEvent& event) const = 0;

        // double loglikelihood(const MultivariateConditionalData& data) const;

        virtual const MultivariateSampleSpace* get_explanatory_space() const = 0;

        virtual unsigned int get_nb_parameters() const = 0;

        virtual std::unique_ptr< MultivariateConditionalDistribution > copy() const = 0;
    }; 
    
    struct STATISKIT_CORE_API CategoricalMultivariateConditionalDistribution : MultivariateConditionalDistribution
    {};
    
    struct STATISKIT_CORE_API DiscreteMultivariateConditionalDistribution : MultivariateConditionalDistribution
    {};        
    
    struct STATISKIT_CORE_API ContinuousMultivariateConditionalDistribution : MultivariateConditionalDistribution
    {};      

    template<class D> class MixtureDistribution : public D
    {
        public:
            typedef D observation_type;

            MixtureDistribution();
            virtual ~MixtureDistribution();

            virtual unsigned int get_nb_parameters() const;

            Index get_nb_states() const;

            const D* get_observation(const Index& index) const;
            virtual void set_observation(const Index& index, const D& observation);

            const Eigen::VectorXd& get_pi() const;
            void set_pi(const Eigen::VectorXd& pi);

            Eigen::VectorXd posterior(const typename D::data_type::event_type* event, const bool& logarithm=false) const;
        
            Index assignment(const typename D::data_type::event_type* event) const;
            std::vector< Index > assignment(const typename D::data_type& data) const;

            double uncertainty(const typename D::data_type::event_type* event) const;
            double uncertainty(const typename D::data_type& data) const;

        protected:
            std::vector< D* > _observations;
            Eigen::VectorXd _pi;

            void init(const std::vector< D* > observations, const Eigen::VectorXd& pi);
            void init(const MixtureDistribution< D >& mixture);
    };

    template<class D> struct UnivariateMixtureDistribution : MixtureDistribution< D >
    {
        UnivariateMixtureDistribution();
        virtual ~UnivariateMixtureDistribution();

        virtual double ldf(const typename D::event_type::value_type& value) const;

        virtual double pdf(const typename D::event_type::value_type& value) const;

        std::unique_ptr< UnivariateEvent > simulate() const;
    };

    struct STATISKIT_CORE_API CategoricalUnivariateMixtureDistribution : PolymorphicCopy< UnivariateDistribution, CategoricalUnivariateMixtureDistribution, UnivariateMixtureDistribution< CategoricalUnivariateDistribution > >
    {
        CategoricalUnivariateMixtureDistribution(const std::vector< CategoricalUnivariateDistribution* > observations, const Eigen::VectorXd& pi);
        CategoricalUnivariateMixtureDistribution(const CategoricalUnivariateMixtureDistribution& mixture);
        virtual ~CategoricalUnivariateMixtureDistribution();

        virtual double pdf(const int& position) const;

        virtual std::set< std::string > get_values() const;
    };

    typedef std::vector< CategoricalUnivariateDistribution* > CategoricalUnivariateDistributionVector;

    template<class D> struct QuantitativeUnivariateMixtureDistribution : UnivariateMixtureDistribution< D >
    {
        QuantitativeUnivariateMixtureDistribution();
        virtual ~QuantitativeUnivariateMixtureDistribution();

        virtual double cdf(const typename D::event_type::value_type& value) const;

        virtual double get_mean() const;

        virtual double get_variance() const;
    };

    struct STATISKIT_CORE_API DiscreteUnivariateMixtureDistribution : PolymorphicCopy< UnivariateDistribution, DiscreteUnivariateMixtureDistribution, QuantitativeUnivariateMixtureDistribution< DiscreteUnivariateDistribution > >
    {
        DiscreteUnivariateMixtureDistribution(const std::vector< DiscreteUnivariateDistribution* > observations, const Eigen::VectorXd& pi);
        DiscreteUnivariateMixtureDistribution(const DiscreteUnivariateMixtureDistribution& mixture);
        virtual ~DiscreteUnivariateMixtureDistribution();

        virtual int quantile(const double& p) const;
    };

    typedef std::vector< DiscreteUnivariateDistribution* > DiscreteUnivariateDistributionVector;

    struct STATISKIT_CORE_API ContinuousUnivariateMixtureDistribution : PolymorphicCopy< UnivariateDistribution, ContinuousUnivariateMixtureDistribution, QuantitativeUnivariateMixtureDistribution< ContinuousUnivariateDistribution > >
    {
        public:
            ContinuousUnivariateMixtureDistribution(const std::vector< ContinuousUnivariateDistribution* > observations, const Eigen::VectorXd& pi);
            ContinuousUnivariateMixtureDistribution(const ContinuousUnivariateMixtureDistribution& mixture);
            virtual ~ContinuousUnivariateMixtureDistribution();

            virtual double quantile(const double& p) const;

            double get_epsilon() const;
            void set_epsilon(const double& epsilon);

        protected:
            double _epsilon;
    };

    typedef std::vector< ContinuousUnivariateDistribution* > ContinuousUnivariateDistributionVector;

    template<class D> struct MultivariateMixtureDistribution : PolymorphicCopy< MultivariateDistribution, MultivariateMixtureDistribution< D >, MixtureDistribution< D > >
    {
        MultivariateMixtureDistribution(const std::vector< D* > observations, const Eigen::VectorXd& pi);
        MultivariateMixtureDistribution(const MultivariateMixtureDistribution< D >& mixture);
        virtual ~MultivariateMixtureDistribution();

        virtual void set_observation(const Index& index, const D& observation);

        virtual Index get_nb_components() const;

        virtual double probability(const MultivariateEvent* event, const bool& logarithm) const;

        std::unique_ptr< MultivariateEvent > simulate() const;
    };

    typedef MultivariateMixtureDistribution< MultivariateDistribution > MixedMultivariateMixtureDistribution;
    typedef std::vector< MultivariateDistribution* > MultivariateDistributionVector;

    typedef MultivariateMixtureDistribution< CategoricalMultivariateDistribution > CategoricalMultivariateMixtureDistribution;
    typedef std::vector< CategoricalMultivariateDistribution* > CategoricalMultivariateDistributionVector;

    typedef MultivariateMixtureDistribution< DiscreteMultivariateDistribution > DiscreteMultivariateMixtureDistribution;
    typedef std::vector< DiscreteMultivariateDistribution* > DiscreteMultivariateDistributionVector;

    struct STATISKIT_CORE_API MixtureSingularDistribution : PolymorphicCopy< SingularDistribution, MixtureSingularDistribution, MixtureDistribution< SingularDistribution > >
    {
        MixtureSingularDistribution(const std::vector< SingularDistribution* > observations, const Eigen::VectorXd& pi);
        MixtureSingularDistribution(const MixtureSingularDistribution& mixture);
        virtual ~MixtureSingularDistribution();

        virtual void set_observation(const Index& index, const SingularDistribution& observation);

        virtual Index get_nb_components() const;

        virtual double probability(const MultivariateEvent* event, const bool& logarithm) const;

        virtual std::unique_ptr< MultivariateEvent > simulate(unsigned int sum) const;
    };

    typedef MultivariateMixtureDistribution< ContinuousMultivariateDistribution > ContinuousMultivariateMixtureDistribution;
    typedef std::vector< ContinuousMultivariateDistribution* > ContinuousMultivariateDistributionVector;
}

#ifndef AUTOWIG
#include "distribution.hpp"
#endif
#endif
