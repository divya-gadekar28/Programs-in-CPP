//Write a C++ program to overload function Volume and find Volume of Cube, Cylinder and Sphere.
#include <iostream>
using namespace std;
const double PI = 3.14;
double Volume(float side) {
return side * side * side;
}
double Volume(double radius, float height) {
return PI * radius * radius * height;
}
double Volume(double radius) {
return (4.0/3.0) * PI * radius * radius * radius;
}
int main() {
cout << "Volume of cube with side 2: " << Volume(2.0) << endl;
cout << "Volume of cylinder with radius 2 and height 3: " << Volume(2.0, 3.0) << endl;
cout << "Volume of sphere with radius 2: " << Volume(2.0) << endl;
return 0;
}
