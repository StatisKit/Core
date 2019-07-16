#ifndef AUTOWIG
#pragma once

namespace statiskit 
{
    template<typename T>
        Optimization< T >::Optimization()
        {
            this->mindiff = 1e-5;
            this->minits = 1;
            this->maxits = 10e6;
        }

    template<typename T>
        Optimization< T >::Optimization(const Optimization< T >& optimization)
        {
            this->mindiff = optimization.mindiff;
            this->minits = optimization.minits;
            this->maxits = optimization.maxits;
        }

    template<typename T>
        Optimization< T >::~Optimization()
        {}

    template<typename T>
        const double& Optimization< T >::get_mindiff() const
        {
            return this->mindiff;
        }

    template<typename T>
        void Optimization< T >::set_mindiff(const double& mindiff)
        {
            if (mindiff < 0.) {
                throw lower_bound_error("mindiff", mindiff, 0., false);
            }
            this->mindiff = mindiff;
        }

    template<typename T>
        unsigned int Optimization< T >::get_minits() const
        {
            return this->minits;
        }

    template<typename T>
        void Optimization< T >::set_minits(const unsigned int& minits)
        {
            if (minits < 0) {
                throw lower_bound_error("minits", minits, 0, false);
            }
            this->minits = minits;
        }

    template<typename T>
        unsigned int Optimization< T >::get_maxits() const
        {
            return this->maxits;
        }

    template<typename T>
        void Optimization< T >::set_maxits(const unsigned int& maxits)
        {
            if (maxits < minits) {
                throw lower_bound_error("maxits", maxits, minits, false);
            }   
            this->maxits = maxits;
        }

    template<typename T>
        bool Optimization< T >::run(const unsigned int& its, const double& delta) const
        { 
            bool status = boost::math::isfinite(delta);
            if (status && its > this->minits) {
                if (delta < this->mindiff || its > this->maxits) {
                    status = false;
                }
            }
            return status;
        }

    template<typename T>
        SimulatedAnnealing< T >::SimulatedAnnealing()
        {
            this->schedule = new ExponentialSchedule(1.);
            this->minits = 1;
            this->maxits = 10e6;
        }

    template<typename T>
        SimulatedAnnealing< T >::SimulatedAnnealing(const SimulatedAnnealing< T >& simulated_annealing)
        {
            if (simulated_annealing.schedule) {
                this->schedule = simulated_annealing.schedule->copy().release();
            } else {
                this->schedule = nullptr;
            }
            this->minits = simulated_annealing.minits;
            this->maxits = simulated_annealing.maxits;
        }

    template<typename T>
        SimulatedAnnealing< T >::~SimulatedAnnealing()
        {
            if (this->schedule) {
                delete this->schedule;
                this->schedule = nullptr;
            }
        }

    template<typename T>
        const Schedule* SimulatedAnnealing< T >::get_schedule() const
        {
            return this->schedule;
        }

    template<typename T>
        void SimulatedAnnealing< T >::set_schedule(const Schedule& schedule)
        {
            this->schedule = schedule.copy().release();
        }

    template<typename T>
        unsigned int SimulatedAnnealing< T >::get_minits() const
        {
            return this->minits;
        }

    template<typename T>
        void SimulatedAnnealing< T >::set_minits(const unsigned int& minits)
        {
            this->minits = minits;
        }

    template<typename T>
        unsigned int SimulatedAnnealing< T >::get_maxits() const
        {
            return this->maxits;
        }

    template<typename T>
        void SimulatedAnnealing< T >::set_maxits(const unsigned int& maxits)
        {
            this->maxits = maxits;
        }

    template<typename T>
        bool SimulatedAnnealing< T >::accept(const unsigned int& its, const double& delta) const
        { 
            bool status = boost::math::isfinite(delta);
            if (its > this->minits && delta < 0)  {
                if (its > this->maxits) {
                    status = false;
                } else {
                    double u = boost::uniform_01<boost::mt19937&>(__impl::get_random_generator())();
                    status = u < exp(- delta / (*this->schedule)((its - this->minits) / this->maxits));
                }
            } else if (its > this->maxits) {
                status = false;
            }
            return status;
        }
}

#endif