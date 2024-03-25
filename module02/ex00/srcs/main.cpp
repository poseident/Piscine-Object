#include "../includes/car.hpp"

int main()
{
    Car car;
    car.start();
    car.accelerate(20);
    car.shift_gears_up();
    car.turn_wheel(30);
    car.straighten_wheels();
    car.apply_force_on_brakes(20);
    car.shift_gears_down();
    car.reverse();
    car.apply_emergency_brakes();
    car.stop();
}