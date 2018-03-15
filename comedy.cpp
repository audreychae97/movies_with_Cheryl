// Audrey Chae and Cheryl Mok CSS 343
// Date Created: February 27, 2018
// Last Modified: March 14, 2018

#include "comedy.h"
#include <iostream>
#include <sstream>

//----------------------------------------------------------------------------
// The Comedy class stores information about each individual comedy movie. 
// This class derives from the Movie class.
//----------------------------------------------------------------------------

//-----------------------Default Constructor-----------------------------------
Comedy::Comedy(){
    //inherited from movie parent class
}

//-----------------------Operator ==-------------------------------------------
// Checks whether this movie has the same data as otherMovie
bool Comedy::operator ==(const Movie& otherMovie) const {
   return  title == otherMovie.getTitle() && 
	   director == otherMovie.getDirector() &&
	   genre == otherMovie.getGenre() && year == otherMovie.getYear();
}

//-----------------------Operator >--------------------------------------------
// Tests whether this object is greater than the otherMovie; based on title,
// then year it was released
bool Comedy::operator >(const Movie& otherMovie) const {
    if (title != otherMovie.getTitle()) {
        return title > otherMovie.getTitle();
    } else if (year != otherMovie.getYear()) {
        return year > otherMovie.getYear();
    } else {
        return false;
    }
}

//-----------------------Operator <--------------------------------------------
// Tests whether this object is less than the otherMovie; based on title, then 
// year it was released
bool Comedy::operator <(const Movie& otherMovie) const {
    return !(*this > otherMovie);
}
void Comedy::print(){

}
