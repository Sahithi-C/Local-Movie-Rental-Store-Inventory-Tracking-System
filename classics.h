//------------------------------------------------------classics.h-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 02/24/2024

// Date of Last Modification : 02/24/2024

// Purpose : Defining a Classics class representing a classic movie.This class inherits from Movie class. 

// -------------------------------------------------------------------------------------------------------------------------

#ifndef CLASSICS_H
#define CLASSICS_H

#include<iostream>
#include<string>
#include "movies.h"
using namespace std;

class Classics : public Movies  // Classics class inherits from Movies class
{
   public:
    //--------------------------------------------constructors and destructor-----------------------------------------------------

    // Classics()
    // Summary - default constructor for Classics class.
    // Pre-conditions - None.
    // Post-conditions - Constrcts a Classics object.
    Classics();

    Classics(char genreType, const string& directorName, 
             const string& movieTitle, int releaseYear,
             const string& actorFirstName, const string& actorLastname, 
             int releaseMonth);

    // Classics(const Classics& other)
    // Summary - Copy constructor.
    // Pre-conditions - None.
    // Post-conditiond - Constructs a Classics object as a copy of other Classics object.
    Classics(const Classics& other);

    // ~Classics()
    // Summary - Destructor.
    // Pre-consitions - None.
    // Post-conditions - Clears any dynamically associated memory.
    ~Classics();

    //--------------------------------------------comparison operators------------------------------------------------------------

    // operator>()
    // Summmary - Overloads the > operator to correctly compare Classics.
    // Pre-conditons - None.
    // Post-conditions - Returns true if this is > c.
    //                   false otherwise.
    bool operator>(const Classics &c) const;

    // operator>=()
    // Summmary - Overloads the >= operator to correctly compare Classics.
    // Pre-conditons - None.
    // Post-conditions - Returns true if this is >= c.
    //                   false otherwise.
    bool operator>=(const Classics &c) const;

    // operator<()
    // Summmary - Overloads the < operator to correctly compare Classics.
    // Pre-conditons - None.
    // Post-conditions - Returns true if this is < c.
    //                   false otherwise.
    bool operator<(const Classics &c) const;

    // operator<=()
    // Summmary - Overloads the <= operator to correctly compare Classics.
    // Pre-conditons - None.
    // Post-conditions - Returns true if this is <= c.
    //                   false otherwise.
    bool operator<=(const Classics &c) const;
    

    // operator==()
    // Summmary - Overloads the == operator to correctly compare Classics.
    // Pre-conditons - None.
    // Post-conditions - Returns true if this is == c.
    //                   false otherwise.
    bool operator==(const Classics &c) const;

    //--------------------------------------------getter methods------------------------------------------------------------------

    // getFirstName() const
    // Summary - gets the first name of the major actor.
    // Pre-conditions - None.
    // Post-conditions - Returns the first name of the major actor.
    string getFirstName() const;

    // getLastName() const
    // Summary - gets the last name of the major actor.
    // Pre-conditions - None.
    // Post-conditions - Returns the last name of the major actor.
    string getLastName() const;

    // getReleaseMonth() const
    // Summary - gets the release month of a classic movie.
    // Pre-conditions - None.
    // Post-conditions - Returns the release month oa a classic movie.
    int getReleaseMonth() const;

    // getContentId() const
    // Summary - gets the unique id for a classic movie.
    // Pre-conditions - a valid movie should exist in classic genre to get it's id.
    // Post-conditions - Returns the unique id for a classic movie.
    string getContentId() const;

    //------------------------------------------------accessors---------------------------------------------------------------
    // operator<<()
    // Summary - Overrides the << operator to correctly print Classics
    // Pre-conditions - None
    // Post-conditions - Sends the Classics object c to ostream.
    friend ostream& operator<<(ostream& out, const Classics c);

   private:
    string firstName;  // first name of the major actor.
    string lastName;   // last name of the major actor.
    int releaseMonth;  // release month oa a classic movie.

};

#endif
