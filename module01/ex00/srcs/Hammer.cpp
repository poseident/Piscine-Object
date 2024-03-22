#include "../includes/Hammer.hpp"

Hammer::~Hammer()
{
    std::cout << "Hammer destroyed" << std::endl;
}

void Hammer::newWorker(Worker *newWorker)
{
    if (this->currentWorker)
        this->currentWorker->takeAway();
    this->currentWorker = newWorker;
}

const Worker &Hammer::getCurrentWorker() const
{
    return *this->currentWorker;
}

const int& Hammer::getNumberOfUse() const
{
    return this->numberOfUses;
}

void Hammer::takeAway()
{
    this->currentWorker = NULL;
}

void Hammer::printUse() const
{
    std::cout << "nbr of use Hammer : " << this->numberOfUses << std::endl;
}

void Hammer::use()
{
    this->numberOfUses++;
    std::cout << "Worker used Hammer" << std::endl;
}