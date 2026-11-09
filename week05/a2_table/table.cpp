// File: table.cpp
// Multiplication table with do-while input validation and for loop.

#include <iostream>

using namespace std;

int main()
{
    int n;  // input: 1 to 9
    do
    {
        cout << "Enter a number (1-9): ";
        cin >> n;
        if (n < 1 || n > 9)
            cout << "Not between 1 and 9, try again." << endl;
    } while (n < 1 || n > 9);
    for (int i = 1; i <= 9; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}
