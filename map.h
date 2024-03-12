//------------------------------------------------------map.h-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 02/24/2024

// Date of Last Modification : 02/24/2024

// Purpose : Defining a Map data structure.

// -------------------------------------------------------------------------------------------------------------------------

#ifndef MAP_H
#define MAP_H

#include<iostream>
#include<list>
#include <utility>
#include <string>
#include <functional>

using namespace std;

// Our Map class
template<typename Key, typename Value> 
class Map
{
   public:
    //------------------------------------------Constructor & Destructor---------------------------------------------------------

    // Map()
    // Summary - Default constructor.
    // Post-conditions - Initializes an empty map object with default capacity.
    Map();
    
    Map(const Map<Key, Value> &other);

    // ~Map()
    // Summary - Destructor.
    // Post-conditions - Clears any dynamically allocated memory.
    ~Map();

    //-------------------------------------------------------other member functions------------------------------------------------

    // setValue(const Key& key, const Value& value)
    // Summary - Inserts a key-value pair into the map. 
    // Post-conditions - A key-value pair is inserted into the map. Returns true if successful; false, otherwise.
    void insert( const Key& key, const Value& value);

    // getValue(const Key& key, const Value& value)
    // Summary - Finds a key-value pair if present in the map.
    // Post-conditions - Searches for a key-value pair in the map. Returns the value if pair is found;
    bool getValue(const Key& key, Value* foundValue) const;

    // remove(const Key& key)
    // Summary - Removes a key-value pair from the map.
    // Post-conditions - The key-value pair from the map is removed.  Returns true if successful; false, otherwise.
    bool remove(const Key& key);

    // isEmpty() const
    // Summary - Checks if the map is empty.
    // Post-conditions - Returns true if the map is empty; false, otherwise.
    bool isEmpty() const;

    // getSize()
    // Summary - Returns the current size of the map.
    // Post-conditions - Returns the number of elements in the map.
    int getSize() const;

    // getCapacity()
    // Summary - Returns the capacity of the map.
    // Post-conditions - Returns the maximum number of elements the map can hold.
    int getCapacity() const;

    // operator=(const Map<Key, Value> &other)
    // Summary - Overloaded assignment operator for the Map class.
    // Pre-conditions - None.
    // Post-conditions - The current map is assigned the values of the provided map 'other'. 
    //                   Returns a reference to the modified map.
    Map<Key, Value>& operator=(const Map<Key, Value>& other);

    // getAllValues() const
    // Summary - Retrieves all the values stored in the map.
    // Pre-conditions - None.
    // Post-conditions - Returns a list containing all the values stored in the map.
    list<Value> getAllValues() const;

   private:
    list<pair<Key, Value>>* hashMap; // Array of lists of Key-Value pairs
    int size;                        // Number of elements in the hash map
    int capacity;                    // Capacity of the hash map

    // getHash(const Key &key) const
    // Summary - Calculates the hash value for the given key.
    // Pre-conditions - None.
    // Post-conditions - Returns the hashed index corresponding to the given key.
    int getHash(const Key& key) const;  //Hash function

    // makeEmpty()
    // Summary - Empties the map by removing all key-value pairs.
    // Pre-conditions - None.
    // Post-conditions - All key-value pairs are removed from the map, and the size of the map becomes zero.
    void makeEmpty();                // To clear exisiting map
};

#include "map.cpp"

#endif
