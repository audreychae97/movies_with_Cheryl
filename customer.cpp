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
void Customer::setID(int ID){
    custID = ID;
}

//----------------------setFirstName-------------------------------------------
void Customer::setFirstName(std::string fName){
    firstName = fName;
}

//----------------------setLastName--------------------------------------------
void Customer::setLastName(std::string lName){
    lastName = lName;
}

//----------------------getCustID----------------------------------------------
int Customer::getCustID(){
    return custID;
}

//----------------------getFirstName-------------------------------------------
string Customer::getFirstName() {
    return firstName;
}

//----------------------getLastName--------------------------------------------
string Customer::getLastName(){
    return lastName;
}
