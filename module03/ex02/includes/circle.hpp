#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "shape.hpp"

class Circle: public Shape
{
    public:
        Circle(const double ray): _ray(ray) {};
        virtual const double get_area() const //  π r²
        {
            return (3.14159 * (_ray * _ray));
        }
        virtual const double get_perimeter() const //2×π×radius
        {
            return (2 * 3.14159 * _ray); 
        }
    private:
        const double _ray;
};

#endif