#include "../includes/Form.hpp"

Form::Form(FormType p_formType)
{
    this->_formType = p_formType;
}

void CourseFinishedForm::execute()
{
    std::cout << "CourseFinishedForm executed" << std::endl;
}

void NeedMoreClassRoomForm::execute()
{
    std::cout << "NeedMoreClassRoomForm executed" << std::endl;
}

void NeedCourseCreationForm::execute()
{
    std::cout << "NeedCourseCreationForm executed" << std::endl;
}

void SubscriptionToCourseForm::execute()
{
    std::cout << "SubscriptionToCourseForm executed" << std::endl;
}