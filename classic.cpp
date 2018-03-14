// Audrey Chae and Cheryl Mok CSS 343
// Date Created: February 27, 2018
// Last Modified: March 13, 2018

#include <string>
#include <iostream>
#include "classic.h"
#include <sstream>
using namespace std;

Classic::Classic(){
    title = "";
    director = "";
    genre = '\0';
    year = -1;
    stock = -1;
    actorFirstName = "";
    actorLastName = "";
}
Classic::Classic(string descr){
    string sTitle;
    string sDirector;
    string tGenre;
    string rYear;
    string mStock;
    string fName;
    string lName;
    string mMonth;

    istringstream ss(descr);

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
    stock = stoi(mStock);

    director = sDirector;
    title = sTitle;
    director = sDirector;
    actorFirstName = fName;
    actorLastName = lName;
    month = stoi(mMonth);
    year = stoi(rYear);
}
Classic::~Classic(){

}
// Setters
void Classic::setFirstName(std::string firstName){
   actorFirstName = firstName;
}
void Classic::setLastName(std::string lastName){
   actorFirstName = lastName;
}
void Classic::setMonth(int month){
    this->month = month;
}
bool Classic::operator==(const Movie& movieThing){
    //what are the criterias for an equal movie ?
}
bool Classic::operator>(const Movie& movieThing){

}
bool Classic::operator<(const Movie& movieThing){

}
void Classic::print() const{
    std::cout << "inside print: " << director << std::endl;
    std::cout << genre << " , " << stock <<" , " << director << " , "<< title << " , " <<
              actorFirstName << " " << actorLastName << " " << month << " " << year << std::endl;
}
