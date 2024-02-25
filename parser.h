//------------------------------------------------------parser.h-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 02/24/2024

// Date of Last Modification : 02/24/2024

// Purpose : Defining a Parser class responsible for parsing input strings and creating corresponding objects.

// -------------------------------------------------------------------------------------------------------------------------

#ifndef PARSER_H
#define PARSER_H

#include<iostream>
#include<string>
#include "movies.h"
#include "media.h"
#include "customer.h"
#include "store.h"
using namespace std;

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
    // Post-conditions - Returns a store object based on the parsed data.
    Store& parseInventoryFile(const string& line);
    
    // parseCustomersFile(const string& line)
    // Summary - Parses a string of customer data to create corresponding customer objects.
    // Pre-conditions - The input data must be properly formatted according to requirements.
    // Post-conditions - Returns a customer object based on the parsed data.
    Customer& parseCustomersFile(const string& line);
  
}


#endif
