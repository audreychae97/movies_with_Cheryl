#include <string>
#include <iostream>
#include "movie.h"
#include <sstream>
#include <fstream>
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
    string tGenre;
    string rYear;
    string mStock;

    istringstream ss(descr);

    std::getline(ss, tGenre, ',');
    std::getline(ss, mStock, ',');
    std::getline(ss, sDirector, ',');
    std::getline(ss, sTitle, ',');
    std::getline(ss, rYear, ',');

    title = sTitle;
    director = sDirector;
    genre = tGenre[0];
    year = stoi(rYear);
    stock = stoi(mStock);
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

void Movie::print() const{
    std::cout << genre << ", " << stock << ", " << title << ", " << director << ", " << title << ", "
              << year << endl;
 }



