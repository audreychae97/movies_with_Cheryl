#ifndef CLASSIC_H_
#define CLASSIC_H_

#include <string>
#include <sstream>
#include "movie.h"

//---------------------------------------------------------------------------
//Class Classic, stores the information about each individual classic movie.
// A child class to Movies, has additional properties : Major Actor and month.
//---------------------------------------------------------------------------

class Classic: public Movie {
private:
    std::string majorActor;
    int month;

public:
    Classic();
    Classic(std::string descr);
    virtual ~Classic();

    // Setters
    void setActor(std::string);
    void setMonth(int month);

    // Getters
    std::string getActor() const { return majorActor; };
    int getMonth() const { return month; };
    bool operator==(const Movie& movieThing);
    bool operator>(const Movie& movieThing);
    bool operator<(const Movie& movieThing);
    void movieMaker(std::string descr);
    void print();
};

#endif
