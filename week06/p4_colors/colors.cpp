// File: colors.cpp
// Reads and displays eye and hair colors with an enumeration.

#include <iostream>
#include <cctype>

using namespace std;

enum color {red, green, blue, yellow};

void writeColor(color thisColor); // IN: color to display
color readColor();                // returns the color typed

int main()
{
    color eyeColor, hairColor;
    cout << "Reading eye color" << endl;
    eyeColor = readColor();
    cout << endl << "Reading hair color" << endl;
    hairColor = readColor();
    cout << endl << "Eye color is ";
    writeColor(eyeColor);
    cout << ", hair color is ";
    writeColor(hairColor);
    cout << endl;
    return 0;
}

// Displays the name of thisColor
void writeColor(color thisColor)
{
    switch (thisColor)
    {
    case red: cout << "red"; break;
    case green: cout << "green"; break;
    case blue: cout << "blue"; break;
    case yellow: cout << "yellow"; break;
    default: cout << "*** ERROR: Invalid color value.";
    }
}

// Keeps asking until the user types R, G, B or Y
color readColor()
{
    char colorChar; // the letter the user typed
    do
    {
        cout << "Enter first letter of color (R, G, B, or Y): ";
        cin >> colorChar;
        colorChar = toupper(colorChar);
        switch (colorChar)
        {
        case 'R': return red;
        case 'G': return green;
        case 'B': return blue;
        case 'Y': return yellow;
        default: cout << "Try again!" << endl;
        }
    } while (true);
}

