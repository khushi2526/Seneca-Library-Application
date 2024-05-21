// Final Project Milestone 3
// Lib Module
// File    Lib.h
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

#ifndef SDDS_LIB_H_
#define SDDS_LIB_H_

namespace sdds
{
    const int SDDS_MAX_LOAN_DAYS = 15;
         // maximum number of day a publication can be borrowed with no penalty
    const int SDDS_TITLE_WIDTH = 30;
        // The width in which the title of a publication should be printed on the console
    const int SDDS_AUTHOR_WIDTH = 15;
        // The width in which the author name of a book should be printed on the console
    const int SDDS_SHELF_ID_LEN = 4;
       // The width in which the shelf id of a publication should be printed on the console
    const int SDDS_LIBRARY_CAPACITY = 5000;
       // Maximum number of publications the library can hold.
}

#endif /* SDDS_LIB_H_ */
