#ifndef STORE_H
#define STORE_H
#include <string>
#include <vector>
#include <map>
//#include "customer.h"
//#include "hashtable.h"
//#include "action.h"
//#include "movie.h"

////////////////////////////////////////////////////////////////////////////////
//  STORE - The store class that manages the customers and movies
////////////////////////////////////////////////////////////////////////////////
class Store {
  private:
      int hashSize;
      //HashTable<Customer *> customerList;
//      vector< vector<Movie *> > MovieList;
//      std::map<std::string, int> movieStock;   // key = title, int = stock

  public:
      Store(std::string fileName);
    //~Store();
      int findHashSize(std::string fileName);
      void loadCustList(std::string custDataFile);
      void loadMovieList(std::string movieDataFile);
      int getHashSize();
      int isPrime(int n);
      int getPrimeNumber(int n);
};

#endif
