/*Create	a	class	College	containing	data	members	as	College_Id,	College_Name,
Establishment_year, University_Name. Write a C++ program with following functions
a.	Accept n College details
b.	Display College details of specified University
c.	Display College details according to Establishment year (Use Array of Objects and Function Overloading).
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;
class College {
public:
int College_Id;
string College_Name;
int Establishment_year;
string University_Name;
College(int college_id, string college_name, int establishment_year, string university_name) : 
College_Id(college_id), College_Name(college_name), Establishment_year(establishment_year), 
University_Name(university_name) {}
void display() {
cout << "College Id: " << College_Id << endl;
cout << "College Name: " << College_Name << endl;
cout << "Establishment Year: " << Establishment_year << endl;
cout << "University Name: " << University_Name << endl;
}
};
vector<College> colleges;
void accept_colleges(int n) {
for (int i = 0; i < n; i++) {
int college_id, establishment_year;
string college_name, university_name;
cout << "Enter college id: ";
cin >> college_id;
cout << "Enter college name: ";
cin >> college_name;
cout << "Enter establishment year: ";
cin >> establishment_year;
cout << "Enter university name: ";
cin >> university_name;
colleges.push_back(College(college_id, college_name, establishment_year, university_name));
}
}
void display_colleges(string university_name) {
for (College college : colleges)
if (college.University_Name == university_name)
college.display();
}
void display_colleges(int establishment_year) {
for (College college : colleges)
if (college.Establishment_year == establishment_year)
college.display();
}
int main() {
int n;
cout << "Enter number of colleges: ";
cin >> n;
accept_colleges(n);
while (true) {
cout << "1. Display colleges by university\n2. Display colleges by establishment year\n3. Exit\nEnter your choice: ";
int choice;
cin >> choice;
switch (choice) {
case 1: {
string university_name;
cout << "Enter university name: ";
cin >>university_name;
display_colleges(university_name);
break;
}
case 2: {
int establishment_year;
cout << "Enter establishment year: ";
cin >> establishment_year;
display_colleges(establishment_year);
break;
}
case 3:
return 0;
default:
cout << "Invalid choice!\n";
break;
}
}
}
