#include<iostream>
#include "movies.h"
using namespace std;

Movies::Movies() {
}

Movies::Movies(char genreType, const string &director) {
    this->genreType = genreType;
    this->director = director;
}

virtual Movies::~Movies() {
}
