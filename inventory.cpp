//------------------------------------------------------inventory.cpp-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 03/10/2024

// Date of Last Modification : 03/10/2024

// Purpose : Implementing an Inventory class representing a collection of media items that are also the store's inventory.
// -------------------------------------------------------------------------------------------------------------------------

#include<iostream>
#include "inventory.h"

using namespace std;

// Inventory()
// Summary - Default constructor for the Inventory class.
// Pre-conditions - None.
// Post-conditions - An instance of the Inventory class is created.
Inventory::Inventory() {}

// ~Inventory()
// Summary - Destructor for the Inventory class.
// Pre-conditions - None.
// Post-conditions - Clears any dynamically allocated memory associated with the Inventory object.
Inventory::~Inventory() {}

// populateInventory(const list<InventoryData> &inventoryList)
// Summary - This method populates the inventory with content based on the provided inventory list.
// Pre-conditions - The inventoryList should contain valid InventoryData objects representing content to be added to the inventory.
// Post-conditions - The inventory is populated with content based on the data provided in the inventoryList.
//                 - Each item in the inventory is associated with a Media object representing its stock and content.
void Inventory::populateInventory(const list<InventoryData> &inventoryList) {

    for(const auto& data: inventoryList) {
        Content content = ContentFactory::createContent(data);
        Media media(data.stock, Media::availableMediaTypes::DvD, &content);
    }
}
