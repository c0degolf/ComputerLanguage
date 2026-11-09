// File: month.cpp
// Displays the month name and days in the month using an enum.

#include <iostream>

using namespace std;

enum month {january = 1, february, march, april, may, june,
            july, august, september, october, november, december};

void writeMonth(month m); // IN: prints the name
int daysIn(month m);      // IN: returns 28, 30 or 31

int main()
{
    int n; // input: 1 to 12
    month m;
    do
    {
        cout << "Enter a month number (1-12): ";
        cin >> n;
        if (n < 1 || n > 12)
            cout << "Not between 1 and 12, try again." << endl;
    } while (n < 1 || n > 12);
    m = month(n); // int -> month needs the cast
    writeMonth(m);
    cout << " has " << daysIn(m) << " days." << endl;
    return 0;
}

// Prints the name of the month
void writeMonth(month m)
{
    switch (m)
    {
    case january: cout << "January"; break;
    case february: cout << "February"; break;
    case march: cout << "March"; break;
    case april: cout << "April"; break;
    case may: cout << "May"; break;
    case june: cout << "June"; break;
    case july: cout << "July"; break;
    case august: cout << "August"; break;
    case september: cout << "September"; break;
    case october: cout << "October"; break;
    case november: cout << "November"; break;
    case december: cout << "December"; break;
    }
}

// Returns the number of days in the month
int daysIn(month m)
{
    switch (m)
    {
    case february:
        return 28;
    case april:
    case june:
    case september:
    case november:
        return 30;
    default:
        return 31;
    }
}

