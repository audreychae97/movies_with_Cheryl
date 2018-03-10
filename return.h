#ifndef MOVIERENTALSTORE_RETURN_H
#define MOVIERENTALSTORE_RETURN_H

#include "action.h"
#include "store.h"

class Return : public Action {
    public:
        Return();       // Constructor
        virtual ~Return();
        // Increases stock by 1 for each item returned
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
        }
};
#endif