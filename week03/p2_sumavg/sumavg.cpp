// File: sumavg.cpp
// Sum and average of two numbers, each computed by a function.

#include <iostream>

using namespace std;

float computeSum(float x, float y);
float computeAverage(float x, float y);

int main()
{
    float x, y, sum, mean;
    cout << "Enter the first integer: ";
    cin >> x;
    cout << "Enter the second integer: ";
    cin >> y;
    sum = computeSum(x, y);
    mean = computeAverage(x, y);
    cout << "Sum is " << sum << endl;
    cout << "Average is " << mean << endl;
    return 0;
}

float computeSum(float x, float y)
{
    return (x + y);
}

float computeAverage(float x, float y)
{
    return ((x + y) / 2.0);
}