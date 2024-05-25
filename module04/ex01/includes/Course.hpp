#ifndef COURSE_HPP
#define COURSE_HPP

#include <string>
#include <vector>

class Professor;
class Student;

class Course
{
    private:
	    std::string _name;
	    Professor* _responsable;
	    std::vector<Student*> _students;
	    int _numberOfClassToGraduate;
	    int _maximumNumberOfStudent;
    public:
		std::string getName(){
			return this->_name;
		}
	    Course(std::string p_name) {this->_name = p_name;}
	    void assign(Professor* p_professor);
	    void subscribe(Student* p_student);
};

#endif