#include "store.h"
#include "customer.h"
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;

Store::Store(std::string fileName){
}
Store::~Store(){
}

//------------------------------------------------------------------------------
//  loadCustList() -reads in a text file containing customer data
//                  1) parse the line to see first word in line (custID)
//                  2) create customer object
//                  3) rad in the rest of the customer properties
//                  4) push customer object into hash table
//------------------------------------------------------------------------------
void Store::loadCustList(std::string custDataFile){
    string customerLine;

    ifstream inFile;
    inFile.open(custDataFile);

    if(!inFile){
        std::cout << "Could not open file: " + custDataFile << endl;
    }
    else{
        while(!inFile.eof()){
            getline (inFile, customerLine);
            customerList.put(customerLine);
        }
        inFile.close();
    }

}
void Store::showCustomers(){
    cout << "THE CUSTOMER TABLE:" << endl;
    customerList.displayTable();
}
//------------------------------------------------------------------------------
//  loadMovieList() -reads in a text file containing movie data
//                  1) parse line for first word = movie type
//                  2) call createMovie factory and pass in movie type
//                     Movie * m = MovieFactory.createMovie('D');
//                  3) set all properties of the movie by parsing the rest
//                  4) Push the movie to the movie* hashtable
//------------------------------------------------------------------------------
//void Store::loadMovieList(std::string movieDataFile){
//    std::string token;
//    string movieLine;
//
//    ifstream inFile;
//    inFile.open(movieDataFile);
//
//
//    if(!inFile){
//        std::cout << "Could not open file: " + movieDataFile << endl;
//    }
//    else{
//        getline (inFile, movieLine);
//        std::istringstream ss(movieLine);
//        while(std::getline(ss, token, ',')) {   //for each line = 1 movie
//            std::cout << token << '\n';
//            //Movie * m = MovieFactory.createMovie(token);
//            //m.stock = next token
//            //m.director = next token
//            //m.title = next token
//            //m.releaseYear = next token
//
//        }
//        inFile.close();
//    }
//}
//------------------------------------------------------------------------------
        //while(getLine()){
        //  getLine() - read in first line of input
        //  parse the string's first character = Action Character (1st token)
        //  Action * a = ActionFactory.createAction('B');
        //  std::string remainingProperties = the rest of the command properties after the first token
        //  Call doAction(remainingProperties)
        //}
//------------------------------------------------------------------------------
//void Store::readCommands(std::string commandFile){
//    ifstream inFile;
//    inFile.open(commandFile);
//
//    if(!inFile){
//        std::cout << "Could not open file: " + commandFile << endl;
//    }
//
//    else{
//
//    }
//}
//void Store::sortMovieVector(vector<Movie *>, char mType){
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
//}
