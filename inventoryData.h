#ifndef INVENTORY_DATA_H
#define INVENTORY_DATA_H

#include <string>

using namespace std;

struct InventoryData
{
    char genreType;         // Genre type of the content
    int stock;              // Stock count of the content
    string directorName;    // Name of the director
    string movieTitle;      // Title of the movie
    int releaseYear;        // Year of release
    string actorFirstName;  // First name of the major actor
    string actorLastname;   // Last name of the major actor
    int releaseMonth;       // Month of release
};

#endif
