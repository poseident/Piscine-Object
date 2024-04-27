#ifndef SALARIEDEMPLOYEE_HPP
#define SALARIEDEMPLOYEE_HPP

#include "Employee.hpp"


class SalariedEmployee : public Employee
{
    public:
        SalariedEmployee(const std::string name, int salary): Employee(name, salary), _not_worked(0) {
            ;
        }
        virtual ~SalariedEmployee() {};

        void addUnworkedHours(int hours) {
            _not_worked += hours;
        };

        virtual int executeWorkday()
        {
            _dayWorked += 1;
            return 0;
        }

    protected:
        int _dayWorked;
        int _not_worked;
};

class ContractEmployee : public SalariedEmployee 
{
    public:
        ContractEmployee(const std::string name, int salary): SalariedEmployee(name, salary) {
            std::cout << "ContractEmployee constructor called" << std::endl;
        }
        ~ContractEmployee() { std::cout << "ContractEmployee destructor called" << std::endl; }
    
        virtual int calculePayroll() const
        {
            return ((_dayWorked * 7) * _hourlyValue);
        }
};

class Apprentice : public SalariedEmployee 
{
    public:
        Apprentice(const std::string name, const int salary) : SalariedEmployee(name, salary), _schoolHours(0){
            std::cout << "ContractEmployee constructor called" << std::endl;
        }
        ~Apprentice() { std::cout << "Apprentice destructor called" << std::endl; }

        virtual int calculePayroll() const
        {
            return (((_dayWorked * 7) * _hourlyValue) + ((_schoolHours / 2) * _hourlyValue));
        }

        void registerSchoolHours(int hours)
        {
            _schoolHours += hours;
        }

    private:
        int _schoolHours;
};


#endif