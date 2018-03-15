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
void Store::showCustomers(){
    std::cout << "THE CUSTOMER TABLE:" << std::endl;
    customerList.displayTable();
}

//--------------------------loadCustList---------------------------------------
//  Reads in a text file containing customer data
//      1) parse the line to see first word in line (custID)
//      2) create customer object
//      3) rad in the rest of the customer properties
//      4) push customer object into hash table
//-----------------------------------------------------------------------------
void Store::loadCustList(std::string custDataFile){
    std::string customerLine;

    std::fstream inFile;
    inFile.open(custDataFile);

    if(!inFile){
        std::cout << "Could not open file: " + custDataFile << std::endl;
    }
    else{
        while(!inFile.eof()){
            getline (inFile, customerLine);
            customerList.put(customerLine);
        }
        inFile.close();
    }

}

//-----------------------------loadMovieList-----------------------------------
// Reads in a text file containing movie data
//     1) parse line for first word = movie type
//     2) call createMovie factory and pass in movie type 
//            Movie * m = MovieFactory.createMovie('D');
//     3) set all properties of the movie by parsing the rest
//     4) Push the movie to the movie* hashtable
//------------------------------------------------------------------------------
void Store::loadMovieList(std::string movieDataFile){
    std::string token;
    std::string movieLine;

    std::fstream inFile;
    inFile.open(movieDataFile);

    if(!inFile){
        std::cout << "Could not open file: " + movieDataFile << std::endl;
    }
    else {
        while(!inFile.eof()){
            getline (inFile, movieLine);
            movieList.addMovie(movieLine);
        }
        inFile.close();
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

//------------------------readCommands-----------------------------------------
void Store::readCommands(std::string commandFile) {
    std::ifstream inFile;
    std::string commandLine;
    char type = '\0';
    int custID;
    inFile.open(commandFile);

    if(!inFile){
        std::cout << "Could not open file: " + commandFile << std::endl;
    }
    else{
        while(!inFile.eof()){
            getline (inFile, commandLine);
            std::istringstream ss(commandLine);
            ss >> type;
            ss >> custID;
            commander(type, custID, commandLine);
        }
        inFile.close();
    }
}

void Store::commander(char ctype, int custID, std::string commandLine){
    switch(ctype){
        case 'B':
            borrowMovie(commandLine);
            break;
        case 'R':
            returnMovie(commandLine);
            break;
        case 'I':
            printInventory();
            break;
        case 'H':
            printCustHistory(commandLine);
            break;
        default:
            std::cout << "Invalid command found" << std::endl;
            break;
    }
}
//------------------------------------------------------------------------------
//  showMoviesByGenre() - displays all movies by genre
//------------------------------------------------------------------------------
void Store::showMoviesByGenre(char type){
    movieList.printByGenre(type);
}
//------------------------------------------------------------------------------
//  printInventory() - method that prints all items in the store
//------------------------------------------------------------------------------
void Store::printInventory() const{ //TODO SORT THEMMMM
    std::cout << "Inventory of Store:"  << std::endl;
    std::cout << "-------COMEDY------- " << std::endl;
    movieList.printByGenre('F');
    std::cout << "-------DRAMA------- " << std::endl;
    movieList.printByGenre('D');
    std::cout << "-------CLASSIC------- " << std::endl;
    movieList.printByGenre('C');


}
//------------------------------------------------------------------------------
//  borrowMovie() - method for borrowing a movie-- adds to cust history
//------------------------------------------------------------------------------
bool Store::borrowMovie(std::string moveLine){
    //find the movie in the movieList.... subtract stock

}
//------------------------------------------------------------------------------
//  returnMovie() - method for returning a movie -- adds to cust history
//------------------------------------------------------------------------------
bool Store::returnMovie(std::string movieLine){

}
//------------------------------------------------------------------------------
//  printInventory() - method that prints all items in the store
//------------------------------------------------------------------------------
bool Store::printCustHistory(std::string commandLine){
    int custID;

    std::istringstream ss(commandLine);
    ss >> custID >> custID;
    std::cout <<"inside printCustHistory... CustID = " << custID << std::endl;

    Customer * histForCust = customerList.getItem(custID);

    histForCust->printHistory();

}

