#include<iostream>
#include "parser.h"

using namespace std;

Parser::Parser() {
    
}

Parser::~Parser() {

}

Map<string, Customer> Parser::parseCustomersFile(const string fileName) {

    Map<int, Customer> customerMap;

    ifstream inputFile;
    inputFile.open(fileName);
    if(!inputFile) {
        cout << "File could not be opened" << endl;
        reutrn customerMap;
    }

    string line;
    while(getline(inputFile, line)) {

        stringstream ss(line);

        int customerId;
        string firstName, lastName;

        ss >> customerId >> firstName >> lastName;

        Customer customer(customerId, firstName, lastName);

        customerMap.insert(customerId, customer);

        if(inputFile.eof())
        break;
    }

    inputFile.close();

    return customerMap;
}
