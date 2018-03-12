#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <vector>
#include <string>
#include <iostream>
//#include "action.h"

////////////////////////////////////////////////////////////////////////////////
//  CUSTOMER - the class that contains customer information/actionHistory of a
//              customer 
////////////////////////////////////////////////////////////////////////////////
class Customer {
    private:
        int custID;
        std::string firstName;
        std::string lastName;
//        std::vector<Action*> actionHistory;

    public:
        Customer();
        Customer(const std::string & infoString);
        ~Customer();
        void setID(int ID);
        void setFirstName(std::string fName);
        void setLastName(std::string lName);
        int getCustID();
        std::string getFirstName(); //do we want these to pass in a value, search by paramter? or are we using these on object
        std::string getLastName();
};

#endif