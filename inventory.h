//------------------------------------------------------inventory.h-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 02/24/2024

// Date of Last Modification : 02/24/2024

// Purpose : Defining an Inventory class representing a collection of media items 
//           that are also the store's inventory
// -------------------------------------------------------------------------------------------------------------------------

#ifndef INVENTORY_H
#define INVENTORY_H

#include<iostream>
#include<string>
#include<set>
#include "media.h"
#include "map.h"
#include"parser.h"
#include "inventoryData.h"

using namespace std;

class Inventory
{
   public:

    //-------------------------------------------------Constructors & Destructor------------------------------------------------

    // Inventory()
    // Summary - Default constructor.
    // Post-conditions - Initializes an empty inventory object.
    Inventory();

    // ~Inventory()
    // Summary - Destructor.
    // Post-conditions - Clears any dynamically associated memory.
    virtual ~Inventory();

    //--------------------------------------------------getter methods------------------------------------------------------------

    // getMedia(mediaId)
    // Summary - Gets the media item with given media id.
    //           MediaID is a unique string representing the mediaType and movieID.
    // Post-conditions - Returns the media item of the given media id.
    Media getMedia(mediaId);

    //---------------------------------------------------other member functions-----------------------------------------------------

    // populateInventory()
    // Summary - Populates the inventory object with data from the parser.
    // Post-conditions - The inventory is populated with valid media items.
    void populateInventory(const list<InventoryData>& inventoryList);

   private:

    set<Media> comedySet;    // Set to store a list of all comedy media items.
    set<Media> dramaSet;     // Set to store a list of all drama media items.
    set<Media> classicsSet;  // Set to store a list of all classic media items.

    // sortInventory()
    // Summary - Sorts the inventory according to the requirements and sorting criteria.
    // Post-conditions - The inventory is sorted according to the required criteria.
    void sortInventory();
};


#endif
