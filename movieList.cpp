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

    std::stringstream ss(movieDescription);
    ss >> mType;
    
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
            //need to push the product into a new bucket/.. for a new genre.
            //not going to worry about this yet
	    std::cout << "new genre!" << std::endl;
            return false;
    }
}

//-----------------------addStock----------------------------------------------
bool MovieList::addStock(std::string movieTitle, char genreType){

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
void MovieList::printer(int index) const{
    for(int i =0; i < movieList[index].size(); i++){
        movieList[index].at(i)->print();
    }
}

