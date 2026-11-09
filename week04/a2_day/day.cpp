// File: day.cpp
// Reads a day number (1-7) and prints the day name using a switch.

#include <iostream>
#include <string>

using namespace std;

void dayName(int day, string& name);  // IN, OUT

int main()
{
    int day;       // input: 1 (Mon) to 7 (Sun)
    string name;   // output of dayName
    cout << "Enter a number (1-7) for the day of the week: ";
    cin >> day;
    dayName(day, name);
    cout << "Today is " << name << endl;
    return 0;
}

// Sets name to the day of the week; default for invalid input
void dayName(int day, string& name)  // IN, OUT
{
    switch (day)
    {
        case 1: name = "Monday";    break;
        case 2: name = "Tuesday";   break;
        case 3: name = "Wednesday"; break;
        case 4: name = "Thursday";  break;
        case 5: name = "Friday";    break;
        case 6: name = "Saturday";  break;
        case 7: name = "Sunday";    break;
        default: name = "not a day (enter 1-7)"; break;
    }
}
