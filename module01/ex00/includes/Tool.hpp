#ifndef TOOL_HPP
#define TOOL_HPP

#include <cstddef>
#include <iostream>
#include "Worker.hpp"

class Worker;

class Tool
{
    protected:
        Worker *currentWorker;
        int numberOfUses;
    public:
        virtual void use() = 0;
        virtual void printUse() const = 0;  
        virtual void takeAway() = 0;
        virtual void newWorker(Worker *worker) = 0;  
        virtual ~Tool() = 0;
        Tool();
        virtual const Worker &getCurrentWorker() const = 0;
        virtual const int& getNumberOfUse() const = 0;
};

#endif