#include<iostream>
#include<string>

using namespace std;

int main() {
 
    Parser parser;
    Store store;
    
    //Creating customer list
    store.setCustomers(parser.parseCustomersFile("data4customers.txt"));


    return 0;
}
