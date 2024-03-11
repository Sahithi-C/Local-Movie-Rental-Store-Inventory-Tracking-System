//------------------------------------------------------customer.h-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 02/24/2024

// Date of Last Modification : 02/24/2024

// Purpose : Defining a Customer class representing a customer in the system. 

// -------------------------------------------------------------------------------------------------------------------------

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include<iostream>
#include<string>
#include<vector>
#include "map.h"
#include "transaction.h"
using namespace std;

class Customer
{
   public:
    //-------------------------------------------------Constructors & Destructor-------------------------------------------------

    // Customer()
    // Summary - Default constructor initializes a customer object with default values.
    // Pre-conditions - None.
    // Post-conditions - A customer object is initialized with default values.
    Customer();

    // Customer()
    // Summary - Parametrized constructor that initializes a customer object with
    //           customer id, first name and last name.
    // Pre-conditions - The customerId should be a valid integer.
    //                - The firstName and lastName should be non-empty strings.
    // Post-conditions - A customer object is initialized with customer id,
    //                   first name and last name.
    Customer(int customerId, const string& firstName, const string& lastName);

    // ~Customer()
    // Summary - Destructor.
    // Pre-conditions - None.
    // Post-conditions - Cleans any dynamically associated memory.
    ~Customer();
    
    //------------------------------------------------getter methods-------------------------------------------------------

    // getCustomerId() const
    // Summary - Gets the unique customer id.
    // Pre-conditions - None.
    // Post-conditions - Returns unique ID of a customer.
    int getCustomerId() const;

    // getCustomerName() const
    // Summary - Gets first and last names of a customer.
    // Pre-conditions - None.
    // Post-conditions - Returns first and last names of a customer.
    string getCustomerName() const;

    //-----------------------------------------other member functions-----------------------------------------------------------

    // getTransactionHistory() const
    // Summary - Gets the whole transaction history of a customer.
    // Post-conditions - Returns the transaction list of a particular customer.
    vector<TransactionHistory> getTransactionHistory() const;

    // printTransactionHistory() const
    // Summary - Prints the transaction history of the specified customer.
    // Post-conditions - The transaction history of a customer is printed.
    void printTransactionHistory() const;
    
    // borrowMedia(int mediaId)
    // Summary - Records a transaction of a customer borrowing a movie in borrowedMediaList 
    //           to keep track of customer's borrows.
    // Post-conditions - Transaction history for borrowing media by a customer is recorded.
    void borrowMedia(int mediaId);

    // returnmedia(int mediaId)
    // Summary - Records a transaction for a customer returning a movie, 
    //           by removing the media item from borrowedMediaList.
    // Post-conditions - Transaction history for the return of media by a customer is recorded, 
    //                   by removing the item from the list.
    void returnMedia(int mediaId);

    // isItemReturnable(int mediaId) const
    // Summary - Checks if a media item is returnable by a customer.
    // Post-conditions - Returns true, if the item is returnable. false, otherwise.
    bool isItemReturnable(int mediaId) const;

   private:
    int customerId;                          // Unique Customer id.
    string firstName;                        // First name of the customer.
    string lastname;                         // last name of the customer.
    Map<string, Media> borrowedMediaList;    // List of borrowed media items by a customer.
};

#endif
