//------------------------------------------------------drama.h-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 02/24/2024

// Date of Last Modification : 02/24/2024

// Purpose : Defining a Drama class representing a drama movie.This class inherits from Movie class. 

// -------------------------------------------------------------------------------------------------------------------------

#ifndef DRAMA_H
#define DRAMA_H

#include<iostream>
#include "movies.h"
using namespace std;

class Drama : public Movies  // Drama class inherits from Movie class
{
   public:
    //------------------------------------------Constructors & Destructor-----------------------------------------------------
    
    // Drama()
    // Summary - Default constructor.
    // Pre-conditions - None.
    // Post-conditions - Constructs a drama object.
    Drama();

    // Parameterized constructor
    // Drama(char genreType, const string &directorName, const string &movieTitle, int releaseYear)
    // Summary - Initializes a Drama object with specified values for genre type, director name,
    //           movie title, and release year.
    // Pre-conditions - The provided genreType should be a valid character representing the genre type.
    //                - The directorName and movieTitle should be non-empty strings.
    //                - The releaseYear should be a valid integer representing the year of release.
    // Post-conditions - An instance of the Drama class is created with the provided values.
    Drama(char genreType, const string& directorName, const string& movieTitle, int releaseYear);

    // Drama(const Drama& other)
    // Summary - Copy constructor.
    // Pre-conditions - None.
    // Post-consitions - Constructs a drama objects as a copy other drama object.
    Drama(const Drama& other);

    // ~Drama()
    // Summary - Destructor.
    // Pre-conditions - None.
    // Post-consitions - Clears any dynamically associated memory.
    ~Drama();

    //---------------------------------------------getter methods-----------------------------------------------------------

    // getMovieId() const
    // Summary - Gets the unique id for a drama movie.
    // Pre-consitions - A valid movie should exist in drama genre to get it's id.
    // Post-consditions - Returns unique id for a drama movie.
    int getMovieId() const;
};

#endif
