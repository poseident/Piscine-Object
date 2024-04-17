#ifndef EMPLOYEEMANAGEMENT_HPP
#define EMPLOYEEMANAGEMENT_HPP

#include "employee.hpp"

class EmployeeManager
{
    public:
        void addEmployee(Employee*);
        void removeEmployee(Employee*);
        void executeWorkday();
        void calculatePayroll();
    private:
};

#endif