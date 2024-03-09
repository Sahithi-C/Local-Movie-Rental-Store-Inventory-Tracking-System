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

    Content(const string& title, int releaseYear);

    // Content(const Content& other)
    // Summary - Copy constructor
    // Pre-conditions - None.
    // Post-consditions - A content object is initialized with data of other content object.
    Content(const Content& other);

    // ~Content()
    // Summary - Destructor
    // Pre-conditions - None.
    // Post-conditions - Cleans any dynamically associated memory.
    virtual ~Content();

    //-----------------------------------------------getter methods---------------------------------------------------------------

    // getTitle() const
    // Summary - gets the title of the content.
    // Pre-conditions - None.
    // Post-conditons - Returns the title of the content.
    string getTitle() const;      

    // getReleaseyear() const
    // Summary - gets release year of the content.
    // Pre-conditions - None.
    // Post-consitions - Returns the release year of the content. 
    int getReleaseYear() const;      


   private:
    string title;     // title of the content.
    int releaseYear;  // release year of the content.
};

#endif
