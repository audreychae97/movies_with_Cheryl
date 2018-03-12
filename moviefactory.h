#ifndef MOVIEFACTORY_H
#define MOVIEFACTORY_H

#include "movie.h"

//---------------------------------------------------------------------------
//Class MovieFactory. Creates an object of Movie type and
// returns a pointer to the created object
//---------------------------------------------------------------------------
class MovieFactory {

public:
    MovieFactory() {};
    virtual ~MovieFactory();

    static Movie* createMovie(char type) {
        switch(type) {
	    case 'c':
	        return new Comedy();
	}
    /* Pseudocode
    swith(type);
    case "c"
    Movie* m = new C, return m;
    case "d"
    Movie* m = new D, return m;
    case "f"
    Movie* m = new F, return m;
    */
    }


};

#endif
