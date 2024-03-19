#include "../includes/Worker.hpp"
#include "../includes/Tool.hpp"
#include "../includes/Shovel.hpp"

int main()
{
    Shovel shovel;
    Worker worker;

    Worker worker2;

    Worker worker3;
    worker.takeTool(shovel);
    worker.useShovel();

    worker.printUse();

    worker2.takeTool(shovel);
    worker2.useShovel();
    worker2.printUse();

}