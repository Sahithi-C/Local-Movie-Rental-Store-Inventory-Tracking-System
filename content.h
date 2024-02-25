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
    // Post-conditions - A content object is initialized with default values.
    Content();

    // Content(const Content& other)
    // Summary - Copy constructor
    // Post-consditions - A content object is initialized with data of other 
    //                    content object.
    Content(const Content& other);

    // ~Content()
    // Summary - Destructor
    // Post-conditions - Clears any dynamically associated memory.
    ~Content();

    //-----------------------------------------------getter methods---------------------------------------------------------------

    // getTitle() const
    // Summary - Gets the title of a content(Movie, in our case).
    // Post-conditions - Returns the title of a content(movie).
    virtual string getTitle() const;      

    // getReleaseYear() const
    // Summary - Gets the release year of the content(movie).
    // Post-conditions - Returns the release year of a content(movie).
    virtual int getReleaseYear() const;      

    //---------------------------------------------Setter methods--------------------------------------------------------------

    // setTitle(const string& title)
    // Summary - Sets the title of the content(Movie, in our case).
    // Post-conditions - Title of a movie is set.
    void setTitle(const string& title);

    // setReleaseYear(int year)
    // Summary - Sets the release year of the content(Movie).
    // Post-conditions - Release year of a movie is set.
    void setReleaseYear(int releaseYear);


   private:
    string title;     // title of the content.
    int releaseYear;  // release year of the content.
};

#endif
