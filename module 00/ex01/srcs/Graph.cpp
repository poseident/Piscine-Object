#include "../includes/Graph.hpp"

Graph::Graph(float X, float Y) : size(X, Y) {}

Graph::~Graph()
{
    ;
}

void Graph::print_graph()
{
    float maxX = size.X;
    float maxY = size.Y;

        // Output the graph representation
        for (float y = maxY - 1; y >= 0; --y) {
            std::cout << std::setw(2) << y << " "; // Print y-coordinate
            for (float x = 0; x < maxX; ++x) {
                bool pointFound = false;
                for (size_t i = 0; i < points.size(); ++i) {
                if (points[i].X == x && points[i].Y == y) {
                    pointFound = true;
                    break;
                }
            }
            if (pointFound) {
                std::cout << "X ";
            } else {
                std::cout << ". ";
            }
        }
        std::cout << std::endl;
        }

        // Output the x-axis labels
        std::cout << "  ";
        for (int x = 0; x < maxX; ++x) {
            std::cout << std::setw(2) << x; // Print x-coordinate
        }
        std::cout << std::endl;
}

void Graph::remove_point(float X, float Y)
{
    for (size_t i = 0; i < this->points.size(); i++) {
        if (this->points[i].X == X && this->points[i].Y == Y)
        {
            this->points.erase(this->points.begin() + i);
            std::cout << "point sucessfully removed" << std::endl;
            return ;
        }
    }
    std::cout << "parameter don't match any point in the graph" << std::endl;
    return ;
}

void Graph::add_point(float X, float Y)
{
    if (X >= 0 && X < this->size.X && Y >= 0 && Y < this->size.Y)
    {
        Vector2 new_point(X, Y);
        this->points.push_back(new_point);
        std::cout << "point sucessfully added" << std::endl;
        return ;
    }
    std::cout << "parameter don't match graph size" << std::endl;
    return ;
}