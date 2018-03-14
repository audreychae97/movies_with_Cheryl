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
    std::string firstName;
    std::string lastName;
    int month;

public:
    Classic();
    Classic(std::string descr);
    virtual ~Classic();

    // Setters
    void setFirstName(std::string);
    void setLastName(std::string);
    void setMonth(int month);

    // Getters
    std::string getFirstName() const { return firstName; };
    std::string getLastName() const { return lastName; };
    int getMonth() const { return month; };
    bool operator==(const Movie& movieThing);
    bool operator>(const Movie& movieThing);
    bool operator<(const Movie& movieThing);
    void movieMaker(std::string descr);
    void print() const;
};

#endif
