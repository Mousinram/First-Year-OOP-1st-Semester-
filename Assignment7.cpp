//A university informaiton system stores commom details such as name,age and contact imformation
//of individuals ,while student specific information such as roll number and branch is maintained separately.Design an applicatiopn that avoids
//duplication of commom data by organizing the classes appropriately
#include <iostream>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    string contact;
    Person()
    {
        name="";
        age=0;
        contact="";
    }
    Person(string n,int a,string c)
    {
        name=n;
        age=a;
        contact=c;
    }
    void Display()
    {
        cout<<"Name="<<name<<endl;
        cout<<"Age="<<age<<endl;
        cout<<"Contact="<<contact<<endl;
    }
    
};
class Student:public Person
{
    public:
    int rollno;
    string branch;
    Student ()
    {
        rollno=0;
        branch="None";
    }
    Student(string n,int a,string c,int r,string b)
    {
        rollno=r;
        branch=b;
    }
    void display()
    {
        cout<<"Roll No="<<rollno<<endl;
        cout<<"Branch="<<branch<<endl;
    }
};
int main()
{
    Student S1;
    S1.name="Dhairya";
    S1.age=20;
    S1.contact="839939929930";
    S1.Display();
    S1.rollno=101;
    S1.branch="CSE";
    S1.display();
    return 0;
};