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
//    std::map<std::string, int> movieStock;		// TODO DELETE??

public:
    Store();
    virtual ~Store();
    void loadCustList(std::string custDataFile);
    void loadMovieList(std::string movieDataFile);
    void readCommands(std::string commandFile);
    //every time a new movie is made..
    void showCustomers();
};
#endif

