#include<iostream>
#include "drama.h"
using namespace std;

Drama::Drama() {

}

Drama::Drama(char genreType, const string &directorName, const string &movieTitle, int releaseYear) 
      : Movies(genreType, directorName), Content(movieTitle, releaseYear) {
}

Drama::~Drama() {
}
