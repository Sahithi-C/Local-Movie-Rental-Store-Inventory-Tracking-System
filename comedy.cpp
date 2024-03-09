#include<iostream>
#include "comedy.h"

using namespace std;

Comedy::Comedy() {

}

Comedy::Comedy(char genreType, const string &directorName, const string &movieTitle, int releaseYear) 
       : Movies(genreType, directorName), Content(movieTitle, releaseYear) {

}

Comedy::~Comedy(){
    
}
