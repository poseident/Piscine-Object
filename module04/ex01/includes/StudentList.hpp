// path/student_list.h
#ifndef STUDENT_LIST_H
#define STUDENT_LIST_H

#include "SingetonList.hpp"
#include "singetons.hpp"
#include "student.hpp"

class StudentList : public Singeton<StudentList>, public SingetonList<Student> {
public:
    void validate(const Student& item) const {
        // Validation logic for Student objects
    }
};

#endif // STUDENT_LIST_H
