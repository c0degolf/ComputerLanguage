// File: average.cpp
// Calculates the average of three test scores.

#include <iostream>
using namespace std;

int main()
{
    float score1, score2, score3;

    cout << "Enter three test scores: ";
    cin >> score1 >> score2 >> score3;

    double avg = (score1 + score2 + score3) / 3.0;

    cout << "The average of test scores is " << avg << endl;

    return 0;
}