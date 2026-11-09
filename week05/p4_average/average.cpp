// File: average.cpp
// Average of scores entered until the sentinel -1.

#include <iostream>

using namespace std;

int main()
{
    const int SENTINEL = -1;  // means "no more scores"
    int score;                // input: one score
    int sum = 0;              // accumulator
    int count = 0;            // how many scores were read
    cout << "Enter scores, -1 to stop: ";
    cin >> score;
    while (score != SENTINEL)
    {
        sum += score;
        count++;
        cin >> score;
    }
    if (count == 0)
        cout << "No scores were entered." << endl;
    else
        cout << count << " scores, average = "
             << sum / (float) count << endl;
    return 0;
}
