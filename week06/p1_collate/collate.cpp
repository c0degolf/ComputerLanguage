// File: collate.cpp
// Displays the printable ASCII characters, codes 32 to 126.

#include <iostream>

using namespace std;

int main()
{
    const int MIN = 32;   // smallest numeric code — the space
    const int MAX = 126;  // largest numeric code — the tilde
    char nextChar;        // output: character form of next code
    for (int nextCode = MIN; nextCode <= MAX; nextCode++)
    {
        nextChar = char(nextCode); // int -> char
        cout << nextChar;
        if (nextChar == 'Z')       // break the line after Z
            cout << endl;
    }
    cout << endl;
    cout << "'A' is " << int('A') << ", 'a' is " << int('a')
         << ", '0' is " << int('0') << endl; // char -> int
    return 0;
}

