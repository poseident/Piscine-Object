#include "../includes/Worker.hpp"

Worker::Worker(): tool(NULL){}

Worker::~Worker()
{
    if (tool != NULL)
    {
        tool = NULL;
        std::cout << "Shovel removed from worker before destruction" << std::endl;
    }
}

void Worker::printUse() const
{
    if (this->tool)
        this->tool->printUse();
    else
    {
        std::cerr << "Worker has no Tool" << std::endl;
    }
}

void Worker::takeAway()
{
    this->tool = NULL;
}

const Position& Worker::getPosition() const
{
    return this->coordonnee;
}

const Statistic& Worker::getStatistic() const
{
    return this->stat;
}

const Tool& Worker::getTool() const
{
    return *this->tool;
}

void Worker::takeTool(Tool& newTool)
{
    this->tool = &newTool;
    newTool.newWorker(this);
}

void Worker::useTool() const
{
    this->tool->use();
}

void Worker::work() const
{
    std::cout << "worker is working" << std::endl;
    if (this->tool)
        this->tool->use();
    else
    {
        std::cout << "Worker has no Tool" << std::endl;
    }
}