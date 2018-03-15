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
    ss >> mTitle >> mTitle >> mTitle;
    std::cout << "Movie title from inside movieList: " << mTitle;
    //TODO Check for classic movies too

    if(isDuplicate(mTitle, mType)){ //if movie exists, add it to the same
        addStock(mTitle, mType);
    }
    else if(isDuplicate(mTitle, mType) && (mType == 'C')){
        //create a new one for classic if the actors are different
    }
    else{   //proceed as normal
        Movie* newMovie = mFactory.makeMovie(mType, movieDescription);
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
                // TODO need to push the product into a new bucket/.. for a new genre.
                //not going to worry about this yet
                std::cout << "new genre!" << std::endl;
                return false;
        }
    }
}
//-----------------------isDuplicate-------------------------------------------
//checks to see if movie is duplicated
bool MovieList::isDuplicate(std::string tempMovie, char mType) {
    for(int i =0; i < movieList[mType].size(); i++){
        if(movieList[mType].at(i)->getTitle() == tempMovie){
            return true;
        }
        else{
            return false;
        }
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
bool MovieList::removeStock(){

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

//-----------------------printer-----------------------------------------------
// Given the index of movieList, this method will call the print method for 
// each movie
void MovieList::printer(int index) const{
    for(int i =0; i < movieList[index].size(); i++){
        movieList[index].at(i)->print();
    }
}

