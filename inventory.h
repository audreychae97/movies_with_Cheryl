#ifndef MOVIERENTALSTORE_INVENTORY_H
#define MOVIERENTALSTORE_INVENTORY_H

#include <string>
#include "Action.h"

class Inventory : public Action {
public:
    Inventory();            // constructor
    virtual ~Inventory();   // Destructor
    // Outputs inventory of all items in the store
    // remainderProperties will be an empty string, which is handled in main
    void doAction(std::string remainderProperties) {
        //output inventory by accessing store's movieStock map
        // question: print all or only the ones existing in the store, or BOTHHHH????
    }
};
#endif