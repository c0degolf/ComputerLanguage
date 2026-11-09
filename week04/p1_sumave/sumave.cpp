// File: sumave.cpp
// Sum and average of two numbers — one function, two outputs.

#include <iostream>

using namespace std;

void computeSumAve(float num1, float num2, float& sum, float& average);

int main()
{
    float x, y;        // input - the two numbers
    float sum, mean;   // output - filled in by computeSumAve
    cout << "Enter 2 numbers: ";
    cin >> x >> y;
    computeSumAve(x, y, sum, mean);
    cout << "Sum is " << sum << endl;
    cout << "Average is " << mean << endl;
    return 0;
}

// Computes the sum and average of num1 and num2
void computeSumAve(float num1, float num2,  // IN
                   float& sum, float& average) // OUT
{
    sum = num1 + num2;
    average = sum / 2.0;
}
