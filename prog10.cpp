//Write a C++ program to subtract two integer numbers of two different classes using friend function.

#include <iostream>

using namespace std;

class ClassA;  // Forward declaration

class ClassB {
private:
    int numB;

public:
    ClassB(int num) : numB(num) {}

    friend int subtract(const ClassA& objA, const ClassB& objB);
};

class ClassA {
private:
    int numA;

public:
    ClassA(int num) : numA(num) {}

    friend int subtract(const ClassA& objA, const ClassB& objB);
};

int subtract(const ClassA& objA, const ClassB& objB) {
    return objA.numA - objB.numB;
}

int main() {
    ClassA objA(10);
    ClassB objB(5);

    int result = subtract(objA, objB);

    cout << "Subtraction result: " << result << endl;

    return 0;
}

