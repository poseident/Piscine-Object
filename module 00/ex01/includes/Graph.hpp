#ifndef GRAPH_HPP
#define GRAPH_HPP

#include "Vector2.hpp"
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm> 

class Graph
{
    public:
        Graph(float X, float Y);
        ~Graph();
        void print_graph();
        void add_point(float X, float Y);
        void remove_point(float X, float Y);
    private:
        Vector2 size;
        std::vector<Vector2> points;
};

#endif