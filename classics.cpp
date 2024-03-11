#include<iostream>
#include "classics.h"

using namespace std;

// Classics()
// Summary - default constructor for the Classics class.
// Pre-conditions - None.
// Post-conditions - An instance of the Classics class is created with default values.
Classics::Classics(){
}

// Classics(char genreType, const string &directorName, const string &movieTitle,
//          int releaseYear, const string &actorFirstName, const string &actorLastname,
//          int releaseMonth)
// Summary - initializes a Classics object with specified values for genre type, director name,
//           movie title, release year, actor's first and last name, and release month.
// Pre-conditions - The provided genreType should be a valid character representing the genre type.
//                  The directorName, movieTitle, actorFirstName, and actorLastName should be non-empty strings.
//                  releaseYear and releaseMonth should be valid integers representing the year and month of release.
// Post-conditions - An instance of the Classics class is created with the provided values.
Classics::Classics(char genreType, const string &directorName,
                   const string &movieTitle, int releaseYear,
                   const string &actorFirstName, const string &actorLastname,
                   int releaseMonth)
    : Movies(genreType, directorName), Content(movieTitle, releaseYear)
{

    this->firstName = actorFirstName;
    this->lastName = actorLastname;
    this->releaseMonth = releaseMonth;
}

// ~Classics()
// Summary - destructor for the Classics class.
// Pre-conditions - None.
// Post-conditions - Clears any dynamically allocated memory associated with the Classics object.
Classics::~Classics() {
}
