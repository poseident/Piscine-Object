#include "../includes/shape.hpp"
#include "../includes/circle.hpp"
#include "../includes/rectangle.hpp"
#include "../includes/triangle.hpp"

#include <iostream>

void test(Shape *t) {
    t->get_area();
    t->get_perimeter();
}

int main()
{
    Circle circle(2);
    Rectangle rectangle(6, 8);
    Triangle triangle(3, 4, 5);
    test(&triangle);
    test(&circle);
    test(&triangle);
}