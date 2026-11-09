// File: discriminant.cpp
// Calculates the discriminant of a quadratic equation.

#include <iostream>
using namespace std;

int main()
{
    double a, b, c;

    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    double D = b * b - 4 * a * c;

    cout << "Discriminant = " << D << "\n";
    cout << "The value of \"D\" is " << D << "\n";
    cout << "\tD > 0 : Two roots\n\tD = 0 : One root\n"
         << "\tD < 0 : No real roots\n";

    return 0;
}