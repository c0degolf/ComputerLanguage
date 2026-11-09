// File: triangle.cpp
// Prints a left-aligned number triangle with nested for loops.

#include <iostream>

using namespace std;

int main()
{
    int rows;  // input: number of rows
    cout << "Enter number of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
            if (j < i)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
