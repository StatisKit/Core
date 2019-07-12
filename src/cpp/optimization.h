
    struct STATISKIT_CORE_API Schedule
    {
        virtual ~Schedule() = 0;

        virtual double operator() (const double& stage) const = 0;

        virtual std::unique_ptr< Schedule > copy() const = 0;
    };

    class STATISKIT_CORE_API ExponentialSchedule : public PolymorphicCopy< Schedule, ExponentialSchedule >
    { 
        public:
            ExponentialSchedule(const double& theta);
            ExponentialSchedule(const ExponentialSchedule& schedule);
            virtual ~ExponentialSchedule();

            virtual double operator() (const double& stage) const;

            const double& get_theta() const;
            void set_theta(const double& theta);

        protected:
            double theta;
    };

    template<class T>
        class Optimization : public T
        {
            public:
                Optimization();
                Optimization(const Optimization< T >& optimization);
                virtual ~Optimization();

                const double& get_mindiff() const;
                void set_mindiff(const double& mindiff);
                
                unsigned int get_minits() const;
                void set_minits(const unsigned int& maxits);

                unsigned int get_maxits() const;
                void set_maxits(const unsigned int& maxits);

            protected:
                double _mindiff;
                unsigned int _minits;
                unsigned int _maxits;

                bool run(const unsigned int& its, const double& delta) const;
        };
        
    template<class T>
        class SimulatedAnnealing : public T
        {
            public:
                SimulatedAnnealing();
                SimulatedAnnealing(const SimulatedAnnealing< T >& simulated_annealing);
                virtual ~SimulatedAnnealing();

                const Schedule* get_schedule() const;
                void set_schedule(const Schedule& schedule);
                
                unsigned int get_minits() const;
                void set_minits(const unsigned int& maxits);

                unsigned int get_maxits() const;
                void set_maxits(const unsigned int& maxits);

            protected:
                Schedule* _schedule;
                unsigned int _minits;
                unsigned int _maxits;

                bool accept(const unsigned int& its, const double& delta) const;
        };

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
