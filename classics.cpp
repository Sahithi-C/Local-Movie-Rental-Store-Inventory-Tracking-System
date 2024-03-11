// classics.cpp
// Jonah Kolar
// Made on: 3/8/2024
// Last updated: 3/9/2024
// CSS 502
// Assignment 4
// Summary: This file contains the implementation for Classics.
// Assumptions: None

#include<iostream>
#include "classics.h"

using namespace std;

//--------------------------------------------constructors and destructor-----------------------------------------------------

// Classics()
// Summary - default constructor for Classics class.
// Pre-conditions - None.
// Post-conditions - Constrcts a Classics object.
Classics::Classics(){
}

// Classics()
// Summary - A constructor for the Classics class.
// Pre-conditions - None.
// Post-conditions - Constructs a Classics object with the given values.
Classics::Classics(char genreType, const string &directorName,
                   const string &movieTitle, int releaseYear,
                   const string &actorFirstName, const string &actorLastname,
                   int releaseMonth)
    : Movies(genreType, directorName, movieTitle, releaseYear)
{

    this->firstName = actorFirstName;
    this->lastName = actorLastname;
    this->releaseMonth = releaseMonth;
}

// Classics(const Classics& other)
// Summary - Copy constructor.
// Pre-conditions - None.
// Post-conditiond - Constructs a Classics object as a copy of other Classics object.
Classics::Classics(const Classics& other) 
    : Movies(other) {
        this->firstName = other.firstName;
        this->lastName = other.lastName;
        this->releaseMonth = other.releaseMonth;
}


// ~Classics()
// Summary - Destructor.
// Pre-consitions - None.
// Post-conditions - Clears any dynamically associated memory.
Classics::~Classics() {
}

//--------------------------------------------comparison operators------------------------------------------------------------

// operator>()
// Summmary - Overloads the > operator to correctly compare Classics.
// Pre-conditons - None.
// Post-conditions - Returns true if this is > c.
//                   false otherwise.
bool Classics::operator>(const Classics &c) const {

    // Start with release year
    if (this->releaseYear > c.releaseYear) {
        return true;
    }
    else if (this->releaseYear < c.releaseYear) {
        return false;
    }

    // If equal compare release months
    if (this->releaseMonth > c.releaseMonth) {
        return true;
    }
    else if (this->releaseMonth < c.releaseMonth) {
        return false;
    }

    // If equal compare actor Name
    if (this->firstName + ' ' + this->lastName > c.firstName + ' ' + c.lastName) {
        return true;
    }
    else if (this->firstName + ' ' + this->lastName > c.firstName + ' ' + c.lastName) {
        return false;
    }

    // If equal return false
    return false;
}

// operator>=()
// Summmary - Overloads the >= operator to correctly compare Classics.
// Pre-conditons - None.
// Post-conditions - Returns true if this is >= c.
//                   false otherwise.
bool Classics::operator>=(const Classics &c) const {
    return (*this > c || *this == c);
}

// operator<()
// Summmary - Overloads the < operator to correctly compare Classics.
// Pre-conditons - None.
// Post-conditions - Returns true if this is < c.
//                   false otherwise.
bool Classics::operator<(const Classics &c) const {
    return !(*this > c || *this == c);
}

// operator<=()
// Summmary - Overloads the <= operator to correctly compare Classics.
// Pre-conditons - None.
// Post-conditions - Returns true if this is <= c.
//                   false otherwise.
bool Classics::operator<=(const Classics &c) const {
    return (*this < c || *this == c);
}


// operator==()
// Summmary - Overloads the == operator to correctly compare Classics.
//            Only checks for equality among sortable attributes since they uniquely identify the movie
// Pre-conditons - None.
// Post-conditions - Returns true if this is == c.
//                   false otherwise.
bool Classics::operator==(const Classics &c) const {
    if(this->releaseYear != c.releaseYear) {
        return false;
    }

    if(this->releaseMonth != c.releaseMonth) {
        return false;
    }

    if(this->lastName != c.lastName) {
        return false;
    }

    if(this->firstName != c.firstName) {
        return false;
    }

    return true;
}


//--------------------------------------------getter methods------------------------------------------------------------------

// getName() const
// Summary - gets the first name and last name of a major actor.
// Pre-conditions - None.
// Post-conditions - Returns the first name and last name of a major actor.
string Classics::getFirstName() const {
    return firstName;
}

// getLastName() const
// Summary - gets the last name of the major actor.
// Pre-conditions - None.
// Post-conditions - Returns the last name of the major actor.
string Classics::getLastName() const {
    return lastName;
}

// getReleaseMonth() const
// Summary - gets the release month of a classic movie.
// Pre-conditions - None.
// Post-conditions - Returns the release month oa a classic movie.
int Classics::getReleaseMonth() const {
    return releaseMonth;
}

// getMovieId() const
// Summary - gets the unique id for a classic movie.
// Pre-conditions - a valid movie should exist in classic genre to get it's id.
// Post-conditions - Returns the unique id for a classic movie.
string Classics::getContentId() const {
    return to_string(releaseYear) + to_string(releaseMonth) + firstName + ' ' + lastName;
}

//------------------------------------------------accessors---------------------------------------------------------------
// operator<<()
// Summary - Overrides the << operator to correctly print Classics
// Pre-conditions - None
// Post-conditions - Sends the Classics object c to ostream.
ostream& operator<<(ostream& out, const Classics c) {
    out << c.director << ", " << c.title << ", " << c.firstName << " " << c.lastName << " " << c.releaseMonth << " " << c.releaseYear;
    return out;
}