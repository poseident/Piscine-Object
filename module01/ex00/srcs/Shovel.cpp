#include "../includes/Shovel.hpp"

Shovel::Shovel() {
    setCurrentWorker(NULL); // Set currentWorker to nullptr initially
}

Shovel::~Shovel(){}

void Shovel::newWorker(Worker *newWorker)
{
    if (this->currentWorker)
        this->currentWorker->takeAway(); // Use arrow operator to call takeAway()
    this->currentWorker = newWorker;
}

void Shovel::takeAway()
{
    this->currentWorker = NULL;
}

void Shovel::printUse() const
{
    std::cout << "nbr of use : " << this->numberOfUses << std::endl;
}
