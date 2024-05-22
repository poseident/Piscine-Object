#include <iostream>
#include "../includes/StudentList.hpp"
#include "../includes/student.hpp"

int main() {
    StudentList& studentList = StudentList::getInstance();
    Student student1("John Doe", 20, "S12345");
    studentList.add(student1);

    std::vector<Student> students = studentList.getAll();
    for (std::vector<Student>::iterator it = students.begin(); it != students.end(); ++it) {
        std::cout << "Student: " << it->getName() << ", Age: " << it->getAge() << ", ID: " << it->getStudentId() << std::endl;
    }

    return 0;
}
