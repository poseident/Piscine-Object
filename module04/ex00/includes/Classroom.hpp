#ifndef CLASSROOM_HPP
#define CLASSROOM_HPP

class Classroom : public Room
{
private:
	Course* _currentRoom;

public:
	Classroom();
	void assignCourse(Course* p_course);
};

#endif