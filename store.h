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
using namespace std;

class Store
{
   public:
    //----------------------------------------------Constructors & destructor------------------------------------------------------

    // Store()
    // Summary - Default constructor.
    // Pre-conditions - None.
    // Post-conditions - initializes a store object.
    Store();

    // Store(const Store& other)
    // Summary - Copy constructor.
    // Pre-conditions - None.
    // Post-conditions - Intitializes a store object as a copy of other.
    Store(const Store& other);

    // ~Store()
    // Summary - Destructor.
    // Pre-conditions - None.
    // Post-conditions - Cleans any dynamically associated memory.
    ~Store();

    //--------------------------------------------------other member functions----------------------------------------------------

    // borrowItem()
    // Summary - Records a customer borrowing an item from the store.
    // Pre-conditions - None.
    // Post-conditions - Updates the inventory and customer records by recording borrow action type.
    void borrowItem();

    // returnItem()
    // Summary - Records a customer returning an item from the store.
    // Pre-conditions - The item should be initially borrowed for the customer to return it.
    // Post-conditions - Updates the inventory and customer records by recording return action type.
    void returnItem();

    // showInventory() const
    // Summary - Displays the current inventory of the store.
    // Pre-conditions - None.
    // Post-conditions - Thes current inventory of the store is displayed.
    void showInventory() const;

    // showCustomer() const
    // Summary - Displays the list of customers in the store.
    // Pre-conditions - None.
    // Post-conditions - The lsit of customers of the store is displayed.
    void showCustomer() const;

    // buildInventory()
    // Summary - Builds the inventory for the store.
    // Pre-conditions - None.
    // Post-conditions - Populates the inventory of the store with given data.
    void buildInventory();

    // addCustomer(const Customer& customer)
    // Summary - Adds a new customer to the store.
    // Pre-conditions - None.
    // Post-conditions - A new customer is added to the customers list in the store.
    void addCustomer(const Customer& customer);

   private:
    map<string, Customer> customerList;     // List of customers in the store.
    Inventory inventory;                    // Inventory of the store.

};


#endif