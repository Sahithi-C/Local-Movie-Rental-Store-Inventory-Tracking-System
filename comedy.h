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
    // Post-conditions - Constructs a comedy object as a copy of the comedy object.
    Comedy(const Comedy& other);

    // ~Comedy()
    // Summary - Destructor.
    // Pre-conditions - None.
    // Post-conditions - Clears any dynamically associated memory.
    ~Comedy();
    
    //------------------------------------------------getter methods---------------------------------------------------------------
    
    // getMovieId() const
    // Summary - Gets the unique ID for a comedy movie.
    // Pre-conditions - There should be a valid movie in movies of drama genre type.
    // Post-conditions - Returns the unique id for a drama movie.
    int getMovieId() const;

};

#endif
