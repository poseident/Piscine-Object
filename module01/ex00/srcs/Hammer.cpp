#include "../includes/Hammer.hpp"

Hammer::Hammer() {
    setCurrentWorker(NULL); // Set currentWorker to nullptr initially
}

Hammer::~Hammer()
{
    std::cout << "Hammer destroyed" << std::endl;
}

void Hammer::newWorker(Worker *newWorker)
{
    if (this->currentWorker)
        this->currentWorker->takeAway(); // Use arrow operator to call takeAway()
    this->currentWorker = newWorker;
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