// File: calculator.cpp
// Calculates the summation and difference between two integers.

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    int sum, diff;

    cout << "Enter two integers (m > n): ";
    cin >> m >> n;
    cout << "m is " << m << ", n is " << n << endl;

    sum = m + n;
    diff = m - n;

    cout << "Summation is " << sum << ", difference is " << diff << endl;

    return 0;
}