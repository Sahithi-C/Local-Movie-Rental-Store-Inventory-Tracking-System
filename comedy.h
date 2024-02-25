//------------------------------------------------------comedy.h-----------------------------------------------------------

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
    // Post-conditions - Constructs a comedy object.
    Comedy();

    // Comedy(const Comedy& other)
    // Summary - Copy constructor.
    // Post-conditions - Constructs a comedy object as a copy of ther comedy object.
    Comedy(const Comedy& other);

    // ~Comedy()
    // Summary - Destructor.
    // Post-conditions - Clears any dynamically associated memory.
    ~Comedy();
    
    //------------------------------------------------getter methods---------------------------------------------------------------
    
    // getMovieId() const
    // Summary - Gets the unique identifier for a comedy movie. Implemented from the parent class Movie.
    // Post-conditions - Returns the unique identifier for a drama movie.
    string getMovieId() const;

};

#endif
