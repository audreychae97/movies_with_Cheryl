<<<<<<< HEAD
#include<string>
using namespace std;
=======
// Audrey Chae and Cheryl Mok CSS 343
// Date Created: February 27, 2018
// Last Modified: March 14, 2018
>>>>>>> DEV

#ifndef MOVIE_H_
#define MOVIE_H_

<<<<<<< HEAD
=======
#include <string>
#include "movie.h"

>>>>>>> DEV
//---------------------------------------------------------------------------
// Base Class Movies, stores the information about each individual movie.
// A parent to classes Drama, Comedy and Classic
//---------------------------------------------------------------------------

class Movie {
<<<<<<< HEAD
private:
	string title;
	string director;
	int year;

public:
	Movie();
	virtual ~Movie();

	// setters
	virtual void setTitle(string) = 0;
	virtual void setDirector(string) = 0;
	virtual void setYear(int year) = 0;

	//getters
	virtual string getTitle() const = 0;
	virtual string getDirector() const = 0;
	virtual int getYear() const = 0;

};


#endif /* MOVIE_H_ */
=======
protected:
	std::string title;		// stores the title
	std::string director;		// stores the director
	char genre;			// stores the genre
	int year;			// stores the year it was released
	int stock;			// stores the stock
public:
	Movie();			// Default Constructor
	Movie(std::string descr);	// Constructor with 1 param
	virtual ~Movie();		// Destructor

	// setters
	void setTitle(std::string title);	// Sets the title
	void setDirector(std::string director);	// Sets the director
	void setYear(int year);			// Sets the year
	void setStock(int stock);		// Sets the stock
	void setGenre(char genre);		// Sets the genre

	//getters
	char getGenre() const{return genre;};		// gets the genre
	std::string getTitle() const { return title; };	// gets the title
	std::string getDirector() const { return director; }; // gets director
	int getYear() const { return year; };		// gets the year
	int getStock() const { return stock; };		// gets the stock
	virtual void print() const;			// prints out its data

	// Methods
	virtual bool operator ==(const Movie& movieThing) const = 0;
	virtual bool operator <(const Movie& movieThing) const = 0;
	virtual bool operator >(const Movie& movieThing) const = 0;

};

#endif

>>>>>>> DEV
