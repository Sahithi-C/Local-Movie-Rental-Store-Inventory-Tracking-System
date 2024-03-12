//------------------------------------------------------ContentFactory.h-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 03/10/2024

// Date of Last Modification : 03/10/2024

// Purpose : Defining the ContentFactory class responsible for creating content objects based on inventory data.

// -------------------------------------------------------------------------------------------------------------------------

#ifndef CONTENTFACTORY_H
#define CONTENTFACTORY_H

#include<iostream>
#include"content.h"
#include "inventoryData.h"
#include "commandData.h"
#include "comedy.h"
#include "drama.h"
#include "classics.h"

using namespace std;

class ContentFactory {
    
    public:

    // ContentFactory()
    // Summary - Default constructor for the ContentFactory class.
    // Pre-conditions - None.
    // Post-conditions - An instance of the ContentFactory class is created.
    ContentFactory(); //constructor

    // ~ContentFactory()
    // Summary - Destructor for the ContentFactory class.
    // Pre-conditions - None.
    // Post-conditions - Clears any dynamically allocated memory associated with the ContentFactory object.
    ~ContentFactory(); //destructor

    // createContent(const InventoryData &data)
    // Summary - creates a Content object based on the InventoryData provided.
    // Pre-conditions - The InventoryData object 'data' must contain valid information about the content to be created.
    //                - The genreType of the InventoryData object must be one of 'F', 'D', or 'C', indicating Comedy, Drama, or Classics respectively.
    // Post-conditions - If the genreType is 'F', a Comedy object is created with the provided data and returned. 
    //                 - If the genreType is 'D', a Drama object is created with the provided data and returned.
    //                 - If the genreType is 'C', a Classics object is created with the provided data and returned.
    //                 - The returned object's ownership is transferred to the caller, and it is responsible for managing its memory.
    static Content* createContent(const InventoryData& data);

    // createContent(const CommandData &data)
    // Summary - Creates a Content object based on the information provided in the CommandData object.
    // Pre-conditions - The CommandData object 'data' must contain valid information about the content to be created.
    //                - The genreType of the CommandData object must be one of 'F', 'D', or 'C', representing Comedy, Drama, or Classics respectively.
    // Post-conditions - If the genreType is 'F', a Comedy object is created with the provided data and returned.
    //                 - If the genreType is 'D', a Drama object is created with the provided data and returned.
    //                 - If the genreType is 'C', a Classics object is created with the provided data and returned.
    //                 - The returned object's ownership is transferred to the caller, and it is responsible for managing its memory.
    static Content* createContent(const CommandData& data);

};

#endif
