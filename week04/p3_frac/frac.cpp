// File: frac.cpp
// Reads a common fraction; rejects a zero denominator.

#include <iostream>

using namespace std;

void getFrac(int& numerator, int& denominator);

int main()
{
    int num, denom;   // output of getFrac
    cout << "Enter a common fraction as 2 integers "
         << "separated by a slash: ";
    getFrac(num, denom);
    if (denom == 0)
    {
        cout << "Denominator should not be zero!" << endl;
        cout << "Enter a common fraction as 2 integers "
             << "separated by a slash: ";
        getFrac(num, denom);
    }
    cout << "Fraction is " << num << " / " << denom << endl;
    return 0;
}

void getFrac(int& numerator, int& denominator) // OUT, OUT
{
    char slash;   // temporary storage for the slash
    cin >> numerator >> slash >> denominator;
}
