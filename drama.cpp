//------------------------------------------------------drama.cpp-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 03/10/2024

// Date of Last Modification : 03/10/2024

// Purpose : Implementing the Drama class representing a drama movie.This class inherits from Movie class. 

// -------------------------------------------------------------------------------------------------------------------------

#include<iostream>
#include "drama.h"
using namespace std;

// Drama()
// Summary - This is the default constructor for the Drama class.
// Pre-conditions - None.
// Post-conditions - An instance of the Drama class is created with default values.
Drama::Drama() {

}

// Drama(char genreType, const string &directorName, const string &movieTitle, int releaseYear)
// Summary - Initializes a Drama object with specified values for genre type, director name,
//           movie title, and release year.
// Pre-conditions - The provided genreType should be a valid character representing the genre type.
//                - The directorName and movieTitle should be non-empty strings.
//                - The releaseYear should be a valid integer representing the year of release.
// Post-conditions - An instance of the Drama class is created with the provided values.
Drama::Drama(char genreType, const string &directorName, const string &movieTitle, int releaseYear) 
      : Movies(genreType, directorName), Content(movieTitle, releaseYear) {
}

// ~Drama()
// Summary - Destructor for the Drama class.
// Pre-conditions - None.
// Post-conditions - Clears any dynamically allocated memory associated with the Drama object.
Drama::~Drama() {
}
