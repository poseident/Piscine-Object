#ifndef COURSEFINISHEDFORM_HPP
#define COURSEFINISHEDFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <string>

class CourseFinishedForm : public Form
{
    public:
        CourseFinishedForm() : Form(FormType::CourseFinished) {}
        virtual void execute() {
            std::cout << "CourseFinished " << this->_courseName << " being executed" << std::endl;
        }
    private:
        std::string _courseName;
};

#endif