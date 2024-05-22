#ifndef EMPLOYEEMANAGEMENT_HPP
#define EMPLOYEEMANAGEMENT_HPP

#include "Employee.hpp"
#include <map>
#include <iostream>
#include "HourlyEmployee.hpp"
#include "SalariedEmployee.hpp"


class EmployeeManager
{
    public:
        EmployeeManager() {}

        ~EmployeeManager(){
            for (std::map<std::string, Employee*>::iterator it = _employees.begin(); it != _employees.end(); ++it)
            {
                delete it->second;
            }
        }

        void removeEmployee(Employee* employee){
            std::map<std::string, Employee*>::iterator it = _employees.find(employee->getName());
            if (it != _employees.end()){
                delete it->second;
                _employees.erase(it);
            }
            else
                throw std::runtime_error("Employee not found");
        }

        void addEmployee(Employee* addEmployee){
            _employees[addEmployee->getName()] = addEmployee;
        }
    
        void mobilizeTempWorker(TempWorker *worker, int hours)
        {
            worker->mobilized(hours);
        }

        void executeWorkday(){
            for (std::map<std::string, Employee *>::iterator it = _employees.begin(); it != _employees.end(); ++it)
                it->second->executeWorkday();
        }

        void calculatePayroll(){
            for (std::map<std::string, Employee *>::iterator it = _employees.begin(); it != _employees.end(); ++it) {
                std::cout << it->second->getName() << ": payroll = " << it->second->calculePayroll() << std::endl;
            }
        }
    private:
        std::map<std::string, Employee*> _employees;
};

#endif