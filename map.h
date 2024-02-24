//------------------------------------------------------map.h-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 02/24/2024

// Date of Last Modification : 02/24/2024

// Purpose : Defining a Map data structure using a binary search tree.

// -------------------------------------------------------------------------------------------------------------------------

#ifndef MAP_H
#define MAP_H

#include<iostream>
#include<string>
#include "bintree.h"
using namespace std;

template<typename Key, typename Value> 
class Map
{
   public:
    //------------------------------------------Constructor & Destructor---------------------------------------------------------

    // Map()
    // Summary - Default constructor.
    // Pre-conditions - None.
    // Post-conditions - Initializes an empty map object.
    Map();

    // ~Map()
    // Summary - Destructor.
    // Pre-conditions - None.
    // Post-conditions - Clears any dynamically associated memory.
    ~Map();

    //-------------------------------------------------------other member functions------------------------------------------------

    // insert(const Key& key, const Value& value)
    // Summary - Insets a key-value pair into the map.
    // Pre-conditions - None.
    // Post-conditions - A key-value pair is inserted into the map. and returns true if successfull. false otherwise.
    bool insert(const Key& key, const Value& value);

    // find(const Key& key, const Value& value)
    // Summary - Finds a key-value pair is present in the map.
    // Pre-conditions - None.
    // Post-conditions - Searches for a key-value pair in the map. Returns true if pair is found. false, otherwise.
    bool find(const Key& key, const Value& value);

    // remove(const Key& key)
    // Summary - Removes a key-value pair in the map.
    // Pre-conditions - There should exist a valid key-values pair in the map to remove them.
    // Post-conditions - The key-value pair from the map is removed. Returns true if successfull. false, otherwise.
    bool remove(const Key& key);

    // isEmpty() const
    // Summary - Checks if the map is empty.
    // Pre-conditions - None.
    // Post-conditions - Returns true if the map is empty. false, otherwise.
    bool isEmpty() const;

    // size() const
    // Summary - Returns the size of a map.
    // Pre-conditions - None.
    // Post-conditions - Returns the number of key-value pairs present in the map.
    int size() const;

    // clear()
    // Summary - Clears the map.
    // Pre-conditions - None.
    // Post-conditions - Removes all key-value pairs from the map.
    void clear();

   private:
    map<Key, Value> data;        // Internal data structure for storing key-value pairs.

};

#endif