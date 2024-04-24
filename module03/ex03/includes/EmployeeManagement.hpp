#ifndef EMPLOYEEMANAGEMENT_HPP
#define EMPLOYEEMANAGEMENT_HPP

#include "Employee.hpp"
#include <map>
#include <iostream>
#include "HourlyEmployee.hpp"
#include "SalariedEmployee.hpp"

class TempWorker;

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
        void removeEmployee(Employee* employee){
            std::map<int, Employee*>::iterator it = _employees.find(employee->getId());
            if (it != _employees.end()){
                delete it->second;
                _employees.erase(it);
            }
            else
                throw std::runtime_error("Employee not found");
        }

        void mobilizeTempWorker(Employee *tempWorker, int hours) {
            tempWorker->work(hours);
        }

        void addEmployee(Employee* addEmployee){
            _employees[_nextId] = addEmployee;
            _nextId++;
        }
        const Employee& getEmployeeById(int id) const {
            std::map<int, Employee*>::const_iterator it = _employees.find(id);
            if (it != _employees.end())
                return *(it->second);
            else
                throw std::runtime_error("Employee not found");
        }
        void executeWorkday(){
            for (std::map<int, Employee *>::iterator it = _employees.begin(); it != _employees.end(); ++it)
                it->second->executeWorkday();
        }
        void calculatePayroll(){
            for (std::map<int, Employee *>::iterator it = _employees.begin(); it != _employees.end(); ++it) {
                std::cout << "Employee " << it->second->getId() << " worked " << it->second->getWorkedHours() << " hours" << std::endl;
                std::cout << "For a hourly salary of " << it->second->getHourlyValue() << std::endl;
                std::cout << "Salary : " << it->second->getPayroll() << std::endl;
            }
        }
    private:
        int _nextId;
        std::map<int, Employee*> _employees;
};

#endif