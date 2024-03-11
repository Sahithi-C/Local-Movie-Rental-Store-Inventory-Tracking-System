#include<iostream>
#include"customer.h"

using namespace std;

Customer::Customer() {}

Customer::Customer(int customerId, const string& firstName, const string& lastName) {
    this->customerId = customerId;
    this->firstName = firstName;
    this->lastName = lastName;
}

Customer::~Customer() {}

int Customer::getCustomerId() const {
    return customerId;
}

string Customer::getCustomerName() const {
    return firstName + " " + lastName;
}

void Customer::printTransactionHistory() const{

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

        string mediaId = transaction.getTransactionMedia();

        Media media = getMedia(mediaId);

        if(media.getMediaType == Media::availableMediaTypes::DvD) {
            Content content = media.getContent();
            cout << content.getTitle() << " - " << actionType << endl;
        }
    }
}

void Customer::borrowMedia(Media &media) {
    string mediaId = media.getMediaId();
    Transaction transaction('B', mediaId);
    this->transactionList.push_back(transaction);
    this->borrowedMediaList.insert(mediaId, true);
}


bool Customer::returnMedia(Media &media) {

    string mediaId = media.getMediaId();
    
    if(isItemReturnable(mediaId)) {
        this->borrowedMediaList.remove(mediaId)

        Transaction transaction('R', mediaId);
        this->transactionList.push_back(transaction);

        return true;
    }
    else {
        cout << "This movie was not borrowed." << endl;
    }

    return false;
}

bool Customer::isItemReturnable(string mediaId) const {

    bool present;

    if(this->borrowedMediaList.getValue(mediaId, &present)) {
        if(present)
            return true;
    }
    return false;
}




