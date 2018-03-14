#ifndef MOVIELIST_H
#define MOVIELIST_H

#include "movie.h"
#include <array>
#include <vector>
#include <map>

int const DRAMA_INDEX = 0;
int const CLASSIC_INDEX = 1;
int const COMEDY_INDEX = 2;

class MovieList{
private:
    std::array<std::vector<Movie*>, 10> movieList;
    std::map<std::string, int> movieStock;	//TODO DO WE WANT THIS HERE?

public:
    MovieList();
    ~MovieList();
    bool addMovie(std::string movieDescription);
    bool addStock(std::string movieTitle, char genreType);
    bool removeStock();
    void printByGenre(char type);


};


#endif
