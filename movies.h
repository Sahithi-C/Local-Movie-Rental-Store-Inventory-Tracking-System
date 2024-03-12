//------------------------------------------------------movies.h-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 02/24/2024

// Date of Last Modification : 02/24/2024

// Purpose : Defining a Movie class representing a movie entity.
//           This class is the base class for specific movie genres.        
// -------------------------------------------------------------------------------------------------------------------------


#ifndef MOVIES_H
#define MOVIES_H

#include<iostream>
#include<string>
#include "content.h"
using namespace std;

class Movies : public Content // Movies class inherits from Content class
{
   public:
    //--------------------------------------constructors and destructor--------------------------------------------------------

    // Movies()
    // Summary - Default constructor.
    // Pre-conditions - None.
    // Post-conditions - Constructs a movie object.
    Movies();

    // Movies(char genreType, const string &director, const string &movieTitle, int releaseYear)
    // Summary - Parameterized constructor for the Movies class.
    // Pre-conditions - None.
    // Post-conditions - A Movies object is initialized with the specified genre type, director, movie title, and release year.
    //                   The content (movie title and release year) is set through the Content constructor.
    Movies(char genreType, const string &director, const string &movieTitle, int releaseYear);

    // Movies(Movies& other)
    // Summary - Copy constructor.
    // Pre-conditions - The 'other' parameter must be a valid Movies object.
    // Post-conditions - constructs movie object as a copy of another movies object.
    Movies(const Movies& other);

    // ~Movies()
    // Summary - Destructor.
    // Pre-conditions - None.
    // Post-conditions - cleans up any dynamically allocated memory.
    ~Movies();

    //---------------------------------------------Setter methods--------------------------------------------------------------
    // setDirector(const string& director)
    // Summary - Sets the director of a movie.
    // Pre-conditions - The input string 'director' should not be empty.
    // Post-conditions - Director of a movie is set.
    //                   Returns true if the director is set.
    //                   false otherwise.
    bool setDirector(const string& director);

    // setGenreType(char genre)
    // Summary - Sets the genre type for a movie.
    // Pre-conditions - The genreType must be a valid character representing the genre type of the movie.
    // Post-conditions - genreType is set for a movie.
    //                   Returns true if the genre is set.
    //                   false otherwise.
    bool setGenreType(char genreType);

    //--------------------------------------------comparison operators------------------------------------------------------------

    // operator>()
    // Summmary - Overloads the > operator to correctly compare Movies.
    // Pre-conditons - None.
    // Post-conditions - Returns true if this is > c.
    //                   false otherwise.
    virtual bool operator>(const Content &c) const = 0;

    // operator>=()
    // Summmary - Overloads the >= operator to correctly compare Movies.
    // Pre-conditons - None.
    // Post-conditions - Returns true if this is >= c.
    //                   false otherwise.
    virtual bool operator>=(const Content &c) const = 0;

    // operator<()
    // Summmary - Overloads the < operator to correctly compare Movies.
    // Pre-conditons - None.
    // Post-conditions - Returns true if this is < c.
    //                   false otherwise.
    virtual bool operator<(const Content &c) const = 0;

    // operator<=()
    // Summmary - Overloads the <= operator to correctly compare Movies.
    // Pre-conditons - None.
    // Post-conditions - Returns true if this is <= c.
    //                   false otherwise.
    virtual bool operator<=(const Content &c) const = 0;
    

    // operator==()
    // Summmary - Overloads the == operator to correctly compare Movies.
    // Pre-conditons - None.
    // Post-conditions - Returns true if this is == c.
    //                   false otherwise.
    virtual bool operator==(const Content &c) const = 0;


    //-----------------------------------------------getter methods--------------------------------------------------------------

    // getGenreType() const
    // Summary - Gets the genre type of a movie.
    // Pre-conditions - None.
    // Post-conditions - Returns genre type of a movie.
    char getGenreType() const;

    // getDirector() const
    // Summary - Gets the director of a movie.
    // Pre-conditions - None.
    // Post-conditions - Returns the firstName and lastName of the director of a movie.
    string getDirector() const;

    // getContentId() const
    // Summary - Abstract function to get a contentId, the unique identifier of this movie.
    // Pre-conditions - None.
    // Post-conditions - Returns the unique identifier (contentId) of this movie.
    virtual string getContentId() const;
    
    //------------------------------------------------accessors---------------------------------------------------------------
    // operator<<()
    // Summary - Overloaded output stream operator for Movies objects.
    // Pre-conditions - The output stream 'out' should be valid.
    //                - The Movies object 'm' should be valid.
    // Post-conditions - The Movies object 'm' is displayed to output.
    friend ostream& operator<<(ostream& out, const Movies &m);

    //--------------------------------------------additional functionalities------------------------------------------------

    // addMovie()
    // Summary - Adds a movie to the inventory.
    // Pre-conditions - None.
    // Post-conditions - A movie is added to the inventory.
    bool addMovie();

    // removeMovie()
    // Summary - Removes a movie from the inventory.
    // Pre-conditions - There sould be a movie existing in inventory to remove it.
    // Post-conditions - a movie is removed from the inventory.
    bool removeMovie();

   protected:
    string director;    // Director for a movie.
    char genreType;     // genre type for a movie.

    // virtual ostream& printHelper(ostream& out, const Content &c) const = 0;
    // Summary - A pure virtual function declared in the Movies class. It serves as a helper function to print the details of a movie.
    // Pre-conditions - The Content object 'c' should be a valid instance.
    // Post-conditions - The details of the movie, such as the director, title, and release year are printed to the output stream 'out'.
    //                 - The output stream 'out' may be modified with the movie details.
    virtual ostream& printHelper(ostream& out, const Content &c) const = 0;
};

#endif
