#include <iostream>
#include <cstring>
using namespace std;

class person
{
protected:
    string name = "rahul";

public:
    virtual void display()
    {

        cout << "your name is : " << name << endl;
    }
};

class student : public person
{
protected:
    string course = "computer science";
    float marks = 95.5;
    int year = 2003;

    void display()
    {

        cout << "your name is : " << name << endl;
        cout << "your marks  are : " << marks << endl;
        cout << "your year of admission  is : " << year << endl;
    }
};

class employee : public person
{
protected:
    string department = "accounting";
    float salary = 200000;

public:
    void display()
    {

        cout << "your name is : " << name << endl;
        cout << "your salary  is :" << salary << "INR" << endl;
        cout << "your department is : " << department << endl;
    }
};

int main()
{

    person *ptr;
    student std;
    ptr = &std;
    ptr->display();

    person *ptr1;
    employee emp;
    ptr1 = &emp;
    ptr1->display();

    return 0;
}