// File: sqrt.cpp
// Reads a number and displays its square root.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double num;
    cout << "Input number: ";
    cin >> num;
    cout << num << " square root = " << sqrt(num) << endl;
    return 0;
}