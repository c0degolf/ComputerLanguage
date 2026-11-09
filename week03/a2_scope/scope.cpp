// File: scope.cpp
// Computes the total price of an order with tax.

// Error Explanation
// 'subtotal' is declared as a local variable inside readOrder(), so its scope is limited to that function.
// Therefore, applyTax() cannot see or access 'subtotal', resulting in a compilation error.

#include <iostream>

using namespace std;

const float TAX_RATE = 0.1;

float readOrder();
float applyTax(float subtotal);

int main()
{
    float subtotal = readOrder();
    cout << "Total with tax: " << applyTax(subtotal) << endl;
    return 0;
}

float readOrder()
{
    float price;
    int quantity;
    cout << "Enter unit price: ";
    cin >> price;
    cout << "Enter quantity: ";
    cin >> quantity;
    float subtotal = price * quantity;
    return subtotal;
}

float applyTax(float subtotal)
{
    return subtotal * (1 + TAX_RATE);
}