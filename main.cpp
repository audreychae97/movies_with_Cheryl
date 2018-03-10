#include "store.h"
#include <fstream>
#include <iostream>
using namespace std;

int main() {

    Store* store = new Store;

    store->loadMovieList("data4movies.txt");
    store->loadCustList("data4customers.txt");
    store->readCommands("data4commands.txt");


    return 0;
}