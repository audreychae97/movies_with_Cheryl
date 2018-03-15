// Audrey Chae and Cheryl Mok CSS 343
// Date Created: February 27, 2018
// Last Modified: March 13, 2018

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
        int custID;				// stores customer's id
        std::string firstName;			// stores customer's first name
        std::string lastName;			// stores customer's last name
        std::vector<std::string> actionHistory;	// stores customer's actions

    public:
        Customer();				// Default Constructor
        Customer(const std::string & infoString);   // Constructor w/ 1 param
        ~Customer();				// Destructor
        void setID(int ID);			// Sets custID
        void setFirstName(std::string fName);	// Sets firstName
        void setLastName(std::string lName);	// Sets lastName
        int getCustID();			// returns custID
        std::string getFirstName();		// returns firstName
        std::string getLastName();		// returns lastName
        void printHistory() const;
        void addAction(std::string actionLine);
};
#endif

