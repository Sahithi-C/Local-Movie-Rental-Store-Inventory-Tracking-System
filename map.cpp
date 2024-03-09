#include<iostream>
#include"map.h"

using namespace std;

template <typename Key, typename Value>
Map<Key, Value>::Map() {
    this->size = 0;
    this->capacity = 100;
    hashMap = new list<pair<Key, Value>>[capacity];
}

template <typename Key, typename Value>
Map<Key, Value>::~Map() {
    delete[] hashMap;
}

template <typename Key, typename Value>
void Map<Key, Value>::insert(const Key &key, const Value &value) {

    int index = hash(key);

    //Checking if the key already exists in the list
    for(const pair<Key, Value>& pair : hashMap[index]) {
        if(pair.first == key) {
            pair.second = value;
            return;
        }
    }

    hashMap[index].push_back(make_pair(key, value));
    size++;
}
 
//Should call like getValue(customerId, &customer)
template <typename Key, typename Value>
bool Map<Key, Value>::getValue(const Key &key, Value* foundValue) {

    int index = hash(key);

    for(const pair<Key, Value>& pair: hashMap[index]) {
        if(pair.first == key) {
            *foundValue = pair.second;
            return true;
        }
    }

    return false;
}

//Referenced GeeksForGeeks for the list iterator - especially using 'auto'
template <typename Key, typename Value>
bool Map<Key, Value>::remove(const Key &key) {

    int index = hash(key);

    // Finding the key-value pair in the list at the index
    list<pair<Key, Value>>& currentList = hashMap[index];

    for(auto itr = currentList.begin(); itr != currentList.end(); ++itr) {
        if(itr->first == key) {
            // Removing the found Key-Value pair
            currentList.erase(itr);
            size--;
            return true;
        }
    }

    // Key not found
    return false;
}

template <typename Key, typename Value>
bool Map<Key, Value>::isEmpty() const {

    return size == 0;
}

template <typename Key, typename Value>
int Map<Key, Value>::getSize() const {
    return size;
}

template <typename Key, typename Value>
int Map<Key, Value>::getCapacity() const {
    return capacity;
}

template <typename Key, typename Value>
int Map<Key, Value>::hash(const Key &key) const {

    //revisit this for string type
    int hashedIndex = static_cast<int>(key) % capacity;

    return hashedIndex;
}
