#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <iostream>

class Employee
{
    public:
        Employee(const std::string name, const int hourlyValue): _name(name), _hourlyValue(hourlyValue) {}

        virtual ~Employee() {}

        virtual int executeWorkday() {
            std::cout << _name << ": is working" << std::endl;
            return 0;
        }

        int getHourlyValue() {
            return _hourlyValue;
        }

        std::string getName() {
            return _name;
        }

        virtual int calculePayroll() const = 0;
    protected:
        int _hourlyValue;
        std::string _name;
};

#endif