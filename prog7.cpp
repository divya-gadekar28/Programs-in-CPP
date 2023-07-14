//Write a C++ program to print area of circle, square and rectangle using inline function.
#include <iostream>

using namespace std;

inline float AreaCircle(float radius) {
    return 3.14159 * radius * radius;
}

inline float AreaSquare(float side) {
    return side * side;
}

inline float AreaRectangle(float length, float width) {
    return length * width;
}

int main() {
    float radius, side, length, width;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << AreaCircle(radius) << endl;

    cout << "Enter the side length of the square: ";
    cin >> side;
    cout << "Area of the square: " << AreaSquare(side) << endl;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of the rectangle: " << AreaRectangle(length, width) << endl;

    return 0;
}
