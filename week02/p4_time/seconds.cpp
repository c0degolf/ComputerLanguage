// File: seconds.cpp
// Converts total seconds into hours, minutes, and remaining seconds.

#include <iostream>
using namespace std;

int main()
{
    int TotalSeconds;

    cout << "Enter total seconds: ";
    cin >> TotalSeconds;

    int Hours = TotalSeconds / 3600;
    int Minutes = (TotalSeconds % 3600) / 60;
    int RemainingSeconds = TotalSeconds % 60;

    cout << "Time = " << Hours << "hours "
         << Minutes << "minutes "
         << RemainingSeconds << "s\n";

    return 0;
}