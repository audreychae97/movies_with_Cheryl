#ifndef MOVIELIST_H
#define MOVIELIST_H

#include "movie.h"
#include <vector>

int const DRAMA_INDEX = 0;
int const CLASSIC_INDEX = 1;
int const COMEDY_INDEX = 2;

class MovieList{
private:
    std::vector< std::vector<Movie * > > movieList;

public:
    MovieList();
    ~MovieList();
    bool addMovie(std::string movieDescription);
    bool addStock(std::string movieTitle, char genreType);
    bool removeStock();
    void printByGenre(char type);


};


#endif
