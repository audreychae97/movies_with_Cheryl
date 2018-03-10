#ifndef MOVIERENTALSTORE_BORROW_H
#define MOVIERENTALSTORE_BORROW_H

#include <string>
#include "Action.h"
#include "store.h"

class Borrow : public Action {
public:
    Borrow();               // Constructor
    virtual ~Borrow();      // Destructor
    // Decreases stock by 1 for each item borrowed
    void doAction(std::string remainderProperties) {
        //parse out remainderProperties e.g. 1234 D C 9 1938 Katherine Hepburn
        // int customerId
        // mediaType
        // movieType
        // Year released
        // actor
        // update customer's actionHistory (vector)
        // look up customerID in store's customerList & then update
        // update inventory
        // look up title of movie in store's movieStock map & increment
    };
};
#endif
