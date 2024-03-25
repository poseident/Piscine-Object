#ifndef CAR_HPP
#define CAR_HPP

#include <iostream>

class Car
{
    public:
        void start(){
            std::cout << "starts the engine" << std::endl;
        }
        void stop(){
            std::cout << "stops the engine and applies the brakes" << std::endl;
        }
        void accelerate(const unsigned int speed) {
            std::cout << "increases the speed of the car by : " << speed << "km/h" << std::endl;
        }
        void shift_gears_up(){
            std::cout << "shifts up to next gear" << std::endl;
        }
        void shift_gears_down(){
            std::cout << "shifts down to previous gear" << std::endl;
        }
        void reverse(){
            std::cout << "puts the transmission in reverse gear" << std::endl;
        }
        void  turn_wheel(const float angle){
            std::cout << "turn wheel by : " << angle << std::endl;
        }
        void straighten_wheels(){
            std::cout << "returns the wheels to a straight-ahead position" << std::endl;
        }
        void apply_force_on_brakes(const float force){
            std::cout << "applies : " << force << " to the brakes" << std::endl;
        }
        void apply_emergency_brakes(){
            std::cout << " applies the brakes with maximum force for an emergency stop" << std::endl;
        }
    private:
};

#endif