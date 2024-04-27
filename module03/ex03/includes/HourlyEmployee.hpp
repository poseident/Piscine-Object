#ifndef HOURLYEMPLOYEE_HPP
#define HOURLYEMPLOYEE_HPP

#include "Employee.hpp"

class HourlyEmployee: public Employee
{
    public:
        HourlyEmployee(const std::string name, const int salary) : Employee(name, salary), _WorkerHours(0) {}
        virtual int executeWorkday()
        {
            _WorkerHours += 7;
            return 0;
        }
    protected:
        int _WorkerHours;
};


class TempWorker: public HourlyEmployee
{
    public:
        TempWorker(const std::string name, const int salary) : HourlyEmployee(name, salary) {
            std::cout << "TempWorker constructor called" << std::endl;
        }
        virtual ~TempWorker() { std::cout << "TempWorker destructor called" << std::endl; };

        virtual int calculePayroll() const
        {
            return _WorkerHours * _hourlyValue;
        }

        void mobilized(int hours)
        {
            _WorkerHours += hours;
        }
};

#endif