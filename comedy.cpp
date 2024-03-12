// comedy.cpp
// Jonah Kolar
// Made on: 3/8/2024
// Last updated: 3/10/2024
// CSS 502
// Assignment 4
// Summary: This file contains the implementation for Comedy.
// Assumptions: None

#include<iostream>
#include "comedy.h"

using namespace std;

//-------------------------------------------Constructors and Destructor----------------------------------------------------

// Comedy()
// Summary - Default constructor.
// Pre-conditions - None.
// Post-conditions - Constructs a comedy object.
Comedy::Comedy(){}

// Comedy()
// Summary - A constructor.
// Pre-conditions - None.
// Post-conditions - Constructs a comedy object with the specified values.
Comedy::Comedy(char genreType, const string &directorName, const string &movieTitle, int releaseYear) 
       : Movies(genreType, directorName, movieTitle, releaseYear) {

}

// Comedy(const Comedy& other)
// Summary - Copy constructor.
// Pre-conditions - None.
// Post-conditions - Constructs a comedy object as a copy of ther comedy object.
Comedy::Comedy(const Comedy& other) 
       : Movies(other) {}

// ~Comedy()
// Summary - Destrcutor.
// Pre-conditions - None.
// Post-conditions - clears any dynamically associated memory.
Comedy::~Comedy(){}

//--------------------------------------------comparison operators------------------------------------------------------------

// operator>()
// Summmary - Overloads the > operator to correctly compare Comedy.
// Pre-conditons - None.
// Post-conditions - Returns true if this is > c.
//                   false otherwise.
bool Comedy::operator>(const Content &c) const {
    // Taken from this stack overflow answer https://stackoverflow.com/a/40347965
    const auto comedy = dynamic_cast<const Comedy*>(&c);
    if (comedy == nullptr)
    {
        return false;  // Not a comedy.  Cannot be equal.
    }

    // Start with the title
    if (this->title > comedy->title) {
       return true;
    }
    else if (this->title < comedy->title) {
       return false;
    }

    // If equal compare release year
    if (this->releaseYear > comedy->releaseYear) {
        return true;
    }
    else if (this->releaseYear < comedy->releaseYear) {
        return false;
    }

    // If equal return false
    return false;
}

// operator>=()
// Summmary - Overloads the >= operator to correctly compare Comedy.
// Pre-conditons - None.
// Post-conditions - Returns true if this is >= c.
//                   false otherwise.
bool Comedy::operator>=(const Content &c) const {
    return (*this > c || *this == c);
}

// operator<()
// Summmary - Overloads the < operator to correctly compare Comedy.
// Pre-conditons - None.
// Post-conditions - Returns true if this is < c.
//                   false otherwise.
bool Comedy::operator<(const Content &c) const {
    return !(*this > c || *this == c);
}

// operator<=()
// Summmary - Overloads the <= operator to correctly compare Comedy.
// Pre-conditons - None.
// Post-conditions - Returns true if this is <= c.
//                   false otherwise.
bool Comedy::operator<=(const Content &c) const {
    return (*this < c || *this == c);
}


// operator==()
// Summmary - Overloads the == operator to correctly compare Comedy.
//            Only checks for equality among sortable attributes since they uniquely identify the movie
// Pre-conditons - None.
// Post-conditions - Returns true if this is == c.
//                   false otherwise.
bool Comedy::operator==(const Content &c) const {
    // Taken from this stack overflow answer https://stackoverflow.com/a/40347965
    const auto comedy = dynamic_cast<const Comedy*>(&c);
    if (comedy == nullptr)
    {
        return false;  // Not a comedy.  Cannot be equal.
    }

    if (this->title != comedy->title) {
       return false;
    }
    
    if (this->releaseYear != comedy->releaseYear) {
        return false;
    }

    return true;
}

//------------------------------------------------getter methods---------------------------------------------------------------

// getContentId() const
// Summary - gets the unique id for a comedy movie.
// Pre-conditions - There should be a valid movie in movies of comedy genre type.
// Post-conditions - returns the unique id for a comedy movie.
string Comedy::getContentId() const{
       return title + to_string(releaseYear);
}

//------------------------------------------------accessors---------------------------------------------------------------
// operator<<()
// Summary - Overrides the << operator to correctly print Comedy
// Pre-conditions - None
// Post-conditions - Sends the Comedy object c to ostream.
ostream& operator<<(ostream& out, const Comedy c) {
       out << c.director << ", " << c.title << ", " << c.releaseYear;
       return out;
}

// printHelper(ostream& out, const Content &c) const
// Summary - Prints the details of a Comedy movie.
// Pre-conditions - The Comedy movie object must be properly initialized with valid director, title, and release year.
// Post-conditions - The details of the Comedy movie, including the director, title, and release year,
//                   are printed to the output stream 'out'.
ostream& Comedy::printHelper(ostream& out, const Content &c) const {
    out << this->director << ", " << this->title << ", " << this->releaseYear;
    return out;
}
