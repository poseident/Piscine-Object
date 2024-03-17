#include "../includes/Shovel.hpp"

Shovel::Shovel(): currentWorker(NULL){}

Shovel::~Shovel()
{
    currentWorker = NULL;
}

void Shovel::newWorker(Worker *newWorker)
{
    if (this->currentWorker)
        this->currentWorker->takeAway();
    this->currentWorker = newWorker;
}

void Shovel::takeAway()
{
    this->currentWorker = NULL;
}

void Shovel::use()
{
    this->numberOfUses++;
}

void Shovel::printUse()
{
    std::cout << "nbr of use : " << this->numberOfUses << std::endl;
}
