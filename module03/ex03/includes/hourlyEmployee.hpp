#ifndef HOURLYEMPLOYEE_HPP
#define HOURLYEMPLOYEE_HPP

#include "employee.hpp"

class HourlyEmployee : public Employee
{
    public:
        class TempWorker: public Employee
        {
            public:
                TempWorker(int const id, double salary) : Employee(id, salary), _workedHours(0){
                    std::cout << "TempWorker constructor called" << std::endl;
                }
                ~TempWorker() { std::cout << "TempWorker destructor called" << std::endl; };
                void work(double hours) {
                    _workedHours += hours;
                };
            private:
                int _workedHours;
        };
    private:
};

#endif