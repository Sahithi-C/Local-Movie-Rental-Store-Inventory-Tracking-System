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
Drama::Drama(const Drama& other)
      : Movies(other) {}

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
bool Drama::operator>(const Drama &c) const {

    // Start with the title
    if (this->director > c.director) {
       return true;
    }
    else if (this->title < c.title) {
       return false;
    }

    // If equal compare release year
    if (this->releaseYear > c.releaseYear) {
        return true;
    }
    else if (this->releaseYear < c.releaseYear) {
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
bool Drama::operator>=(const Drama &c) const {
    return (*this > c || *this == c);
}

// operator<()
// Summmary - Overloads the < operator to correctly compare Drama.
// Pre-conditons - None.
// Post-conditions - Returns true if this is < c.
//                   false otherwise.
bool Drama::operator<(const Drama &c) const {
    return !(*this > c || *this == c);
}

// operator<=()
// Summmary - Overloads the <= operator to correctly compare Drama.
// Pre-conditons - None.
// Post-conditions - Returns true if this is <= c.
//                   false otherwise.
bool Drama::operator<=(const Drama &c) const {
    return (*this < c || *this == c);
}


// operator==()
// Summmary - Overloads the == operator to correctly compare Drama.
//            Only checks for equality among sortable attributes since they uniquely identify the movie
// Pre-conditons - None.
// Post-conditions - Returns true if this is == c.
//                   false otherwise.
bool Drama::operator==(const Drama &c) const {
    
    if (this->director != c.director) {
       return false;
    }
    
    if (this->releaseYear != c.releaseYear) {
        return false;
    }

    return true;
}

//---------------------------------------------getter methods-----------------------------------------------------------

// getContentId() const
// Summary - gets the unique id for a drama movie.
// Pre-consitions - a valid movie should exist in drama genre to get it's id.
// Post-consditions - Returns unique id for a drama movie.
string Drama::getContentId() const{
      return Movies::getContentId();
}