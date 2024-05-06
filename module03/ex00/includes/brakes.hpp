#ifndef BRAKES_HPP
#define BRAKES_HPP

#include <iostream>

class Brakes
{
    public:
        void apply_force_on_brakes(const float force){
            std::cout << "applies : " << force << " to the brakes" << std::endl;
        }
        void apply_emergency_brakes(){
            std::cout << " applies the brakes with maximum force for an emergency stop" << std::endl;
        }
    private:
};

#endif