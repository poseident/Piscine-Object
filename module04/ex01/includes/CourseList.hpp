#pragma once

#include "singetons.hpp"
#include "Course.hpp"

class CourseList : public Singetons<Course>
{
    public:
        void validate(const Course&) const {
            // Validation logic for Course objects
        }
    private:
        CourseList() {}  // Constructor is private
        ~CourseList() {} // Destructor is private
        CourseList(const CourseList&);
        CourseList& operator=(const CourseList&);
};

#endif