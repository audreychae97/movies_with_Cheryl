#ifndef HASHTABLE_H
#define HASHTABLE_H
#include <array>
#include <vector>
#include <string>
#include "customer.h"

////////////////////////////////////////////////////////////////////////////////
//  HASHTABLE
////////////////////////////////////////////////////////////////////////////////
const int ARRAY_SIZE = 31;
class HashTable {

private:
    int hashSize = 29;
    std::vector<Customer*> hashtable[ARRAY_SIZE]; //array of vectors

public:
    HashTable();
    ~HashTable();
    Customer* getItem(int custID);
    void put(std::string custDescr);
    void displayTable();




};

#endif