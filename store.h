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
#include"parser.h"
using namespace std;

class Store
{
   public:
    //----------------------------------------------Constructors & destructor------------------------------------------------------

    // Store()
    // Summary - Default constructor.
    // Post-conditions - Initializes a store object.
    Store();

    // ~Store()
    // Summary - Destructor.
    // Post-conditions - Cleans any dynamically allocated memory.
    ~Store();

    //--------------------------------------------------other member functions----------------------------------------------------

    // borrowItem()
    // Summary - Records a customer borrowing an item from the store.
    // Post-conditions - Updates the inventory and customer records by recording borrow action type.
    void borrowItem();

    // returnItem()
    // Summary - Records a customer returning an item from the store.
    // Pre-conditions - The item should be initially borrowed for the customer to return it.
    // Post-conditions - Updates the inventory and customer records by recording return action type.
    void returnItem();

    // showInventory() const
    // Summary - Displays the current inventory of the store.
    // Post-conditions - Thes current inventory of the store is displayed.
    void showInventory() const;

    // showCustomerHistory() const
    // Summary - Displays the list of customers of the store.
    // Post-conditions - The lsit of customers of the store is displayed.
    void showCustomerHistory() const;

    // buildInventory(const list<inventoryData>& inventoryList)
    // Summary - Builds the inventory for the store from data from the Parser.
    // Post-conditions - The inventory data is sent to the inventory to build the data.
    void buildInventory(const list<inventoryData>& inventoryList);

    // setCustomers(Map<string, Customer>& customerMap)
    // Summary - Sets the Customer map.
    // Post-conditions - The list of customers are set as a hash map.
    void setCustomers(Map<int, Customer>& customerMap);

    // addCustomer(const Customer& customer) - for extension
    // Summary - Adds a new customer to the store.
    // Post-conditions - A new customer is added to the customers list in the store.
    void addCustomer(const Customer& customer);

   private:
    Map<int, Customer> customerMap;         // List of customers in the store.
    Inventory inventory;                    // Inventory of the store.
};


#endif
