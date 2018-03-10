#ifndef CLASSIC_H_
#define CLASSIC_H_

#include <string>
#include "movie.h"

//---------------------------------------------------------------------------
//Class Classic, stores the information about each individual classic movie.
// A child class to Movies, has additional properties : Major Actor and month.
//---------------------------------------------------------------------------

class Classic: public Movie {
private:
    std::string actor;
    int month;

public:
    Classic();
    virtual ~Classic();

    // Setters
    void setActor(std::string);
    void setMonth(int month);

    // Getters
    std::string getActor() const;
    int getMonth() const;
};

#endif
