#ifndef MOVIERENTALSTORE_HISTORY_H
#define MOVIERENTALSTORE_HISTORY_H

#include "store.h"
#include "action.h"

class History : public Action {
    public:
        History();              // Constructor
        virtual ~History();     // Destructor
        // Outputs all transactions of a customer
        void doAction(std::string customerID) {
            // grab Customer* by looking up Store's customerList w/ given customerID
            // Obtain & output actionHistory (vector) from Customer object
    }
};
#endif