#include <iostream>
#include "../includes/Staff.hpp"
#include "../includes/Course.hpp"
#include "../includes/Room.hpp"
#include "../includes/Person.hpp"
#include "../includes/Form.hpp"

int main() {
	StudentList::getInstance()->add(new Student("John"));
	StudentList::getInstance()->add(new Student("Jane"));
	StudentList::getInstance()->add(new Student("Jack"));
	StudentList::getInstance()->add(new Student("Jill"));

	StaffList::getInstance()->add(new Headmaster("Mr. Smith"));
	StaffList::getInstance()->add(new Secretary("Mrs. Smith"));
	StaffList::getInstance()->add(new Professor("Mr. Doe"));
	StaffList::getInstance()->add(new Staff("Mrs. Doe"));

	CourseList::getInstance()->add(new Course("Math"));
	CourseList::getInstance()->add(new Course("Physics"));
	CourseList::getInstance()->add(new Course("Chemistry"));
	CourseList::getInstance()->add(new Course("Biology"));

	RoomList::getInstance()->add(new Classroom());
	RoomList::getInstance()->add(new Classroom());
	RoomList::getInstance()->add(new Classroom());
	RoomList::getInstance()->add(new Classroom());

	std::vector<Student*> list = StudentList::getInstance()->getList();

    // Print the list of students
    std::cout << "List of students:" << std::endl;
    for (const Student* studentPtr : list) {
        // Assuming Student has methods getName() and getID()
        std::cout << studentPtr->getName() << " - " << studentPtr->getID() << std::endl;
    }
   
    for (int i = 3; i >= 0; i--)
	{
		Student *student = StudentList::getInstance()->operator[](i);
		Staff *staff = StaffList::getInstance()->operator[](i);
		Course *course = CourseList::getInstance()->operator[](i);
		Room *room = RoomList::getInstance()->operator[](i);

		std::cout << student->getName() << std::endl;
		std::cout << staff->getName() << std::endl;
		std::cout << course->getName() << std::endl;
		std::cout << room->getID() << std::endl;

		StudentList::getInstance()->remove(student);
		std::cout << student->getName() << std::endl;
		StaffList::getInstance()->remove(staff);
		CourseList::getInstance()->remove(course);
		RoomList::getInstance()->remove(room);

		delete student;
		delete staff;
		delete course;
		delete room;
	}
    return 0;
}
