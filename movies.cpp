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
// Pre-conditions - None.
// Post-conditions - Constructs a movie object.
Movies::Movies()
    : Content() {
    director = "";
    genreType = 'N';
}

// Movies(char genreType, const string &director, const string &movieTitle, int releaseYear)
// Summary - Parameterized constructor for the Movies class.
// Pre-conditions - None.
// Post-conditions - A Movies object is initialized with the specified genre type, director, movie title, and release year.
//                   The content (movie title and release year) is set through the Content constructor.
Movies::Movies(char genreType, const string &director, const string &movieTitle, int releaseYear) 
    : Content(movieTitle, releaseYear) {
    this->genreType = genreType;
    this->director = director;
}

// Movies(Movies& other)
// Summary - Copy constructor.
// Pre-conditions - The 'other' parameter must be a valid Movies object.
// Post-conditions - constructs movie object as a copy of another movies object.
Movies::Movies(const Movies& other)
    : Content(other) {
    this->director = other.director;
    this->genreType = other.genreType;
}

// ~Movies()
// Summary - Destructor.
// Pre-conditions - None.
// Post-conditions - cleans up any dynamically allocated memory.
Movies::~Movies(){}

//---------------------------------------------Setter methods--------------------------------------------------------------
// setDirector(const string& director)
// Summary - Sets the director of a movie.
// Pre-conditions - The input string 'director' should not be empty.
// Post-conditions - Director of a movie is set.
//                   Returns true if the director is set.
//                   false otherwise.
bool Movies::setDirector(const string& director){
    this->director = director;
    return true;
}

// setGenreType(char genre)
// Summary - Sets the genre type for a movie.
// Pre-conditions - The genreType must be a valid character representing the genre type of the movie.
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
// Pre-conditions - None.
// Post-conditions - Returns genre type of a movie.
char Movies::getGenreType() const{
    return genreType;
}

// getDirector() const
// Summary - Gets the director of a movie.
// Pre-conditions - None.
// Post-conditions - Returns the firstName and lastName of the director of a movie.
string Movies::getDirector() const{
    return director;
}

// getContentId() const
// Summary - Abstract function to get a contentId, the unique identifier of this movie.
// Pre-conditions - None.
// Post-conditions - None.
string Movies::getContentId() const{
    return Content::getContentId() + director + genreType;
}


//--------------------------------------------additional functionalities------------------------------------------------

// addMovie()
// Summary - Adds a movie to the inventory.
// Pre-conditions - None.
// Post-conditions - A movie is added to the inventory.
bool Movies::addMovie(){}

// removeMovie()
// Summary - Removes a movie from the inventory.
// Pre-conditions - There sould be a movie existing in inventory to remove it.
// Post-conditions - a movie is removed from the inventory.
bool Movies::removeMovie(){}
