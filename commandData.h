#ifndef COMMANDDATA_H
#define COMMANDDATA_H

#include <string>

using namespace std;

struct CommandData
{
    char actionType;
    int customerId;
    char mediaType;
    char genreType;
    string movieTitle;
    int releaseYear;
    string directorName;
    int releaseMonth;
    string actorFirstName;
    string actorLastName;
};

#endif
