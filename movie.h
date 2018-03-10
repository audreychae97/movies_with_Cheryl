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
	int year;

public:
	Movie();
	virtual ~Movie();

	// setters
	void setTitle(std::string title);
	void setDirector(std::string director);
	void setYear(int year);

	//getters
	std::string getTitle() const { return title; };
	std::string getDirector() const { return director; };
	int getYear() const { return year; };

};

#endif /* MOVIE_H_ */
