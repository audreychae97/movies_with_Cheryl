#ifndef STORE_H
#define STORE_H
#include <string>
#include <vector>
#include <map>
//#include "customer.h"
#include "hashtable.h"
//#include "action.h"
//#include "movie.h"

////////////////////////////////////////////////////////////////////////////////
//  STORE - The store class that manages the customers and movies
////////////////////////////////////////////////////////////////////////////////
class Store {
  private:
      HashTable customerList;
    //  vector< vector<Movie *> > MovieList;
//      std::map<std::string, int> movieStock;   // key = title, int = stock

  public:
      Store(std::string custDataFile);
      ~Store();
      void loadCustList(std::string custDataFile);
     // void loadMovieList(std::string movieDataFile);
      void showCustomers();
};

#endif
