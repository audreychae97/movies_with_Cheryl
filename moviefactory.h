#ifndef MOVIEFACTORY_H
#define MOVIEFACTORY_H

#include "movie.h"
#include "classic.h"
#include "drama.h"
#include "comedy.h"

//---------------------------------------------------------------------------
//Class MovieFactory. Creates an object of Movie type and
// returns a pointer to the created object
//---------------------------------------------------------------------------
class MovieFactory {

public:
    MovieFactory();
    //virtual ~MovieFactory();
    static Movie* makeMovie(char type, std::string descr);
};

#endif
