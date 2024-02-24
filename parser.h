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
    // Pre-conditions - None.
    // Post-conditions - Constructs a parser object.
    Parser();

    // ~Parser()
    // Summary - Destructor.
    // Pre-conditions - None.
    // Post-conditions - Clears any dynamically associated memory.
    ~Parser();

    //--------------------------------------------------other member functions-----------------------------------------------------

    // parseInventory(const string& line)
    // Summary - Parses a string of inventory data and updates the store's inventory.
    // Pre-conditions - The input data must be properly formatted according to requirements.
    // Post-conditions - Update's the store's inventory based on the parsed data.
    void parseInventory(const string& line);

    // parseTransactions(const string& line)
    // Summary - Parse string of transaction data and updates the reocrds of store's transactions.
    // Pre-conditions - The input data must be properly formatted according to requirements.
    // Post-conditions - Update's the store's records based on the parsed data.
    void parseTransactions(const string& line);
    
    // parseCustomers(const string& line)
    // Summary - Parse string of customer data and creates corresponding customer objects.
    // Pre-conditions - The input data must be properly formatted according to requirements.
    // Post-conditions - Creates customer objects based on parsed data.
    void parseCustomers(const string& line);

    // parseString(const string& line)
    // Summary - Parse a string and determine the appropriate action to take based on it's content.
    // Pre-conditions - The input string must be properly formatted.
    // Post-conditions - Executes the appropriate action based on parsed data.
    void parseString(const string& line);

    // createMovie(const vector<string>& movie)
    // Summary - Creates a movie object based on parsed data.
    // Pre-conditions - The input vector must contain properly formatted data.
    // Post-conditions - Returns a pointer to the created movie object.
    Movies* createMovie(const vector<string>& movie);

    // createMedia(const vector<string>& media)
    // Summary - Creates a media object based on parsed data.
    // Pre-conditions - The input vector must contain properly formatted data.
    // Post-conditions - Returns a pointer to the created media object.
    Media* createMedia(const vector<string>& media);

    // createCustomer(const vector<string>& customer)
    // Summary - Creates a customer object based on parsed customer data.
    // Pre-conditions - The input vector must contain properly formatted data.
    // Post-conditions - Returns a pointer to the created customer objcet.
    Customer* createCustomer(const vector<string>& customer);

   private:
    Store store;           // store object to manage store data.
}


#endif