// File: shape.cpp
// Calculates the area of a circle or square using a switch statement.

#include <iostream>
#include <cctype>

using namespace std;

const double PI = 3.141592;

int main()
{
    char shape;   // input: C or S
    double value; // input: radius or side length
    double area;  // output
    cout << "Select the shape type (C or S): ";
    cin >> shape;
    shape = toupper(shape);
    switch (shape)
    {
    case 'C':
        cout << "Input radius: ";
        cin >> value;
        area = PI * value * value;
        cout << "The area is " << area << endl;
        break;
    case 'S':
        cout << "Input side length: ";
        cin >> value;
        area = value * value;
        cout << "The area is " << area << endl;
        break;
    default:
        cout << "ERROR: invalid shape type" << endl;
        break;
    }
    return 0;
}

