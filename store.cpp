#include<iostream>
#include "store.h"
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
