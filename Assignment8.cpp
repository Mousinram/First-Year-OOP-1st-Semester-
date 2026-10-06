//An organization maintains records of its workforce. Every manager is an employee, and
//every employee is a person. Design an application that progressively extends the available
//information at each level while reusing the common details already defined.
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
class Manager:public Person
{
    public:
    int mid;
    string department;
    Manager ()
    {
        mid=0;
        department="None";
    }
    Manager(string n,int a,string c,int m,string d)
    {
        mid=m;
        department=d;
    }
    void display()
    {
        cout<<"Manager ID="<<mid<<endl;
        cout<<"Department="<<department<<endl;
    }
};
class Employee:public Manager
{
    public:
    int EID;
    string Ename;
    int Esalary;
    Employee(int i,string n,int s)
    {
        EID=i;
        Ename=n;
        Esalary=s;
        cout<<"Employee record created"<<endl;
    }
    ~Employee()
    {
        cout<<"Employee record destroyed"<<endl;
    }
};
int main()
{
    Employee E1(101,"Dhairya",50000);
    E1.name="Dhairya";
    E1.age=20;
    E1.contact="839939929930";
    E1.Display();
    E1.mid=201;
    E1.department="CSE";
    E1.display();
    cout<<"Employee ID="<<E1.EID<<endl;
    cout<<"Employee Name="<<E1.Ename<<endl;
    cout<<"Employee Salary="<<E1.Esalary<<endl;
    return 0;
}


