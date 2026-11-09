// File: password.cpp
// A password check with a limited number of attempts.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const string PASSWORD = "cpp123";  // the correct password
    const int MAX_TRIES = 3;           // maximum allowed attempts
    string input;                      // what the user types
    int tries = 0;                     // attempts so far
    while (tries < MAX_TRIES)
    {
        cout << "Input password (attempt " << tries + 1
             << " of " << MAX_TRIES << "): ";
        cin >> input;
        if (input == PASSWORD)
        {
            cout << "Welcome!" << endl;
            return 0;
        }
        else
            cout << "Password was wrong." << endl;
        tries++;
    }
    cout << "Failed " << MAX_TRIES << " times. Access blocked." << endl;
    return 0;
}
