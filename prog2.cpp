/*Write a C++ program to create a class Shape with functions to find area of the shape and display the name of the shape and other essential components of the class. 
Create derived classes circle, rectangle and trapezoid each having overridden function area and display. 
Write a suitable program to illustrate Virtual Function.*/
#include<iostream>
using namespace std;
class shape
{
   public:
      float r,l1,b1,l2,b2,h2;
      void inputc()
      {
         cout<<"\nEnter the radius of circle: ";
         cin>>r;
      }
      void inputr()
      {
         cout<<"\n\nEnter the length and breadth of rectangle: ";
         cin>>l1>>b1;
      }
      void inputt()
      {
         cout<<"\n\nEnter the length, breadth and height of trapezoid: ";
         cin>>l2>>b2>>h2;
      }
      virtual void display()
      {  cout<<"\nPlease enter the data: \n";   }
};
class circle: public shape
{
   protected:
      float ac;
   public:
      void input1()
      {           inputc();           }
      void display()
      {
         ac = 3.14159 * r * r;
         cout<<"\nThe area is: "<<ac;
      }
};

class rectangle: public shape
{
   protected:
      float ar;
   public:
      void input2()
      {  inputr();   }
      void display()
      {
         ar = l1 * b1;
         cout<<"\nArea of rectangle is: "<<ar;
      }
};
class trapezoid: public shape
{
   protected:
      float at;
   public:
      void input3()
      {  inputt();        }
      void display()
      {
         at = (h2/2) * (l2+b2);
         cout<<"\nArea of trapezoid is: "<<at;
      }
};
int main()
{
   shape s; circle c; rectangle r; trapezoid t;
   shape *shapeptr; shapeptr = &s;   
   shapeptr->display();
   c.input1();           
   shapeptr = &c; 
   shapeptr->display();
   r.input2(); 
   shapeptr = &r; 
   shapeptr->display();
    t.input3(); 
    shapeptr = &t; 
    shapeptr->display();
  return 0;
}
