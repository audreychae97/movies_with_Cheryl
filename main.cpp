#include "store.h"
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

int main() {
    std::cout << "begin" << std::endl;
    Store * store = new Store("data4customers.txt");
    std::cout << "loading movie list" << std::endl;	//TODO DELETE
    store->loadMovieList("data4movies.txt");
    std::cout << "done loading movie list; loading custList" << std::endl; 	//TODO DELETE
/*    store->loadCustList("data4customers.txt");
    //store->readCommands("data4commands.txt");
    store->showCustomers();*/
    std::cout << "end" << std::endl;			//TODO DELETE
    return 0;
}
