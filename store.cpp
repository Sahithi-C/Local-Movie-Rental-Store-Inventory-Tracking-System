//------------------------------------------------------store.cpp-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 03/10/2024

// Date of Last Modification : 03/10/2024

// Purpose : Implementing the Store class representing a store that manages inventory and customers.

// -------------------------------------------------------------------------------------------------------------------------


#include<iostream>
#include "store.h"
using namespace std;

// Store()
// Summary - Default constructor for the Store class.
// Pre-conditions - None.
// Post-conditions - Constructs a Store object.
Store::Store() {

}

// ~Store()
// Summary - Destructor for the Store class.
// Pre-conditions - None.
// Post-conditions - Clears any dynamically allocated memory associated with the Store object.
Store::~Store() {

}

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
void Store::setCustomers(Map<int, Customer> &customerMap) {

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
        Content* content = ContentFactory::createContent(data);
        Media borrowMedia(0, Media::availableMediaTypes::DvD, content);
        Media * media = inventory.getMedia(borrowMedia.getMediaId()); 
        if((*media).getContent() != nullptr) {
             if((*media).getStock() > 0) {
                customer.borrowMedia(*media);
                (*media).reduceStock();
            }
            else {
                cout << "There's no stock of this movie in the store." << endl;
            }
        }
        else {
            cout << "The movie does not exist" << endl;
        }
    }
    else {
        cout << "The customer does not exist" << endl;
    }
}

// returnItem(const CommandData &data)
// Summary - Records a customer returning an item from the store.
// Pre-conditions - The item should be initially borrowed for the customer to return it.
// Post-conditions - Updates the inventory and customer records by recording return action type.
void Store::returnItem(const CommandData &data) {
    Customer customer;

    if(this->customerMap.getValue(data.customerId, &customer)) {
        Content* content = ContentFactory::createContent(data);
        Media returnMedia(0, Media::availableMediaTypes::DvD, content);

        Media * media = inventory.getMedia(returnMedia.getMediaId());
        if((*media).getContent() != nullptr) {
            if(customer.returnMedia(*media)) {
                (*media).increaseStock();
            }
        }
        else {
            cout << "The movie does not exist" << endl;
        }  
    }
    else {
        cout << "The customer does not exist" << endl;
    }
}

// showCustomerHistory(int customerId) const
// Summary - Displays the list of customers of the store.
// Pre-conditions - The customerId should be a valid identifier.
//                - The customerMap should contain the customer with the specified customer ID.
// Post-conditions - The list of customers of the store is displayed.
void Store::showCustomerHistory(int customerId) const {
    Customer customer;

    if(this->customerMap.getValue(customerId, &customer)) {
        customer.printTransactionHistory(inventory);
    }
    else {
        cout << "The customer does not exist" << endl;
    }
}

// showInventory() const
// Summary - Displays the current inventory of the store.
// Pre-conditions - None.
// Post-conditions - Thes current inventory of the store is displayed.
void Store::showInventory() const {
	inventory.printSortedInventory(cout);
}
