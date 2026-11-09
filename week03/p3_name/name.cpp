// File: name.cpp
// Greets the user and shows the length of the name.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hello, " << name << endl;
    cout << "Name length: " << name.length()
         << " characters" << endl;
    return 0;
}