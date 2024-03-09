#include<iostream>
#include "content.h"

using namespace std;

Content::Content() {
}

Content::Content(const string &title, int releaseYear) {
    this->title = title;
    this->releaseYear = releaseYear;
}

virtual Content::~Content() {
}
