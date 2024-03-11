#ifndef CONTENTFACTORY_H
#define CONTENTFACTORY_H

#include<iostream>
#include"content.h"
#include "inventoryData.h"

using namespace std;

class ContentFactory {
    
    public:

    // ContentFactory::ContentFactory()
    // Summary - default constructor for the ContentFactory class.
    // Pre-conditions - None.
    // Post-conditions - An instance of the ContentFactory class is created.
    ContentFactory(); //constructor

    // ~ContentFactory()
    // Summary - destructor for the ContentFactory class.
    // Pre-conditions - None.
    // Post-conditions - Clears any dynamically allocated memory associated with the ContentFactory object.
    ~ContentFactory(); //destructor

    // createContent(const InventoryData &data)
    // Summary - creates a Content object based on the InventoryData provided.
    // Pre-conditions - The InventoryData object 'data' must contain valid information about the content to be created.
    //                - The genreType of the InventoryData object must be one of 'F', 'D', or 'C', indicating Comedy, Drama, or Classics respectively.
    // Post-conditions - If the genreType is 'F', a Comedy object is created with the provided data and returned. - If the genreType is 'D', a Drama object is created with the provided data and returned.
    //                 - If the genreType is 'C', a Classics object is created with the provided data and returned.
    //                 - The returned object's ownership is transferred to the caller, and it is responsible for managing its memory.
    static Content& createContent(const InventoryData& data);

};



#endif
