// File: messages.cpp
// Encrypts messages by shifting each character one code up.

#include <iostream>
#include <string>

using namespace std;

struct Message // one message, two versions of it
{
    string original;
    string encrypted;
};

int main()
{
    const int SIZE = 3; // number of messages
    Message msg[SIZE];  // an array of structs
    int len;            // length of the current message
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter message " << i + 1 << ": ";
        getline(cin, msg[i].original); // a whole line, spaces included
    }
    for (int i = 0; i < SIZE; i++) // encrypt each message
    {
        msg[i].encrypted = msg[i].original; // start from a copy
        len = msg[i].encrypted.length();
        for (int j = 0; j < len; j++)
            msg[i].encrypted[j] = char(msg[i].encrypted[j] + 1);
    }
    cout << endl << "=== Encrypted Messages ===" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Original:  " << msg[i].original << endl;
        cout << "Encrypted: " << msg[i].encrypted << endl;
        cout << "--------------------------" << endl;
    }
    return 0;
}