// Audrey Chae and Cheryl Mok CSS 343
// Date Created: February 27, 2018
// Last Modified: March 13, 2018

#include <string>
#include <iostream>
#include "classic.h"
#include <sstream>
#include <fstream>


//-----------------------------------------------------------------------------
// The Classic class stores information about each individual classic movie.
// This classs derives from the Movie class.
//-----------------------------------------------------------------------------

//--------------------Default Constructor--------------------------------------
Classic::Classic(){
    title = "";
    director = "";
    genre = '\0';
    year = -1;
    stock = -1;
    actorFirstName = "";
    actorLastName = "";
}

//--------------------Constructor----------------------------------------------
Classic::Classic(std::string descr){
    std::string sTitle;
    std::string sDirector;
    std::string tGenre;
    std::string rYear;
    std::string mStock;
    std::string fName;
    std::string lName;
    std::string mMonth;

    std::istringstream ss(descr);

    std::getline(ss, tGenre, ',');
    std::getline(ss, mStock, ',');
    std::getline(ss, sDirector, ',');
    std::getline(ss, sTitle, ',');
    std::getline(ss, fName, ' ');
    std::getline(ss, fName, ' ');
    std::getline(ss, lName, ' ');
    std::getline(ss, mMonth, ' ');
    std::getline(ss, rYear, ' ');

    genre = tGenre[0];
    stock = std::stoi(mStock);

    director = sDirector;
    title = sTitle;
    director = sDirector;
    actorFirstName = fName;
    actorLastName = lName;
    month = stoi(mMonth);
    year = stoi(rYear);
}

//---------------------Destructor----------------------------------------------
Classic::~Classic(){
}

//---------------------setFirstName--------------------------------------------
// Sets the firstName
void Classic::setFirstName(std::string firstName){
   actorFirstName = firstName;
}

//---------------------setLastName---------------------------------------------
// Sets the lastName
void Classic::setLastName(std::string lastName){
   actorFirstName = lastName;
}

//---------------------setMonth------------------------------------------------
// Sets the month
void Classic::setMonth(int month){
    this->month = month;
}

//--------------------Operator ==----------------------------------------------
// Equality operator; checks whether this object has the same data as other;
// based on release date, then major actor
bool Classic::operator ==(const Movie& other) const {
    const Classic& newMovie = dynamic_cast<const Classic&>(other);
    
    if (this == &newMovie) return true;

    return director == newMovie.getDirector() &&
	   title == newMovie.getTitle() &&
	   year == newMovie.getYear() && month == newMovie.getMonth();
}

//--------------------Operator >-----------------------------------------------
// Greater than operator; tests whether this object is greater than other; 
// based on release date, then major actor
bool Classic::operator >(const Movie& other) const{
    return !(*this < other);
}

//--------------------Operator <----------------------------------------------
// Less than operator; tests whether this object is less than other; based on
// release date, then major actor
bool Classic::operator <(const Movie& other) const{
    const Classic& newOther = dynamic_cast<const Classic&>(other);

    if (year > newOther.getYear()) {
	return true;
    } else if (year > newOther.getYear()) {
	return false;
    } else {
	if (month < newOther.getMonth()) {
	    return true;
	} else if (month > newOther.getMonth()) {
            return false;
	} else {
		if (actorFirstName < newOther.getFirstName() &&
			actorLastName < newOther.getLastName()) {
		    return true;
		} else if (actorFirstName > newOther.getFirstName() &&
			actorLastName > newOther.getLastName()) {
		    return false;
		}
	}
    }
    return false;
}

//--------------------print----------------------------------------------------
// Prints out the movie details
void Classic::print() const{
    std::cout << genre << " , " << stock <<" , " << director << " , ";
    std::cout << title << " , " << actorFirstName << " " << actorLastName;
    std::cout << " " << month << " " << year << std::endl;
}

