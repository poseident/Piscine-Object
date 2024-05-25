// path/student_list.h
#ifndef STUDENT_LIST_H
#define STUDENT_LIST_H

#include "SingetonList.hpp"
#include "student.hpp"
#include "Singeton.hpp"

class StudentList : public Singeton<StudentList>, public SingetonList<Student>
{
    public:
        void validate(const Student&) const {
            // Validation logic for Student objects
        }
    private:
        StudentList() {}  // Constructor is private
        ~StudentList() {} // Destructor is private
        StudentList(const StudentList&);
        StudentList& operator=(const StudentList&);
        friend class Singeton<StudentList>;    
};

#endif // STUDENT_LIST_H
