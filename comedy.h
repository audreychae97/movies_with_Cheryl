#include<string>
using namespace std;
#include "movie.h";

#ifndef COMEDY_H_
#define COMEDY_H_

//---------------------------------------------------------------------------
//Class Comedy, stores the information about each individual comedy movie.
// A child class to Movies.
//---------------------------------------------------------------------------

class Comedy: public Movie {

    // setters
    void setTitle(string);
    void setDirector(string);
    void setYear(int year);

    //getters
    string getTitle() const;
    string getDirector() const;
    int getYear() const;

};





#endif /* COMEDY_H_ */