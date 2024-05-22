// path/student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
public:
    Student(const std::string& name, int age, const std::string& studentId)
        : name(name), age(age), studentId(studentId) {}

    bool operator==(const Student& other) const {
        return studentId == other.studentId;
    }

    std::string getName() const { return name; }
    int getAge() const { return age; }
    std::string getStudentId() const { return studentId; }

private:
    std::string name;
    int age;
    std::string studentId;
};

#endif // STUDENT_H
