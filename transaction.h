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

    Transaction(char actionType, const string& mediaId);

    // ~Transaction()
    // Summary - Destructor.
    // Post-conditions - Clears any dynamically allocated memory.
    ~Transaction();


   private:
    char actionType;        // Type of action for a transaction.
    string mediaId;         // media Id associated with transaction.
};

#endif;
