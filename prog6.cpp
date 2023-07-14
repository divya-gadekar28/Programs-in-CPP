/*Write a C++ program with Student as abstract class and create derive classes Engineering, Medicine and Science having data member rollno and name from base class Student. 
Create objects of the derived classes and access them using array of pointer of base class Student.*/
#include<iostream>

using namespace std;

class student
{

      protected:
      char name[10];
      int roll;
      public:
      virtual void getdata()
      {
         cout<<"\n\nEnter the name : ";
         cin>>name;
         cout<"\nEnter the roll number : ";
         cin>>roll;
      }
      virtual void showdata()
      {  cout<<"\nName : "<<name<<"\t"<<"Roll No : "<<roll;    }
      virtual void dept()=0;
};

class engineering: public student
{
   protected:
      char dep[10];
   public:
    void dept(){
          getdata();
    }
  void showdata()
      {
                  student::showdata();
         cout<<"\t"<<"Department : Engineering ";
      }
};
class medicine: public student
{
      protected:
      char dep[10];
   public:
   void dept(){
          getdata();
    }
      void showdata()
      {
                  student::showdata();
         cout<<"\t"<<"Department : Medical"<<dep;
      }
};
class science: public student
{
      protected:
      char dep[10];
   public:
   void dept(){
          getdata();
    }
      void showdata()
      {
                  student::showdata();
         cout<<"\t"<<"Department : Science"<<dep;
      }
};
int main()
{
   student *baseptr;
   engineering e; medicine m; science s;
   baseptr = &e; baseptr->dept(); baseptr->showdata();
   baseptr = &m; baseptr->dept(); baseptr->showdata();
   baseptr = &s; baseptr->dept(); baseptr->showdata();
   return 0;
}

