#ifndef DIRECTION_HPP
#define DIRECTION_HPP

#include <iostream>

class Direction
{
    public:
        void accelerate(const unsigned int speed) {
            std::cout << "increases the speed of the car by : " << speed << "km/h" << std::endl;
        }
        void reverse(){
            std::cout << "puts the transmission in reverse gear" << std::endl;
        }
    private:
};

#endif