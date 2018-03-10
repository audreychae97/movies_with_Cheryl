#ifndef MOVIERENTALSTORE_ACTION_H
#define MOVIERENTALSTORE_ACTION_H

#include <string>
#include "store.h"

class Action {
protected:
    Store* store;

public:
    Action(Store* store);       // Constructor
    virtual ~Action();
    virtual void doAction(Store* store) = 0;
};
#endif