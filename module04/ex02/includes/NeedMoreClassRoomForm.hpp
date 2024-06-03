#ifndef NEEDMORECLASSFORM_HPP
#define NEEDMORECLASSFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <string>

class NeedMoreClassRoomForm : public Form
{
    public:
        NeedMoreClassRoomForm() : Form(FormType::NeedMoreClassRoom) {}
        virtual void execute() {
            std::cout << "NeedMoreClassRoomForm being executed" << std::endl;
        }
    private:
        std::string _courseName;
};

#endif