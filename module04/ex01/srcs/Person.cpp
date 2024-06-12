#include "../includes/Person.hpp"

Person::Person(std::string p_name) : _name(p_name), _currentRoom(nullptr)
{
    std::cout << "One person is being created" << std::endl;
}

Student::Student(std::string p_name) : Person(p_name){};