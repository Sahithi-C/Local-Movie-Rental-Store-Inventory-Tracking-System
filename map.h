//------------------------------------------------------map.h-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 02/24/2024

// Date of Last Modification : 02/24/2024

// Purpose : Defining a Map data structure.

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
    Map();

    // ~Map()
    // Summary - Destructor.
    ~Map();

    //-------------------------------------------------------other member functions------------------------------------------------

    // setValue(const Key& key, const Value& value)
    // Summary - Inserts a key-value pair into the map. Returns true if successful, false otherwise.
    bool setValue(const Key& key, const Value& value);

    // getValue(const Key& key, const Value& value)
    // Summary - Finds a key-value pair if present in the map. Returns the value if found, false otherwise.
    Value& getValue(const Key& key, const Value& value);

    // remove(const Key& key)
    // Summary - Removes a key-value pair from the map. Returns true if successful, false otherwise.
    bool remove(const Key& key);

    // isEmpty() const
    // Summary - Checks if the map is empty. Returns true if the map is empty, false otherwise.
    bool isEmpty() const;

   private:
    Key key;                     //Hashed key for the table
    Value value;                 //Value for the given key
    int size;                    //size of the hash table 
    Map* next;                   //pointer to the next element in the map
};

#endif
