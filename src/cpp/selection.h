#pragma once

    template<class B> class Selection : public B
    {
        public:
            Selection();
            Selection(typename B::data_type const * data);
            Selection(D const * estimated, typename B::data_type const * data);
            Selection(const Selection< D, B >& estimation);
            virtual ~Selection();

            Index size() const;

            B const * get_estimation(const Index& index) const;

            const double& get_score(const Index& index) const;

            class Estimator : public B::Estimator
            {
                public:
                    virtual ~Estimator();
                  
                    virtual std::unique_ptr< typename B::Estimator::estimation_type > operator() (typename B::data_type const & data, const bool& lazy=true) const;

                    Index size() const;

                    typename B::Estimator * get_estimator(const Index& index);
                    void set_estimator(const Index& index, const typename B::Estimator& estimator);

                    void add_estimator(const typename B::Estimator& estimator);
                    void remove_estimator(const Index& index);

                protected:
                    std::vector< typename B::Estimator * > _estimators;

                    virtual double scoring(const typename B::estimated_type * estimated, typename B::data_type const & data) const = 0;

                    void init();
                    void init(const Estimator& estimator);
            };

            class CriterionEstimator : public PolymorphicCopy< typename B::Estimator::estimation_type::Estimator, CriterionEstimator, Estimator >
            {
                public:
                    enum criterion_type {
                        AIC,
                        AICc,
                        BIC,
                        HQIC
                    };

                    CriterionEstimator();
                    CriterionEstimator(const CriterionEstimator& estimator);
                    virtual ~CriterionEstimator();

                    const criterion_type& get_criterion() const;
                    void set_criterion(const criterion_type& criterion);

                protected:
                    criterion_type _criterion;

                    virtual double scoring(const typename B::estimated_type * estimated, typename B::data_type const & data) const;
            };/**/

        protected:
            std::vector< B * > _estimations;
            std::vector< double > _scores;

            void finalize();
    };
