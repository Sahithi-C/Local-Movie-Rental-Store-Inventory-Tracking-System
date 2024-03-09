#ifndef CONTENTFACTORY_H
#define CONTENTFACTORY_H

#include<iostream>
#include"content.h"
#include "inventoryData.h"

using namespace std;

class ContentFactory {
    
    public:

    ContentFactory(); //constructor
    ~ContentFactory(); //destructor

    static Content& createContent(const InventoryData& data);

};



#endif
