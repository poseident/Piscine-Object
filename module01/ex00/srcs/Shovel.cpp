#include "../includes/Shovel.hpp"

Shovel::Shovel() {
    setCurrentWorker(NULL); // Set currentWorker to nullptr initially
}

Shovel::~Shovel()
{
    std::cout << "Shovel destroyed" << std::endl;
}

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
    std::cout << "nbr of use for shovel : " << this->numberOfUses << std::endl;
}

void Shovel::use()
{
    this->numberOfUses++;
    std::cout << "Worker used shovel" << std::endl;
}