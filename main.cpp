//------------------------------------------------------main.cpp-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 03/10/2024

// Date of Last Modification : 03/10/2024

// Purpose : Entry point of the application. Parses input files, builds inventory, and processes commands.

----------------------------------------------------------------------------------------------------------------------------

#include<iostream>
#include<string>
#include"parser.h"
#include"store.h"
#include"map.h"
#include"inventoryData.h"
#include"commandData.h"

using namespace std;

int main() {
 
    Parser parser;        // Instantiate a Parser object
    Store store;          // Instantiate a Store object
    
    //Creating customer list
    Map<int, Customer> customers = parser.parseCustomersFile("data4customers.txt");  // Parse customer data 
    store.setCustomers(customers);  // Set customers in the store

    //Parsing movie data
    list<InventoryData> inventoryList = parser.parseInventoryFile("data4movies.txt"); // Parse movie data 
    store.buildInventory(inventoryList);  // Build inventory in the store

    //Parsing commands
    list<CommandData> commandList = parser.parseCommandFile("data4commands.txt");
    for(const auto& data: commandList) {
        if(data.actionType == 'I') {
            store.showInventory();
        }
        else if(data.actionType == 'H') {
            store.showCustomerHistory(data.customerId);
        }
        else if(data.actionType == 'B') {
            store.borrowItem(data);
        }
        else if(data.actionType == 'R') {
            store.returnItem(data);
        }
    }

    return 0;
}
