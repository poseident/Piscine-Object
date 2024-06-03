#ifndef SUBSCRIPTIONTOCOURSEFORM_HPP
#define SUBSCRIPTIONTOCOURSEFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <string>

class SubscriptionToCourseForm : public Form
{
    public:
        SubscriptionToCourseForm() : Form(FormType::SubscriptionToCourse) {}
        virtual void execute() {
            std::cout << "SubscriptionToCourse being executed" << std::endl;
        }
    private:
        std::string _courseName;
};

#endif