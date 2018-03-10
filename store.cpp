#include "store.h"
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;



void Store::loadCustList(std::string custDataFile){
    ifstream inFile;
    inFile.open(custDataFile);

    if(!inFile){
        std::cout << "Could not open file: " + custDataFile << endl;
    }



}
void Store::loadMovieList(std::string movieDataFile){
    ifstream inFile;
    inFile.open(movieDataFile);
    string movieLine;

    if(!inFile){
        std::cout << "Could not open file: " + movieDataFile << endl;
    }
    else{
        std::getline (std::cin, movieLine);
        std::istringstream ss(movieLine);
        std::string token;

        while(std::getline(ss, token, ',')) {
            std::cout << token << '\n';
        }

    }
}
void Store::readCommands(std::string commandFile){
    ifstream inFile;
    inFile.open(commandFile);

    if(!inFile){
        std::cout << "Could not open file: " + commandFile << endl;
    }

    else{

    }
}
void Store::sortMovieVector(vector<Movie *>, char mType){

}