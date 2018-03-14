// Audrey Chae and Cheryl Mok CSS 343
// Date Created: February 27, 2018
// Last Modified: March 13, 2018

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
    std::string actorFirstName;
    std::string actorLastName;
    std::string director;
    int month;
    int year;

public:
    Classic();
    Classic(std::string descr);
    virtual ~Classic();

    // Setters
    void setFirstName(std::string);
    void setLastName(std::string);
    void setMonth(int month);

    // Getters
    std::string getFirstName() const { return actorFirstName; };
    std::string getLastName() const { return actorLastName; };
    int getMonth() const { return month; };
    bool operator==(const Movie& movieThing);
    bool operator>(const Movie& movieThing);
    bool operator<(const Movie& movieThing);
    void movieMaker(std::string descr);
    void print() const;
};

#endif
