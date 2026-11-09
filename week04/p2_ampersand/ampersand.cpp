// File: ampersand.cpp
// Splits seconds into h / m / s using reference parameters.
// Part A printed zeros because without &, the parameters were copies.
// The function changed its own local copies, not main's h, m, s.

#include <iostream>

using namespace std;

void splitTime(int totalSeconds, int& hours, int& minutes, int& seconds);

int main()
{
    int total;      // input
    int h, m, s;    // output of splitTime
    cout << "Enter total seconds: ";
    cin >> total;
    splitTime(total, h, m, s);
    cout << h << " h " << m << " m " << s << " s" << endl;
    return 0;
}

// Splits totalSeconds into hours, minutes and seconds
void splitTime(int totalSeconds, int& hours, int& minutes, int& seconds)
{
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;
}
