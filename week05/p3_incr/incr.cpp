// File: incr.cpp
// Prefix ++x versus postfix x++ inside a do-while loop.

#include <iostream>

using namespace std;

int main()
{
    int prefix = 0;
    int postfix = 0;
    cout << "Prefix increment example:" << endl;
    do
    {
        cout << "Before increment, prefix: " << prefix << endl;
        cout << " Incrementing with prefix: " << ++prefix << endl;
    } while (prefix < 3);
    cout << endl;
    cout << "Postfix increment example:" << endl;
    do
    {
        cout << "Before increment, postfix: " << postfix << endl;
        cout << " Incrementing with postfix: " << postfix++ << endl;
    } while (postfix < 3);
    return 0;
}
