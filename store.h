//------------------------------------------------------store.h-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 02/24/2024

// Date of Last Modification : 02/24/2024

// Purpose : Defining a Store class representing a store that manages inventory and customers.

// -------------------------------------------------------------------------------------------------------------------------

#ifndef STORE_H
#define STORE_H

#include<iostream>
#include<string>
#include "map.h"
#include "inventory.h"
#include "customer.h"
#include "inventoryData.h"
#include "commandData.h"
#include "media.h"
#include "contentFactory.h"

using namespace std;

class Store
{
   public:
    //----------------------------------------------Constructors & destructor------------------------------------------------------

    // Store()
    // Summary - Default constructor.
    // Pre-conditions - None.
    // Post-conditions - Initializes a store object.
    Store();

    // ~Store()
    // Summary - Destructor.
    // Pre-conditions - None.
    // Post-conditions - Cleans any dynamically allocated memory.
    ~Store();

    //--------------------------------------------------other member functions----------------------------------------------------

    // buildInventory(const list<inventoryData>& inventoryList)
    // Summary - Builds the inventory for the store from data from the Parser.
    // Pre-conditions - The inventoryList should contain valid inventory data.
    //                - The inventory data should be properly formatted according to requirements.
    // Post-conditions - The inventory data is sent to the inventory to build the data.
    void buildInventory(const list<InventoryData>& inventoryList);

    // setCustomers(Map<string, Customer>& customerMap)
    // Summary - Sets the Customer map.
    // Pre-conditions - The customerMap should contain valid customer data.
    //                - The customer data should be properly formatted according to requirements.
    // Post-conditions - The list of customers are set as a hash map.
    void setCustomers(Map<int, Customer>& customerMap);

    // borrowItem(const CommandData &data)
    // Summary - Records a customer borrowing an item from the store.
    // Pre-conditions - The store's customer map should be properly initialized.
    //                - The store's inventory should be properly initialized.
    //                - The data should contain valid data for the borrow command.
    // Post-conditions - Updates the inventory and customer records by recording borrow action type.
    void borrowItem(const CommandData &data);

    // returnItem(const CommandData &data)
    // Summary - Records a customer returning an item from the store.
    // Pre-conditions - The item should be initially borrowed for the customer to return it.
    // Post-conditions - Updates the inventory and customer records by recording return action type.
    void returnItem(const CommandData &data);

    // showInventory() const
    // Summary - Displays the current inventory of the store.
    // Pre-conditions - None.
    // Post-conditions - Thes current inventory of the store is displayed.
    void showInventory() const;

    // showCustomerHistory() const
    // Summary - Displays the list of customers of the store.
    // Pre-conditions - The customerId should be a valid identifier.
    //                - The customerMap should contain the customer with the specified customer ID.
    // Post-conditions - The lsit of customers of the store is displayed.
    void showCustomerHistory(int customerId) const;

   private:
    Map<int, Customer> customerMap;         // List of customers in the store.
    Inventory inventory;                    // Inventory of the store.
};


#endif
