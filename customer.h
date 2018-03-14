#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <vector>
#include <string>
#include <iostream>

//-----------------------------------------------------------------------------
// The Customer class contains customer information/actionHistory of a customer 
//-----------------------------------------------------------------------------

class Customer {
    private:
        int custID;
        std::string firstName;
        std::string lastName;
        std::vector<std::string> actionHistory;

    public:
        Customer();
        Customer(const std::string & infoString);
        ~Customer();
        void setID(int ID);
        void setFirstName(std::string fName);
        void setLastName(std::string lName);
        int getCustID();
        std::string getFirstName();
        std::string getLastName();
};

#endif
