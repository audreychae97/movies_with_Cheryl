#include "store.h"
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;

int main() {

    Store * store = new Store("data4customers.txt");
//
    store->loadMovieList("data4movies.txt");
    store->loadCustList("data4customers.txt");
    //store->readCommands("data4commands.txt");
    store->showCustomers();
    return 0;
}