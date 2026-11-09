// File: temperature.cpp
// Converts Celsius temperature to Fahrenheit.

#include <iostream>
using namespace std;

int main()
{
    double celsius, fahrenheit;

    cout << "Enter Celsius: ";
    cin >> celsius;

    fahrenheit = celsius * (9.0 / 5.0) + 32.0;

    cout << "Fahrenheit = " << fahrenheit << endl;

    return 0;
}