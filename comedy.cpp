//------------------------------------------------------Comedy.cpp-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 03/10/2024

// Date of Last Modification : 03/10/2024

// Purpose : Implementing a Comedy class representing a funny movie.This class inherits from Movie class. 

// -------------------------------------------------------------------------------------------------------------------------

#include<iostream>
#include "comedy.h"

using namespace std;

// Comedy()
// Summary - Default constructor for the Comedy class.
// Pre-conditions - None.
// Post-conditions - An instance of the Comedy class is created with default values.
Comedy::Comedy() {

}

// Comedy(char genreType, const string &directorName, const string &movieTitle, int releaseYear)
// Summary - Initializes a Comedy object with specified values for genre type, director name,
//           movie title, and release year.
// Pre-conditions - The provided genreType should be a valid character representing the genre type.
//                  The directorName and movieTitle should be non-empty strings.
//                  releaseYear should be a valid integer representing the year of release.
// Post-conditions - An instance of the Comedy class is created with the provided values.
Comedy::Comedy(char genreType, const string &directorName, const string &movieTitle, int releaseYear) 
       : Movies(genreType, directorName), Content(movieTitle, releaseYear) {

}

// ~Comedy()
// Summary - This is the destructor for the Comedy class.
// Pre-conditions - None.
// Post-conditions - Clears any dynamically allocated memory associated with the Comedy object.
Comedy::~Comedy(){
    
}
