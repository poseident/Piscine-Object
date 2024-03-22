#ifndef HAMMER_HPP
#define HAMMER_HPP

#include <cstddef>
#include "Tool.hpp"

class Hammer: public Tool
{
    public:
        virtual ~Hammer();
        virtual void printUse() const;
        virtual void takeAway();
        virtual void use();
        virtual void newWorker(Worker *worker);
        virtual const Worker &getCurrentWorker() const;
        virtual const int& getNumberOfUse() const;
};

#endif