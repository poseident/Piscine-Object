#include "../includes/Tool.hpp"

Tool::Tool(): currentWorker(NULL) ,numberOfUses(0){}

Tool::~Tool(){}
void Tool::use()
{
    this->numberOfUses++;
    std::cout << "Worker used shovel" << std::endl;
}