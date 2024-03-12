//------------------------------------------------------Comedy.h-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 02/24/2024

// Date of Last Modification : 02/24/2024

// Purpose : Defining a Comedy class representing a funny movie.This class inherits from Movie class. 

// -------------------------------------------------------------------------------------------------------------------------

#ifndef COMEDY_H
#define COMEDY_H

#include<iostream>
#include "movies.h"
using namespace std;

class Comedy : public Movies  // Comedy class inherits from Movie class.
{
   public:
    //-------------------------------------------Constructors and Destructor----------------------------------------------------

    // Comedy()
    // Summary - Default constructor.
    // Pre-conditions - None.
    // Post-conditions - Constructs a comedy object.
    Comedy();

    // Parameterized constructor
    Comedy(char genreType, const string& directorName, const string& movieTitle, int releaseYear);

    // Comedy(const Comedy& other)
    // Summary - Copy constructor.
    // Pre-conditions - None.
    // Post-conditions - Constructs a comedy object as a copy of ther comedy object.
    Comedy(const Comedy& other);

    // ~Comedy()
    // Summary - Destrcutor.
    // Pre-conditions - None.
    // Post-conditions - clears any dynamically associated memory.
    ~Comedy();
    
    //--------------------------------------------comparison operators------------------------------------------------------------

    // operator>()
    // Summmary - Overloads the > operator to correctly compare Comedy.
    // Pre-conditons - None.
    // Post-conditions - Returns true if this is > c.
    //                   false otherwise.
    virtual bool operator>(const Content &c) const;

    // operator>=()
    // Summmary - Overloads the >= operator to correctly compare Comedy.
    // Pre-conditons - None.
    // Post-conditions - Returns true if this is >= c.
    //                   false otherwise.
    virtual bool operator>=(const Content &c) const;

    // operator<()
    // Summmary - Overloads the < operator to correctly compare Comedy.
    // Pre-conditons - None.
    // Post-conditions - Returns true if this is < c.
    //                   false otherwise.
    virtual bool operator<(const Content &c) const;

    // operator<=()
    // Summmary - Overloads the <= operator to correctly compare Comedy.
    // Pre-conditons - None.
    // Post-conditions - Returns true if this is <= c.
    //                   false otherwise.
    virtual bool operator<=(const Content &c) const;
    

    // operator==()
    // Summmary - Overloads the == operator to correctly compare Comedy.
    // Pre-conditons - None.
    // Post-conditions - Returns true if this is == c.
    //                   false otherwise.
    virtual bool operator==(const Content &c) const;

    //------------------------------------------------getter methods---------------------------------------------------------------
    
    // getContentId() const
    // Summary - gets the unique id for a comedy movie.
    // Pre-conditions - There should be a valid movie in movies of drama genre type.
    // Post-conditions - returns the unique id for a drama movie.
    string getContentId() const;


    //------------------------------------------------accessors---------------------------------------------------------------
    // operator<<()
    // Summary - Overrides the << operator to correctly print Comedy
    // Pre-conditions - None
    // Post-conditions - Sends the Comedy object c to ostream.
    friend ostream& operator<<(ostream& out, const Comedy c);

    ostream& printHelper(ostream& out, const Content &c) const;
};

#endif
