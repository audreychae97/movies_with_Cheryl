#ifndef DRAMA_H_
#define DRAMA_H_

#include "movie.h"

//---------------------------------------------------------------------------
// The class Drama stores information about each individual drama movie. It
// is a child of the Movie class.
//---------------------------------------------------------------------------

class Drama: public Movie {
public:
    Drama() {};
    virtual ~Drama() {};
};

#endif
