<<<<<<< HEAD
#include<string>
using namespace std;
#include "movie.h";
=======
// Audrey Chae and Cheryl Mok CSS 343
// Date Created: February 27, 2018
// Last Modified: March 14, 2018
>>>>>>> DEV

#ifndef DRAMA_H_
#define DRAMA_H_

<<<<<<< HEAD
//---------------------------------------------------------------------------
//Class Drama, stores the information about each individual drama movie.
// A child class to Movies.
//---------------------------------------------------------------------------

class Drama: public Movie {
public:
    Drama();
    ~Drama();

    // setters
    void setTitle(string);
    void setDirector(string);
    void setYear(int year);

    //getters
    string getTitle() const;
    string getDirector() const;
    int getYear() const;

};



#endif /* DRAMA_H_ */
=======
#include "movie.h"

//-----------------------------------------------------------------------------
// The Drama class stores information about each individual drama movie. This
// class is derived from the Movie class
//-----------------------------------------------------------------------------

class Drama: public Movie {
public:
    Drama();					// Default Constructor
    Drama(std::string descr):Movie(descr){}	// Constructor w/ 1 param
    virtual ~Drama(){};				// Destructor
    bool operator ==(const Movie& movieThing) const;	// Equality operator
    bool operator >(const Movie& movieThing) const;	// Greater than oper
    bool operator <(const Movie& movieThing) const;	// Less than operator
    void print();					// Prints its data
};
#endif

>>>>>>> DEV
