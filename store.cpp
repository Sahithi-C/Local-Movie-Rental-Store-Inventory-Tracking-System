#include<iostream>
#include "store.h"
using namespace std;

Store::Store() {

}

Store::~Store() {

}

void Store::buildInventory(const list<InventoryData> &inventoryList) {

    inventory.populateInventory(inventoryList);
}

void Store::setCustomers(Map<int, Customer> &customerMap) {

    this->customerMap = customerMap;
}

void Store::borrowItem(const CommandData& data) {
    Customer customer;
    if(this->customerMap.getValue(data.customerId, &customer)) {
        Media media = inventory.getMedia("fix me."); //media should hold the address of the media object from the tree
        if(media.getStock() > 0) {
            customer.borrowMedia(media.mediaId);
            media.reduceStock();
        }
    }
}

/* 
// showCustomerHistory() const
// Summary - Displays the list of customers of the store.
// Post-conditions - The lsit of customers of the store is displayed.
void Store::showCustomerHistory() {
	for (Customer c: customers) {
		for (Transaction in c.transactions) {
			Cout << transaction.tostring();
		}
	}
}

// borrowItem()
// Summary - Records a customer borrowing an item from the store.
// Post-conditions - Updates the inventory and customer records by recording borrow action type.
void store::borrowItem(Customer c, Content content) {
	if (!customers.contains(c))
		return missing customer error
		
	if (Store has any copies)
		Add borrow content to c.transactions
		Add content to c.checkedOut
		Reduce content stock by 1
		Return success
	else
		Return no copies of content error
}

// returnItem()
// Summary - Records a customer returning an item from the store.
// Pre-conditions - The item should be initially borrowed for the customer to return it.
// Post-conditions - Updates the inventory and customer records by recording return action type.
void store::returnItem(Customer c, Content content) {
	if (!customers.contains(c)) 
		Return missing customer error
	
	if (movie exists in store inventory && c.checkedOut contains content)
		Add return content to c.transactions
		Remove content from c.checkedOut
		Increase content stock by 1
		Return success
	Else
		Return invalid movie error
}

// showInventory() const
// Summary - Displays the current inventory of the store.
// Post-conditions - Thes current inventory of the store is displayed.
void store::showInventory() {
	for each type of movie m {
		get the array arr containing the hashmap of m
		build a binary tree from arr
		do an inorder traversal to display the binary tree
	}
}

*/
