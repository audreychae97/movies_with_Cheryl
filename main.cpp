#include "store.h"
#include <fstream>
<<<<<<< HEAD
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
=======
#include <sstream>

int main() {
    std::cout << "begin" << std::endl;			//TODO DELETE
    Store * store = new Store();
    store->loadMovieList("data4movies.txt");
    store->loadCustList("data4customers.txt");
    store->readCommands("data4commands.txt");

    std::cout << std::endl;
    store->showMoviesByGenre('F');
    store->printInventory();

    std::cout << "end" << std::endl;			//TODO DELETE
    return 0;
}
>>>>>>> DEV
