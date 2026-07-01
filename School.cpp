#include "School.h"
#include <iostream>

School :: School()
{
    schoolName ="unknown";
}

School :: School(string s)
{
    schoolName =s;
}

void School ::setSchoolName(string s)
{
    schoolName = s;
}


string School ::getSchoolName() const
{
    return schoolName;
}

bool School ::addClassroom(const Classroom &c)
{
    for (int i=0; i<classrooms.size(); i++)
    {
        if (classrooms[i].getClassID() == c.getClassID())
            return false;
    }
    classrooms.push_back(c);
    return true;
}

bool School ::removeClassroom(int id)
{
    if (!classrooms.empty())
    {
        for (int i=0; i<classrooms.size(); i++)
        {
            if (classrooms[i].getClassID() == id)
            {
                classrooms.erase(classrooms.begin() + i);
                return true;
            }
        }
    }
    return false;
}

Classroom* School :: searchClassroom(int id)
{
    for (int i=0; i<classrooms.size(); i++)
    {
        if (classrooms[i].getClassID() == id)
            return &classrooms[i];
    }
    return nullptr;
}

bool School ::addTeacher(const Teacher &t)
{
    for (int i=0; i<teachers.size(); i++)
    {
        if (teachers[i].getId() == t.getId())
        return false;
    }
    teachers.push_back(t);
    return true;
}

bool School ::removeTeacher(int id)
{
    if (!teachers.empty())
    {
        for (int i=0; i<teachers.size(); i++)
        {
            if (teachers[i].getId() == id)
            {
                teachers.erase(teachers.begin() + i);
                return true;
            }
        }
    }
    return false;
}

Teacher* School :: searchTeacher(int id)
{
    for (int i=0; i<teachers.size(); i++)
    {
        if (teachers[i].getId() == id)
            return &teachers[i];
    }
    return nullptr;
}

void School ::displayClassrooms() const
{
    if (!classrooms.empty())
    {
        for (const Classroom& c : classrooms)
        c.print();
    }
    else 
    {
        cout <<"NO Classroom Found\n";
    }
}

void School ::displayTeachers() const
{
    if (!teachers.empty())
    {
        for (const Teacher& t : teachers)
        t.print();
    }
    else 
    {
        cout <<"NO Teacher Found\n";
    }
}

void School :: displaySchool() const
{
    cout <<"Name of School is : "<<schoolName<<"\n";
    cout <<"Number of Classrooms is : "; cout <<classrooms.size()<<"\n";
    cout <<"Number of Teachers is : "<<teachers.size()<<"\n";
    
    cout <<"\n===== Classrooms =====\n";
    displayClassrooms();

    cout <<"\n===== Teachers =====\n";
    displayTeachers();
}

int School ::getClassroomCount() const
{
    return classrooms.size();
}

int School ::getTeacherCount() const
{
    return teachers.size();
}

