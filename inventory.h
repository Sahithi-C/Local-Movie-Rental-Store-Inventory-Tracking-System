//------------------------------------------------------inventory.h-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 02/24/2024

// Date of Last Modification : 02/24/2024

// Purpose : Defining an Inventory class representing a collection media items. 

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
    // Summary - Default constructor.
    // Pre-conditions - None.
    // Post-conditions - Initializes an emty inventory object.
    Inventory();

    // Inventory(const Inventory& other)
    // Summary - Copu constructor.
    // Pre-conditions - None.
    // Post-conditions - Initializes an inventory object as a copy of other inventory object.
    Inventory(const Inventory& other);

    // ~Inventory()
    // Summary - Dstructor.
    // Pre-conditions - None.
    // Post-conditions - Clears any dynamically assciated memory.
    ~Inventory();

    //--------------------------------------------------getter methods------------------------------------------------------------

    // getMedia(mediaId)
    // Summary - gets the media item with given media id.
    // Pre-conditions - the id shoud be a valid mediaId.
    // Post-conditions - Returns the media item of given media id.
    Media getMedia(mediaId);

    //---------------------------------------------------other member functions-----------------------------------------------------

    // sortInventory()
    // Summary - Sorts the inventory according to the requirements and sorting criteria.
    // Pre-conditions - None.
    // Post-conditions - The inventory is sorted according to the required criteria.
    void sortInventory();

    // populateInventory()
    // Summary - Populates the inventory.
    // Pre-conditions - None.
    // Post-conditions - Populates the inventory with valid media items.
    void populateInventory();

   private:
    map<int, Media> comedyList;    // Map to store list of all comedy media items.
    map<int, Media> dramaList;     // Map to store list of all drama media items.
    map<int, Media> classicsList;  // Map to store list of all classic media items.

};


#endif