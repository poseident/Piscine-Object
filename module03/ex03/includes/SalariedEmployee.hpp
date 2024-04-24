#ifndef SALARIEDEMPLOYEE_HPP
#define SALARIEDEMPLOYEE_HPP

#include "Employee.hpp"

class SalariedEmployee : public Employee
{
    public:
        class ContractEmployee : public Employee 
        {
            public:
                ContractEmployee(double salary) : Employee(salary), _notWorked(0){
                    std::cout << "ContractEmployee constructor called" << std::endl;
                }
                virtual ~ContractEmployee() { std::cout << "ContractEmployee destructor called" << std::endl; };
                void addUnworkedHours(double hours) {
                    _notWorked += hours;
                };
            private:
                double _notWorked;
        };

        class Apprentice : public ContractEmployee 
        {
            public:
                Apprentice(double salary) : ContractEmployee(salary), _schoolHours(0){
                    std::cout << "ContractEmployee constructor called" << std::endl;
                }
                virtual ~Apprentice() { std::cout << "Apprentice destructor called" << std::endl; }
                void addSchoolHours(int hours){
                    _schoolHours += hours;
                }
                virtual double getWorkedHours() {
                    return _workedHours + (_schoolHours / 2);
                }
            private:
                double _schoolHours;
        };
};

#endif