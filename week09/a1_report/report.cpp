// File: report.cpp
// Student report with three scores, average displayed with two decimals.

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int NUM_SCORES = 3; // scores per student

struct Student
{
    string name;
    int age;
    double score[NUM_SCORES];
};

void readStudent(Student& s);      // OUT: name, age, scores
double averageScore(Student s);    // IN: returns the average
void showReport(Student s);        // IN: name, age, average

int main()
{
    Student s1;
    readStudent(s1);
    showReport(s1);
    return 0;
}

void readStudent(Student& s)
{
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter age: ";
    cin >> s.age;
    cout << "Enter " << NUM_SCORES << " subject scores: ";
    for (int i = 0; i < NUM_SCORES; i++)
        cin >> s.score[i];
}

double averageScore(Student s)
{
    double sum = 0.0;
    for (int i = 0; i < NUM_SCORES; i++)
        sum += s.score[i];
    return sum / NUM_SCORES;
}

void showReport(Student s)
{
    cout << endl << "=== Student Info ===" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << fixed << setprecision(2);
    cout << "Average Score: " << averageScore(s) << endl;
}
