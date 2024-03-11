#include<iostream>
#include "transaction.h"

using namespace std;

Transaction::Transaction() {
    this->actionType = '';
    this->mediaId = "";
}

Transaction::Transaction(char actionType, const string &mediaId) {
    this->actionType = actionType;
    this->mediaId = mediaId;
}

Transaction::~Transaction(){}

char Transaction::getActionType() const{
    return actionType;
}

string Transaction::getTransactionMedia() {
    return mediaId;
}
