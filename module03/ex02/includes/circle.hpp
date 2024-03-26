#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "shape.hpp"
#include <cmath>

class Circle: public Shape
{
    public:
        Circle(const float ray): _ray(ray) {};
        virtual const float get_area() const //  π r²
        {
            return M_PI * (_ray * _ray);
        }
        virtual const float get_perimeter() const //2×π×radius
        {
            return 2 * M_PI * _ray; 
        }
    private:
        const float _ray;
};

#endif