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
#include "media.h"
#include "map.h"
using namespace std;

class Inventory
{
   public:

    //-------------------------------------------------Constructors & Destructor------------------------------------------------

    // Inventory()
    // Summary - Default constructor  that initializes an empty inventory object.
    Inventory();

    // ~Inventory()
    // Summary - Destructor.
    ~Inventory();

    //--------------------------------------------------getter methods------------------------------------------------------------

    // getMedia(mediaId)
    // Summary - Gets the media item with given media id.
    //           MediaID is a unique string representing the mediaType and movieID.
    Media getMedia(mediaId);

    //---------------------------------------------------other member functions-----------------------------------------------------

    // sortInventory()
    // Summary - Sorts the inventory according to the requirements and sorting criteria.
    void sortInventory();

    // populateInventory()
    // Summary - Populates the inventory object with data from the parser.
    void populateInventory();

   private:
    Map<mediaId, Media> mediaMap;      // Unsorted Map of the inventory objects.

    Map<mediaId, Media> comedyList;    // Hash table to store sorted list of all Comedy media items.
    Map<mediaId, Media> dramaList;     // Hash table to store sorted list of all Drama media items.
    Map<mediaId, Media> classicsList;  // Hash table to store sorted list of all Classics media items.

};


#endif
