#include "customer.h"
#include "hashtable.h"
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;

//-----------------------Default Constructor-----------------------------------
Customer::Customer(){
    firstName = "";
    lastName = "";
    custID = -1;
}

//----------------------Constructor--------------------------------------------
Customer::Customer(const string & infoString){
    string cID;
    string fName;
    string lName;

    istringstream ss(infoString);
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
string Customer::getFirstName() {
    return firstName;
}

//----------------------getLastName--------------------------------------------
// Returns lastName
string Customer::getLastName(){
    return lastName;
}
