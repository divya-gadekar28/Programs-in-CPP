/*Write a C++ program to create a class Mobile which contains data members as Mobile_Id, Mobile_Name, Mobile_Price.
Create and Initialize all values of Mobile object by using parameterized constructor. 
Display the values of Mobile object.*/

#include <iostream>
#include <string>
using namespace std;
class Mobile {
public:
int Mobile_Id;
string Mobile_Name;
float Mobile_Price;
public:
Mobile(int id, string name, float price) {
Mobile_Id = id;
Mobile_Name = name;
Mobile_Price = price;
}
void Display() {
cout << "Mobile Id: " << Mobile_Id << endl;
cout << "Mobile Name: " << Mobile_Name << endl;
cout << "Mobile Price: " << Mobile_Price << endl;
}
};
int main() {
Mobile m(1, "iPhone", 999.99);
m.Display();
return 0;
}
