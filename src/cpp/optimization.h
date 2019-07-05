
    template<class T, class D, class B> class OptimizationEstimationImpl : public ActiveEstimation< D, B >
    {
        public:
            OptimizationEstimationImpl();
            OptimizationEstimationImpl(D const * estimated, typename B::data_type const * data);            
            OptimizationEstimationImpl(const OptimizationEstimationImpl< T, D, B >& estimation);
            virtual ~OptimizationEstimationImpl();

            Index size() const;

            class Estimator : public Optimization< typename B::Estimator >
            {
                public:
                    Estimator();
                    Estimator(const Estimator& estimator);
                    virtual ~Estimator();
            };

        protected:
            std::vector< T > _iterations;
    };

    template<class T, class D, class B> class SimulatedAnnealingEstimation : public ActiveEstimation< D, B >
    {
        public:
            SimulatedAnnealingEstimation();
            SimulatedAnnealingEstimation(D const * estimated, typename B::data_type const * data);            
            SimulatedAnnealingEstimation(const SimulatedAnnealingEstimation< T, D, B >& estimation);
            virtual ~SimulatedAnnealingEstimation();

            Index size() const;

            class Estimator : public SimulatedAnnealing< typename B::Estimator >
            {
                public:
                    Estimator();
                    Estimator(const Estimator& estimator);
                    virtual ~Estimator();
            };

        protected:
            std::vector< T > _iterations;
    };

    template<class T, class D, class B> struct OptimizationEstimation : OptimizationEstimationImpl<T, D, B >
    {
        // using __impl::OptimizationEstimation<T, D, B >::OptimizationEstimation;
        OptimizationEstimation();
        OptimizationEstimation(D const * estimated, typename B::data_type const * data);
        OptimizationEstimation(const OptimizationEstimation< T, D, B>& estimation);
        virtual ~OptimizationEstimation();

        const T get_iteration(const Index& index) const;

        struct Estimator : OptimizationEstimationImpl<T, D, B >::Estimator
        { 
            Estimator();
            Estimator(const Estimator& estimator);
            virtual ~Estimator();
        };
    };

    template<class T, class D, class B> struct OptimizationEstimation< T*, D, B> : OptimizationEstimationImpl<T*, D, B >
    {
        // using OptimizationEstimationImpl<T*, D, B >::OptimizationEstimation;
        OptimizationEstimation();
        OptimizationEstimation(D const * estimated, typename B::data_type const * data);
        OptimizationEstimation(const OptimizationEstimation< T*, D, B>& estimation);
        virtual ~OptimizationEstimation();

        const T* get_iteration(const Index& index) const;

        struct Estimator : OptimizationEstimationImpl<T*, D, B >::Estimator
        { 
            Estimator();
            Estimator(const Estimator& estimator);
            virtual ~Estimator();
        };
    };
