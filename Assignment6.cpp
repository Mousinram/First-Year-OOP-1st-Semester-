//An HR application creates employee records temporarily while processing recruitment data 
//Design an Employee class that displays a messages wehn employee records are created and 
//destroyed from memory after processing the recruitment data
#include <iostream>
using namespace std;
class Employee
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
    cout<<"Employee ID="<<E1.EID<<endl;
    cout<<"Employee Name="<<E1.Ename<<endl;
    cout<<"Employee Salary="<<E1.Esalary<<endl;
    return 0;
}
