#ifndef SHOVEL_HPP
#define SHOVEL_HPP

#include <cstddef>
#include "Tool.hpp"

class Worker;

class Shovel : public Tool
{
    public:
        Shovel();
        virtual ~Shovel();
        virtual void printUse() const;
        virtual void takeAway();
        virtual void newWorker(Worker *worker);
};

#endif