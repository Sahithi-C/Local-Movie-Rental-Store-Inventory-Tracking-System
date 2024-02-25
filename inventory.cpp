#include<iostream>
#include "inventory.h"

using namespace std;

void Inventory::populateInventory(Map<string, Media>& mediaMap) {
    set the mediaMap to the mediaMap attribute of this class 

    for each media m in the mediaMap {
        if(movie type is Comedy)
          add to comedyMap
        else if(movie type is Drama)
          add to dramaMap
        else 
          add to classicsMap
    }

    call sortInventory() to sort list of media inside each hash map
}
