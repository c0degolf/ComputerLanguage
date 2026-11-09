// File: miles.cpp
// Converts miles to kilometers.

#include <iostream>
using namespace std;

int main()
{
    const float KM_PER_MILE = 1.609;
    float miles, kms;

    cout << "Enter the distance in miles: ";
    cin >> miles;
    cout << "The distance in miles is " << miles << endl;

    kms = KM_PER_MILE * miles;
    cout << "The distance in kilometers is " << kms << endl;

    return 0;
}