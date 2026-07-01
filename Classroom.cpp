#include "Classroom.h"
#include <iostream>
#include <vector>
using namespace std;

Classroom :: Classroom ()
{
    className = "unknown";
    classID =0;
}

Classroom :: Classroom (string n, int i)
{
    className = n;
    classID = i;
}

void Classroom :: setClassroomName(string n)
{
    className = n;
}

string Classroom :: getClassroomName() const
{
    return className;
}

void Classroom :: setClassID(int i)
{
    classID = i;
}
int Classroom :: getClassID() const
{
    return classID;
}

void Classroom ::print() const
{
    cout <<"Name is: "<<className<<"\n";
    cout <<"ID is: "<<classID<<"\n";
}



bool Classroom :: addStudent(const Student &s)
{
    for (int i=0; i<students.size(); i++)
    {
        if (students[i].getID() == s.getID())
            return false;
    }
    students.push_back(s);
    return true;
}

bool Classroom :: removeStudent(int id)
{
    for (int i =0; i<students.size(); i++)
    {
        if (id == students[i].getID())
        {
            students.erase(students.begin() + i);
            return true;
        }
    }
    return false;
} 

Student* Classroom ::searchStudent(int id)
{
    for (int i=0; i<students.size(); i++)
    {
        if (students[i].getID() == id)
            return &students[i];
    }
    return nullptr;
}

bool Classroom :: updateGrade(int id, int newGrade)
{
    for (int i =0; i<students.size(); i++)
    {
        if (id == students[i].getID())
        {
            students[i].setGrade(newGrade);
            return true;
        }
    }
    return false;
}

void Classroom :: displayStudent() const
{
    if(!students.empty())
    {
        for (int i=0; i<students.size(); i++)
        {
            students[i].print();
        }   
    }
    else
        cout <<"NO Student\n";
}

void Classroom :: sortByID()
{
    if (!students.empty())
    {
        for (int i=0; i<students.size() -1; i++)
        {
            for (int j = i+1; j<students.size(); j++)
            {
                if (students[i].getID() > students[j].getID())
                {
                    swap(students[i],students[j]);
                }
            }
        }
        cout <<"Student sorted by ID\n";
    }
    else
        cout <<"No Student\n";
}

void Classroom :: sortByGrade()
{
    if (!students.empty())
    {
        for (int i=0; i<students.size() -1; i++)
        {
            for (int j = i+1; j<students.size(); j++)
            {
                if (students[i].getGrade() > students[j].getGrade())
                {
                    swap(students[i],students[j]);
                }
            }
        }
        cout <<"Student Sorted by Grade\n";
    }
    else
        cout <<"NO Student\n";
}

int Classroom ::getStudentCount() const
{
    return students.size();
}