#include<iostream>
#include "store.h"
#include "ContentFactory.h"

using namespace std;

Store::Store() {}

Store::~Store() {}

void Store::buildInventory(const list<InventoryData> &inventoryList) {

    inventory.populateInventory(inventoryList);
}

void Store::setCustomers(Map<int, Customer> &customerMap) {

    this->customerMap = customerMap;
}


void Store::borrowItem(const CommandData& data) {
    Customer customer;
    if(this->customerMap.getValue(data.customerId, &customer)) {
        Content content = ContentFactory::createContent(data);
        Media borrowMedia(data.stock, Media::availableMediaTypes::DvD, &content);

        Media media = inventory.getMedia(borrowMedia.getMediaId()); 
        if(media.getStock() > 0) {
            customer.borrowMedia(media);
            media.reduceStock();
        }
    }
}

// showInventory() const
// Summary - Displays the current inventory of the store.
// Post-conditions - Thes current inventory of the store is displayed.
void Store::showInventory() const {
	inventory.printSortedInventory(cout);
}
