#include <string>
#include <iostream>
#include "movie.h"
#include <sstream>
using namespace std;

//-------------------------Default Constructor---------------------------------
// TODO
Movie::Movie() {
    title = "";
    director = "";
    genre = '\0';
    year = 0;
}
Movie::Movie(std::string descr){
    string sTitle;
    string sDirector;
    char tGenre;
    int rYear;
    int mStock;

    istringstream ss(descr);
    ss >> sTitle;
    ss >> sDirector;
    ss >> tGenre;
    ss >> rYear;
    ss >> mStock;

    title = sTitle;
    director = sDirector;
    genre = tGenre;
    year = rYear;
    stock = mStock;
}

//------------------------Destructor-------------------------------------------
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

//-------------------------setGenre--------------------------------------------
void Movie::setGenre(char genre) {
    this->genre = genre;
}

//void Movie::print(){
//    std::cout << genre << "," << stock << "," << director << "," <<
//              title << "," << year << std::endl;
//}


