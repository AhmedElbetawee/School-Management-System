#pragma once

#include <vector>
#include "Classroom.h"
#include "Teacher.h"
class School
{
    string schoolName;
    vector <Classroom> classrooms;
    vector <Teacher> teachers;
    public:
        School();
        School(string);

        void setSchoolName(string);
        string getSchoolName() const;

        bool addClassroom(const Classroom &);
        bool removeClassroom(int);
        Classroom* searchClassroom(int);

        bool addTeacher(const Teacher &);
        bool removeTeacher(int);
        Teacher* searchTeacher(int);



        void displayClassrooms() const;
        void displayTeachers() const;
        void displaySchool() const;

        int getClassroomCount() const;
        int getTeacherCount() const;
};