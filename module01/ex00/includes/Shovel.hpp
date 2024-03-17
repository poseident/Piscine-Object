#ifndef SHOVEL_HPP
#define SHOVEL_HPP

#include "Worker.hpp"

class Worker;

class Shovel
{
    public:
        Shovel();
        ~Shovel();
        void use();
        void printUse();
        void takeAway();
        void newWorker(Worker *worker);
    private:
        Worker *currentWorker;
        int numberOfUses;
};

#endif