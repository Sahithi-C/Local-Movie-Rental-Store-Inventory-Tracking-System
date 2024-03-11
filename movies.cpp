// movies.cpp
// Jonah Kolar
// Made on: 3/8/2024
// Last updated: 3/9/2024
// CSS 502
// Assignment 4
// Summary: This file contains the implementation for Movies.
// Assumptions: None

//------------------------------------------------------movies.cpp-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 03/10/2024

// Date of Last Modification : 03/10/2024

// Purpose : Impementing the Movie class representing a movie entity.
//           This class is the base class for specific movie genres.  

// -------------------------------------------------------------------------------------------------------------------------

#include "movies.h"

//--------------------------------------constructors and destructor--------------------------------------------------------

// Movies()
// Summary - Default constructor.
// Post-conditions - Constructs a movie object.
Movies::Movies(){
    Content();
    director = "";
    genreType = 'N';
}

// Movies(char genreType, const string &director)
// Summary - Parameterized constructor for the Movies class.
// Pre-conditions - None.
// Post-conditions - Constructs a Movies object with the specified genreType and director.
Movies::Movies(char genreType, const string &director) {
    this->genreType = genreType;
    this->director = director;
}

// Movies(Movies& other)
// Summary - Copy constructor.
// Post-conditions - constructs movie object as a copy of another movies object.
Movies::Movies(Movies& other){
    Content(other);
    this->director = other.director;
    this->genreType = other.genreType;
}

// ~Movies()
// Summary - Destructor.
// Post-conditions - cleans up any dynamically allocated memory.
Movies::~Movies(){}


//-----------------------------------------------getter methods--------------------------------------------------------------

// getGenreType() const
// Summary - Gets the genre type of a movie.
// Post-conditions - Returns genre type of a movie.
char Movies::getGenreType() const{
    return genreType;
}

// getDirector() const
// Summary - Gets the director of a movie.
// Post-conditions - Returns the firstName and lastName of the director of a movie.
string Movies::getDirector() const{
    return director;
}

// getContentId() const
// Summary - Abstract function to get a contentId, the unique identifier of this movie.
// Post-conditions - None.
string Movies::getContentId() const{
    return title + to_string(releaseYear) + director + genreType;
}


//--------------------------------------------additional functionalities------------------------------------------------

// addMovie()
// Summary - Adds a movie to the inventory.
// Post-conditions - A movie is added to the inventory.
bool Movies::addMovie(){}

// removeMovie()
// Summary - Removes a movie from the inventory.
// Post-conditions - a movie is removed from the inventory.
bool Movies::removeMovie(){}
