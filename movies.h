//------------------------------------------------------movies.h-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 02/24/2024

// Date of Last Modification : 02/24/2024

// Purpose : Defining a Movie class representing a movie entity.
//           This class is the base class for specific movie genres.        
// -------------------------------------------------------------------------------------------------------------------------


#ifndef MOVIES_H
#define MOVIES_H

#include<iostream>
#include<string>
#include "content.h"
using namespace std;

class Movies : public Content // Movies class inherits from Content class
{
   public:
    //--------------------------------------constructors and destructor--------------------------------------------------------

    // Movies()
    // Summary - Default constructor.
    // Post-conditions - Constructs a movie object.
    Movies();

    // Movies(char genreType, const string &director)
    // Summary - Parameterized constructor for the Movies class.
    // Pre-conditions - None.
    // Post-conditions - Constructs a Movies object with the specified genreType and director.
    Movies(char genreType, const string &director)

    // Movies(Movies& other)
    // Summary - Copy constructor.
    // Post-conditions - constructs movie object as a copy of another movies object.
    Movies(Movies& other)

    // ~Movies()
    // Summary - Destructor.
    // Post-conditions - cleans up any dynamically allocated memory.
    ~Movies();

    //---------------------------------------------Setter methods--------------------------------------------------------------
    // setDirector(const string& director)
    // Summary - Sets the director of a movie.
    // Post-conditions - Director of a movie is set.
    void setDirector(const string& director);

    // setGenreType(char genre)
    // Summary - Sets the genre type for a movie.
    // Post-conditions - genreType is set for a movie.
    void setGenreType(char genreType);

    //-----------------------------------------------getter methods--------------------------------------------------------------

    // getGenreType() const
    // Summary - Gets the genre type of a movie.
    // Post-conditions - Returns genre type of a movie.
    char getGenreType() const;

    // getDirector() const
    // Summary - Gets the director of a movie.
    // Post-conditions - Returns the firstName and lastName of the director of a movie.
    string getDirector() const;

    // getContentId() const
    // Summary - Abstract function to get a contentId, the unique identifier of this movie.
    // Post-conditions - None.
    string getContentId() const;


    //--------------------------------------------additional functionalities------------------------------------------------

    // addMovie()
    // Summary - Adds a movie to the inventory.
    // Post-conditions - A movie is added to the inventory.
    bool addMovie();

    // removeMovie()
    // Summary - Removes a movie from the inventory.
    // Post-conditions - a movie is removed from the inventory.
    bool removeMovie();

   private:
    string Director;    // Director for a movie.
    char genreType;     // genre type for a movie.
};

#endif
