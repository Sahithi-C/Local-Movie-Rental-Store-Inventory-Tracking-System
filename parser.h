//------------------------------------------------------parser.h-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 02/24/2024

// Date of Last Modification : 02/24/2024

// Purpose : Defining a Parser class responsible for parsing input strings 
//           and creating corresponding objects.
// -------------------------------------------------------------------------------------------------------------------------

#ifndef PARSER_H
#define PARSER_H

#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include <list> 
#include "customer.h"
#include "map.h"
#include "store.h"
using namespace std;

struct inventoryData
{
    char genreType;
    int stock;
    string directorName;
    string movieTitle;
    int releaseYear;
    string actorFirstName;
    string actorLastname;
    int releaseMonth;
};

class Parser
{
   public:
    //---------------------------------------------Constructor & Destructor-------------------------------------------------------

    // Parser()
    // Summary - Default constructor.
    // Post-conditions - Constructs a parser object.
    Parser();

    // ~Parser()
    // Summary - Destructor.
    // Post-conditions - Clears any dynamically allocated memory.
    ~Parser();

    //--------------------------------------------------other member functions-----------------------------------------------------

    // parseInventoryFile(const string& line)
    // Summary - Parses a string of inventory data to build the store's inventory.
    // Pre-conditions - The input data must be properly formatted according to requirements.
    // Post-conditions - Returns a list of inventoryData structs based on the parsed data.
    list<inventoryData> parseInventoryFile(const string fileName);
    
    // parseCustomersFile(const string& line)
    // Summary - Parses a string of customer data to create corresponding customer objects.
    // Pre-conditions - The input data must be properly formatted according to requirements.
    // Post-conditions - Returns a customer object based on the parsed data.
    Map<int, Customer> parseCustomersFile(const string fileName);
  
};


#endif
