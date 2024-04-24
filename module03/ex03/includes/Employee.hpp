#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <iostream>

class Employee
{
    public:
        Employee(const double hourlyValue): _id(id_counter++), _hourlyValue(hourlyValue), _workedHours(0) {}
        virtual ~Employee() {}
        int executeWorkday(){
            _workedHours += 7;
            return  7;
        }
        void work(const int hours) {
            _workedHours += hours;
        };
        int getId() {
            return _id;
        }
        int getHourlyValue() {
            return _hourlyValue;
        }
        virtual double getWorkedHours() {
            return _workedHours;
        }
        int getPayroll() {
            return _workedHours * _hourlyValue;
        }
    private:
        const int _id;
        int _hourlyValue;
        static int id_counter;
    protected:
        double _workedHours;
};

int Employee::id_counter = 1;

#endif