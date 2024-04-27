#include "../includes/EmployeeManagement.hpp"
#include "../includes/SalariedEmployee.hpp"
#include "../includes/HourlyEmployee.hpp"

int main () {
    EmployeeManager manager;

    TempWorker *tempWorker = new TempWorker("bob", 12);
    Apprentice *apprentice = new Apprentice("jean", 8);
    ContractEmployee *contractedEmployee = new ContractEmployee("pascal", 15);

    manager.addEmployee(tempWorker);
    manager.addEmployee(apprentice);
    manager.addEmployee(contractedEmployee);

    manager.executeWorkday();
    manager.calculatePayroll();

    manager.mobilizeTempWorker(tempWorker, 1);
    apprentice->registerSchoolHours(2);

    manager.calculatePayroll();

    return 0;
}