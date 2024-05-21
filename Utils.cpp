// Final Project Milestone 1
// Utils Module
// File    Utils.cpp
// Version 1.0
// Full Name  : Khushi Shaileshkumar Kotadia
// Student ID#: 167632215
// Email      : kkotadia@mysenca.ca
// Section    : NHH
//
// Revision History
// -----------------------------------------------------------
// Name               Date                 Reason
//
// -----------------------------------------------------------

#include "Utils.h"
using namespace std;
namespace sdds {
    int getInteger()
    {
        int p;
        cin >> p;
        while (cin.fail() || cin.get() != '\n')
        {
            if (cin.fail())
                cout << "Invalid Selection, try again: ";
            cin.clear();
            cin.ignore(10000, '\n');
            cin >> p;
        }
        return p;
    }

    int getIntegerRange(int Min, int Max)
    {
        int i = getInteger();
        while (i < Min || i > Max)
        {
            cout << "Invalid Selection, try again: ";
            i = getInteger();
        }
        return i;
    }
}
