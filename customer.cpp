//------------------------------------------------------customer.cpp-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 03/10/2024

// Date of Last Modification : 03/10/2024

// Purpose : Implementing the Customer class representing a customer in the system. 

// -------------------------------------------------------------------------------------------------------------------------

#include<iostream>
#include"customer.h"

using namespace std;

// Customer()
// Summary - default constructor for the Customer class.
// Pre-conditions - None.
// Post-conditions - An instance of the Customer class is created with default values.
Customer::Customer() {

}

// Customer::Customer(int customerId, const string& firstName, const string& lastName)
// Summary - initializes a Customer object with specified values for customer ID, first name, and last name.
// Pre-conditions - The customerId should be a valid integer.
//                - The firstName and lastName should be non-empty strings.
// Post-conditions - An instance of the Customer class is created with the provided values.
Customer::Customer(int customerId, const string& firstName, const string& lastName) {
    this->customerId = customerId;
    this->firstName = firstName;
    this->lastName = lastName;
}

// ~Customer()
// Summary - This is the destructor for the Customer class.
// Pre-conditions - None.
// Post-conditions - Clears any dynamically allocated memory associated with the Customer object.
Customer::~Customer() {
}

// getCustomerId() const
// Summary - This metho returns the ID of a customer.
// Pre-conditions - None.
// Post-conditions - The customer ID is returned.
int Customer::getCustomerId() const {
    return customerId;
}

// getCustomerName() const
// Summary - This method returns the full name of the customer.
// Pre-conditions - None.
// Post-conditions - The full name(with first and last name) of the customer is returned as a string.
string Customer::getCustomerName() const {
    return firstName + " " + lastName;
}

