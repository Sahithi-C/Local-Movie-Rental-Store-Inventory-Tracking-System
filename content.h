//------------------------------------------------------Content.h-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 02/24/2024

// Date of Last Modification : 02/24/2024

// Purpose : Defining a Content class representing a generic content item.

// -------------------------------------------------------------------------------------------------------------------------

#ifndef CONTENT_H
#define CONTENT_H

#include<iostream>
#include<string>
using namespace std;

class Content 
{
   public:
    //-------------------------------------------------Constructors & Destructor--------------------------------------------------

    // Content()
    // Summary - Default constuctor.
    // Pre-conditions - None.
    // Post-conditions - A content object is initialized with default values.
    Content();

    // Content(const string &title, int releaseYear)
    // Summary - Initializes a Content object with specified values for title and release year.
    // Pre-conditions - The title should be a non-empty string.
    //                  releaseYear should be a valid integer representing the year of release.
    // Post-conditions - An instance of the Content class is created with the provided values.
    Content(const string& title, int releaseYear);

    // Content(const Content& other)
    // Summary - Copy constructor
    // Pre-conditions - None.
    // Post-conditions - A content object is initialized with data of other content object.
    Content(const Content& other);

    // ~Content()
    // Summary - Destructor
    // Pre-conditions - None.
    // Post-conditions - Cleans any dynamically associated memory.
    virtual ~Content();

    //-----------------------------------------------getter methods---------------------------------------------------------------

    // getTitle() const
    // Summary - Gets the title of the content.
    // Pre-conditions - None.
    // Post-conditions - Returns the title of the content.
    string getTitle() const;      

    // getReleaseyear() const
    // Summary - Gets release year of the content.
    // Pre-conditions - None.
    // Post-conditions - Returns the release year of the content. 
    int getReleaseYear() const;      


   private:
    string title;     // Title of the content.
    int releaseYear;  // Release year of the content.
};

#endif
