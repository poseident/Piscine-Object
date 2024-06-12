#pragma once

#include <iostream>
#include <vector>
#include "singletons.hpp"

class Room;
class Course;
class Classroom;

class Person
{
    private:
	    std::string _name;
	    Room* _currentRoom;
    public:
		std::string getName() {
			return this->_name;
		}
	    Person(std::string p_name);
	    Room* room() {return (_currentRoom);}
};

class Student : public Person
{
    private:
	    std::vector<Course*> _subscribedCourse;

    public:
		Student(std::string p_name);
	    void attendClass(Classroom* p_classroom);
	    void exitClass();
	    void graduate(Course* p_course);
};

class StudentList : public Singletons<Student *>
{
};