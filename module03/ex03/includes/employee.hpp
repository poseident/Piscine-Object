#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <iostream>

class Employee
{
    public:
        Employee(const int id, const double hourlyValue): _id(id), _hourlyValue(hourlyValue) {}
        int executeWorkday(){
            return _hourlyValue += 7;
        }
        const int getId() {
            return _id;
        }
    private:
        const int _id;
        int _hourlyValue;
};

#endif