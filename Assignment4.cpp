//A bookstore is developing a catalouging system where some books are initially added with default details,while others are entered with complete information.
//Design a Book class that supports both types of object creation using appropriate constructors 
#include <iostream>
using namespace std;
class Book
{
    public:
    string title;
    int ID;
    int price;
     Book()
    {
        title="Unknown";
        ID=0;
        price=0;
    }
    void Display()
    {
        cout<<"--------Book Details--------"<<endl;
        cout<<"Book's Title="<<title<<endl;
        cout<<"Book's ID="<<ID<<endl;
        cout<<"Book's Price="<<price<<endl;
    }
};
int main()
{
    Book B1;
    cout<<"Enter Book's Title="<<endl;
    cin>>B1.title;
    cout<<"Enter Book's ID="<<endl;
    cin>>B1.ID;
    cout<<"Enter Book's Price="<<endl;
    cin>>B1.price;
    B1.Display();
    return 0;
}