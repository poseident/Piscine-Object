#ifndef NEEDCOURSECREATIONFORM_HPP
#define NEEDCOURSECREATIONFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <string>

class NeedCourseCreationForm : public Form
{
    public:
        NeedCourseCreationForm() : Form(FormType::NeedCourseCreation) {}
        virtual void execute() {
            std::cout << "NeedCourseCreationForm being executed" << std::endl;
        }
    private:
        std::string _courseName;
};

#endif