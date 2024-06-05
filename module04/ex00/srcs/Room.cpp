#include "../includes/Room.hpp"

Room::Room() : ID(nextID++)
{
    std::cout << "Room : " << this->ID << " is created" << std::endl;
}

