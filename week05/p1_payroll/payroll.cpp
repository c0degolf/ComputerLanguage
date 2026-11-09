// File: payroll.cpp
// Total salary of all employees — a counting loop with for.

#include <iostream>

using namespace std;

int main()
{
    int numberEmp;                   // input: number of employees
    float workHour, hourlyWage;      // input: per employee
    float totalSalary = 0.0;        // output: accumulator
    int countEmp;                    // loop control variable
    cout << "How many employees were hired?: ";
    cin >> numberEmp;
    for (countEmp = 1; countEmp <= numberEmp; countEmp++)
    {
        cout << "The hours worked by the #" << countEmp << " employee: ";
        cin >> workHour;
        cout << "The hourly wage of the #" << countEmp << " employee: ";
        cin >> hourlyWage;
        cout << "The wage paid to the #" << countEmp << " employee is $"
             << workHour * hourlyWage << endl;
        totalSalary = totalSalary + workHour * hourlyWage;
    }
    cout << "Total salary is $" << totalSalary << endl;
    return 0;
}
