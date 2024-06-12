#include "../includes/Room.hpp"

Room::Room() : ID(nextID++)
{
    std::cout << "Room : " << this->ID << " is created" << std::endl;
}

long long Room::getID()
{
	return ID;
}

long long Room::nextID = 1;

Classroom::Classroom() : _currentRoom(nullptr)
{
}