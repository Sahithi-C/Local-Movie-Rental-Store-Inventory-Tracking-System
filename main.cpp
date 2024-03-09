#include<iostream>
#include<string>
#include<fstream>
#include "map.h"
#include "store.h"
#include "parser.h"

using namespace std;

int main() {
 
    Parser parser;
    Store store;
    
    // //Creating customer list
    // store.setCustomers(parser.parseCustomersFile("data4customers.txt"));

    ifstream inventoryFile("data4movies.txt");
    if(inventoryFile.is_open())
    {
        Map<string, Media> inventoryData = parser.parserInventoryFile(inventoryFile);
        inventoryFile.close();

        store.buildInventory(inventoryData);
    }
    else
    {
        cout << "unable to open inventory file" << endl;
    }

    ifstream customerFile("data4customers.txt");
    if(customerFile.is_open())
    {
        Map<string, Customer> customerData = parser.parseCustomerFile(customerFile);
        customerFile.close();

        store.setCustomers(customerData);
    }
    else
    {
        cout << "unable to open customer file" << endl;
    }

    ifstream commandsFile("data4commands.txt");
    if(commandsFile.is_open())
    {
        parser.processCommands(commandFile, store);
        commandFile.close();
    }
    else
    {
        cout << "unable to open commandFile" << endl;
    }

    return 0;
}
