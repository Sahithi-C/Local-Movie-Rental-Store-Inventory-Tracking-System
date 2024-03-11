#include<iostream>
#include "inventory.h"
#include "contentFactory.h"

using namespace std;

//-------------------------------------------------Constructors & Destructor------------------------------------------------

// Inventory()
// Summary - Default constructor.
// Post-conditions - Initializes an empty inventory object.
Inventory::Inventory() {
    comedyMap = Map<string, Media>();
    dramaMap = Map<string, Media>();
    classicsMap = Map<string, Media>();
}

// ~Inventory()
// Summary - Destructor.
// Post-conditions - Clears any dynamically associated memory.
Inventory::~Inventory() {}

//--------------------------------------------------getter methods------------------------------------------------------------

// getComedy(mediaId)
// Summary - Gets the Media object representing copies of a Comedy Movie using the given mediaId.
//           mediaId is a unique string representing the mediaType and contentId
// Post-conditions - Returns the Media item of the given mediaId.
Media& Inventory::getComedy(string mediaId) {
    Media ret;
    comedyMap.getValue(mediaId, &ret);
    return ret;
}

// getDrama(mediaId)
// Summary - Gets the Media object representing copies of a Drama Movie using the given mediaId.
//           mediaId is a unique string representing the mediaType and contentId
// Post-conditions - Returns the Media item of the given mediaId.
Media& Inventory::getDrama(string mediaId) {
    Media ret;
    dramaMap.getValue(mediaId, &ret);
    return ret;
}

// getClassics(mediaId)
// Summary - Gets the Media object representing copies of a Classics Movie using the given mediaId.
//           mediaId is a unique string representing the mediaType and contentId
// Post-conditions - Returns the Media item of the given mediaId.
Media& Inventory::getClassics(string mediaId) {
    Media ret;
    classicsMap.getValue(mediaId, &ret);
    return ret;
}

//---------------------------------------------------other member functions-----------------------------------------------------

// populateInventory()
// Summary - Populates the inventory object with data from the parser.
// Post-conditions - The inventory is populated with valid media items.
void Inventory::populateInventory(const list<InventoryData> &inventoryList) {

    for(const auto& data: inventoryList) {
        Content content = ContentFactory::createContent(data);
        Media media(data.stock, Media::availableMediaTypes::DvD, &content);
    }
}

// getSortedInventory()
// Summary - Generates and returns a sorted list of all Media objects in the store.
//           Comedy > Drama > Classics
// Post-conditions - The return will be a sorted list of all Media objects in the store.
list<Media> Inventory::getSortedInventory() {
    list<Media> ret;
    list<Media> temp; 
    
    // Start by adding all the comedy elements to the return list and sorting them.
    ret = comedyMap.getAllValues();
    ret.sort();
    
    // Then sort all Drama objects and append them to the end of ret
    temp = dramaMap.getAllValues();
    temp.sort();
    ret.merge(temp);

    // Finally sort all Classics object and append them to the end of ret
    temp = classicsMap.getAllValues();
    temp.sort();
    ret.merge(temp);

    return ret;
}
