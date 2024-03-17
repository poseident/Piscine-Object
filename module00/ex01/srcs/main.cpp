#include <cstring>
#include <iostream>
#include "../includes/Graph.hpp"

int main(void)
{
    Graph obj(5, 5);
    obj.add_point(1, 2);
    obj.add_point(0, 0);

    obj.print_graph();

    obj.add_point(3, 3);
    obj.print_graph();

    obj.remove_point(0, 0);
    obj.print_graph();

    obj.add_point(3, 5);
    obj.remove_point(7, 0);
    return 0;
}