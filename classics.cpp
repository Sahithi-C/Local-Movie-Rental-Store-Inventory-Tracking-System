#include "classics.h"

Classics::Classics(){
}

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

Classics::~Classics() {
}
