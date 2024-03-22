#ifndef SHOVEL_HPP
#define SHOVEL_HPP

#include <cstddef>
#include "Tool.hpp"

class Worker;

class Shovel : public Tool
{
    public:
        virtual ~Shovel();
        virtual void printUse() const;
        virtual void takeAway();
        virtual void use();
        virtual void newWorker(Worker *worker);
        virtual const Worker &getCurrentWorker() const;
        virtual const int& getNumberOfUse() const;
};

#endif