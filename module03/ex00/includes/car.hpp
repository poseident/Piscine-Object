#ifndef CAR_HPP
#define CAR_HPP

#include <iostream>
#include "direction.hpp"
#include "gears.hpp"
#include "brakes.hpp"
#include "wheels.hpp"

class Car
{
    public:
        void start(){
            std::cout << "starts the engine" << std::endl;
        }
        void stop(){
            std::cout << "stops the engine and applies the brakes" << std::endl;
        }
        Direction direction;
        Gears gear;
        Brakes brakes;
        Wheels wheels;
    private:
};

#endif