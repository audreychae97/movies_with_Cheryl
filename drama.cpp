// Audrey Chae and Cheryl Mok CSS 343
// Date Created: February 27, 2018
// Last Modified: March 14, 2018

#include "drama.h"

//-----------------------------------------------------------------------------
// The Drama class stores information about each individual drama movie. This 
// class is derived from the Movie class.
//-----------------------------------------------------------------------------
Drama::Drama(){
    //inherited from movie parent class
}
//----------------------Operator ==--------------------------------------------
// Equality operator; tests whether this drama class has the same data as other
bool Drama::operator ==(const Movie& other) const{
    return title == other.getTitle() && director == other.getDirector() &&
	    genre == other.getGenre() && year == other.getYear();
}

//----------------------Operator >---------------------------------------------
// Greater than operator; tests whether this drama object is greater than
// other (based on director, then title)
bool Drama::operator >(const Movie& other) const{
    if (director != other.getDirector()) {
        return director > other.getDirector();
    } else if (title != other.getTitle()) {
        return title > other.getTitle();
    } else {
	    return false;
    }
}

//---------------------Operator <----------------------------------------------
// Less than operator; tests whether this drama class is less than other;
// based on director,then title
bool Drama::operator <(const Movie& other) const{
    return !(*this > other);
}
void Drama::print(){

}