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
    std::array<std::vector<Movie*>, 10> movieList; // Stores Movies

    void addStockHelper(std::string, int); // Helps addStock, takes title,type
    void addMovieHelper(int, const Movie*);      // Helps addMovie
    void rmStockHelper(std::string, int);

public:
    MovieList();					// Default Constructor
    ~MovieList();					// Destructor
    bool addMovie(std::string movieDescription);	// Adds movie to list
    bool addStock(std::string movieTitle, char genreType); // +1 to movie stock
    bool removeStock(std::string movieTitle, char genreType);// -1 to movie stock
    void printByGenre(char type) const;	// Prints all movies from genre
    void printer(int index) const;	// Helper method to printByGenre
    bool isDuplicate(std::string tempMovie, char mType);

};
#endif

