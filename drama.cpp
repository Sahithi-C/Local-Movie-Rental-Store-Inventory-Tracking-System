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
// Post-conditions - Resources held by the Drama object are released upon destruction.
Drama::~Drama() {
}
