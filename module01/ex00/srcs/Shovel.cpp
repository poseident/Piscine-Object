#include "../includes/Shovel.hpp"

Shovel::~Shovel()
{
    std::cout << "Shovel destroyed" << std::endl;
}

void Shovel::newWorker(Worker *newWorker)
{
    if (this->currentWorker)
        this->currentWorker->takeAway(); 
    this->currentWorker = newWorker;
}

const Worker &Shovel::getCurrentWorker() const
{
    return *this->currentWorker;
}

const int& Shovel::getNumberOfUse() const
{
    return this->numberOfUses;
}

void Shovel::takeAway()
{
    this->currentWorker = NULL;
}

void Shovel::printUse() const
{
    std::cout << "nbr of use for shovel : " << this->numberOfUses << std::endl;
}

void Shovel::use()
{
    this->numberOfUses++;
    std::cout << "Worker used shovel" << std::endl;
}