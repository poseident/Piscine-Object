#ifndef WORKER_HPP
#define WORKER_HPP

#include "Position.hpp"
#include "Statistic.hpp"
#include "Shovel.hpp"
#include <iostream>

class Shovel;

class Worker
{
    public:
        Worker();
        ~Worker();
        void takeShovel(Shovel& shovel);
        void takeAway();
        void useShovel();
        void printUse();
    private:
        Shovel *shovel;
        Position coordonnee;
        Statistic stat;
};

#endif