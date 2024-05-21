// Final Project Milestone 3
// Streamable Module
// File    Streamable.h
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

#ifndef SDDS_STREAMABLE_H_
#define SDDS_STREAMABLE_H_
#include <iostream>

using namespace std;
namespace sdds
{
    class Streamable{
    public:
        virtual std::ostream& write(std::ostream& ) const = 0;
        virtual std::istream& read(std::istream& ) = 0;
        virtual bool conIO(std::ios& )const = 0;
        virtual operator bool() const = 0;
        virtual ~Streamable();
    };
    std::ostream& operator<<(std::ostream& ,const Streamable& );
    std::istream& operator>>(std::istream& , Streamable& );
}


#endif /* SDDS_STREAMABLE_H_ */
