#include "movieList.h"
#include "moviefactory.h"
#include <vector>
#include <sstream>
#include <iostream>
#include <fstream>
using namespace std;

MovieList::MovieList(){
    //vector, so  no need to instantiate values to null ...
}
MovieList::~MovieList(){

}
bool MovieList::addMovie(std::string movieDescription){
    //create a new movie pointer
    MovieFactory mFactory;
    char mType;

    istringstream ss(movieDescription);
    ss >> mType;

    Movie *newMovie = mFactory.makeMovie(mType, movieDescription);
    //push to vector at correct genre bucket
    switch(mType){
        case 'D':   //Drama is the bucket at Index 0
            movieList.at(DRAMA_INDEX).push_back(newMovie);
            return true;
        case 'C':   //Classic is the bucket at index 1
            movieList.at(CLASSIC_INDEX).push_back(newMovie);
            return true;
        case 'F':   //Comedy is the bucket at index 2
            movieList.at(COMEDY_INDEX).push_back(newMovie);
            return true;
        default:
            //need to push the product into a new bucket/.. for a new genre.
            //not going to worry about this yet
            cout << "new genre!" << endl;
            return false;
    }
}
bool MovieList::addStock(std::string movieTitle, char genreType){

}
bool MovieList::removeStock(){

}
void MovieList::printByGenre(char type){

}
