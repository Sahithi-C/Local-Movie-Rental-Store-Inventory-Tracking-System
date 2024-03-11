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
    // Summary - Gets the Media object using the given mediaId.
    //           mediaId is a unique string representing the mediaType and contentId
    // Post-conditions - Returns the Media item of the given mediaId.
    Media& getMedia(string mediaId);

    // getComedy(mediaId)
    // Summary - Gets the Media object representing copies of a Comedy Movie using the given mediaId.
    //           mediaId is a unique string representing the mediaType and contentId
    // Post-conditions - Returns the Media item of the given mediaId.
    Media& getComedy(string mediaId);

    // getDrama(mediaId)
    // Summary - Gets the Media object representing copies of a Drama Movie using the given mediaId.
    //           mediaId is a unique string representing the mediaType and contentId
    // Post-conditions - Returns the Media item of the given mediaId.
    Media& getDrama(string mediaId);

    // getClassics(mediaId)
    // Summary - Gets the Media object representing copies of a Classics Movie using the given mediaId.
    //           mediaId is a unique string representing the mediaType and contentId
    // Post-conditions - Returns the Media item of the given mediaId.
    Media& getClassics(string mediaId);

    //---------------------------------------------------other member functions-----------------------------------------------------

    // populateInventory()
    // Summary - Populates the inventory object with data from the parser.
    // Post-conditions - The inventory is populated with valid media items.
    void populateInventory(const list<InventoryData>& inventoryList);

    // getSortedInventory()
    // Summary - Generates and returns a sorted list of all Media objects in the store.
    // Post-conditions - The return will be a sorted list of all Media objects in the store.
    ostream& printSortedInventory(ostream& out) const;

   private:

    Map<string, Media> comedyMap;    // Map to store a list of all comedy media items.
    Map<string, Media> dramaMap;     // Map to store a list of all drama media items.
    Map<string, Media> classicsMap;  // Map to store a list of all classic media items.

    Media& getComedy(string mediaId);
    Media& getDrama(string mediaId);
    Media& getClassics(string mediaId);
};


#endif
