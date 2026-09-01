//The HR Department needs a simple application to organize employee information.
//Design an Employee class that stores employee details and enables authorized staff to view the stored information whenever required
#include <iostream>
using namespace std;
class Employee
{
    public:
    int EmployeeID;
    string name;
    string Email;
    int number;
    string autho="dhairya0809";
    string a;
    void Display()
    {
        cout<<"Employee's Phone Number"<<number<<endl;
        cout<<"Employee's Name"<<name<<endl;
        cout<<"Employee's Email"<<Email<<endl;
        cout<<"Employee's ID"<<EmployeeID<<endl;
    }
};
int main()
{
    Employee E1;
    cout<<"Enter Password";
    cin>>E1.a;
    if (E1.a == E1.autho)
    {
        cout<<"Enter Name"<<endl;
       cin>>E1.name;
        cout<<"Enter number"<<endl;
        cin>>E1.number;
        cout<<"Enter Email"<<endl;
        cin>>E1.Email;
        cout<<"Enter ID"<<endl;
        cin>>E1.EmployeeID;
        E1.Display();
    }
    else 
    {
        cout<<"Wrong Password";
    }
    
}
