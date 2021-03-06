// Audrey Chae and Cheryl Mok CSS 343
// Date Created: February 27, 2018
// Last Modified: March 13, 2018

#include "customer.h"
#include "hashtable.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

//-----------------------------------------------------------------------------
// The Customer class contains customer information/actionHistory of a customer
//-----------------------------------------------------------------------------

//-----------------------Default Constructor-----------------------------------
Customer::Customer(){
    firstName = "";
    lastName = "";
    custID = -1;
}

//----------------------Constructor--------------------------------------------
// Constructor that accepts a string
Customer::Customer(const std::string & infoString){
    std::string cID;
    std::string fName;
    std::string lName;

    std::istringstream ss(infoString);
    ss >> cID;
    ss >> fName;
    ss >> lName;

    custID = stoi(cID);
    firstName = fName;
    lastName = lName;
}

//----------------------Destructor---------------------------------------------
Customer::~Customer(){
}

//----------------------setID--------------------------------------------------
// Sets the custID with given ID
void Customer::setID(int ID){
    custID = ID;
}

//----------------------setFirstName-------------------------------------------
// Sets firstName with given fName
void Customer::setFirstName(std::string fName){
    firstName = fName;
}

//----------------------setLastName--------------------------------------------
// Sets lastName with lName
void Customer::setLastName(std::string lName){
    lastName = lName;
}

//----------------------getCustID----------------------------------------------
// Returns the custID
int Customer::getCustID(){
    return custID;
}

//----------------------getFirstName-------------------------------------------
// Returns firstName
std::string Customer::getFirstName() {
    return firstName;
}

//----------------------getLastName--------------------------------------------
// Returns lastName
std::string Customer::getLastName(){
    return lastName;
}
//----------------------printHistory--------------------------------------------
void Customer::printHistory() const {
    std::cout << "inside printHistory for customer" << std::endl;
    for(size_t i = 0; i < actionHistory.size(); i++){
        std::cout << actionHistory.at(i) << std::endl;
    }
}

//----------------------addAction--------------------------------------------
void Customer::addAction(std::string actionLine){
    actionLine.erase (2,5);
    std::cout << "Adding action: " << actionLine << '\n';
    actionHistory.push_back(actionLine);

}

