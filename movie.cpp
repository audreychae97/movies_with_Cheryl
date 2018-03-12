#include <string>
#include "movie.h"

//-------------------------Default Constructor---------------------------------
// TODO
Movie::Movie() {

}

//------------------------Destructor-------------------------------------------
// TODO
Movie::~Movie() {

}

//------------------------setTitle---------------------------------------------
// Sets the title
void Movie::setTitle(std::string title) {
    this->title = title;
}

//------------------------setDirector------------------------------------------
// Sets the director name
void Movie::setDirector(std::string director) {
    this->director = director;
}

//-------------------------setYear---------------------------------------------
// Sets the year
void Movie::setYear(int year) {
    this->year = year;
}

