#ifndef INVENTORY_DATA_H
#define INVENTORY_DATA_H

#include <string>

using namespace std;

struct InventoryData
{
    char genreType;
    int stock;
    string directorName;
    string movieTitle;
    int releaseYear;
    string actorFirstName;
    string actorLastname;
    int releaseMonth;
};

#endif
