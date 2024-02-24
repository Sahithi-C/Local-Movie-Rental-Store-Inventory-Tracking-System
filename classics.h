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

    //--------------------------------------------Setter methods---------------------------------------------------------------

    // setName(const string& firstName, const string& lastName)
    // Summary - Sets the name of a major actor.
    // Pre-conditions - None.
    // Post-conditions - first name and last name of a major actor is set.
    void setName(const string& firstName, const string& lastName);

    // setReleaseMonth(int month)
    // Summary - Sets the release month of a Classic movie.
    // Pre-conditions - None.
    // Post-conditions - Release month of a classic movie is set.
    void setReleaseMonth(int month);

    //--------------------------------------------getter methods------------------------------------------------------------------

    // getName() const
    // Summary - gets the first name and last name of a major actor.
    // Pre-conditions - None.
    // Post-conditions - Returns the first name and last name of a major actor.
    string getName() const;

    // getReleaseMonth() const
    // Summary - gets the release month of a classic movie.
    // Pre-conditions - None.
    // Post-conditions - Returns the release month oa a classic movie.
    int getReleaseMonth() const;

    // getMovieId() const
    // Summary - gets the unique id for a classic movie.
    // Pre-conditions - a valid movie should exist in classic genre to get it's id.
    // Post-conditions - Returns the unique id for a classic movie.
    int getMovieId() const;

   private:
    int releaseMonth;  // release month oa a classic movie.
    string lastName;   // last name of the major actor.
    string firstName;  // first name of the major actor.
};

#endif