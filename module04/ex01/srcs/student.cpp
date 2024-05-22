#include "../includes/student.hpp"

Student::Student(const std::string& name)
    : Person(name) // Call the base class constructor
{
}

void Student::attendClass(Classroom* p_classroom) {
    // Implementation for attending a class
}

void Student::exitClass() {
    // Implementation for exiting a class
}

void Student::graduate(Course* p_course) {
    // Implementation for graduating from a course
}