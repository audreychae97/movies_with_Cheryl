#include "moviefactory.h"

MovieFactory::MovieFactory() {};
//virtual ~MovieFactory();


Movie* MovieFactory::makeMovie(char type, std::string descr){
        switch(type) {
            case 'F':
            {
                Movie* f = new Comedy(descr); return f;
            }
            case 'D':
            {
                Movie* d = new Drama(descr); return d;
            }
            case 'C':
            {
                Movie* c = new Classic(descr); return c;
            }
        }
}

