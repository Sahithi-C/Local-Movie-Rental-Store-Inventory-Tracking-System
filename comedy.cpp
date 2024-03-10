#include<iostream>
#include "comedy.h"

using namespace std;

// Comedy()
// Summary - default constructor for the Comedy class.
// Pre-conditions - None.
// Post-conditions - An instance of the Comedy class is created with default values.
Comedy::Comedy() {

}

Comedy::Comedy(char genreType, const string &directorName, const string &movieTitle, int releaseYear) 
       : Movies(genreType, directorName), Content(movieTitle, releaseYear) {

}

Comedy::~Comedy(){
    
}
