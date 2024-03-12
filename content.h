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
    // Summary - Default constructor.
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
    // Pre-conditions - The 'other' Content object must be valid and properly initialized.
    // Post-consditions - A content object is initialized with data of other 
    //                    content object.
    Content(const Content& other);

    // ~Content()
    // Summary - Destructor.
    // Pre-conditions - None.
    // Post-conditions - Clears any dynamically associated memory.
    ~Content();

        //--------------------------------------------comparison operators------------------------------------------------------------

    // operator>()
    // Summmary - Overloads the > operator to correctly compare Content.
    // Pre-conditons - None.
    // Post-conditions - Returns true if this is > c.
    //                   false otherwise.
    virtual bool operator>(const Content &c) const;

    // operator>=()
    // Summmary - Overloads the >= operator to correctly compare Content.
    // Pre-conditons - None.
    // Post-conditions - Returns true if this is >= c.
    //                   false otherwise.
    virtual bool operator>=(const Content &c) const;

    // operator<()
    // Summmary - Overloads the < operator to correctly compare Content.
    // Pre-conditons - None.
    // Post-conditions - Returns true if this is < c.
    //                   false otherwise.
    virtual bool operator<(const Content &c) const;

    // operator<=()
    // Summmary - Overloads the <= operator to correctly compare Content.
    // Pre-conditons - None.
    // Post-conditions - Returns true if this is <= c.
    //                   false otherwise.
    virtual bool operator<=(const Content &c) const;
    

    // operator==()
    // Summmary - Overloads the == operator to correctly compare Content.
    // Pre-conditons - None.
    // Post-conditions - Returns true if this is == c.
    //                   false otherwise.
    virtual bool operator==(const Content &c) const;


    //-----------------------------------------------getter methods---------------------------------------------------------------

    // getTitle() const
    // Summary - Gets the title of a content(Movie, in our case).
    // Pre-conditions - None.
    // Post-conditions - Returns the title of a content(movie).
    string getTitle() const;      

    // getReleaseYear() const
    // Summary - Gets the release year of the content(movie).
    // Pre-conditions - None.
    // Post-conditions - Returns the release year of a content(movie).
    int getReleaseYear() const;

    // getContentId() const
    // Summary: Gets the unique ID for this piece of content.
    // Pre-conditions - None.
    // Post-conditions: Returns the unique ID for this piece of content.
    virtual string getContentId() const;

    //---------------------------------------------Setter methods--------------------------------------------------------------

    // setTitle(const string& title)
    // Summary - Sets the title of the content(Movie, in our case).
    // Pre-conditions - The input string 'title' must not be empty.
    // Post-conditions - Title of a movie is set.
    //                   Returns true if title is set.
    //                   false otherwise.
    bool setTitle(const string& title);

    // setReleaseYear(int year)
    // Summary - Sets the release year of the content(Movie).
    // Pre-conditions - The input 'releaseYear' must be a non-negative integer.
    // Post-conditions - Release year of a movie is set.
    //                   Returns true if release year is set.
    //                   false otherwise.
    bool setReleaseYear(int releaseYear);

    //------------------------------------------------accessors---------------------------------------------------------------
    // operator<<()
    // Summary - Overloaded output stream operator.
    // Pre-conditions - The Content object 'c' must be valid.
    // Post-conditions - The content of the Content object 'c' is printed to the output stream 'out'.
    friend ostream& operator<<(ostream& out, const Content c);

   protected:
    string title;     // title of the content.
    int releaseYear;  // release year of the content.
};

#endif
