#ifndef MAP_CPP
#define MAP_CPP
#include<iostream>
#include"map.h"

using namespace std;

// Map()
// Summary - Constructor for the Map class.
// Pre-conditions - None.
// Post-conditions - An instance of the Map class is created with default values.
template <typename Key, typename Value>
Map<Key, Value>::Map() {
    this->size = 0;
    this->capacity = 100;
    hashMap = new list<pair<Key, Value>>[capacity];
}

// Map(const Map<Key, Value> &other)
// Summary - Copy constructor for the Map class.
// Pre-conditions - None.
// Post-conditions - A new Map object is created, which is a copy of the provided Map object 'other'.
template <typename Key, typename Value>
Map<Key, Value>::Map(const Map<Key, Value> &other) {
  cout << "copy copy copy copy" << endl;
  size = other.size;
  capacity = other.capacity;
  hashMap = new list<pair<Key, Value>>[capacity];

  for (int i = 0; i < capacity; ++i) {
    for (auto& pair : other.hashMap[i]) {
      hashMap[i].push_back(pair);
    }
  }
}

// ~Map()
// Summary - Destructor for the Map class.
// Pre-conditions - None.
// Post-conditions - Resources held by the Map object are released upon destruction.
template <typename Key, typename Value>
Map<Key, Value>::~Map() {
    delete[] hashMap;
}

// insert(const Key &key, const Value &value)
// Summary - Inserts a key-value pair into the map.
// Pre-conditions - None.
// Post-conditions - The key-value pair (key, value) is inserted into the map. 
//                   If the key already exists in the map, its corresponding value is updated.
template <typename Key, typename Value>
void Map<Key, Value>::insert(const Key &key, const Value &value) {

    int index = hash(key);

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
 
// getValue(const Key &key, Value* foundValue)
// Summary - Retrieves the value associated with the given key.
// Pre-conditions - None.
// Post-conditions - If the key exists in the map, its corresponding value is stored in the 'foundValue' parameter, 
//                   and the method returns true. Otherwise, returns false.
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

// remove(const Key &key)
// Summary - Removes the key-value pair associated with the given key from the map.
// Pre-conditions - None.
// Post-conditions - If the key exists in the map, its corresponding key-value pair is removed, 
//                   and the method returns true. Otherwise, returns false.
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

// isEmpty() const
// Summary - Checks if the map is empty.
// Pre-conditions - None.
// Post-conditions - Returns true if the map is empty. Otherwise, returns false.
template <typename Key, typename Value>
bool Map<Key, Value>::isEmpty() const {

    return size == 0;
}

// getSize() const
// Summary - Returns the size of the map.
// Pre-conditions - None.
// Post-conditions - Returns the number of key-value pairs currently stored in the map.
template <typename Key, typename Value>
int Map<Key, Value>::getSize() const {
    return size;
}

// getCapacity() const
// Summary - Returns the capacity of the map.
// Pre-conditions - None.
// Post-conditions - Returns the total number of slots available in the hash map.
template <typename Key, typename Value>
int Map<Key, Value>::getCapacity() const {
    return capacity;
}

// operator=(const Map<Key, Value> &other)
// Summary - Overloaded assignment operator for the Map class.
// Pre-conditions - None.
// Post-conditions - The current map is assigned the values of the provided map 'other'. 
//                   Returns a reference to the modified map.
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

// hash(const Key &key) const
// Summary - Hash function to callculate the index for a given key.
// Pre-conditions - None.
// Post-conditions - Returns the hashed index for the given key.
template <typename Key, typename Value>
int Map<Key, Value>::hash(const Key &key) const {

    //revisit this for string type
    int hashedIndex = static_cast<int>(key) % capacity;

    return hashedIndex;
}

// makeEmpty()
// Summary - Empties the map by removing all key-value pairs.
// Pre-conditions - None.
// Post-conditions - All key-value pairs are removed from the map, and the size of the map becomes zero.
template <typename Key, typename Value>
void Map<Key, Value>::makeEmpty() {
      for (int i = 0; i < capacity; ++i) {
            hashMap[i].clear();
        }
        size = 0;
}

#endif
