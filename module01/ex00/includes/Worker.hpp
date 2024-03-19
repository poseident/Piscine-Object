#ifndef WORKER_HPP
#define WORKER_HPP

#include "Position.hpp"
#include "Statistic.hpp"
#include "Tool.hpp"
#include <iostream>

class Tool;

class Worker
{
    public:
        Tool *tool;
        Worker();
        ~Worker();
        void takeTool(Tool& shovel);
        void takeAway();
        void useShovel();
        void printUse();
    private:
        Position coordonnee;
        Statistic stat;
};

#endif