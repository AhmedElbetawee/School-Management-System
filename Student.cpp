#include "Student.h"
#include <iostream>
using namespace std;

Student :: Student()
{
    name ="unknown";
    id =0;
    age =0;
    grade =0;
}

Student :: Student(string n, int i, int ag, int gr)
{
    name =n;
    id =i;
    age =ag;
    grade =gr;
}

void Student :: print() const
{
    cout <<"Name is : "<<name<<endl; 
    cout <<"id is : "<<id<<endl;
    cout <<"Age is : "<<age<<endl;
    cout <<"Grade is : "<<grade<<endl;
}

void Student :: setName(string n)
{
    name = n;
}

void Student :: setID(int i)
{
    id = i;
}

void Student :: setAge(int ag)
{
    age = ag;
}

void Student :: setGrade(int gr)
{
    grade = gr;
}

string Student :: getName() const
{
    return name;
}

int Student :: getID() const
{
    return id;
}

int Student :: getAge() const
{
    return age;
}

int Student :: getGrade() const
{
    return grade;
}