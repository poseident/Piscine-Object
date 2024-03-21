#ifndef WORKSHOP_HPP
#define WORKSHOP_HPP

#include <vector>
#include "Worker.hpp"

class Worker;

class Workshop
{
    public:
        Workshop();
        ~Workshop();
        void registerWorker(Worker *newWorker);
        void releaseWorker(Worker *worker);
        void executeWorkDay();
    private:
        std::vector<Worker *> workers;
};

#endif