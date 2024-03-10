#include<iostream>
#include"contentFactory.h"
#include "comedy.h"
#include "drama.h"
#include "classics.h"

using namespace std;

// ContentFactory::ContentFactory()
// Summary - default constructor for the ContentFactory class.
// Pre-conditions - None.
// Post-conditions - An instance of the ContentFactory class is created.
ContentFactory::ContentFactory() {

}

// ~ContentFactory()
// Summary - destructor for the ContentFactory class.

// Pre-conditions - None.

// Post-conditions - Resources held by the ContentFactory object are released upon destruction.
ContentFactory::~ContentFactory() {

}

// createContent(const InventoryData &data)
// Summary - creates a Content object based on the InventoryData provided.
// Pre-conditions - The InventoryData object 'data' must contain valid information about the content to be created.
//                - The genreType of the InventoryData object must be one of 'F', 'D', or 'C', indicating Comedy, Drama, or Classics respectively.
// Post-conditions - If the genreType is 'F', a Comedy object is created with the provided data and returned. - If the genreType is 'D', a Drama object is created with the provided data and returned.
//                 - If the genreType is 'C', a Classics object is created with the provided data and returned.
//                 - The returned object's ownership is transferred to the caller, and it is responsible for managing its memory.
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


 
