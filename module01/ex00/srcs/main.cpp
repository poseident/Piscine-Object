#include "../includes/Worker.hpp"

int main()
{
    Shovel shovel;
    Worker worker;

    Worker worker2;

    Worker worker3;
    worker.takeShovel(shovel);
    worker.useShovel();

    shovel.printUse();

    worker2.takeShovel(shovel);
    worker2.useShovel();
    shovel.printUse();

}