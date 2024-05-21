// Final Project Milestone 4
// Book Module
// File    Book.h
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

#ifndef SDDS_BOOK_H_
#define SDDS_BOOK_H_

#include "Publication.h"
#include "Date.h"
#include "Lib.h"

namespace sdds
{
    class Book : public Publication
    {
        char* m_authorName;
    public:
        Book();
        Book(const Book& );
        Book& operator=(const Book& );
        ~Book();
        bool conIO(std::ios& ) const;
        char type() const;
        std::ostream& write(std::ostream& ) const;
        std::istream& read(std::istream& );
        void set(int );
        operator bool() const;
    };
}
#endif
