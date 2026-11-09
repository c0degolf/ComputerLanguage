// File: charinfo.cpp
// Reads one character and reports its code, kind, and other case.

#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char ch; // input: any printable character
    cout << "Enter a character: ";
    cin >> ch;
    cout << "Code: " << int(ch) << endl; // char -> int
    if (isdigit(ch))
        cout << "Kind: digit, value " << ch - '0' << endl;
    else if (isupper(ch))
        cout << "Kind: uppercase letter, lowercase is "
             << char(tolower(ch)) << endl;
    else if (islower(ch))
        cout << "Kind: lowercase letter, uppercase is "
             << char(toupper(ch)) << endl;
    else
        cout << "Kind: other (punctuation or symbol)" << endl;
    return 0;
}

