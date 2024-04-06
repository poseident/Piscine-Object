#include "../includes/shape.hpp"
#include "../includes/circle.hpp"
#include "../includes/rectangle.hpp"
#include "../includes/triangle.hpp"

#include <iostream>

int main()
{
    Circle circle(2);
    Rectangle rectangle(6, 8);
    Triangle triangle(3, 4, 6);

    std::cout << "area of circle : " << circle.get_area() << std::endl;
    std::cout << "perimeter of circle : " << circle.get_perimeter() << std::endl << std::endl;

    std::cout << "area of rectangle : " << rectangle.get_area() << std::endl;
    std::cout << "perimeter of rectangle : " << rectangle.get_perimeter() << std::endl << std::endl;

    std::cout << "area of triangle : " << triangle.get_area() << std::endl;
    std::cout << "perimeter of triangle : " << triangle.get_perimeter() << std::endl << std::endl;
}