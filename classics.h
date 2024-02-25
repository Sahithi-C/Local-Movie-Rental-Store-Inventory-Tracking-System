//------------------------------------------------------classics.h-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 02/24/2024

// Date of Last Modification : 02/24/2024

// Purpose : Defining a Classics class representing a classic movie. This class inherits from Movie class. 

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
    // Summary - Default constructor for Classics class that constructs a Classics object.
    Classics();

    // Classics(const Classics& other)
    // Summary - Copy constructor that copies one Classics objecct to another.
    Classics(const Classics& other);

    // ~Classics()
    // Summary - Destructor.
    ~Classics();

    //--------------------------------------------Setter methods---------------------------------------------------------------

    // setName(const string& firstName, const string& lastName)
    // Summary - Sets the name of major actor.
    void setName(const string& firstName, const string& lastName);

    // setReleaseMonth(int month)
    // Summary - Sets the release month of a Classics movie.
    void setReleaseMonth(int releaseMonth);

    //--------------------------------------------getter methods------------------------------------------------------------------

    // getName() const
    // Summary - Gets the first name and last name of a major actor.
    string getName() const;

    // getReleaseMonth() const
    // Summary - Gets the release month of a classic movie.
    int getReleaseMonth() const;

    // getMovieId() const
    // Summary - Gets the unique identifier for a classic movie. Implemented from the parent class Movie.
    string getMovieId() const;

   private:
    int releaseMonth;  // release month of a classic movie.
    string lastName;   // last name of the major actor.
    string firstName;  // first name of the major actor.
};

#endif
