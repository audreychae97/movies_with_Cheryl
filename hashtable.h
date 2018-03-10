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