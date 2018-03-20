<<<<<<< HEAD
#ifndef HASHTABLE_H
#define HASHTABLE_H
#include <array>

////////////////////////////////////////////////////////////////////////////////
//  HASHTABLE  http://www.algolist.net/Data_structures/Hash_table/Simple_example
//              A generic hasthable for customerList and movielist
////////////////////////////////////////////////////////////////////////////////
template <class TYPE>
class HashTable {
private:
    int key;
    TYPE *data;
    std::array<std::array<TYPE>> hashtable;

public:
    HashTable() {
        //assign size of the hashtable array
        //  hash size = (movieList size * 2)
    }

    ~HashTable();

    template<class TYPE>
    TYPE *getItem(int key1, int key2) {
        return hashtable[key1][key2];
    }

    template<class TYPE>
    int put(std::string keyFinder, TYPE *item) {
        //  figure out the size of the array we are hashing
        //  obtain the smallest prime number that is greater than the 2X size of the array
        // DO HASH FUNCTION
        // HANDLE COLLISIONS
        // INSERT
    }
};

#endif
=======
// Audrey Chae and Cheryl Mok CSS 343
// Date Created: February 27, 2018
// Last Modified: March 13, 2018

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

>>>>>>> DEV
