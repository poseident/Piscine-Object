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

void Worker::useShovel()
{
    this->tool->use();
}
