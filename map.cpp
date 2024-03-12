#ifndef MAP_CPP
#define MAP_CPP
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
Map<Key, Value>::Map(const Map<Key, Value> &other) {

  size = other.size;
  capacity = other.capacity;
  hashMap = new list<pair<Key, Value>>[capacity];

  for (int i = 0; i < capacity; ++i) {
    for (auto& pair : other.hashMap[i]) {
      hashMap[i].push_back(pair);
    }
  }
}

template <typename Key, typename Value>
Map<Key, Value>::~Map() {
    delete[] hashMap;
}

template <typename Key, typename Value>
void Map<Key, Value>::insert(const Key &key, const Value &value) {

    int index = getHash(key);

    //Checking if the key already exists in the list
    for(pair<Key, Value>& pair : hashMap[index]) {
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
bool Map<Key, Value>::getValue(const Key &key, Value* foundValue) const{

    int index = getHash(key);

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

    int index = getHash(key);

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
Map<Key, Value> &Map<Key, Value>::operator=(const Map<Key, Value> &other) {
    
    if (this != &other) {
        // Clear the current map
        for (int i = 0; i < capacity; ++i) {
            hashMap[i].clear();
        }
        delete[] hashMap;

        // Copy the size and capacity
        size = other.size;
        capacity = other.capacity;

        // Allocate memory for the new map
        hashMap = new list<pair<Key, Value>>[capacity];

        // Copy elements from other map
        for (int i = 0; i < capacity; ++i) {
            for (const pair<Key, Value>& pair : other.hashMap[i]) {
                insert(pair.first, pair.second);
            }
        }
    }
   
    return *this;
}

template <typename Key, typename Value>
list<Value> Map<Key, Value>::getAllValues() const {
    list<Value> allValues;

    for(int i = 0; i < capacity; i++) {
        for(const auto& pair : hashMap[i]) {
            allValues.push_back(pair.second);
        }
    }

    return allValues;
}


template <typename Key, typename Value>
int Map<Key, Value>::getHash(const Key &key) const {
    int hashedIndex;
    if(is_same<Key, int>::value) {
        // Hash function for int keys
        hash<Key> intHasher;
        hashedIndex = intHasher(key);
    } else if(is_same<Key, std::string>::value) {
        // Hash function for string keys
        hash<Key> stringHasher;
        hashedIndex = stringHasher(key);
    }

    hashedIndex %= capacity;

    return hashedIndex;
}

template <typename Key, typename Value>
void Map<Key, Value>::makeEmpty() {
      for (int i = 0; i < capacity; ++i) {
            hashMap[i].clear();
        }
        size = 0;
}

#endif
