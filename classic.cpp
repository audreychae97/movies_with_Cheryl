#include <string>
#include <iostream>
#include "classic.h"
#include <sstream>
using namespace std;

Classic::Classic(){
    title = "";
    director = "";
    genre = 'c';	//TODO CHANGE BACK TO ''
    year = -1;
    stock = -1;
    majorActor = "";
}
Classic::Classic(string descr):Movie(descr) {
    string sTitle;
    string sDirector;
    char tGenre;
    int rYear;
    int mStock;
    string mActor;

    istringstream ss(descr);
    ss >> sTitle;
    ss >> sDirector;
    ss >> tGenre;
    ss >> rYear;
    ss >> mStock;
    ss >> mActor;

    title = sTitle;
    director = sDirector;
    genre = tGenre;
    year = rYear;
    stock = mStock;
    majorActor = mActor;
}
Classic::~Classic(){

}
// Setters
void Classic::setActor(std::string actor){
    this->majorActor = actor;
}
void Classic::setMonth(int month){
    this->month = month;
}
void Classic::print(){
    cout << genre << "," << stock << "," << director << "," <<
              title << "," << majorActor << " " << year << endl;
}
bool Classic::operator==(const Movie& movieThing){
    //what are the criterias for an equal movie ?
}
bool Classic::operator>(const Movie& movieThing){

}
bool Classic::operator<(const Movie& movieThing){

}
