#include<iostream>
#include<string>
#include"parser.h"
#include"store.h"
#include"map.h"


using namespace std;

int main() {
 
    Parser parser;
    Store store;
    
    //Creating customer list
    Map<int, Customer> customers = parser.parseCustomersFile("data4customers.txt");
    store.setCustomers(customers);

    //Parsing movie data
    list<inventoryData> inventoryList = parser.parseInventoryFile("data4movies.txt");
    store.buildInventory(inventoryList);

    
    
    return 0;
}
