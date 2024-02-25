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
    // Summary - Default constructor initializing a content object with default values.
    Content();

    // Content(const Content& other)
    // Summary - Copy constructor
    Content(const Content& other);

    // ~Content()
    // Summary - Destructor
    ~Content();

    //-----------------------------------------------getter methods---------------------------------------------------------------

    // getTitle() const
    // Summary - Gets the title of the content.
    string getTitle() const;      

    // getReleaseyear() const
    // Summary - Gets release year of the content.
    int getReleaseYear() const;      


   private:
    string title;     // title of the content.
    int releaseYear;  // release year of the content.
};

#endif
