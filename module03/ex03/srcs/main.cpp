#include "../includes/EmployeeManagement.hpp"
#include "../includes/SalariedEmployee.hpp"
#include "../includes/HourlyEmployee.hpp"

int main () {
    EmployeeManager manager;


    SalariedEmployee::ContractEmployee *contractEmployee = new SalariedEmployee::ContractEmployee(10);
    manager.addEmployee(contractEmployee);
    SalariedEmployee::Apprentice *apprentice = new SalariedEmployee::Apprentice(7);
    manager.addEmployee(apprentice);
    HourlyEmployee::TempWorker *tempWorker = new HourlyEmployee::TempWorker(12);
    manager.addEmployee(tempWorker);

    manager.executeWorkday();
    manager.calculatePayroll();

    manager.mobilizeTempWorker(tempWorker, 3);
    manager.calculatePayroll();

    contractEmployee->addUnworkedHours(8);
    apprentice->addSchoolHours(6);

    manager.calculatePayroll();
    return 0;
}