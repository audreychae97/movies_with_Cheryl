#include "customer.h"
#include "hashtable.h"
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;

Customer::Customer(){
    firstName = "";
    lastName = "";
    custID = -1;
}
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
    //TODO: Fix endl... thing for reading in
//    cout << "In the customer constructor: " << endl;
//    cout << "ID = " << custID << endl;
//    cout << "FirstName = " << firstName << endl;
//    cout << "LastName = " << lastName << endl;
}
Customer::~Customer(){
}
void Customer::setID(int ID){
    custID = ID;
}
void Customer::setFirstName(std::string fName){
    firstName = fName;
}
void Customer::setLastName(std::string lName){
    lastName = lName;
}
int Customer::getCustID(){
    return custID;
}
string Customer::getFirstName() { //do we want these to pass in a value, search by paramter? or are we using these on object
    return firstName;
}
string Customer::getLastName(){
    return lastName;
}