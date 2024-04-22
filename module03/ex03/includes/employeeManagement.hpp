#ifndef EMPLOYEEMANAGEMENT_HPP
#define EMPLOYEEMANAGEMENT_HPP

#include "employee.hpp"
#include <map>
#include <iostream>

class EmployeeManager
{
    public:
        EmployeeManager() : _nextId(1) {}
        ~EmployeeManager(){
            for (std::map<int, Employee*>::iterator it = _employees.begin(); it != _employees.end(); ++it)
            {
                delete it->second;
            }
        }
        void addEmployee(Employee* addEmployee){
            _employees[_nextId] = addEmployee;
            _nextId++;
        }
        void removeEmployee(Employee* employee){
            std::map<int, Employee*>::const_iterator it = _employees.find(employee->getId());
            if (it != _employees.end()){
                delete it->second;
                _employees.erase(it);
            }
            else
                throw std::runtime_error("Employee not found");
        }
        Employee& createEmployee(int hourly_value){
            Employee* new_employee = new Employee(_nextId, hourly_value);
           addEmployee(new_employee);
            return *new_employee;
        }
        const Employee& getEmployeeById(int id) const {
            std::map<int, Employee*>::const_iterator it = _employees.find(id);
            if (it != _employees.end())
                return *(it->second);
            else
                throw std::runtime_error("Employee not found");
        }
        void executeWorkday();
        void calculatePayroll();
    private:
        int _nextId;
        std::map<int, Employee*> _employees;
};

#endif