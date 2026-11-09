// File: cylinder.cpp
// Reads radius and height, displays volume and surface area of a cylinder.

#include <iostream>

using namespace std;

const float PI = 3.141592;

void cylinder(float radius, float height,
              float& volume, float& surface);  // prototype

int main()
{
    float r, h;          // input
    float vol, surf;     // output of cylinder
    cout << "Enter radius and height: ";
    cin >> r >> h;
    cylinder(r, h, vol, surf);
    cout << "Volume = " << vol << endl;
    cout << "Surface area = " << surf << endl;
    return 0;
}

// Computes the volume and surface area of a cylinder
void cylinder(float radius, float height,       // IN
              float& volume, float& surface)     // OUT
{
    volume = PI * radius * radius * height;
    surface = 2.0 * PI * radius * (radius + height);
}
