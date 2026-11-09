// File: casts.cpp
// Predict each line first, then build and run.

#include <iostream>

using namespace std;

int main()
{
    int sum = 7, n = 2;
    cout << "a. " << 7 / 2 << endl;              // prediction: 3
    cout << "b. " << 7.0 / 2 << endl;            // prediction: 3.5
    cout << "c. " << float(sum) / n << endl;      // prediction: 3.5
    cout << "d. " << int(3.9) + 2 << endl;        // prediction: 5
    cout << "e. " << int(5.65 + 7.9) << endl;     // prediction: 13
    cout << "f. " << char('A' + 2) << endl;        // prediction: C
    cout << "g. " << 'A' + 2 << endl;             // prediction: 67
    cout << "h. " << '7' - '0' << endl;           // prediction: 7
    int i = 3.89;                                  // prediction: 3
    cout << "i. " << i << endl;
    double x = 0.1 + 0.2;
    cout << "j. " << (x == 0.3) << endl;          // prediction: 0
    return 0;
}

