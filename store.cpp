<<<<<<< HEAD
#include "store.h"
#include <fstream>
using namespace std;



void Store::loadCustList(std::string custDataFile){
    ifstream inFile;
    inFile.open(custDataFile);

    if()

}
void Store::loadMovieList(std::string movieDataFile){

}
void Store::readCommands(std::string commandFile){

}
void Store::sortMovieVector(vector<Movie *>, char mType){

}
=======
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
    char token;
    std::string movieLine;

    std::fstream inFile;
    inFile.open(movieDataFile);

    if(!inFile){
        std::cout << "Could not open file: " + movieDataFile << std::endl;
    }
    else {
        while(!inFile.eof()){
            getline (inFile, movieLine);
            std::istringstream ss(movieLine);
            ss >> token;
            if(genreChecker(token)){
                movieList.addMovie(movieLine);
            }
            else{
                std::cout << "** That's An Invalid Genre Type **" << std::endl;
            }
        }
        inFile.close();
    }
}
//------------------------------------------------------------------------------
bool Store::genreChecker(char mType) const {
    if(mType == 'C' || mType == 'D' || mType == 'F'){
        return true;
    }
    else{
        return false;
    }
}
bool Store::movieChecker(std::string movieTitle, char type){
    return (movieList.isDuplicate(movieTitle, type));
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
            borrowMovie(commandLine, ctype, custID);
            break;
        case 'R':
            returnMovie(commandLine, ctype, custID);
            break;
        case 'I':
            printInventory();
            break;
        case 'H':
            printCustHistory(custID);
            break;
        default:
            std::cout << "** Invalid Command Found **" << std::endl;
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
bool Store::borrowMovie(std::string movieLine, char ctype, int custID){
    std::string mTitle = movieList.titleGetter(movieLine);

    //check to see if the movie even exists first
    if(movieChecker(mTitle, ctype)){
        //add the action to the customer's history history
        Customer *actionCustomer = customerList.getItem(custID);
        actionCustomer->addAction(movieLine);

        //find the movie in the movieList.... subtract stock
        movieList.removeStock(movieLine, ctype);
    }
    else{
        std::cout << "That movie does not exist to borrow" << std::endl;
    }

}

//------------------------------------------------------------------------------
//  returnMovie() - method for returning a movie -- adds to cust history
//------------------------------------------------------------------------------
bool Store::returnMovie(std::string movieLine, char ctype, int custID){
    std::string mTitle = movieList.titleGetter(movieLine);
    //check to see if the movie even exists first
    if(movieChecker(mTitle, ctype)){
        //add the action to the customer's history history
        Customer *actionCustomer = customerList.getItem(custID);
        actionCustomer->addAction(movieLine);

        //find the movie in the movieList.... subtract stock
        movieList.addStock(movieLine, ctype);
    }
    else{
        std::cout << "** That Movie Does Not Exist to Borrow **" << std::endl;
    }
}

//------------------------------------------------------------------------------
//  printInventory() - method that prints all items in the store
//------------------------------------------------------------------------------
bool Store::printCustHistory(int custID){
    Customer * histForCust = customerList.getItem(custID);

    histForCust->printHistory();

}

>>>>>>> DEV
