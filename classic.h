<<<<<<< HEAD
#include<string>
using namespace std;
#include "movie.h";
=======
// Audrey Chae and Cheryl Mok CSS 343
// Date Created: February 27, 2018
// Last Modified: March 13, 2018
>>>>>>> DEV

#ifndef CLASSIC_H_
#define CLASSIC_H_

<<<<<<< HEAD
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
=======
#include <string>
#include <sstream>
#include "movie.h"

//---------------------------------------------------------------------------
// The Classic class stores information about each individual classic movie.
// This class derives from the Movie class.
//---------------------------------------------------------------------------
class Movie;

class Classic: public Movie {
    private:
        std::string actorFirstName;		// Stores first name of actor
        std::string actorLastName;		// Stores last name of actor
        int month;				// Stores month of release date

    public:
        Classic();				// Default Constructor
        Classic(std::string descr);		// Constructor w/ 1 param
        virtual ~Classic();			// Destructor

        // Setters
        void setFirstName(std::string);	// Sets actor's first name
        void setLastName(std::string);	// Sets actor's last name
        void setMonth(int month);	// Sets release date month

        // Getters
        std::string getFirstName() const { return actorFirstName; };// gets fName
        std::string getLastName() const { return actorLastName; }; // gets lName
        int getMonth() const { return month; };			// gets month

        // Methods
        bool operator ==(const Movie& other) const;// Equality operator
        bool operator >(const Movie& other) const; // Greater than oper
        bool operator <(const Movie& other) const; // Less than operator
        void print() const;		     	   // Prints out its data
};
#endif

>>>>>>> DEV
