#include<iostream>
#include "inventory.h"
#include "media.h"
#include "inventoryData.h"

using namespace std;

Inventory::Inventory() {

}

Inventory::~Inventory() {

}

void Inventory::populateInventory(const list<InventoryData> &inventoryList) {

    for(const auto& data: inventoryList) {
        Content content = ContentFactory::createContent(data);
        Media media(data.stock, Media::availableMediaTypes::DvD, &content);
    }
}
