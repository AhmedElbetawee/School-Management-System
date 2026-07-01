#include "Student.h"
#include "Teacher.h"
#include "Classroom.h"
#include "School.h"
#include <iostream>
using namespace std;

void showMainMenu()
{
    cout <<"1- School Management\n";
    cout <<"2- Classroom Management\n";
    cout <<"3- Teacher Management\n";
    cout <<"4- Student Management\n";
    cout <<"0- Exit\n";
}
void menuSchool()
{
    cout <<"1- Display School Information\n";
    cout <<"2- change School Name\n";
    cout <<"0- Back\n";

}

void menuclassroom()
{
    cout <<"1- Add Classroom\n";
    cout <<"2- Remove Classroom\n";
    cout <<"3- Search Classroom\n";
    cout <<"4- Display All Classroom\n";
    cout <<"0- Back\n";
}

void menuStudent()
{
    cout <<"1- add Student\n";
    cout <<"2- Remove Student\n";
    cout <<"3- Search Student\n";
    cout <<"4- Update Grade\n";
    cout <<"5- Display Student\n";
    cout <<"6- Sort Student By ID\n";
    cout <<"7- Sort Student By Grade\n";
    cout <<"0- Back\n";
}

void menuTeacher()
{
    cout <<"1- add Teacher\n";
    cout <<"2- Remove Teacher\n";
    cout <<"3- Search Teacher\n";
    cout <<"4- Display Teacher\n";
    cout <<"0- Back\n";
}


int main()
{
    School s1;
    int mainChoice;
    do
    {
        showMainMenu();
        cout <<"Enter your choice ";
        cin>>mainChoice;
        if (mainChoice == 1)
        {
            int schoolChoice;
            do
            {
                menuSchool();
                cout <<"Enter your choice "; cin>>schoolChoice;
                if (schoolChoice == 1)
                {
                    s1.displaySchool();
                }
                else if (schoolChoice == 2)
                {
                    string s;
                    cout <<"Enter new name of school without space "; cin>>s;
                    s1.setSchoolName(s);
                }
            } while (schoolChoice != 0);
        }

        else if (mainChoice == 2)
        {
            int classroomChoice;
            do
            {
                menuclassroom();
                cout <<"Enter your choice "; cin>>classroomChoice;
                
                if(classroomChoice == 1)
                {
                    string name;
                    int id;
                    cout <<"Enter name of classroom without space "; cin>>name;
                    cout <<"Enter id of classroom "; cin >>id;
                    Classroom c(name, id);
                    if (s1.addClassroom(c))
                    {
                        cout <<"the Classroom is added\n";
                    }
                    else
                    {
                        cout <<"Classroom Already Exists\n";
                    }
                    
                }

                else if(classroomChoice == 2)
                {
                    int id;
                    cout <<"Enter id of classroom "; cin >>id;
                    if (s1.removeClassroom(id))
                    {
                        cout <<"the Classroom is removed\n";
                    }
                    else
                    {
                        cout <<"Failed\n";
                    }
                }

                else if (classroomChoice == 3)
                {
                    int id;
                    cout <<"Enter id of classroom "; cin>>id;
                    Classroom* c = s1.searchClassroom(id);
                    if (c != nullptr)
                    {
                        c->print();
                    }
                    else
                    {
                        cout <<"classroom not founded\n";
                    }
                }
            
                else if(classroomChoice == 4)
                {
                    s1.displayClassrooms();
                }
            } while (classroomChoice != 0);
        }

        else if (mainChoice == 3)
        {
            int teacherChoice;
            do
            {
                menuTeacher();
                cout <<"Enter your choice "; cin>>teacherChoice;
                if (teacherChoice == 1)
                {
                    string name, sub;
                    int id, age, sal;
                    cout <<"Enter name of teacer "; cin>>name;
                    cout <<"Enter subject of teacer "; cin>>sub;
                    cout <<"Enter id of teacer "; cin>>id;
                    cout <<"Enter age of teacer "; cin>>age;
                    cout <<"Enter sal of teacer "; cin>>sal;
                    Teacher t(name, sub,id, age, sal);
                    if (s1.addTeacher(t))
                    {
                        cout <<"the teacher is added\n";
                    }
                    else 
                        cout <<"the teacher is already exists\n";
                }

                else if (teacherChoice == 2)
                {
                    int id;
                    cout <<"Enter id of teacer "; cin>>id;
                    if (s1.removeTeacher(id))
                    {
                        cout <<"The teacher is removed\n";
                    }
                    else 
                    {
                        cout <<"The teacher is not found\n";
                    }
                }

                else if (teacherChoice == 3)
                {
                    int id;
                    cout <<"Enter id of Teacher "; cin>>id;
                    Teacher* t = s1.searchTeacher(id);
                    if (t != nullptr)
                    {
                        t->print();
                    }
                    else
                    {
                        cout <<"Teacher is  not founded\n";
                    }
                }

                else if (teacherChoice == 4)
                {
                    s1.displayTeachers();
                }
            } while (teacherChoice != 0);            
        }

        else if (mainChoice == 4)
        {
            int studentChoice;
            do
            {
                menuStudent();
                cout <<"Enter your choice "; cin>>studentChoice;

                if (studentChoice == 1)
                {
                    int id;
                    cout <<"Enter id of classroom "; cin>>id;
                    Classroom* c = s1.searchClassroom(id);
                    if (c != nullptr)
                    {
                        string name;
                        int id, age, grade;
                        cout <<"Enter name of student "; cin>>name;
                        cout <<"Enter id of student "; cin>>id;
                        cout <<"Enter age of student "; cin>>age;
                        cout <<"Enter grade of student "; cin>>grade;
                        Student s(name, id, age, grade);
                        if (c->addStudent(s))
                        {
                            cout <<"The student is added\n";
                        }
                        else 
                        {
                            cout <<"The student is not found\n";
                        }
                    }
                    else 
                    {
                        cout <<"classroom not found\n";
                    }
                }

                else if (studentChoice == 2)
                {
                    int id;
                    cout <<"Enter id of Classroom "; cin>>id;
                    Classroom* c = s1.searchClassroom(id);
                    if (c != nullptr)
                    {
                        int idStudnet;
                        cout <<"Enter id of studner "; cin>>idStudnet;
                        if (c->removeStudent(idStudnet))
                        {
                            cout <<"The student is removed\n";
                        }
                        else
                        {
                            cout <<"Student is not found\n";
                        }
                    }
                    else
                    {    
                        cout <<"Classroom is not found\n";
                    }
                }

                else if(studentChoice == 3)
                {
                    int id;
                    cout <<"Enter id of Classroom "; cin>>id;
                    Classroom* c = s1.searchClassroom(id);
                    if (c != nullptr)
                    {
                        int idStudnet;
                        cout <<"Enter id of studner "; cin>>idStudnet;
                        Student* s = c->searchStudent(idStudnet);
                        if (s != nullptr)
                        {
                            s->print();
                        }
                        else
                        {
                            cout <<"The student is not found\n";
                        }
                    }
                    else
                    {
                        cout <<"Classroom is not found\n";
                    }
                }

                else if (studentChoice == 4)
                {
                    int idClass;
                    cout <<"Enter id of classroom "; cin>>idClass;
                    Classroom* c =s1.searchClassroom(idClass);
                    if (c != nullptr)
                    {
                        int id, newGrade;
                        cout <<"Enter id of student "; cin>>id;
                        cout <<"Enter new grade of student "; cin>>newGrade;
                        if (c->updateGrade(id,newGrade))
                        {
                            cout <<"The grade is updated\n";
                        }

                        else
                        {
                            cout <<"the Student is not found\n";
                        }
                    }
                    else
                    {
                        cout <<"Classroom is not found\n";
                    }
                }

                else if (studentChoice == 5)
                {
                    int id; 
                    cout <<"Enter id of classroom\n"; cin>>id;
                    Classroom* c = s1.searchClassroom(id);
                    if(c != nullptr)
                    {
                        c->displayStudent();
                    }
                    else
                    {
                        cout <<"Classroom is not found\n";
                    }
                }

                else if (studentChoice == 6)
                {
                    int id; 
                    cout <<"Enter id of classroom\n"; cin>>id;
                    Classroom* c = s1.searchClassroom(id);
                    if(c != nullptr)
                    {
                        c->sortByID();
                    }
                    else
                    {
                        cout <<"Classroom is not found\n";
                    }
                }
                else if (studentChoice == 7)
                {
                    int id; 
                    cout <<"Enter id of classroom\n"; cin>>id;
                    Classroom* c = s1.searchClassroom(id);
                    if(c != nullptr)
                    {
                        c->sortByGrade();
                    }
                    else
                    {
                        cout <<"Classroom is not found\n";
                    }
                }
            } while (studentChoice != 0);
            
        }
    
    } while (mainChoice != 0);   
}