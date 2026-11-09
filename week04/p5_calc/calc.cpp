// File: calc.cpp
// A four-function calculator selected with a switch.

#include <iostream>

using namespace std;

int main()
{
    char op;              // input: + - * /
    double num1, num2;    // input: the two operands
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    switch (op)
    {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 == 0)
                cout << "Error: division by zero" << endl;
            else
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            break;
        default:
            cout << "Error: invalid operator" << endl;
    }
    return 0;
}
