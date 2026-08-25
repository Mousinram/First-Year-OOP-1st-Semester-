#include <iostream>
using namespace std;
class Book
{
    public:
    string bname;
    int bnumber;
    string author;
    string type;
    void Input()
    {
        cin>>bname;
        cin>>bnumber;
        cin>>author;
        cin>>type;
    }
    
    void Display()
    {
        cout<<"The Name of the Book is:"<<bname<<endl;
        cout<<"The ID of the Book is"<<bnumber<<endl;
        cout<<"The Name of the Book's Author is:"<<author<<endl;
        cout<<"The Type of the book is:"<<type<<endl;

    }
};
    int main()
    {
        Book b1;
        Book b2;
        cout<<"Enter the book name";
        cout<<"Enter the book number";
        cout<<"Enter the name of the book's author";
        cout<<"Enter the type of book whether it is physical or digital";
        b1.Input();
        b1.Display();
        b2.Input();
        b2.Display();
        return 0;
    }
    
