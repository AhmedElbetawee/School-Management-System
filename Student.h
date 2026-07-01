#pragma once
#include <string>
using namespace std;

class Student
{
    string name;
    int id;
    int age;
    int grade;
    public:
        Student();
        Student(string , int, int, int);
        
        void print() const;
        
        void setName(string);
        void setID(int);
        void setAge(int);
        void setGrade(int);

        string getName() const;
        int getID () const;
        int getAge () const;
        int getGrade () const;
};