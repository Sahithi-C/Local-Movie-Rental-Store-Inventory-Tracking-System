//------------------------------------------------------transaction.cpp-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 03/11/2024

// Date of Last Modification : 03/11/2024

// Purpose : Implementing a Transaction class representing the transaction records of cutomers. 

// -------------------------------------------------------------------------------------------------------------------------

#include<iostream>
#include "transaction.h"

using namespace std;

// Transaction()
// Summary - Default constructor.
// Pre-conditions - None.
// Post-conditions - A Transaction object is initialized with default values.
Transaction::Transaction() {}

// Transaction(char actionType, const string &mediaId)
// Summary - Parameterized constructor for the Transaction class.
// Pre-conditions - None.
// Post-conditions - Initializes a Transaction object with the specified actionType and mediaId.
Transaction::Transaction(char actionType, const string &mediaId) {
    this->actionType = actionType;
    this->mediaId = mediaId;
}

// ~Transaction()
// Summary - Destructor for the Transaction class.
// Pre-conditions - None.
// Post-conditions - Clears any dynamically memory associated with Transaction object.
Transaction::~Transaction(){}

// getActionType() const
// Summary - Getter function for the actionType attribute.
// Pre-conditions - None.
// Post-conditions - Returns the action type of the Transaction object.
char Transaction::getActionType() const{
    return actionType;
}

// getTransactionMedia()
// Summary - Getter function for the mediaId attribute.
// Pre-conditions - None.
// Post-conditions - Returns the mediaId of the Transaction object.
string Transaction::getTransactionMedia() const {
    return mediaId;
}
