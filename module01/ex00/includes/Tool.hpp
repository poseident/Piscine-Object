#ifndef TOOL_HPP
#define TOOL_HPP

#include <cstddef>
#include <iostream>
#include "Worker.hpp"

class Worker;

class Tool
{
    friend class Worker;
    protected:
        Worker *currentWorker;
        int numberOfUses;
    public:
        virtual void use() = 0;
        virtual void printUse() const = 0;  // Add pure virtual declaration for printUse
        virtual void takeAway() = 0;        // Add pure virtual declaration for takeAway
        virtual void newWorker(Worker *worker) = 0;  // Add pure virtual declaration for newWorker
        virtual ~Tool();
        Tool();
        void setCurrentWorker(Worker *worker);
};

#endif