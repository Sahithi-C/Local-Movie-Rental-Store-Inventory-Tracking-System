#include<iostream>
#include "parser.h"

using namespace std;

Map<string, Media> Parse::parseInventoryFile(const string fileName) {

    create an empty map object m

    for(each line) {
        parse the line to get movie details
        validate the type of movie(Classics, Drama, Comedy)
        create a movie object mov, based on the type of movie
        create a media object med with stock, object mov and the type of media. 

        Insert <mediaId, med> into map m
    }
    
    Return map object m
}
