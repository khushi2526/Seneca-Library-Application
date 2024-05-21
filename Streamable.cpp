// Final Project Milestone 3
// Streamable Module
// File    Streamable.cpp
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

#include <iostream>
#include "Streamable.h"

namespace sdds
{
    Streamable::~Streamable() {}

    std::ostream& operator<<(std::ostream & os, const Streamable& s1)
    {
        if(s1)
        {
            s1.write(os);
        }
        return os;
    }

    std::istream& operator>>(std::istream& is, Streamable& s1)
    {
        s1.read(is);
        return is;
    }
}
