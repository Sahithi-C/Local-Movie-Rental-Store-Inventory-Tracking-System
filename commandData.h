//------------------------------------------------------CommandData.h-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)
// Creation Date : 03/10/2024
// Date of Last Modification : 03/10/2024 
// Purpose : Defining of the CommandData struct representing data related to movie rental commands.

// -------------------------------------------------------------------------------------------------------------------------

#ifndef COMMANDDATA_H
#define COMMANDDATA_H

#include <string>

using namespace std;

struct CommandData
{
    char actionType;          // Type of action performed (e.g., borrow, return)
    int customerId;           // Unique identifier for the customer
    char mediaType;           // Type of media (e.g., DVD, VHS)
    char genreType;           // Genre type (e.g., drama, comedy, funny)
    string movieTitle;        // Title of the movie
    int releaseYear;          // Year of movie release
    string directorName;      // Name of the movie director
    int releaseMonth;         // Month of movie release
    string actorFirstName;    // First name of the major actor in the movie
    string actorLastName;     // Last name of the major actor in the movie
};

#endif
