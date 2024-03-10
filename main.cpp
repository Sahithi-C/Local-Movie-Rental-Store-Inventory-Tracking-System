#include<iostream>
#include<string>
#include"parser.h"
#include"store.h"
#include"map.h"
#include"inventoryData.h"
#include"commandData.h"

using namespace std;

int main() {
 
    Parser parser;
    Store store;
    
    //Creating customer list
    Map<int, Customer> customers = parser.parseCustomersFile("data4customers.txt");
    store.setCustomers(customers);

    //Parsing movie data
    list<InventoryData> inventoryList = parser.parseInventoryFile("data4movies.txt");
    store.buildInventory(inventoryList);

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
