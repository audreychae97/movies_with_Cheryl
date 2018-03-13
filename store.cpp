#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include "store.h"
#include "customer.h"
#include "moviefactory.h"

//--------------------------Default Constructor--------------------------------
Store::Store(){
}

// ------------------------Destructor------------------------------------------
Store::~Store(){
}

//-------------------------showCustomers---------------------------------------
/*void Store::showCustomers(){
    cout << "THE CUSTOMER TABLE:" << endl;
    customerList.displayTable();
}
//-----------------------------------------------------------------------------
//  loadCustList() -reads in a text file containing customer data
//                  1) parse the line to see first word in line (custID)
//                  2) create customer object
//                  3) rad in the rest of the customer properties
//                  4) push customer object into hash table
//-----------------------------------------------------------------------------
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

}*/

//------------------------------------------------------------------------------
//  loadMovieList() -reads in a text file containing movie data
//                  1) parse line for first word = movie type
//                  2) call createMovie factory and pass in movie type
//                     Movie * m = MovieFactory.createMovie('D');
//                  3) set all properties of the movie by parsing the rest
//                  4) Push the movie to the movie* hashtable
//------------------------------------------------------------------------------
void Store::loadMovieList(std::string movieDataFile){
    std::string token;
    std::string movieLine;
    char type;
    MovieFactory mFactory;

    std::fstream inFile;
    inFile.open(movieDataFile);

    if(!inFile){
        std::cout << "Could not open file: " + movieDataFile << std::endl;
    }
    else {
        std::cout << "inside loadMovieList" << std::endl;	//TODO DELETE
        while(!inFile.eof()){
            getline (inFile, movieLine);
            movieList.addMovie(movieLine);
	    std::cout << "going to next iteration of addMovie" << std::endl;	//TODO DELETE
        }
	std::cout << "outside while loop" << std::endl;		//TODO DELETE
        inFile.close();
	std::cout << "closed file" << std::endl;		// TODO DELETE
    }
}

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

