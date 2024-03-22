#include "../includes/Worker.hpp"
#include "../includes/Tool.hpp"
#include "../includes/Shovel.hpp"
#include "../includes/Hammer.hpp"
#include "../includes/Workshop.hpp"

int main() {
    Workshop workshop;
    Workshop workshop2;
    // Create workers
    Worker worker1;
    Worker worker2;

    // Create tools
    Shovel shovel;
    Hammer hammer;
    {
        Worker worker3;
        worker3.takeTool(shovel);
        std::cout << std::endl;
    }

    // Register workers in the workshop
    workshop.registerWorker(&worker1);
    workshop.registerWorker(&worker2);
    workshop2.registerWorker(&worker1);
    workshop2.registerWorker(&worker2);
    std::cout << std::endl;

    // Give tools to workers
    worker1.takeTool(shovel);
    worker1.work();
    worker2.takeTool(hammer);
    worker1.takeAway();
    std::cout << std::endl;

    // Execute a workday
    std::cout << "Executing workday...\n";
    workshop.executeWorkDay();
    workshop2.executeWorkDay();
    std::cout << std::endl;

    // Print use of the tools
    std::cout << "Printing tool use:\n";
    worker1.printUse();
    worker2.printUse();
    std::cout << std::endl;

    // Release a worker
    workshop.releaseWorker(&worker2);
    worker1.takeTool(hammer);
    // Try to execute another workday
    std::cout << "Executing another workday...\n";
    workshop.executeWorkDay();
    worker1.printUse();
    std::cout << std::endl;
    
    worker2.takeTool(hammer);
    workshop.registerWorker(&worker2);
    workshop.executeWorkDay();
    worker2.printUse();

    return 0;
}
