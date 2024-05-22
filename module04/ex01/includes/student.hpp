// path/student.h
#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "Person.hpp"
#include <vector>

class Course;
class Classroom;

class Student : public Person
{
    private:
	    std::vector<Course*> _subscribedCourse;

    public:
        Student(const std::string& name);
	    void attendClass(Classroom* p_classroom);
	    void exitClass();
	    void graduate(Course* p_course);
};

#endif
