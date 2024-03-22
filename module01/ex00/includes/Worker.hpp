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
        Worker();
        ~Worker();
        void takeTool(Tool& tool);
        void takeAway();
        void useTool() const;
        void printUse() const;
        void work() const;
        //getter
        const Position& getPosition() const;
        const Statistic& getStatistic() const;
        const Tool& getTool() const;
    private:
        Position coordonnee;
        Statistic stat;
        Tool *tool;
};

#endif