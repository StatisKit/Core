#include "optimization.h"

namespace statiskit
{
    Schedule::~Schedule()
    {}

    ExponentialSchedule::ExponentialSchedule(const double& theta)
    {
        this->theta = theta;
    }

    ExponentialSchedule::ExponentialSchedule(const ExponentialSchedule& schedule)
    {
        this->theta = schedule.theta;
    }

    ExponentialSchedule::~ExponentialSchedule()
    {}

    double ExponentialSchedule::operator() (const double& stage) const
    {
        return exp(- stage / this->theta);
    }

    const double& ExponentialSchedule::get_theta() const
    {
        return this->theta;
    }

    void ExponentialSchedule::set_theta(const double& theta)
    {
        this->theta = theta;
    }
}