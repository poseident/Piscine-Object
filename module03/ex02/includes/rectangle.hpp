#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "shape.hpp"

class Rectangle: public Shape
{
    public:
        Rectangle(const double length, const double width): _length(length), _width(width) {};
        virtual void get_area() const //l x w
        {
            std::cout << "area of rectangle : " << _length * _width << std::endl;
        }
        virtual void get_perimeter() const //Perimeter=2×(length+width)
        {
            std::cout << "perimeter of rectangle : " << 2 * (_length + _width) << std::endl;
        }
    private:
        const double _length;
        const double _width;
};

#endif