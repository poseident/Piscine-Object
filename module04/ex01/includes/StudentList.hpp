#pragma once

#include "singetons.hpp"
#include "Person.hpp"

class StudentList : public Singetons<Student>
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
};

#endif // STUDENT_LIST_H
