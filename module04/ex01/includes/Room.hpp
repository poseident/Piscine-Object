#ifndef ROOM_HPP
#define ROOM_HPP

#include <vector>
#include "Person.hpp"

class Person;

class Room
{
    private:
	    long long ID;
	    std::vector<Person*> _occupants;

    public:
		long long getId() {
			return this->ID;
		}
	    Room(long long id): ID(id) {}
	    bool canEnter(Person*) {return true;}
	    void enter(Person*) {}
	    void exit(Person*) {}
	    void printOccupant() {}
};

#endif