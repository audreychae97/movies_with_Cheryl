// Audrey Chae and Cheryl Mok CSS 343
// Date Created: February 27, 2018
// Last Modified: March 14, 2018

#ifndef COMEDY_H_
#define COMEDY_H_

#include "movie.h"

//-----------------------------------------------------------------------------
// The Comedy class stores information about each individual comedy movie.
// This class derives from the Movie class.
//-----------------------------------------------------------------------------

class Comedy: public Movie {
public:   
    Comedy();					// Default Constructor 
    Comedy(std::string descr):Movie(descr) {}	// Constructor w/ 1 param
    virtual ~Comedy() {};			// Destructor
    bool operator ==(const Movie& movieThing) const;	// Equality operator
    bool operator >(const Movie& movieThing) const;	// Greater than oper
    bool operator <(const Movie& movieThing) const;	// Less than operator
    void print();					// prints out its data
};

#endif
