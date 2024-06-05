#include "../includes/Course.hpp"

Course::Course(std::string p_name) : _name(p_name), _responsable(nullptr), _numberOfClassToGraduate(10), _maximumNumberOfStudent(10)
{
    std::cout << "Course : " << this->_name << "was created" << std::endl;
}

void Course::assign(Professor *p_professor)
{
    this->_responsable = p_professor;
}

void Course::subscribe(Student *p_student)
{
    if(this->_maximumNumberOfStudent > this->_students.size())
        this->_students.push_back(p_student);
    else
    {
        std::cout << "maximum size of student for this course reached can't add more" << std::endl;
    }
}