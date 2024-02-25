#include<iostream>
#include<string>
#include "movies.h"
#include "media.h"
#include "customer.h"
#include "store.h"
using namespace std;


// parseInventoryFile(const string& line)
// Summary - Parses a string of inventory data to build the store's inventory.
// Pre-conditions - The input data must be properly formatted according to requirements.
// Post-conditions - Returns a store object based on the parsed data.
Store& Parse::parseInventoryFile(const string& line) {
	for(each line in dataFile) {
		parse the line to get movie details
		check the type of movie(classics, drama, comedy)
		create a movie object based on the type of movie
		if(type of movie is comedy) {
			add movie to comedy list in the store
		}
		else if(type of movie is drama) {
			add movie to drama list in the store
		}
		else {	
			add movie to classics list in the store
		}
	}
	
	return the created store object
}