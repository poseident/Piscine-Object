#include "../includes/shape.hpp"
#include "../includes/circle.hpp"
#include "../includes/rectangle.hpp"
#include "../includes/triangle.hpp"

#include <iostream>

int main()
{
    Circle circle(2);
    Rectangle rectangle(6, 8);
    Triangle triangle(3, 4, 5);

    std::cout << "area of circle1 (cm2) : " << circle.get_area() << std::endl;
    std::cout << "perimeter of circle2 : " << circle.get_perimeter() << std::endl << std::endl;

    std::cout << "area of rectangle (cm2) : " << rectangle.get_area() << std::endl;
    std::cout << "perimeter of rectangle : " << rectangle.get_perimeter() << std::endl << std::endl;

    std::cout << "area of triangle (cm2) : " << triangle.get_area() << std::endl;
    std::cout << "perimeter of triangle : " << triangle.get_perimeter() << std::endl << std::endl;
}