// File: circle.cpp
// Reads the radius and displays the area and circumference of a circle.

#include <iostream>

using namespace std;

const float PI = 3.141592;

float findArea(float r);
float findCircum(float r);

int main()
{
    float radius;
    cout << "Enter the radius of circle: ";
    cin >> radius;
    cout << "Area of circle: " << findArea(radius) << endl;
    cout << "Circumference of circle: " << findCircum(radius) << endl;
    return 0;
}

float findArea(float r)
{
    return PI * r * r;
}

float findCircum(float r)
{
    return 2.0 * PI * r;
}