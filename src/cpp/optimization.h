#pragma once

#include "base.h"

namespace statiskit
{
    struct STATISKIT_CORE_API Schedule
    {
        typedef Schedule copy_type;

        virtual ~Schedule() = 0;

        virtual double operator() (const double& stage) const = 0;

        virtual std::unique_ptr< copy_type > copy() const = 0;
    };

    class STATISKIT_CORE_API ExponentialSchedule : public PolymorphicCopy<ExponentialSchedule, Schedule>
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
                double mindiff;
                unsigned int minits;
                unsigned int maxits;

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
                Schedule* schedule;
                unsigned int minits;
                unsigned int maxits;

                bool accept(const unsigned int& its, const double& delta) const;
        };
}

#include "optimization.hpp"