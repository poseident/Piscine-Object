#include "../includes/Shovel.hpp"

Worker::Worker(): shovel(NULL){}

Worker::~Worker()
{
    if (shovel != NULL)
    {
        shovel = NULL;
        std::cout << "Shovel removed from worker before destruction" << std::endl;
    }
}

void Worker::takeAway()
{
    this->shovel->takeAway();
    this->shovel = NULL;
}

void Worker::takeShovel(Shovel& newShovel)
{
    this->shovel = &newShovel;
    newShovel.newWorker(this);
}

void Worker::useShovel()
{
    this->shovel->use();
}
