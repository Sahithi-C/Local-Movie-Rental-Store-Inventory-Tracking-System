#include<iostream>
#include "store.h"

using namespace std;

Store::Store() {

}

Store::~Store() {

}

void Store::setCustomers(Map<int, Customer>& customerMap) {

    this->customerMap = customerMap;
}
