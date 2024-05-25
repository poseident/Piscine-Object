#ifndef CourseLIST_HPP
#define CourseLIST_HPP

#include "SingetonList.hpp"
#include "Course.hpp"
#include "Singeton.hpp"

class CourseList : public Singeton<CourseList>, public SingetonList<Course>
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
        friend class Singeton<CourseList>;  
};

#endif