#include "movieList.h"
#include "moviefactory.h"
#include <vector>
#include <sstream>
#include <iostream>
#include <fstream>

//----------------------Constructor--------------------------------------------
MovieList::MovieList(){
}

//----------------------Destructor---------------------------------------------
MovieList::~MovieList(){
    for (int genre = 0; genre < 3; genre++) {
        for (int movieIndex = 0; movieIndex < movieList.at(genre).size();
			movieIndex++) {
	    delete movieList.at(genre).at(movieIndex);
	}
	movieList.at(genre).clear();
    }
}

//-----------------------addMovie----------------------------------------------
bool MovieList::addMovie(std::string movieDescription){
    //create a new movie pointer
    MovieFactory mFactory;
    char mType;
    std::string mTitle;


    std::stringstream ss(movieDescription);
    ss >> mType;
    titleGetter(movieDescription);

    //TODO Check for classic movies too

    if(isDuplicate(mTitle, mType)){ //if movie exists, add it to the same
        addStock(mTitle, mType);
    }
    else if(isDuplicate(mTitle, mType) && (mType == 'C')){
        //create a new one for classic if the actors are different
    }
    else{   //proceed with creating new movie
        Movie* newMovie = mFactory.makeMovie(mType, movieDescription);
        //push to vector at correct genre bucket
        switch(mType){
            case 'D':   //Drama is the bucket at Index 0
		addMovieHelper(DRAMA_INDEX, newMovie);
                return true;
            case 'C':   //Classic is the bucket at index 1
		addMovieHelper(CLASSIC_INDEX, newMovie);
                return true;
            case 'F':   //Comedy is the bucket at index 2
		addMovieHelper(COMEDY_INDEX, newMovie);
                return true;
            default:
                return false;
        }
    }
}
//-----------------------isDuplicate-------------------------------------------
//checks to see if movie is duplicated
//return true if existing
//returns false if non existing
bool MovieList::isDuplicate(std::string tempMovie, char mType) {
    int index;
    switch(mType){
        case 'D':
            index = DRAMA_INDEX;
            break;
        case 'F':
            index = COMEDY_INDEX;
            break;
        case 'C':
            index = CLASSIC_INDEX;
            break;
        default:
            return false;
    }
    for(int i=0; i < movieList[index].size(); i++){
        if(movieList[index].at(i)->getTitle() == tempMovie){
            return true;
        }
        else{ //TODO Fix this
            return false;
        }
    }
}

//-----------------------addMovieHelper----------------------------------------
void MovieList::addMovieHelper(int genre, Movie* newMovie) {
    int newMovieIndex = -1;
    for (int i = 0; i < movieList.at(genre).size(); i++) {
        if (i == 0 && *movieList.at(genre).at(i) > *newMovie) {
            newMovieIndex = 0;
	    break;
	} else if (*movieList.at(genre).at(i) < *newMovie) {
	    newMovieIndex = i - 1;
	}
    }

    if (newMovieIndex == -1) {
        movieList.at(genre).push_back(newMovie);
    } else {
        movieList.at(genre).insert(movieList.at(genre).begin() + 
			newMovieIndex, newMovie);
    }
}

//-----------------------addStock----------------------------------------------
bool MovieList::addStock(std::string movieTitle, char genreType){
    switch(genreType) {
        case 'D':
            addStockHelper(movieTitle, DRAMA_INDEX);
	    case 'C':

            addStockHelper(movieTitle, CLASSIC_INDEX);
        case 'F':
            addStockHelper(movieTitle, COMEDY_INDEX);
    }
}

//-----------------------addStockHelper----------------------------------------
// Helper method for addStock; finds movie within movieList and increases 
// stock by 1
void MovieList::addStockHelper(std::string movieTitle, int genre) {
    int currStock = 0;
    for(size_t i =0; i < movieList[genre].size(); i++){
        if(movieList[genre].at(i)->getTitle() == movieTitle){
            currStock = movieList[genre].at(i)->getStock();
            movieList[genre].at(i)->setStock(currStock+1);
        }
    }
}

//-----------------------removeStock-------------------------------------------
bool MovieList::removeStock(std::string movieTitle, char genreType){
    switch(genreType) {
        case 'D':
            rmStockHelper(movieTitle, DRAMA_INDEX);
            return true;
        case 'C':
            rmStockHelper(movieTitle, CLASSIC_INDEX);
            return true;
        case 'F':
            rmStockHelper(movieTitle, COMEDY_INDEX);
            return true;
        default:
            std::cout << "** Removing a Stock of Unknown Genre **" << std::endl;
            return false;
    }
}
//-----------------------rmStockHelper----------------------------------------
// Helper method for rmStock; finds movie within movieList and decreases
// stock by 1
void MovieList::rmStockHelper(std::string movieTitle, int genre) {
    int currStock = 0;
    for(size_t i =0; i < movieList[genre].size(); i++){
        if(movieList[genre].at(i)->getTitle() == movieTitle){
            currStock = movieList[genre].at(i)->getStock();
            movieList[genre].at(i)->setStock(currStock-1);
        }
    }
}
//-----------------------printByGenre------------------------------------------
void MovieList::printByGenre(char type) const{
    switch(type){
        case 'D':
            printer(DRAMA_INDEX);
            break;
        case 'C':
            printer(CLASSIC_INDEX);
            break;
        case 'F':
            printer(COMEDY_INDEX);
            break;
        default:
            printer(-1);
            break;
    }
}
//-----------------------titleGetter--------------------------------------------
std::string MovieList::titleGetter(std::string movieLine){
    std::string mTitle;

    std::stringstream ss(movieLine);
    std::getline(ss, mTitle, ',');
    std::getline(ss, mTitle, ',');
    std::getline(ss, mTitle, ',');
    std::getline(ss, mTitle, ',');
    return mTitle;
}
//-----------------------printer-----------------------------------------------
// Given the index of movieList, this method will call the print method for 
// each movie
void MovieList::printer(int index) const{
    for(int i =0; i < movieList[index].size(); i++){
        movieList[index].at(i)->print();
    }
}
