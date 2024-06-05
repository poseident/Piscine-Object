#pragma once

#include <vector>
#include <iostream>

class Person;
class Course;
class Form;

class Room
{
	private:
		long long ID;
		std::vector<Person*> _occupants;
		static long long nextID;

	public:
		Room();
		bool canEnter(Person*);
		void enter(Person*);
		void exit(Person*);
		
		void printOccupant();
};

long long Room::nextID = 1;

class Classroom : public Room
{
	private:
		Course* _currentRoom;

	public:
		Classroom();
		void assignCourse(Course* p_course);
};

class SecretarialOffice: public Room
{
	private:
		std::vector<Form*> _archivedForms;

	public:

};

class HeadmasterOffice : public Room
{
	private:

	public:

};

class StaffRestRoom : public Room
{
	private:

	public:

};

class Courtyard : public Room
{
	private:

	public:

};