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
    
    //Creating customer list
    Map<int, Customer> customers = parser.parseCustomersFile("data4customers.txt");
    store.setCustomers(parser.parseCustomersFile("data4customers.txt"));

    //Parsing movie data
    list<inventoryData> inventoryList = parser.parseInventoryFile("data4movies.txt");
   

    return 0;
}
