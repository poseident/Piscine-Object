#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

class Employee
{
    public:
        Employee(const int id, const int hourlyValue): _id(id), _hourlyValue(hourlyValue) {}
        int executeWorkday();
        const int getId() {
            return _id;
        }
    private:
        const int _id;
        int _hourlyValue;
};

#endif