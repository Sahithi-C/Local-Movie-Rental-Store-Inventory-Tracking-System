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
    // Post-conditions - A Transaction object is initialized with default values.
    Transaction();

    // Transaction(const Transaction& other)
    // Summary - Copy constructor.
    // Post-conditions - A transaction object is initialized with data of other transaction object.
    Transaction(const Transaction& other);

    // ~Transaction()
    // Summary - Destructor.
    // Post-conditions - Clears any dynamically allocated memory.
    ~Transaction();

    //-------------------------------------------------setter metods-------------------------------------------------------------

    // setRecord(const Customer& customerId)
    // Summary - Creates a transaction record of a customer.
    // Post-conditions - The transactionId, action type and the associated mediaId are set.
    void setRecord(const Customer& customerId);

    //---------------------------------------------------getter methods-----------------------------------------------------------

    // getRecord(const string transactionId) const
    // Summary - Gets the transaction record of a given transaction Id.
    // Pre-conditions - None.
    // Post-conditions - Returns the record for the transaction.
    Transaction& getRecord(const string transactionId) const;

   private:
    char actionType;     // Type of action for a transaction.
    string mediaId;      // media Id associated with transaction.
    string transactionId;   // Transaction Id for transaction.
};

#endif;
