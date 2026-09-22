//A college is digitizing student records to simplify academic administration. Design a
//student class that stores basic student information and displays the details whenever
//requested by the administrative staff.
#include <iostream>
using namespace std;
class student
{
    public:
    string name;
    int marks;
    int collegeID;
    void Display()
    {
        cout<<"______Student Details______"<<endl;
        cout<<"Current marks of the students="<<marks<<endl;
        cout<<"Name of the student="<<name<<endl;
        cout<<"College ID of the student="<<collegeID<<endl;
    }
};
int main()
{
    student s1;
    cout<<"Enter the marks of the student=";
    cin>>s1.marks;
    cout<<"Enter name of the student=";
    cin>>s1.name;
    cout<<"Enter CollegeID of the student=";
    cin>>s1.collegeID;
    s1.Display();
    return 0;
}