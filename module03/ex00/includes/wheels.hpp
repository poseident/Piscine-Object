#ifndef WHEELS_HPP
#define WHEELS_HPP

#include <iostream>

class Wheels
{
    public:
        void  turn_wheel(const float angle){
            std::cout << "turn wheel by : " << angle << std::endl;
        }
        void straighten_wheels(){
            std::cout << "returns the wheels to a straight-ahead position" << std::endl;
        }
    private:
};

#endif