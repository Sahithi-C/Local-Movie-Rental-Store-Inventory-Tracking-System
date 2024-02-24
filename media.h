//------------------------------------------------------media.h-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 02/24/2024

// Date of Last Modification : 02/24/2024

// Purpose : Defining a media class representing a generic media item. 

// -------------------------------------------------------------------------------------------------------------------------

#ifndef MEDIA_H
#define MEDIA_H

#include<iostream>
#include<string>
using namespace std;

class Movies;

class Media
{
   public:
    //--------------------------------------------Constructors & Destructor-----------------------------------------------------

    // Media()
    // Summary - Default constructor.
    // Pre-conditions - None.
    // Post-conditions - A Media object is initialized with default values.
    Media();

    // Media(const Media& other)
    // Summary - Copy constructor.
    // Pre-conditions - None.
    // Post-conditions - A Media object is initialized with the data of other Media object.
    Media(const Media& other);

    // ~Media()
    // Summary - Destructor.
    // Pre-conditions - None.
    // Post-conditions - Cleans any dynamically associated memory.
    ~Media(); 

    //----------------------------------------------other member functions---------------------------------------------------------

    // reduceStock()
    // Summary - Reduces the stock of a media item.
    // Pre-conditions - there should be valid(i.e., stock >= 1) stock available for media item to prcoess the borrow request and decrease stock.
    // Post-conditions - Decreases the stock of the media item by 1.
    bool reduceStock();

    // increaseStock()
    // Summary - Increases the stock of media item.
    // Pre-conditions - None.
    // Post-conditions - Increases the stock of the media item by 1.
    bool increaseStock();
    
    //---------------------------------------------------getter methods------------------------------------------------------------

    // getMediaId() const
    // Summary - gets the unique id for the media item.
    // Pre-conditions - ther should be a valid media item to get it's media id.
    // Post-conditions - Returns the unique id for a media item.
    int getMediaId() const;

    // getMediaType() const
    // Summary - gets the type of media item.
    // Pre-conditions - There should be a valid media of valid type to check for the type of media.
    // Post-conditions - Returns the type of media item.
    char getMediaType() const;

    // getStock() const
    // Summary - gets the available stock count for a particular media.
    // Pre-conditions - There should be valid item present of valid media type to gets it's stock.
    // Post-conditions - Returns the stock count for the media item.
    int getStock() const;
    
    //----------------------------------------------setter methods-------------------------------------------------------

    // setMediaType()
    // Summary - sets type for a media item.
    // Pre-conditions - None.
    // Post-conditions - Type of the media is set for the media item.
    void setMediaType(char type);

    // setStock()
    // Summary - Sets the stock count for a valid media item.
    // Pre-conditions - There should be a valid media present to be able to set the stock count for the media item.
    // Post-conditions - Stock count for a valid media item is set.
    void setStock(int stock);

   private:
    int stock;            // Stock available for the media item.
    string mediaType;     // Type of media item.
    Movies* movie;        // Pointer to the associated Movies object.

};

#endif