#include<string>
using namespace std;
#include "movie.h";

#ifndef DRAMA_H_
#define DRAMA_H_

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