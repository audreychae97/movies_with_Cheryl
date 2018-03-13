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

}

//-----------------------addMovie----------------------------------------------
bool MovieList::addMovie(std::string movieDescription){
    //create a new movie pointer
    MovieFactory mFactory;
    char mType;

    std::stringstream ss(movieDescription);
    ss >> mType;
    
    Movie* newMovie = mFactory.makeMovie(mType, movieDescription);
    std::cout << "outside of switch in addMovie" << std::endl;	//TODO DELETE
    std::cout << "mType is " << mType << std::endl;	 	//TODO DELETE
    //push to vector at correct genre bucket
    switch(mType){
        case 'D':   //Drama is the bucket at Index 0
            movieList.at(DRAMA_INDEX).push_back(newMovie);
	    std::cout << "entered D" << std::endl;		//TODO DELETE
            return true;
        case 'C':   //Classic is the bucket at index 1
	    std::cout << "before pushing into C" << std::endl;	//TODO DELETE
            movieList.at(CLASSIC_INDEX).push_back(newMovie);		//TODO PROBLEM!!
            std::cout << "entered C" << std::endl;		//TODO DELETE
            return true;
        case 'F':   //Comedy is the bucket at index 2
            movieList.at(COMEDY_INDEX).push_back(newMovie);
	    std::cout << "entered F" << std::endl;		//TODO DELETE
            return true;
        default:
            //need to push the product into a new bucket/.. for a new genre.
            //not going to worry about this yet
	    std::cout << "new genre!" << std::endl;
            return false;
    }
    std::cout << "done with switch" << std::endl;	//TODO DELETE
}

//-----------------------addStock----------------------------------------------
bool MovieList::addStock(std::string movieTitle, char genreType){

}

//-----------------------removeStock-------------------------------------------
bool MovieList::removeStock(){

}

//-----------------------printByGenre------------------------------------------
void MovieList::printByGenre(char type){

}
