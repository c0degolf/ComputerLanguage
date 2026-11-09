// File: grade.cpp
// Reads a test score and prints the letter grade.

#include <iostream>

using namespace std;

int main()
{
    int score;   // input: 0 to 100
    cout << "Enter your test score: ";
    cin >> score;
    cout << "Your grade is ";
    if (score >= 90)
        cout << "A" << endl;
    else if (score >= 80)
        cout << "B" << endl;
    else if (score >= 70)
        cout << "C" << endl;
    else if (score >= 60)
        cout << "D" << endl;
    else
        cout << "F" << endl;
    return 0;
}
