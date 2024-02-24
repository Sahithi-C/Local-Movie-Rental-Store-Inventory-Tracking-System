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
    // Summary - Default constructor.
    // Pre-conditions - None.
    // Post-conditions - A customer object is initialized with default values.
    Customer();

    // Customer(const Customer& other)
    // Summary - copy constructor.
    // Pre-conditions - None.
    // Post-conditions - A customer object is initialized as a copy of other customer object.
    Customer(const Customer& other);

    // ~Customer()
    // Summary - Destructor.
    // Pre-conditions - None.
    // Post-conditions - cleans any dynamically associated memory.
    ~Customer();

    //-------------------------------------------------setter methods-----------------------------------------------------------

    // setCustomerId(int customerId)
    // Summary - sets the customer id.
    // Pre-conditions - None.
    // Post-conditions - customer Id is set for a customer.
    void setCustomerId(int customerId);

    // setCustomerName(const string& firstName, const string& lastName)
    // Summary - sets customers first name and last name.
    // Pre-conditions - None.
    // Post-conditions - first and last names of a customer are set.
    void setCustomerName(const string& firstName, const string& lastname);
    
    //------------------------------------------------getter methods-------------------------------------------------------

    // getCustomerId() const
    // Summary - gets the customer id.
    // Pre-conditions - there should exist a valid customer to get that customer id.
    // Post-conditions - Returns unique id of a customer.
    int getCustomerId() const;

    // getCustomerName() const
    // Summary - gets first and last names of a customer.
    // Pre-conditions - There should exist a valid customer to get their name.
    // Post-conditions - Returns first and last names of a customer.
    string getCustomerName() const;

    //-----------------------------------------other member functions-----------------------------------------------------------

    // getTransactionHistory() const
    // Summary - gest whole transaction history of a customer.
    // Pre-conditions - There should exist a valid customer to get their history.
    // Post-conditions - Returns the transaction list of a particular customer. 
    vector<TransactionHistory> getTransactionHistory() const;

    // printTransactionHistory() const
    // Summary - prints the transaction history for a customer.
    // Pre-conditions - There should exist a valid customer to print their history.
    // Post-conditions - transactio history of a customer is printed.
    void printTransactionHistory() const;
    
    // borrowMedia(int mediaId, int movieId)
    // Summary - Records a transaction for borrowing media for a customer in borrowedMediaList to keep track of customers borrows.
    // Pre-conditions - None.
    // Post-conditions - Transaction history for borrow of media by a customer is recorded.
    void borrowMedia(int mediaId, int movieId);

    // returnmedia(int mediaId, int movieId)
    // Summary - Records a transaction for returning media by a customer, by removing the media item from borrowedMediaList.
    // Pre-conditions - There should exist a record of borrow by customer to record(remove it from list) it as return.
    // Post-conditions - Transaction history for return of media by a customer is recorded, by removing the item from list.
    void returnMedia(int mediaId, int movieId);

    // isItemReturnable(int mediaId) const
    // Summary - Checks if a media item is returnable by a customer.
    // Pre-conditions - There should exist a record of borrow by the customer of the media item in borrowedMediaList.
    // Post-conditions - Returns true, if the item is a returnable item. false, otherwise.
    bool isItemReturnable(int mediaId) const;

   private:
    string firstName;                        // First name of the customer.
    string lastname;                         // last name of the customer.
    int customerId;                          // Customer id.
    map<string, Media> borrowedMediaList;    // List of borrowed media items by a customer.
};

#endif