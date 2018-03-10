#include "store.h"
#include <fstream>
#include <iostream>
using namespace std;

int main() {

    ifstream movies ("data4movies.txt");
    ifstream customers("data4customers.txt");
    ifstream commands("data4commands.txt");

    if (!movies || !customers || !commands) {
        cout << "File could not be opened." << endl;
        return 1;
    }

    Store* store = new Store;

    store->loadMovieList(movies);
    store->loadCustList(customers);
    store->readCommands(commands);


    return 0;
}