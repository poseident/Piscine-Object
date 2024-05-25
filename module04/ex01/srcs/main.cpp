#include <iostream>
#include "../includes/StudentList.hpp"
#include "../includes/student.hpp"
#include "../includes/StaffList.hpp"
#include "../includes/Staff.hpp"
#include "../includes/Course.hpp"
#include "../includes/CourseList.hpp"
#include "../includes/Room.hpp"
#include "../includes/RoomList.hpp"

int main() {
    StudentList& studentList = StudentList::getInstance();
    StaffList& staffList = StaffList::getInstance();
    CourseList& courseList = CourseList::getInstance();
    RoomList& roomList = RoomList::getInstance();

    Course course1("maths");
    Course course2("science");
    Student student1("paul");
    Student student2("jack");
    Staff staff1("louis");
    Staff staff2("edward");
    Room room1(1);
    Room room2(2);

    courseList.add(course1);
    courseList.add(course2);
    studentList.add(student1);
    studentList.add(student2);
    staffList.add(staff1);
    staffList.add(staff2);
    roomList.add(room1);
    roomList.add(room2);

    /*StudentList& studentList2 = StudentList::getInstance();
    StaffList& staffList2 = StaffList::getInstance();
    CourseList& courseList2 = CourseList::getInstance();
    RoomList& roomList2 = RoomList::getInstance();
    std::cout << "adress = " << &studentList2 << std::endl;
    std::cout << "adress = " << &studentList << std::endl;
    std::vector<Student> students2 = studentList2.getAll();
    for (std::vector<Student>::iterator it = students2.begin(); it != students2.end(); ++it) {
        std::cout << "Student: " << it->getName() << std::endl;
    }
    std::vector<Staff> staffs2 = staffList2.getAll();
    for (std::vector<Staff>::iterator it = staffs2.begin(); it != staffs2.end(); ++it) {
        std::cout << "Staff: " << it->getName() << std::endl;
    }
    std::vector<Course> courses2 = courseList2.getAll();
    for (std::vector<Course>::iterator it = courses2.begin(); it != courses2.end(); ++it) {
        std::cout << "Course: " << it->getName() << std::endl;
    }
    std::vector<Room> rooms2 = roomList2.getAll();
    for (std::vector<Room>::iterator it = rooms2.begin(); it != rooms2.end(); ++it) {
        std::cout << "Room: " << it->getId() << std::endl;
    }*/

        std::vector<Student> students = studentList.getAll();
    for (std::vector<Student>::iterator it = students.begin(); it != students.end(); ++it) {
        std::cout << "Student: " << it->getName() << std::endl;
    }

    std::vector<Staff> staffs = staffList.getAll();
    for (std::vector<Staff>::iterator it = staffs.begin(); it != staffs.end(); ++it) {
        std::cout << "Staff: " << it->getName() << std::endl;
    }

    std::vector<Course> courses = courseList.getAll();
    for (std::vector<Course>::iterator it = courses.begin(); it != courses.end(); ++it) {
        std::cout << "Course: " << it->getName() << std::endl;
    }

    std::vector<Room> rooms = roomList.getAll();
    for (std::vector<Room>::iterator it = rooms.begin(); it != rooms.end(); ++it) {
        std::cout << "Room: " << it->getId() << std::endl;
    }
    return 0;
}
