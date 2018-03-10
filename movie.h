#include<string>
using namespace std;

#ifndef MOVIE_H_
#define MOVIE_H_

//---------------------------------------------------------------------------
// Base Class Movies, stores the information about each individual movie.
// A parent to classes Drama, Comedy and Classic
//---------------------------------------------------------------------------

class Movie {
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