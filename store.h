#ifndef STORE_H
#define STORE_H
#include <string>
#include <vector>
#include <map>
#include "customer.h"
#include "hashtable.h"
#include "action.h"
#include "movie.h"

////////////////////////////////////////////////////////////////////////////////
//  STORE - The store class that manages the customers and movies
////////////////////////////////////////////////////////////////////////////////
class Store {
  private:
      int hashSize;
      HashTable<Customer *> customerList;
      HashTable<Movie *> moveList;
      std::map<std::string, int> movieStock;   // key = title, int = stock

  public:
      Store();

      void loadCustList(std::string custDataFile) {
        //while(getLine()){
        //  getLine() - read in the line of input
        //  parse the line to see the first word in the string = 4 digit customer ID
        //  (word = first set of characters before a token ' ')
        //  Create customer object
        //  read in the rest of the customer properties from the stream & assign to the customer object
        //  push the customer object to the customer hashtable
        // }
      }

      void loadMovieList(std::string movieDataFile) {
        //while(getLine()){
        //  getLine() - read first line of input
        //  parse the line to see the first character in the string = Movie type
        //  Call CreateMovie Factory method and pass in the character MovieType .. returns a pointer
        //  Movie * m = MovieFactory.createMovie('D');
        //  set all properties of the movie by parsing the rest of the string from getLine();
        //  Push the movie to the movie* hashtable
        //}

        //sortMovieVector(MovieVector, 'D');

      }

      void readCommands(std::string commandsFile) {
        //while(getLine()){
        //  getLine() - read in first line of input
        //  parse the string's first character = Action Character (1st token)
        //  Action * a = ActionFactory.createAction('B');
        //  std::string remainingProperties = the rest of the command properties after the first token
        //  Call doAction(remainingProperties)
        //}
      }

      void sortMovieVector(vector<Movie *>, char mType) {
        //the movie vector is passed in (Drama, Classical, Comedy)
        // along with the Movie type character ('D', 'C', 'F')

        //switch(mType){
        //  case 'D':
        //sort movies by Director, then Title
        //  case 'F':
        //sort movies by Title, then year it was released
        //  case 'C':
        //sort movies by Release Date, then Major Actor
        //}
      }
};

#endif
