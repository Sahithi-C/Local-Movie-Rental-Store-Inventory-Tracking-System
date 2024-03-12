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
// Summary - Default constructor.
// Pre-conditions - None.
// Post-conditions - A content object is initialized with default values.
Content::Content(){
    title = "";
    releaseYear = -1;
}

// Content(const string &title, int releaseYear)
// Summary - Initializes a Content object with specified values for title and release year.
// Pre-conditions - The title should be a non-empty string.
//                  releaseYear should be a valid integer representing the year of release.
// Post-conditions - An instance of the Content class is created with the provided values.
Content::Content(const string &title, int releaseYear) {
    this->title = title;
    this->releaseYear = releaseYear;
}

// Content(const Content& other)
// Summary - Copy constructor
// Pre-conditions - The 'other' Content object must be valid and properly initialized.
// Post-conditions - A content object is initialized with data of other 
//                    content object.
Content::Content(const Content& other){
    this->title = other.title;
    this->releaseYear = other.releaseYear;
}

// ~Content()
// Summary - Destructor
// Pre-conditions - None.
// Post-conditions - Clears any dynamically associated memory.
Content::~Content(){}

//-----------------------------------------------getter methods---------------------------------------------------------------

// getTitle() const
// Summary - Gets the title of a content(Movie, in our case).
// Pre-conditions - None.
// Post-conditions - Returns the title of a content(movie).
string Content::getTitle() const{
    return title;
}      

// getReleaseYear() const
// Summary - Gets the release year of the content(movie).
// Pre-conditions - None.
// Post-conditions - Returns the release year of a content(movie).
int Content::getReleaseYear() const{
    return releaseYear; 
}

// getContentId() const
// Summary: Gets the unique ID for this piece of content.
// Pre-conditions - None.
// Post-conditions: Returns the unique ID for this piece of content.
string Content::getContentId() const{
    return title + to_string(releaseYear);
}

//---------------------------------------------Setter methods--------------------------------------------------------------

// setTitle(const string& title)
// Summary - Sets the title of the content(Movie, in our case).
// Pre-conditions - The input string 'title' must not be empty.
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
// Pre-conditions - The input 'releaseYear' must be a non-negative integer.
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
