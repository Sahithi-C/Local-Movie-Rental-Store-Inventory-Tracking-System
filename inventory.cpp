//------------------------------------------------------inventory.cpp-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 03/10/2024

// Date of Last Modification : 03/10/2024

// Purpose : Implementing an Inventory class representing a collection of media items that are also the store's inventory.
// -------------------------------------------------------------------------------------------------------------------------

#include<iostream>
#include "inventory.h"
#include "contentFactory.h"

using namespace std;

//-------------------------------------------------Constructors & Destructor------------------------------------------------

// Inventory()
// Summary - Default constructor.
// Pre-conditions - None.
// Post-conditions - Initializes an empty inventory object.
Inventory::Inventory() {
    comedyMap = Map<string, Media>();
    dramaMap = Map<string, Media>();
    classicsMap = Map<string, Media>();
}

// ~Inventory()
// Summary - Destructor.
// Pre-conditions - None.
// Post-conditions - Clears any dynamically associated memory.
Inventory::~Inventory() {}

//--------------------------------------------------getter methods------------------------------------------------------------

// getMedia(mediaId)
// Summary - Gets the Media object using the given mediaId.
//           mediaId is a unique string representing the mediaType and contentId.
// Pre-conditions - None.
// Post-conditions - Returns the Media item of the given mediaId.
//                   Returns an empty Media item if there is no Media item with the given id in Inventory.
Media& Inventory::getMedia(string mediaId) const {
    Media ret = Media();
    if (comedyMap.getValue(mediaId, &ret)) {
        return ret;
    }
    else if (dramaMap.getValue(mediaId, &ret)) {
        return ret;
    }
    else if (classicsMap.getValue(mediaId, &ret)) {
        return ret;
    }

    // Will be an empty media object.
    return ret;
}

// getComedy(mediaId)
// Summary - Gets the Media object representing copies of a Comedy Movie using the given mediaId.
//           mediaId is a unique string representing the mediaType and contentId.
// Pre-conditions - None.
// Post-conditions - Returns the Media item of the given mediaId.
Media& Inventory::getComedy(string mediaId) {
    Media ret;
    comedyMap.getValue(mediaId, &ret);
    return ret;
}

// getDrama(mediaId)
// Summary - Gets the Media object representing copies of a Drama Movie using the given mediaId.
//           mediaId is a unique string representing the mediaType and contentId.
// Pre-conditions - None.
// Post-conditions - Returns the Media item of the given mediaId.
Media& Inventory::getDrama(string mediaId) {
    Media ret;
    dramaMap.getValue(mediaId, &ret);
    return ret;
}

// getClassics(mediaId)
// Summary - Gets the Media object representing copies of a Classics Movie using the given mediaId.
//           mediaId is a unique string representing the mediaType and contentId.
// Pre-conditions - None.
// Post-conditions - Returns the Media item of the given mediaId.
Media& Inventory::getClassics(string mediaId) {
    Media ret;
    classicsMap.getValue(mediaId, &ret);
    return ret;
}

//---------------------------------------------------other member functions-----------------------------------------------------

// populateInventory()
// Summary - This method populates the inventory with content based on the provided inventory list.
// Pre-conditions - The inventoryList should contain valid InventoryData objects representing content to be added to the inventory.
// Post-conditions - The inventory is populated with content based on the data provided in the inventoryList.
//                 - Each item in the inventory is associated with a Media object representing its stock and content.
void Inventory::populateInventory(const list<InventoryData> &inventoryList) {
    for(const auto& data: inventoryList) {
        Content * content = ContentFactory::createContent(data);
        Media media(data.stock, Media::availableMediaTypes::DvD, content);
        if (data.genreType == 'F') {
            comedyMap.insert(media.getMediaId(), media);
        }
        else if(data.genreType == 'D') {
            dramaMap.insert(media.getMediaId(), media);
        }
        else if(data.genreType == 'C') {
            classicsMap.insert(media.getMediaId(), media);
        }
    }
}

// getSortedInventory()
// Summary - Generates and returns a sorted list of all Media objects in the store.
//           Comedy > Drama > Classics.
// Pre-conditions - None.
// Post-conditions - The return will be a sorted list of all Media objects in the store.
ostream& Inventory::printSortedInventory(ostream& out) const {
    list<Media> temp;

    // Start by sorting and printing all Comedy elements.
    temp = comedyMap.getAllValues();
    temp.sort();
    while (!temp.empty()) {
        out << "F, " << temp.front() << endl;
        temp.pop_front();
    }
    
    // Then sort and print all Drama elements
    temp = dramaMap.getAllValues();
    temp.sort();
    while (!temp.empty()) {
        out << "D, " << temp.front() << endl;
        temp.pop_front();
    }

    // Finally sort and print all Classics elements
    temp = classicsMap.getAllValues();
    temp.sort();
    while (!temp.empty()) {
        out << "C, " << temp.front() << endl;
        temp.pop_front();
    }

    return out;
}