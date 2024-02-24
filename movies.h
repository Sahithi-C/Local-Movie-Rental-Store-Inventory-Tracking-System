//------------------------------------------------------movies.h-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 02/24/2024

// Date of Last Modification : 02/24/2024

// Purpose : Defining a Movie class representing a movie entity.This class is the base class for specific movie genres.  

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

    // Movies(Movies& other)
    // Summary - Copy constructor.
    // Pre-conditions - None.
    // Post-conditions - constructs movie object as a copy of another movies object.
    Movies(Movies& other);

    // ~Movies()
    // Summary - Destructor.
    // Pre-conditions - None.
    // Post-conditions - cleans up any dynamically associated memory.
    ~Movies();

    //---------------------------------------------Setter methods--------------------------------------------------------------

    // setTitle(const string& title)
    // Summary - Sets the title of the movie.
    // PreCondition - title of the movies is set.
    void setTitle(const string& title);

    // setTear(int year)
    // Summary - Sets release year of a movie.
    // Pre-conditions - None.
    // Post-conditions - release year of a movie is set.
    void setYear(int year);

    // setDirector(const string& director)
    // Summary - Sets the director of a movie.
    // Pre-conditions - None.
    // Post-conditions - director of a movie is set.
    void setDirector(const string& director);

    // setGenreType(char genre)
    // Summary - Sets the genre type for a movie.
    // Pre-conditions - None.
    // Pst-conditions - genreType is set for a movie.
    void setGenreType(char genre);

    //-----------------------------------------------getter methods--------------------------------------------------------------

    // getTitle() const
    // Summary - gets the title of a movie.
    // Pre-conditions - None.
    // Post-conditions - Returns the title of a movie.
    string getTitle() const;

    // getYear() const
    // Summary - gets the release year of a movie.
    // Pre-conditions - None.
    // Post-conditions - Returns the release year of a movie.
    int getYear() const;

    // getGenreType() const
    // Summary - gets the genre type of a movie.
    // Pre-conditions - None.
    // Post-conditions - Returns genre type of a movie.
    char getGenreType() const;

    // getDirector() const
    // Summary - gets the director of a movie.
    // Pre-conditions - None.
    // Post-conditions - Returns director oa a movie.
    string getDirector() const;

    // getMovieId() const
    // Summary - gets the unique movieID for a movie.
    // Pre-conditions - the id should be a valid movie id.
    // Post-conditions - Returns the unique id of a movie.
    int getMovieId() const;

    // getStock() const
    // Summary - gets the stock availability for a movie.
    // Pre-condition - None.
    // Post-conditions - Returns the stock of a movie for a particular media type.
    int getStock() const;

    //--------------------------------------------additional functionalities------------------------------------------------

    // addMovie()
    // Summary - Adds a movie to the inventory.
    // Pre-conditions - None.
    // Post-conditions - A movie is added to the inventory.
    bool addMovie();

    // removeMovie()
    // Summary - Removes a movie from the inventory.
    // Pre-conditions - None.
    // Post-conditions - a movie is removed from the inventory.
    bool removeMovie();

   private:
    string Director;    // Director for a movie.
    char genreType;     // genre type for a movie.
//    int movieId;
};

#endif