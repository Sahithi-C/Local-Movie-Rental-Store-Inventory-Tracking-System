//------------------------------------------------------transaction.h-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 02/24/2024

// Date of Last Modification : 02/24/2024

// Purpose : Defining a Transaction class representing the transaction records of cutomers. 

// -------------------------------------------------------------------------------------------------------------------------

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include<iostream>
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

    // Transaction(const Transaction& other)
    // Summary - Copy constructor.
    // Pre-conditions - None.
    // Post-conditions - A transaction object is initialized with data of other transaction object.
    Transaction(const Transaction& other);

    // ~Transaction()
    // Summary - Destructor.
    // Pre-conditions - None.
    // Post-conditions - clears aby dynamically associated memory.
    ~Transaction();

    //-------------------------------------------------setter metods-------------------------------------------------------------

    // setActionType(char type)
    // Summary - sets the type of action for a transaction
    // Pre-conditions - None.
    // Post-conditions - action type of transaction is set. 
    void setActiontype(char type);

    // setmediaId(const string& mediaId)
    // Summary - stes the media id associated with the tranasaction.
    // Pre-conditions - None.
    // Post-conditions - media id associated with the transaction of a value is set.
    void setMediaId(const string& mediaId);

    // setTransactionId(int transactionId)
    // Summary - sets the transaction id.
    // Pre-conditions - None.
    // Post-conditions - The transaction id is set.
    void setTransactionId(int transactionId);

    // setRecord(const string& record)
    // Summary - sets the record associated with the transaction for a customer.
    // Pre-conditions - None.
    // Post-conditions - Record associated with the transaction for a customer is set.
    void setRecord(const string& record);

    //---------------------------------------------------getter methods-----------------------------------------------------------

    // getActionType() const
    // Summary - gets the type of action associated with the transaction.
    // Pre-conditions - None.
    // Post-conditions - Returns the type of action for the transaction.
    char getActionType() const;

    // getmediaId() const
    // Summary - gets the media id associated with the transaction.
    // Pre-conditions - None.
    // Post-conditions - Returns the media id associated with the transaction.
    string getMediaId() const;

    // getTransactonId() const
    // Summary - gets the id of transaction.
    // Pre-conditions - None.
    // Post-conditions - Returns the transaction Id.
    int getTransactionId() const;

    // getRecord() const
    // Summary - gets the record associated with the transaction of a customer.
    // Pre-conditions - None.
    // Post-conditions - returns the record for the transaction.
    string getRecord() const;

   private:
    char actionType;     // Type of action for a transaction.
    string mediaId;      // media Id associated with transaction.
    int transactionId;   // Transaction Id for transaction.
};

#endif;