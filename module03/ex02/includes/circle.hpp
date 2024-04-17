#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "shape.hpp"

class Circle: public Shape
{
    public:
        Circle(const double ray): _ray(ray) {};
        virtual void get_area() const //  π r²
        {
            std::cout << "area of circle : " << (3.14159 * (_ray * _ray)) << std::endl;
        }
        virtual void get_perimeter() const //2×π×radius
        {
            std::cout << "perimeter of circle : " << (2 * 3.14159 * _ray) << std::endl;
        }
    private:
        const double _ray;
};

#endif