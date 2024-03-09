#include<iostream>
#include "parser.h"


using namespace std;

Parser::Parser() {
    
}

Parser::~Parser() {

}

Map<int, Customer> Parser::parseCustomersFile(const string fileName) {

    Map<int, Customer> customerMap;

    ifstream inputFile;
    inputFile.open(fileName);
    if(!inputFile) {
        cout << "File could not be opened" << endl;
        return customerMap;
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


list<inventoryData> Parser::parseInventoryFile(const string fileName) {

    list<inventoryData> inventoryList;

    ifstream inputFile;
    inputFile.open(fileName);
    if(!inputFile) {
        cout << "File could not be opened" << endl;
        return inventoryList;
    }

    string line;
    while(getline(inputFile, line)) {
        stringstream ss(line);
        inventoryData data;

        char genre;
        ss >> genre;

        if (genre != 'C' && genre != 'D' && genre != 'F') {
            cout << "Invalid genre type" << endl;
            continue;                       // Move on to the next line
        }

        if(genre == 'F' || genre == 'D') {

            data.genreType = genre;

            ss.ignore();
            ss >> data.stock;

            ss.ignore();
            getline(ss, data.directorName, ',');

            getline(ss, data.movieTitle, ',');

            ss >> data.releaseYear;
        }
        else if (genre == 'C') {

            data.genreType = genre;

            ss.ignore();
            ss >> data.stock;

            ss.ignore();
            getline(ss, data.directorName, ',');

            getline(ss, data.movieTitle, ',');
            ss >> data.actorFirstName >> data.actorLastname >> data.releaseMonth >> data.releaseYear;
        }

        // Add the parsed data to the inventory list
        inventoryList.push_back(data);

        if(inputFile.eof())
        break;
    }

    inputFile.close();
    return inventoryList;
}
