#include "../includes/Workshop.hpp"

Workshop::Workshop()
{
    ;
}

Workshop::~Workshop()
{
    ;
}

void Workshop::executeWorkDay()
{
    std::vector<Worker *>::iterator it = this->workers.begin();
    std::vector<Worker *>::iterator itEnd = this->workers.end();

    for (; it != itEnd; ++it)
    {
        (*it)->work();
    }
}

const std::vector<Worker *>& Workshop::getWorker() const
{
    return this->workers;
}

void Workshop::registerWorker(Worker *newWorker)
{
    this->workers.push_back(newWorker);

}

void Workshop::releaseWorker(Worker *worker)
{
    std::vector<Worker *>::iterator it;
    std::vector<Worker *>::iterator itEnd = this->workers.end();
    for (it = this->workers.begin(); it != itEnd; ++it)
    {
        if (*it == worker)
        {
            this->workers.erase(it);
            break;
        }
    }
}