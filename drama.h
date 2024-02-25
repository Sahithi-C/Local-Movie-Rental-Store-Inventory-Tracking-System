//------------------------------------------------------drama.h-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 02/24/2024

// Date of Last Modification : 02/24/2024

// Purpose : Defining a Drama class representing a drama movie. This class inherits from Movie class. 

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
    // Summary - Default constructor that constructs a Drama object.
    Drama();

    // Drama(const Drama& other)
    // Summary - Copy constructor 
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
    // Summary - gets the unique id for a drama movie.
    // Pre-consitions - a valid movie should exist in drama genre to get it's id.
    // Post-consditions - Returns unique id for a drama movie.
    int getMovieId() const;
};

#endif
