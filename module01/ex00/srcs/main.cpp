#include "../includes/Worker.hpp"
#include "../includes/Tool.hpp"
#include "../includes/Shovel.hpp"
#include "../includes/Hammer.hpp"
#include "../includes/Workshop.hpp"

int main() {
    Workshop workshop;

    // Create workers
    Worker worker1;
    Worker worker2;

    // Create tools
    Shovel shovel;
    Hammer hammer;

    // Register workers in the workshop
    workshop.registerWorker(&worker1);
    workshop.registerWorker(&worker2);

    // Give tools to workers
    worker1.takeTool(shovel);
    worker2.takeTool(hammer);

    // Execute a workday
    std::cout << "Executing workday...\n";
    workshop.executeWorkDay();

    // Print use of the tools
    std::cout << "Printing tool use:\n";
    worker1.printUse();
    worker2.printUse();

    // Release a worker
    workshop.releaseWorker(&worker1);

    // Try to execute another workday
    std::cout << "Executing another workday...\n";
    workshop.executeWorkDay();
    worker2.printUse();

    return 0;
}
