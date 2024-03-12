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
// Summary - Default constructor for the Customer class.
// Pre-conditions - None.
// Post-conditions - An instance of the Customer class is created with default values.
Customer::Customer() {}

// Customer(int customerId, const string& firstName, const string& lastName)
// Summary - Initializes a Customer object with specified values for customer ID, first name, and last name.
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
Customer::~Customer() {}

// getCustomerId() const
// Summary - This method returns the ID of a customer.
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

// printTransactionHistory(const Inventory& inventory) const
// Summary - Prints the transaction history of the customer.
// Pre-conditions - None.
// Post-conditions - The transaction history of the customer is displayed on output.
void Customer::printTransactionHistory(const Inventory& inventory) const {

    cout << "Customer ID: " << this->customerId << endl;
    cout << "Customer Name: " << this->getCustomerName() << endl;

    if(this->transactionList.empty()) {
        cout << "There are no transactions for this customer" << endl;
        return;
    }

    cout << "List of DVD transactions " << endl;

    // Iterate through the transaction list in reverse order
    for(auto itr = transactionList.rbegin(); itr != transactionList.rend(); ++itr) {
        const Transaction& transaction = *itr;

        string actionType;
        if(transaction.getActionType() == 'B') {
            actionType = "Borrowed";
        }
        else if(transaction.getActionType() == 'R') {
            actionType = "Returned";
        }

        const string mediaId = transaction.getTransactionMedia();

        Media media = inventory.getMedia(mediaId);

        if(media.getMediaType() == Media::availableMediaTypes::DvD) {
            const Content content = *(media.getContent());
            cout << content.getTitle() << " - " << actionType << endl;
        }
    }
}

// borrowMedia(Media &media)
// Summary - Records a transaction for borrowing media by the customer and updates the borrowed media list.
// Pre-conditions - The media object passed as a parameter must be valid and represent an available media item.
// Post-conditions - A transaction of borrowing media is recorded for the customer, and the borrowed media list is updated.
void Customer::borrowMedia(Media &media) {
    string mediaId = media.getMediaId();
    Transaction transaction('B', mediaId);
    this->transactionList.push_back(transaction);
    this->borrowedMediaList.insert(mediaId, true);
}

// returnMedia(Media &media)
// Summary - Records a transaction for returning borrowed media by the customer and updates the borrowed media list.
// Pre-conditions - The media object passed as a parameter must be valid and represent a borrowed media item by the customer.
// Post-conditions - A transaction of returning borrowed media is valid and is recorded for the customer, and the borrowed media list is updated.
//                   false otherwise.
bool Customer::returnMedia(Media &media) {

    string mediaId = media.getMediaId();
    
    if(isItemReturnable(mediaId)) {
        this->borrowedMediaList.remove(mediaId);

        Transaction transaction('R', mediaId);
        this->transactionList.push_back(transaction);

        return true;
    }
    else {
        cout << "This movie was not borrowed." << endl;
    }

    return false;
}

// isItemReturnable(string mediaId) const
// Summary - Checks if the specified media item with the given unique identifier is returnable by the customer.
// Pre-conditions - The mediaId parameter must represent a valid unique identifier of a media item.
//                  The borrowedMediaList must contain an entry for the media item with the specified media ID.
// Post-conditions - Returns true if the specified media item is currently borrowed by the customer and can be returned.
//                   false, otherwise.
bool Customer::isItemReturnable(string mediaId) const {

    bool present;

    if(this->borrowedMediaList.getValue(mediaId, &present)) {
        if(present)
            return true;
    }
    return false;
}




