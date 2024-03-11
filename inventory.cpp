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
// Pre-conditions - Clears any dynamically allocated memory associated with the Inventory object.
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
