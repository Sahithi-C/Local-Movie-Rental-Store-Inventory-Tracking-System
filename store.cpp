#include<iostream>
#include "store.h"

using namespace std;

// Store()
// Summary - Default constructor for the Store class.
// Pre-conditions - None.
// Post-conditions - Constructs a Store object.
Store::Store() {}

// ~Store()
// Summary - Destructor for the Store class.
// Pre-conditions - None.
// Post-conditions - Clears any dynamically allocated memory associated with the Store object.
Store::~Store() {}

// buildInventory(const list<InventoryData> &inventoryList)
// Summary - Builds the store's inventory based on the provided list of inventory data.
// Pre-conditions - The inventoryList should contain valid inventory data.
//                - The inventory data should be properly formatted according to requirements.
// Post-conditions - Populates the store's inventory with the items in the inventoryList.
void Store::buildInventory(const list<InventoryData> &inventoryList) {

    inventory.populateInventory(inventoryList);
}

// setCustomers(Map<int, Customer>& customerMap)
// Summary - Sets the store's customer map.
// Pre-conditions - The customerMap should contain valid customer data.
//                - The customer data should be properly formatted according to requirements.
// Post-conditions - Sets the store's internal customer map to the provided customerMap.
void Store::setCustomers(Map<int, Customer>& customerMap) {

    this->customerMap = customerMap;
}

// borrowItem(const CommandData& data)
// Summary - Processes a borrow item command.
// Pre-conditions - The store's customer map should be properly initialized.
//                - The store's inventory should be properly initialized.
//                - The data should contain valid data for the borrow command.
// Post-conditions - If the specified customer exists and the requested item is available in the inventory, 
//                   the item is borrowed by the customer, and the stock count is updated accordingly.
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
