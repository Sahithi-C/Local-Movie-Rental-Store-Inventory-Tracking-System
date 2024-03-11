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

    // Classics(char genreType, const string &directorName, const string &movieTitle,
    //          int releaseYear, const string &actorFirstName, const string &actorLastname,
    //          int releaseMonth)
    // Summary - Initializes a Classics object with specified values for genre type, director name,
    //           movie title, release year, actor's first and last name, and release month.
    // Pre-conditions - The provided genreType should be a valid character representing the genre type.
    //                  The directorName, movieTitle, actorFirstName, and actorLastName should be non-empty strings.
    //                  releaseYear and releaseMonth should be valid integers representing the year and month of release.
    // Post-conditions - An instance of the Classics class is created with the provided values.
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


    //--------------------------------------------getter methods------------------------------------------------------------------

    // getName() const
    // Summary - Gets the first name and last name of a major actor.
    // Pre-conditions - None.
    // Post-conditions - Returns the first name and last name of a major actor.
    string getName() const;

    // getReleaseMonth() const
    // Summary - Gets the release month of a classic movie.
    // Pre-conditions - None.
    // Post-conditions - Returns the release month oa a classic movie.
    int getReleaseMonth() const;

    // getMovieId() const
    // Summary - Gets the unique id for a classic movie.
    // Pre-conditions - A valid movie should exist in classic genre to get it's id.
    // Post-conditions - Returns the unique id for a classic movie.
    int getMovieId() const;

   private:
    string firstName;  // First name of the major actor.
    string lastName;   // last name of the major actor.
    int releaseMonth;  // release month oa a classic movie.

};

#endif
