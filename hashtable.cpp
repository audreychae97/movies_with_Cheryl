// Audrey Chae and Cheryl Mok CSS 343
// Date Created: February 27, 2018
// Last Modified: March 13, 2018

#include "hashtable.h"
#include "customer.h"
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

HashTable::HashTable(){
    for(int i = 0; i < ARRAY_SIZE; i++){
        hashtable[i].push_back(NULL);
    }
}
//---------------------------Destructor-----------------------------------------
HashTable::~HashTable() {
    std::cout << "SUP " << std::endl;
    for(int i= 0; i < ARRAY_SIZE; i++){ //for each bucket...
        for(int j = 0; j < hashtable[i].size(); j++){ //and each vector
            hashtable[i].at(j) = nullptr;
            delete (hashtable[i].at(j)); //delete the customer at that slot
        }
    }
}

//------------------------------------------------------------------------------
//  put() -
//  figure out the size of the array we are hashing
//  obtain the smallest prime number that is greater than the 2X size of the array
// DO HASH FUNCTION
// HANDLE COLLISIONS
// INSE
//------------------------------------------------------------------------------
void HashTable::put(std::string custDescr){
    int custID;
    //first create a customer object
    Customer* newCust = new Customer(custDescr);
    custID = newCust->getCustID();
    int pos = (custID % hashSize);

    hashtable[pos].push_back(newCust);
}

//------------------------------------------------------------------------------
//  getItem()-
//------------------------------------------------------------------------------
Customer* HashTable::getItem(int custID) {
    int pos = (custID % hashSize);
    for(int i = 0; i < hashtable[pos].size(); i++){
        Customer * poop = hashtable[pos].at(i);
        if(!poop){} //TODO: Fix this shitty way

        else{
            if(poop->getCustID() == custID) {
                return hashtable[pos].at(i);
            }
        }
    }
}

//------------------------------------------------------------------------------
//  displayTable() - displays all of the elements in the hash table
//------------------------------------------------------------------------------
void HashTable::displayTable(){
    for(int i= 0; i < ARRAY_SIZE; i++){ //for each bucket...
        if(hashtable[i].size() == 0){ //if at that bucket, a vector doesnt exist..
            //don't do anything ..
        }
        else{
            for(int j = 0; j < hashtable[i].size(); j++){ //and each vector
                if(!hashtable[i].at(j)){
                    //TODO FIX THIS TOOOOOO
                }else {
		    std::cout << "[CUSTOMER ID]: " << hashtable[i].at(j)->getCustID()
                         << std::endl;
		    std::cout << "[FIRST NAME]: " << hashtable[i].at(j)->getFirstName()
                         << std::endl;
		    std::cout << "[LAST NAME]: " << hashtable[i].at(j)->getLastName()
                         << std::endl;
                }
            }
        }

    }
}
