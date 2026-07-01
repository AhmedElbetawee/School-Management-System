#include "Teacher.h"
#include <iostream>
using namespace std;

Teacher :: Teacher()
{
    name ="unknown";
    subject = "unknown";
    id =0;
    age =0;
    salary =0;
}

Teacher :: Teacher(string n, string sub, int i, int ag, int sal)
{
    name = n;
    subject = sub;
    id =i;
    age = ag;
    salary = sal;
}

void Teacher :: print() const
{
    cout <<"Name is : "<<name<<endl;
    cout <<"Subject is : "<<subject<<endl;
    cout <<"ID is : "<<id<<endl;
    cout <<"Age is : "<<age<<endl;
    cout <<"Salary is : "<<salary<<endl;
}

void Teacher :: setName(string n)
{
    name = n;
}

void Teacher :: setSubject(string sub)
{
    subject = sub;
}

void Teacher :: setId(int i)
{
    id = i;
}

void Teacher :: setAge(int ag)
{
    age = ag;
}

void Teacher :: setSalary(int sal)
{
    salary = sal;
}

string Teacher :: getName() const
{
    return name;
}

string Teacher :: getSubject() const
{
    return subject;
}

int Teacher :: getId() const
{
    return id;
}

int Teacher :: getAge() const
{
    return age;
}

int Teacher :: getSalary() const
{
    return salary;
}

