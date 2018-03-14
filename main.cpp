#include "store.h"
#include <fstream>
#include <sstream>

int main() {
    std::cout << "begin" << std::endl;			//TODO DELETE
    Store * store = new Store();
    store->loadMovieList("data4movies.txt");
    store->loadCustList("data4customers.txt");
    store->readCommands("data4commands.txt");
    std::cout << std::endl;
    store->showMoviesByGenre('C');

    std::cout << "end" << std::endl;			//TODO DELETE
    return 0;
}
