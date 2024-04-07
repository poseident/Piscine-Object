#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <iostream>
#include <cmath>

class Shape
{
    public:
        virtual const double get_area() const = 0;
        virtual const double get_perimeter() const = 0;
    private:
};

#endif