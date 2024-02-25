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
    // Summary - Default constructor that constructs a Comedy object.
    Comedy();

    // Comedy(const Comedy& other)
    // Summary - Copy constructor that copies one Comedy object to another.
    Comedy(const Comedy& other);

    // ~Comedy()
    // Summary - Destrcutor.
    ~Comedy();
    
    //------------------------------------------------getter methods---------------------------------------------------------------
    
    // getMovieId() const
    // Summary - Gets the unique identifier for a comedy movie. Implemented from the parent class Movie.
    string getMovieId() const;

};

#endif
