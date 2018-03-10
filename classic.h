#include<string>
using namespace std;
#include "movie.h";

#ifndef CLASSIC_H_
#define CLASSIC_H_

//---------------------------------------------------------------------------
//Class Classic, stores the information about each individual classic movie.
// A child class to Movies, has additional properties : Major Actor and month.
//---------------------------------------------------------------------------

class Classic: public Movie {
private:
    string actor;
    int month;

public:
    Classic();
    ~Classic();

    //setters
    void setTitle(string);
    void setDirector(string);
    void setYear(int year);
    void setActor(string);
    void setMonth(int month);

    //getters
    string getTitle() const;
    string getDirector() const;
    int getYear() const;
    string getActor() const;
    int getMonth() const;


};



#endif /* CLASSIC_H_ */