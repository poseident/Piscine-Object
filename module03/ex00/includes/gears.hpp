#ifndef GEARS_HPP
#define GEARS_HPP

#include <iostream>

class Gears
{
    public:
        void shift_gears_up(){
            std::cout << "shifts up to next gear" << std::endl;
        }
        void shift_gears_down(){
            std::cout << "shifts down to previous gear" << std::endl;
        }
    private:
};

#endif