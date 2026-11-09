// File: student.cpp
// Reads and displays one student's name, age and score using a struct.

#include <iostream>
#include <string>

using namespace std;

struct Student // one record, three members
{
    string name;
    int age;
    double score;
};

void readStudent(Student& s); // OUT: fills all members
void showStudent(Student s);  // IN: displays all members

int main()
{
    Student s1; // a variable of the new type
    readStudent(s1);
    showStudent(s1);
    return 0;
}

void readStudent(Student& s) // reference: main's s1 is filled
{
    cout << "Enter name: ";
    cin >> s.name; // one word
    cout << "Enter age: ";
    cin >> s.age;
    cout << "Enter score: ";
    cin >> s.score;
}

void showStudent(Student s) // value: a copy is enough
{
    cout << endl << "=== Student Data ===" << endl;
    cout << "Name:  " << s.name << endl;
    cout << "Age:   " << s.age << endl;
    cout << "Score: " << s.score << endl;
}