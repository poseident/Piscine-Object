#include "../includes/car.hpp"

int main()
{
    Car car;
    car.start();
    car.direction.accelerate(20);
    car.gear.shift_gears_up();
    car.wheels.turn_wheel(30);
    car.wheels.straighten_wheels();
    car.brakes.apply_force_on_brakes(20);
    car.gear.shift_gears_down();
    car.direction.reverse();
    car.brakes.apply_emergency_brakes();
    car.stop();
}