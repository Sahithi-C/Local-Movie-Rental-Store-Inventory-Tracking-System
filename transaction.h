//------------------------------------------------------transaction.h-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 02/24/2024

// Date of Last Modification : 02/24/2024

// Purpose : Defining a Transaction class representing the transaction records of cutomers. 

// -------------------------------------------------------------------------------------------------------------------------

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include<iostream>
#include"media.h"
#include"customer.h"

using namespace std;

class Transaction 
{
    public:
    //---------------------------------------------------Constructors & Destructor------------------------------------------------
    
    // Transaction()
    // Summary - Default constructor.
    // Pre-conditions - None.
    // Post-conditions - A Transaction object is initialized with default values.
    Transaction();

    // Transaction(char actionType, const string &mediaId)
    // Summary - Parameterized constructor for the Transaction class.
    // Pre-conditions - None.
    // Post-conditions - Initializes a Transaction object with the specified actionType and mediaId.
    Transaction(char actionType, const string& mediaId);


    // ~Transaction()
    // Summary - Destructor.
    // Pre-conditions - None.
    // Post-conditions - clears aby dynamically associated memory.
    ~Transaction();


    //---------------------------------------------------getter methods-----------------------------------------------------------

    // getActionType() const
    // Summary - gets the type of action associated with the transaction.
    // Pre-conditions - None.
    // Post-conditions - Returns the type of action for the transaction.
    char getActionType() const;

    // getTransactionMedia()
    // Summary - Getter function for the mediaId attribute.
    // Pre-conditions - None.
    // Post-conditions - Returns the mediaId of the Transaction object.
    string getTransactionMedia() const; 

    private:
    char actionType;     // Type of action for a transaction.
    string mediaId;      // media Id associated with transaction.
};

#endif
