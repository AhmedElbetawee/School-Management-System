# pragma once
#include <string>
using namespace std;

class Teacher
{
    string name;
    string subject;
    int id;
    int age;
    int salary;
    public:
        Teacher();
        Teacher(string ,string, int, int, int);
        
        void print() const;
        void setName(string);
        void setSubject(string);
        void setId(int);
        void setAge(int);
        void setSalary(int);

        string getName() const;
        string getSubject() const;
        int getId() const;
        int getAge() const;
        int getSalary() const;
};