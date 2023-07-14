//.Write a C++ program to create two classes Rectangle1 and Rectangle2. Compare area of both the rectangles using friend function.
#include <iostream>

using namespace std;

class Rectangle2;  // Forward declaration

class Rectangle1 {
private:
    int length;
    int width;

public:
    Rectangle1(int l, int w) : length(l), width(w) {}

    int getArea() {
        return length * width;
    }

    friend void compareAreas(Rectangle1 r1, Rectangle2 r2);
};

class Rectangle2 {
private:
    int length;
    int width;

public:
    Rectangle2(int l, int w) : length(l), width(w) {}

    int getArea() {
        return length * width;
    }

    friend void compareAreas(Rectangle1 r1, Rectangle2 r2);
};

void compareAreas(Rectangle1 r1, Rectangle2 r2) {
    int area1 = r1.getArea();
    int area2 = r2.getArea();

    if (area1 > area2) {
        cout << "Rectangle 1 has a greater area." << endl;
    } else if (area1 < area2) {
        cout << "Rectangle 2 has a greater area." << endl;
    } else {
        cout << "Both rectangles have the same area." << endl;
    }
}

int main() {
    Rectangle1 r1(5, 10);
    Rectangle2 r2(8, 6);

    compareAreas(r1, r2);

    return 0;
}
