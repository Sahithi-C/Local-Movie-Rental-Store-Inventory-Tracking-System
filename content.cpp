// content.cpp
// Jonah Kolar
// Made on: 3/8/2024
// Last updated: 3/9/2024
// CSS 502
// Assignment 4
// Summary: This file contains the implementation for Content.
// Assumptions: None

#include "content.h"

//-------------------------------------------------Constructors & Destructor--------------------------------------------------

// Content()
// Summary - Default constuctor.
// Post-conditions - A content object is initialized with default values.
Content::Content(){
    title = "";
    releaseYear = -1;
}

// Content(const Content& other)
// Summary - Copy constructor
// Post-consditions - A content object is initialized with data of other 
//                    content object.
Content::Content(const Content& other){
    this->title = other.title;
    this->releaseYear = other.releaseYear;
}

// ~Content()
// Summary - Destructor
// Post-conditions - Clears any dynamically associated memory.
Content::~Content(){}

//-----------------------------------------------getter methods---------------------------------------------------------------

// getTitle() const
// Summary - Gets the title of a content(Movie, in our case).
// Post-conditions - Returns the title of a content(movie).
string Content::getTitle() const{
    return title;
}      

// getReleaseYear() const
// Summary - Gets the release year of the content(movie).
// Post-conditions - Returns the release year of a content(movie).
int Content::getReleaseYear() const{
    return releaseYear; 
}

// getContentId() const
// Summary: Gets the unique ID for this piece of content.
// Post-conditions: Returns the unique ID for this piece of content.
string Content::getContentId() const{
    return title + to_string(releaseYear);
}

//---------------------------------------------Setter methods--------------------------------------------------------------

// setTitle(const string& title)
// Summary - Sets the title of the content(Movie, in our case).
// Post-conditions - Title of a movie is set.
//                   Returns true if title is set.
//                   false otherwise.
bool Content::setTitle(const string& title){
    this->title = title;
    return true;
}

// setReleaseYear(int year)
// Summary - Sets the release year of the content(Movie).
//           Release year cannot be set to a negative value.
// Post-conditions - Release year of a movie is set.
//                   Returns true if release year is set.
//                   false otherwise.
bool Content::setReleaseYear(int releaseYear){
    if (releaseYear >= 0) {
        this->releaseYear = releaseYear;
        return true;
    }
    return false;
}