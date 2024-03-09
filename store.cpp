#include<iostream>
#include "store.h"

using namespace std;

Store::Store() {

}

Store::~Store() {

}

void Store::buildInventory(const list<inventoryData> &inventoryList) {

    inventory.populateInventory(inventoryList);
}

void Store::setCustomers(Map<int, Customer>& customerMap) {

    this->customerMap = customerMap;
}
