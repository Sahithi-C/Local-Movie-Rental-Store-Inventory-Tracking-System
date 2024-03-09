// movies.cpp
// Jonah Kolar
// Made on: 3/8/2024
// Last updated: 3/9/2024
// CSS 502
// Assignment 4
// Summary: This file contains the implementation for Movies.
// Assumptions: None

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

//---------------------------------------------Setter methods--------------------------------------------------------------
// setDirector(const string& director)
// Summary - Sets the director of a movie.
// Post-conditions - Director of a movie is set.
//                   Returns true if the director is set.
//                   false otherwise.
bool Movies::setDirector(const string& director){
    this->director = director;
    return true;
}

// setGenreType(char genre)
// Summary - Sets the genre type for a movie.
// Post-conditions - genreType is set for a movie.
//                   Returns true if the genre is set.
//                   false otherwise.
bool Movies::setGenreType(char genreType){
    this->genreType = genreType;
    return true;
}

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