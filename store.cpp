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
        Media borrowMedia(0, Media::availableMediaTypes::DvD, &content);

        Media media = inventory.getMedia(borrowMedia.getMediaId()); 
        if(media.getStock() > 0) {
            customer.borrowMedia(media);
            media.reduceStock();
        }
        else {
            cout << "There's no stock of this movie in the store." << endl;
        }
    }
    else {
        cout << "The customer does not exist" << endl;
    }
}

void Store::returnItem(const CommandData &data) {
    Customer customer;

    if(this->customerMap.getValue(data.customerId, &customer)) {
        Content content = ContentFactory::createContent(data);
        Media returnMedia(0, Media::availableMediaTypes::DvD, &content);

        Media media = inventory.getMedia(returnMedia.getMediaId());
        if(customer.returnMedia(media)) {
            media.increaseStock();
        }
    }
    else {
        cout << "The customer does not exist" << endl;
    }
}

void Store::showCustomerHistory(int customerId) const {
    Customer customer;

    if(this->customerMap.getValue(customerId, &customer)) {
        customer.printTransactionHistory();
    }
    else {
        cout << "The customer does not exist" << endl;
    }
}

// showInventory() const
// Summary - Displays the current inventory of the store.
// Post-conditions - Thes current inventory of the store is displayed.
void Store::showInventory() const {
	inventory.printSortedInventory(cout);
}
