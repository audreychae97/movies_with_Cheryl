#ifndef COMEDY_H_
#define COMEDY_H_

#include "movie.h"

//---------------------------------------------------------------------------
//Class Comedy, stores the information about each individual comedy movie.
// A child class to Movies.
//---------------------------------------------------------------------------

class Comedy: public Movie {
public:    
    Comedy() {};
    virtual ~Comedy() {};
};

#endif
