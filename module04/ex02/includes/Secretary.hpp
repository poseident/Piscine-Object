#ifndef SECRETARY_HPP
#define SECRETARY_HPP

#include "Staff.hpp"
#include "Form.hpp"
#include "CourseFinishedForm.hpp"
#include "NeedCourseCreationForm.hpp"
#include "SubscriptionToCourseForm.hpp"
#include "NeedMoreClassRoomForm.hpp"

class Secretary : public Staff
{
    private:

    public:
        Secretary(const std::string& name) : Staff(name) {}
	    Form* createForm(FormType p_formType) {
            switch (p_formType) {
                case FormType::CourseFinished:
                    return new CourseFinishedForm;
                case FormType::NeedCourseCreation:
                    return new NeedCourseCreationForm;
                case FormType::NeedMoreClassRoom:
                    return new NeedMoreClassRoomForm;
                case FormType::SubscriptionToCourse:
                    return new SubscriptionToCourseForm;
                }
        }
	    void archiveForm() {};
};

#endif