class Classroom : public Room
{
private:
	Course* _currentRoom;

public:
	Classroom();
	void assignCourse(Course* p_course);
};