<<<<<<< HEAD
#include<string>
using namespace std;
#include "movie.h";

#ifndef MOVIEFACTORY_H_
#define MOVIEFACTORY_H_
=======
#ifndef MOVIEFACTORY_H
#define MOVIEFACTORY_H

#include "movie.h"
#include "classic.h"
#include "drama.h"
#include "comedy.h"
>>>>>>> DEV

//---------------------------------------------------------------------------
//Class MovieFactory. Creates an object of Movie type and
// returns a pointer to the created object
//---------------------------------------------------------------------------
class MovieFactory {

public:
    MovieFactory();
<<<<<<< HEAD
    ~MovieFactory();

    static Movie* createMovie(string type);

    /* Pseudocode
    swith(type);
    case "c"
    Movie* m = new C, return m;
    case "d"
    Movie* m = new D, return m;
    case "f"
    Movie* m = new F, return m;
    */



};




#endif /* MOVIEFACTORY_H_ */
=======
    //virtual ~MovieFactory();
    static Movie* makeMovie(char type, std::string descr);
};

#endif
>>>>>>> DEV
