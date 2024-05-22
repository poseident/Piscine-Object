#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
#include "Room.hpp"

class Person
{
    private:
	    std::string _name;
	    Room* _currentRoom;
    public:
	    Person(const std::string& p_name) {
            this->_name = p_name;
            this->_currentRoom = nullptr;
        }
	    Room* room() {return (_currentRoom);}
};

#endif