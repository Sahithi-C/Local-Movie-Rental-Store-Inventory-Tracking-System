#ifndef CONTENTFACTORY_H
#define CONTENTFACTORY_H

#include<iostream>
#include"content.h"
#include "inventoryData.h"
#include "commandData.h"
#include "comedy.h"
#include "drama.h"
#include "classics.h"

using namespace std;

class ContentFactory {
    
    public:

    ContentFactory(); //constructor
    ~ContentFactory(); //destructor

    static Content& createContent(const InventoryData& data);
    static Content& createContent(const CommandData& data);

};

#endif
