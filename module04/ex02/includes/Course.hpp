#ifndef COURSE_HPP
#define COURSE_HPP

#include <string>
#include "Professor.hpp"
#include <vector>
#include "Student.hpp"

class Course
{
    private:
	    std::string _name;
	    Professor* _responsable;
	    std::vector<Student*> _students;
	    int _numberOfClassToGraduate;
	    int _maximumNumberOfStudent;
    public:
	    Course(std::string p_name);
	    void assign(Professor* p_professor) {};
	    void subscribe(Student* p_student) {};
};

#endif