#include <string>
#include <vector>
#include "Student.h"
using namespace std;

class Classroom
{
    string className;
    int classID;
    vector <Student> students;
    public:
        Classroom();
        Classroom(string,int);
        
        void setClassroomName(string);
        string getClassroomName() const;

        void setClassID(int);
        int getClassID() const;
        
        void print() const;

        bool addStudent(const Student&);
        bool removeStudent(int); // with id
        bool updateGrade(int,int); 
        
        Student* searchStudent(int);  

        void displayStudent() const;
        
        void sortByID();
        void sortByGrade();
        int getStudentCount() const;
};