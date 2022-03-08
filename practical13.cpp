#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

class student
{
  string name;
  int roll_no;
  int CLASS;
  int year;
  int total_marks;

public:
  void setdata(string n, int r, int cl, int y, int m)
  {

    name = n;
    roll_no = r;
    CLASS = cl;
    year = y;
    total_marks = m;
  }

  void storeinfile()
  {
    ofstream o1("student.txt", ios::app);
    o1 << " NAME : " << name << "  CLASS : " << CLASS << "  ROLL NO : " << roll_no << "  YEAR : " << year << "  total marks : " << total_marks << endl;
    o1.close();
  }
  void retrivefromfile()
  {
    string str;
    ifstream o1;
    o1.open("student.txt");
    while (getline(o1, str))
      cout << str << endl;
  }
};

int main()
{
  string name;
  int roll_no;
  int CLASS;
  int year;
  int total_marks;

  student s[5];

  for (int i = 0; i < 5; i++)
  {
    cout << " enter the name :" << endl;
    cin >> name;
    cout << "enter your rollno :" << endl;
    cin >> roll_no;
    cout << "enter your class eg 1-12" << endl;
    cin >> CLASS;
    cout << "enter year :" << endl;
    cin >> year;
    cout << "enter your total marks out of 500 :" << endl;
    cin >> total_marks;
    s[i].setdata(name, roll_no, CLASS, year, total_marks);
    s[i].storeinfile();
  }

  s->retrivefromfile();

  return 0;
}