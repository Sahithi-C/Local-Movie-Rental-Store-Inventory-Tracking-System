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
    // Summary - Copy constructor that copies one Drama objecct to another. 
    Drama(const Drama& other);

    // ~Drama()
    // Summary - Destructor.
    ~Drama();

    //---------------------------------------------getter methods-----------------------------------------------------------

    // getMovieId() const
    // Summary - Gets the unique identifier for a drama movie. Implemented from the parent class Movie.
    int getMovieId() const;
};

#endif
