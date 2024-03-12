//------------------------------------------------------parser.cpp-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 03/10/2024

// Date of Last Modification : 03/10/2024

// Purpose : Implementing the Parser class responsible for parsing input strings and creating corresponding objects.

// -------------------------------------------------------------------------------------------------------------------------

#include<iostream>
#include "parser.h"


using namespace std;

// Parser()
// Summary - Default constructor for the Parser class.
// Pre-conditions - None.
// Post-conditions - An instance of the Parser class is created.
Parser::Parser() {
    
}

// ~Parser()
// Summary - Destructor for the Parser class.
// Pre-conditions - None.
// Post-conditions - Clears any dynamically allocated memory associated with the Parser object.
Parser::~Parser() {

}

// parseCustomersFile(const string fileName)
// Summary - Parses the customer data file and constructs a map of customers.
// Pre-conditions - The file 'fileName' should exist and be readable.
//                - The format of each line in the file should be in the required format as: "<customerId> <firstName> <lastName>".
// Post-conditions - Returns a map of customer IDs to Customer objects parsed from the file.
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

// parseInventoryFile(const string fileName)
// Summary - Parses the inventory data file and constructs a list of InventoryData objects.
// Pre-conditions - The file 'fileName' should exist and be readable.
//                - The format of each line in the file should be in the required format specific to the inventory data.
// Post-conditions - Returns a list of InventoryData objects parsed from the file.
list<InventoryData> Parser::parseInventoryFile(const string fileName) {

    list<InventoryData> inventoryList;

    ifstream inputFile;
    inputFile.open(fileName);
    if(!inputFile) {
        cout << "File could not be opened" << endl;
        return inventoryList;
    }

    string line;
    while(getline(inputFile, line)) {
        stringstream ss(line);
        InventoryData data;

        char genre;
        ss >> genre;

        if(genre != 'C' && genre != 'D' && genre != 'F') {
            cout << "Invalid genre type" << endl;
            continue;                       // Move on to the next line
        }

        data.genreType = genre;

        ss.ignore();
        ss >> data.stock;

        ss.ignore();
        getline(ss, data.directorName, ',');

        getline(ss, data.movieTitle, ',');

        if(genre == 'F' || genre == 'D') {
            
            ss >> data.releaseYear;
        }
        else if (genre == 'C') {

            ss >> data.actorFirstName >> data.actorLastName >> data.releaseMonth >> data.releaseYear;
        }

        // Add the parsed data to the inventory list
        inventoryList.push_back(data);

        if(inputFile.eof())
        break;
    }

    inputFile.close();
    return inventoryList;
}

// parseCommandFile(const string fileName)
// Summary - Parses the command data file and constructs a list of CommandData objects.
// Pre-conditions - The file 'fileName' should exist and be readable.
//                - The format of each line in the file should be in the required format and specific to the command data.
// Post-conditions - Returns a list of CommandData objects parsed from the file.
list<CommandData> Parser::parseCommandFile(const string fileName)
{
    list<CommandData> commandList;

    ifstream inputFile;
    inputFile.open(fileName);
    if(!inputFile) {
        cout << "File could not be opened" << endl;
        return commandList;
    }

    string line;
    while(getline(inputFile, line)) {
        stringstream ss(line);
        CommandData data;

        char actionType;
        ss >> actionType;

        if(actionType != 'I' && actionType != 'H' && actionType != 'B' && actionType != 'R') {
            cout << "Invalid action request" << endl;
            continue;
        }

        data.actionType = actionType;

        if(actionType == 'H') {
            ss >> data.customerId;            
        }
        else if(actionType == 'B' || actionType == 'R') {
            ss >> data.customerId >> data.mediaType >> data.genreType;

            if(data.genreType == 'F') {
                getline(ss, data.movieTitle, ',');
                ss >> data.releaseYear;
            }
            else if(data.genreType == 'D') {
                getline(ss, data.directorName, ',');
                getline(ss, data.movieTitle, ',');
            }
            else if(data.genreType == 'C') {
                ss >> data.releaseMonth >> data.releaseYear >> data.actorFirstName >> data.actorLastname;
            }
        }

        // Add the parsed data to the command list
        commandList.push_back(data);

        if(inputFile.eof())
        break;
        
    }

    inputFile.close();
    return commandList;
}
