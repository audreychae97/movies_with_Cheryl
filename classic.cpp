// Audrey Chae and Cheryl Mok CSS 343
// Date Created: February 27, 2018
// Last Modified: March 13, 2018

#include <string>
#include <iostream>
#include "classic.h"
#include <sstream>

//--------------------Default Constructor--------------------------------------
Classic::Classic(){
    title = "";
    director = "";
    genre = '\0';
    year = -1;
    stock = -1;
    firstName = "";
    lastName = "";
}

//--------------------Constructor----------------------------------------------
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
    std::getline(ss, lName, ' ');
    std::getline(ss, mMonth, ' ');
    std::getline(ss, rYear, ' ');

//    genre = tGenre[0];
//    stock = stoi(mStock);
//    director = sDirector;
//    title = sTitle;
//    director = sDirector;
//    firstName = fName;
//    lastName = lName;
//    month = stoi(mMonth);
//    year = stoi(rYear);
}

//---------------------Destructor----------------------------------------------
Classic::~Classic(){

}
//---------------------setFirstName--------------------------------------------
// Sets the firstName
void Classic::setFirstName(std::string firstName){
    this->firstName = firstName;
}

//---------------------setLastName---------------------------------------------
// Sets the lastName
void Classic::setLastName(std::string lastName){
    this->lastName = lastName;
}

//---------------------setMonth------------------------------------------------
// Sets the month
void Classic::setMonth(int month){
    this->month = month;
}

//--------------------Operator =-----------------------------------------------
bool Classic::operator==(const Movie& movieThing){
    //what are the criterias for an equal movie ?
}

//--------------------Operator >-----------------------------------------------
bool Classic::operator>(const Movie& movieThing){

}

//--------------------Operator <----------------------------------------------
bool Classic::operator<(const Movie& movieThing){

}

//--------------------print----------------------------------------------------
// Prints out the movie details
void Classic::print() const{
    std::cout << genre << " , " << stock <<" , " << director <<" , "; 
    std::cout << title << " , " << firstName << " " << lastName << " ";
    std::cout << month << " " << year << std::endl;
}
