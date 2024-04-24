#ifndef SALARIEEMPLOYEE_HPP
#define SALARIEEMPLOYEE_HPP

#include "employee.hpp"

class SalarieEmployee : public Employee
{
    public:
        class ContractEmployee : public Employee 
        {
            public:
                ContractEmployee(int const id, double salary) : Employee(id, salary), _notWorked(0){
                    std::cout << "ContractEmployee constructor called" << std::endl;
                }
                ~ContractEmployee() { std::cout << "ContractEmployee destructor called" << std::endl; };
                void addUnworkedHours(double hours) {
                    _notWorked += hours;
                };
            private:
                int _notWorked;
        };

        class Apprentice : public ContractEmployee 
        {
            public:

            private:
                int _schoolHours;
        };
    private:
};

#endif