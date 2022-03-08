// 12. // CREATE A CLASS TRIANGLE INCLUDE OVERLOAD FUNCTION FOR CALCULATING AREA.OV
// ERLOAD ASSIGNMENT OPERATOR & EQUALITY OPERATOR
#include<iostream> //Including Header Files
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<cmath>
using namespace std;


class triangle // Creating class triangle
{
 float v1,v2,b,h; // Float variables declared
 double AREA; // Double variable AREA declared
 public:
 triangle()
 {
 cout<<"\nDefault constructor...";
 v1=v2=b=h=0;
 AREA=0.0;
 }
 triangle(float v1,float v2,float b) // Parameterised Constructor
 {
 cout<<"\nInitialising the three sides...";
 this->v1=v1;
 this->v2=v2;
 this->b=b;
 h=0;
 AREA=area(v1,v2,b);
 }
 triangle(float h,float b)
 {
 cout<<"\nInitialising the base and height...";
 this->h=h;
 this->b=b;
 v1=v2=0;
 AREA=area(h,b);
 }
 triangle(float k)
 {
 cout<<"\nInside equilateral triangle contructor... ";
 v1=v2=b=k;
 h=0;
 AREA=area(b);
 }
 double area(float s1,float s2,float s3) // Calculating Function
 {
 cout<<"\nCalculating area with the three sides given...";
 double X;
 float s=s1+s2+s3;
 s/=2;
 X=sqrt((s)*(s-s1)*(s-s2)*(s-s3));
 return(X); // Returning the value to the caller
 }
 double area(float h1,float b1) // Function Overloading
 {
 cout<<"\nCalculating area with the Height and Base length given... ";
 double X;
 X=h1*b1*(0.5);
 return(X);
 }
 double area(float s) // Function Overloading
 {
 cout<<"\nCalculating area of the equilateral triangle... ";
 return(area(s,s,s));
 }
 int operator==(triangle X) // Overload == for triangle
 {
 cout<<"\nComparing... ";
 int a=0;
 if(this->AREA==X.AREA)
 a=1;
 return (a);
 }
 void operator=(triangle X) // Overloaded = for triangle
 {
 cout<<"\n\nAssigning values (Inside assignment operator function) ... \n";
 this->v1=X.v1;
 this->v2=X.v2;
 this->h=X.h;
 this->b=X.b;
 AREA=X.AREA;
 }
 void disp()
 {
 if(v1)
 {
 cout<<" Edge 1 = "<<v1<<endl<<" Edge 2 = "<<v2<<endl<<" Edge 3 = "<<b<<endl;
 }
 if(h)
 {
 cout<<"\nHeight = "<<h<<endl<<" Base = "<<b;
 }
 cout<<endl<<" Area = "<<AREA;
 }
};
void menu(triangle &x)
{
 
 cout<<"\n\nHow do you want to find out the area of the triangle??\n" ;
 cout<<" 1) Using the dimensions of the three sides\n ";
 cout<< "2) Equilateral triangle\n" ;
 cout<<" 3) Using the Base and Height\n ";
 cout<<" 4) Using Asg (=) operator\n" ;
 cout<<" 5) Using cmp (==) operator\n" ;
 cout<<" Enter choice or any othr key to continue...";
 char ch;
 ch=getch();
 switch(ch)
 {
 case '1':
 {
 float a,b,c;
 cout<<"\nEnter the three sides of the triangle...";
 cin>>a>>b>>c;
 triangle t(a,b,c); // Calls Parameterised Constructor
 t.disp(); // Calls Display Function
 break;
 }
 case '2':
 {
 cout<<"\nEnter one side... ";
 double s;
 cin>>s;
 triangle t(s); // Calls Equilateral constructor
 t.disp();
 break;
 }
 case '3':
 {
 cout<<"\nEnter the base and heght...";
 float h,b;
 cin>>b>>h;
 triangle t(b,h);
 t.disp();
 break;
 }
 case '4':
 {
 cout<<"\nEnter the three sides... ";
 float a,b,c;
 cin>>a>>b>>c;
 triangle t(a,b,c);
 x=t;
 x.disp();
 break;
 }
 case '5':
 {
 float a,b,c;
 cout<<"\nEnter the 3 sides of the first triangle... ";
 cin>>a>>b>>c;
 triangle t1(a,b,c);
 cout<<"\nEnter the 3 sides of the second triangle...";
 cin>>a>>b>>c;
 triangle t2(a,b,c);
 if(t1==t2)
 {
 cout<<"\nEqual...";
 }
 else
 {
 cout<<"\nNot Equal...";
 }
 break;
 }
 default:
 {
 exit(0);
 }
 }
 getch();
 menu(x);
}
int main() // Main Function
{
 triangle x; // Object of class triangle
 menu(x);
} // Main Function ends
// OUTPUT :--
// How do you want to find out the area of the triangle??
// 1) Using the dimensions of the three sides
// 2) Equilateral triangle
// 3) Using the Base and Height
// 4) Using Asg (=) operator
// 5)Using cmp (==) operator
// Enter choice or any othr key to continue...
// Enter one side... 5
// Inside equilateral triangle contructor...
// Calculating area of the equilateral triangle...
// Calculating area with the three sides given...
// Edge 1 = 5
// Edge 2 = 5
// Edge 3 = 5
// Area = 10.825318
 