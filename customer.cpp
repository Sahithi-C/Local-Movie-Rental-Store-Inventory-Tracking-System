#include<iostream>
#include"customer.h"

using namespace std;

Customer::Customer() {

}

Customer::Customer(int customerId, const string& firstName, const string& lastName) {
    this->customerId = customerId;
    this->firstName = firstName;
    this->lastName = lastName;
}

Customer::~Customer() {
}

int Customer::getCustomerId() const {
    return customerId;
}

string Customer::getCustomerName() const {
    return firstName + " " + lastName;
}
