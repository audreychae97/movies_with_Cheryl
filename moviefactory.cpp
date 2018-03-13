#include <iostream>
#include "moviefactory.h"

//------------------------Default Constructor----------------------------------
MovieFactory::MovieFactory() {};

//------------------------Destructor-------------------------------------------
//MovieFactory::~MovieFactory();

//------------------------makeMovie--------------------------------------------
// Makes the appropriate movie type given the type
Movie* MovieFactory::makeMovie(char type, std::string descr){
    switch(type) {
        case 'F': 
            return new Comedy(descr);
        case 'D': 
            return new Drama(descr);
        case 'C':
            return new Classic(descr);
    }
}

