// Audrey Chae and Cheryl Mok CSS 343
// Date Created: February 27, 2018
// Last Modified: March 14, 2018

#ifndef MOVIE_H_
#define MOVIE_H_

#include <string>
#include "movie.h"

//---------------------------------------------------------------------------
// Base Class Movies, stores the information about each individual movie.
// A parent to classes Drama, Comedy and Classic
//---------------------------------------------------------------------------

class Movie {
protected:
	std::string title;
	std::string director;
	char genre;
	int year;
	int stock;
public:
	Movie();
	Movie(std::string descr);
	virtual ~Movie();

	// setters
	void setTitle(std::string title);
	void setDirector(std::string director);
	void setYear(int year);
	void setStock(int stock);
	void setGenre(char genre);

	//getters
	char getGenre() const{return genre;};
	std::string getTitle() const { return title; };
	std::string getDirector() const { return director; };
	int getYear() const { return year; };
	int getStock() const { return stock; };
        virtual void print() const;

	// Methods
	//virtual void print() = 0; //pure virtual .. different for at least 1 so make it lie that
//	virtual bool operator==(const Movie& movieThing) = 0;
//	virtual bool operator<(const Movie& movieThing) = 0;
//	virtual bool operator>(const Movie& movieThing) = 0;

};

#endif

