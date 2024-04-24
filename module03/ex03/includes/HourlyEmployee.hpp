#ifndef HOURLYEMPLOYEE_HPP
#define HOURLYEMPLOYEE_HPP

#include "Employee.hpp"

class HourlyEmployee : public Employee
{
    public:
        class TempWorker: public Employee
        {
            public:
                TempWorker(double salary) : Employee(salary) {
                    std::cout << "TempWorker constructor called" << std::endl;
                }
                virtual ~TempWorker() { std::cout << "TempWorker destructor called" << std::endl; };
        };
    private:
};

#endif