// File: showdiff.cpp
// Average and difference table for eight numbers, with smallest value.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int MAX_ITEMS = 8; // number of data items
    float x[MAX_ITEMS];      // the data: x[0] .. x[7]
    float average;            // average of the data
    float sum = 0.0;          // sum of the data
    int minPos = 0;           // subscript of the smallest value
    cout << "Enter " << MAX_ITEMS << " numbers: ";
    for (int i = 0; i < MAX_ITEMS; i++)
        cin >> x[i];
    for (int i = 0; i < MAX_ITEMS; i++)
        sum += x[i];
    average = sum / MAX_ITEMS;
    cout << "The average value is " << average << endl << endl;
    cout << "Table of differences between x[i] and the average." << endl;
    cout << setw(4) << "i" << setw(8) << "x[i]" << setw(14) << "difference" << endl;
    for (int i = 0; i < MAX_ITEMS; i++)
        cout << setw(4) << i << setw(8) << x[i]
             << setw(14) << (x[i] - average) << endl;
    for (int i = 1; i < MAX_ITEMS; i++) // search for the smallest
        if (x[i] < x[minPos])
            minPos = i;
    cout << endl << "The smallest value is " << x[minPos]
         << " at subscript " << minPos << endl;
    return 0;
}