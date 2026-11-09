// File: name.cpp
// Reads student number and name, then displays them as [student number]_[name].

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string student_id, student_name;

    cout << "Enter your student number: ";
    getline(cin, student_id);

    cout << "Enter your name: ";
    getline(cin, student_name);

    cout << student_id << "_" << student_name << endl;

    return 0;
}