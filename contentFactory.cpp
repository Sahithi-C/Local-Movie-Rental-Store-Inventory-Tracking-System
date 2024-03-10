#include<iostream>
#include"contentFactory.h"

using namespace std;

ContentFactory::ContentFactory() {}

ContentFactory::~ContentFactory() {}

Content& ContentFactory::createContent(const InventoryData &data) {
   
    if(data.genreType == 'F') {
        return Comedy comedyObject(data.genreType, data.directorName, data.movieTitle, data.releseYear);
    }
    else if(data.genreType == 'D') {
        return  Drama dramaObject(data.genreType, data.directorName, data.movieTitle, data.releaseYear);
    }
    else if(data.genreType == 'C') {
        return Classics classicsObject(data.genreType, data.directorName, data.movieTitle, data.releaseYear,
                                data.actorFirstName, data.actorLastname, data.releaseMonth);
    }
}

Content& ContentFactory::createContent(const CommandData &data) {
   
    if(data.genreType == 'F') {
        return Comedy comedyObject(data.genreType, data.directorName, data.movieTitle, data.releseYear);
    }
    else if(data.genreType == 'D') {
        return  Drama dramaObject(data.genreType, data.directorName, data.movieTitle, data.releaseYear);
    }
    else if(data.genreType == 'C') {
        return Classics classicsObject(data.genreType, data.directorName, data.movieTitle, data.releaseYear,
                                data.actorFirstName, data.actorLastname, data.releaseMonth);
    }
}

 
