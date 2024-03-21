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

void Worker::printUse()
{
    this->tool->printUse();
}

void Worker::takeAway()
{
    this->tool = NULL;
}

void Worker::takeTool(Tool& newTool)
{
    this->tool = &newTool;
    newTool.newWorker(this);
}

void Worker::useTool()
{
    this->tool->use();
}

void Worker::work()
{
    std::cout << "worker is working" << std::endl;
    this->tool->use();
}