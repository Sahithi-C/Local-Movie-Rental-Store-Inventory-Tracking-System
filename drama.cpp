// drama.cpp
// Jonah Kolar
// Made on: 3/8/2024
// Last updated: 3/9/2024
// CSS 502
// Assignment 4
// Summary: This file contains the implementation for Drama.
// Assumptions: None

#include<iostream>
#include "drama.h"
using namespace std;


//------------------------------------------Constructors & Destructor-----------------------------------------------------

// Drama()
// Summary - Default constructor.
// Pre-conditions - None.
// Post-conditions - Constructs a drama object.
Drama::Drama(){}

// Drama()
// Summary - A constructor.
// Pre-conditions - None.
// Post-conditions - Constructs a drama object with my specified values.
Drama::Drama(char genreType, const string &directorName, const string &movieTitle, int releaseYear) 
      : Movies(genreType, directorName, movieTitle, releaseYear) {
}

// Drama(const Drama& other)
// Summary - Copy constructor.
// Pre-conditions - None.
// Post-consitions - Constructs a drama objects as a copy other drama object.
Drama::Drama(const Drama& other) {
    setTitle(other.title);
    setDirector(other.director);
    setReleaseYear(other.releaseYear);
    setGenreType(other.genreType);
}

// ~Drama()
// Summary - Destructor.
// Pre-conditions - None.
// Post-consitions - Clears any dynamically associated memory.
Drama::~Drama(){}

//--------------------------------------------comparison operators------------------------------------------------------------

// operator>()
// Summmary - Overloads the > operator to correctly compare Drama.
// Pre-conditons - None.
// Post-conditions - Returns true if this is > c.
//                   false otherwise.
bool Drama::operator>(const Content &c) const {
    const auto drama = dynamic_cast<const Drama*>(&c);
    if (drama == nullptr)
    {
        return false;  // Not a comedy.  Cannot be equal.
    }
    // Start with the title
    if (this->director > drama->director) {
       return true;
    }
    else if (this->title < drama->title) {
       return false;
    }

    // If equal compare release year
    if (this->releaseYear > drama->releaseYear) {
        return true;
    }
    else if (this->releaseYear < drama->releaseYear) {
        return false;
    }

    // If equal return false
    return false;
}

// operator>=()
// Summmary - Overloads the >= operator to correctly compare Drama.
// Pre-conditons - None.
// Post-conditions - Returns true if this is >= c.
//                   false otherwise.
bool Drama::operator>=(const Content &c) const {
    return (*this > c || *this == c);
}

// operator<()
// Summmary - Overloads the < operator to correctly compare Drama.
// Pre-conditons - None.
// Post-conditions - Returns true if this is < c.
//                   false otherwise.
bool Drama::operator<(const Content &c) const {
    return !(*this > c || *this == c);
}

// operator<=()
// Summmary - Overloads the <= operator to correctly compare Drama.
// Pre-conditons - None.
// Post-conditions - Returns true if this is <= c.
//                   false otherwise.
bool Drama::operator<=(const Content &c) const {
    return (*this < c || *this == c);
}


// operator==()
// Summmary - Overloads the == operator to correctly compare Drama.
//            Only checks for equality among sortable attributes since they uniquely identify the movie
// Pre-conditons - None.
// Post-conditions - Returns true if this is == c.
//                   false otherwise.
bool Drama::operator==(const Content &c) const {
    // Taken from this stack overflow answer https://stackoverflow.com/a/40347965
    const auto drama = dynamic_cast<const Drama*>(&c);
    if (drama == nullptr)
    {
        return false;  // Not a comedy.  Cannot be equal.
    }

    if (this->director != drama->director) {
       return false;
    }
    
    if (this->releaseYear != drama->releaseYear) {
        return false;
    }

    return true;
}

// operator!=()
// Summmary - Overloads the != operator to correctly compare Drama.
// Pre-conditons - None.
// Post-conditions - Returns true if this is != c.
//                   false otherwise.
bool Drama::operator!=(const Content &c) const {
    return !(*this == c);
}

// operator=()
// Summary - Overloads the = operator to correctly assign Content.
// Pre-conditions - m should be a non null Content object.
// Post-conditons - *this will be equivalent to m.
Content& Drama::operator=(const Content &c) {
    const auto drama = dynamic_cast<const Drama*>(&c);
    if (drama == nullptr)
    {
        return *this;  // Not a drama do nothing
    }
    setTitle(drama->title);
    setDirector(drama->director);
    setReleaseYear(drama->releaseYear);
    setGenreType(drama->genreType);
    return *this;
}   

//---------------------------------------------getter methods-----------------------------------------------------------

// getContentId() const
// Summary - gets the unique id for a drama movie.
// Pre-consitions - a valid movie should exist in drama genre to get it's id.
// Post-consditions - Returns unique id for a drama movie.
string Drama::getContentId() const{
      return director + title;
}

//------------------------------------------------accessors---------------------------------------------------------------
// operator<<()
// Summary - Overrides the << operator to correctly print Drama
// Pre-conditions - None
// Post-conditions - Sends the Drama object d to ostream.
ostream& operator<<(ostream& out, const Drama d) {
      out << d.director << ", " << d.title << ", " << d.releaseYear;
      return out;
}

// printHelper(ostream& out, const Content &c) const
// Summary - Prints the details of a Drama movie.
// Pre-conditions - The Drama movie object must be properly initialized with valid director, title, and release year.
// Post-conditions - The details of the Drama movie, including the director, title, and release year,
//                   are printed to the output stream 'out'.
ostream& Drama::printHelper(ostream& out, const Content &c) const {
    out << this->director << ", " << this->title << ", " << this->releaseYear;
      return out;
}
