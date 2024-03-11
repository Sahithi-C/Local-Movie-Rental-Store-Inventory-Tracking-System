//------------------------------------------------------Content.cpp-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 03/10/2024

// Date of Last Modification : 03/10/2024

// Purpose : Implementing a Content class representing a generic content item.

// -------------------------------------------------------------------------------------------------------------------------

#include<iostream>
#include "content.h"

using namespace std;

// Content::Content()
// Summary - default constructor for the Content class.
// Pre-conditions - None.
// Post-conditions - An instance of the Content class is created with default values.
Content::Content() {
}

// Content::Content(const string &title, int releaseYear)
// Summary - initializes a Content object with specified values for title and release year.
// Pre-conditions - The title should be a non-empty string.
//                  releaseYear should be a valid integer representing the year of release.
// Post-conditions - An instance of the Content class is created with the provided values.
Content::Content(const string &title, int releaseYear) {
    this->title = title;
    this->releaseYear = releaseYear;
}

// ~Content()
// Summary - destructor for the Content class.
// Pre-conditions - None.
// Post-conditions - Clears any dynamically allocated memory associated with the Content object.
virtual Content::~Content() {
}
