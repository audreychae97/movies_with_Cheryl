// Audrey Chae and Cheryl Mok CSS 343
// Date Created: February 27, 2018
// Last Modified: March 14, 2018

#ifndef COMEDY_H_
#define COMEDY_H_

#include "movie.h"

//---------------------------------------------------------------------------
//Class Comedy, stores the information about each individual comedy movie.
// A child class to Movies.
//---------------------------------------------------------------------------

class Comedy: public Movie {
public:    
    Comedy();
    Comedy(std::string descr):Movie(descr) {}
    virtual ~Comedy() {};
    bool operator==(const Movie& movieThing);
    bool operator>(const Movie& movieThing);
    bool operator<(const Movie& movieThing);
    void print();
};

#endif
