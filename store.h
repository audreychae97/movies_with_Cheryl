#ifndef STORE_H
#define STORE_H

#include <string>
#include <vector>
#include <map>
#include "customer.h"
#include "hashtable.h"
#include "movieList.h"
#include "movie.h"

//-----------------------------------------------------------------------------
// The store class manages the customers and movies
//-----------------------------------------------------------------------------
class Store {
private:
    HashTable customerList;
    MovieList movieList;

public:
    Store();
    virtual ~Store();
    void loadCustList(std::string custDataFile);
    void loadMovieList(std::string movieDataFile);
    void readCommands(std::string commandFile);


    void printInventory() const;  // I
    bool borrowMovie(std::string moveLine, char cType, int custID); // B
    bool returnMovie(std::string movieLine, char cType, int custID);    //E
    bool printCustHistory(int custID); //H
    void commander(char type, int custID, std::string commandLine);
    bool genreChecker(char mType) const;
    bool movieChecker(std::string moveTitle, char type);
    //every time a new movie is made..
    void showCustomers();
    void showMoviesByGenre(char type);
};
#endif

