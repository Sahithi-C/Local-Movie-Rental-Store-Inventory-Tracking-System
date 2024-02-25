//------------------------------------------------------media.h-----------------------------------------------------------

// Programmer Name Course Section Number : VG, Jonah Kolar, Sahithi Chimakurthi(CSS 502 A)

// Creation Date : 02/24/2024

// Date of Last Modification : 02/24/2024

// Purpose : Defining a media class representing a generic media item. 
//           It represents the mediaType(eg: DVD, VCR) and a content.
//           The content in our case is a Movie.
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
    // Post-conditions - A Media object is initialized with default values.
    Media();

    // Media(const Media& other)
    // Summary - Copy constructor.
    // Post-conditions - A Media object is initialized with the data of other Media object.
    Media(const Media& other);

    // ~Media()
    // Summary - Destructor.
    // Post-conditions - Cleans any dynamically associated memory.
    virtual ~Media(); 

    //----------------------------------------------other member functions---------------------------------------------------------

    // reduceStock()
    // Summary - Reduces the stock of a media item by 1 if there's valid stock.
    // Post-conditions - Decreases the stock of the media item by 1.
    bool reduceStock();

    // increaseStock()
    // Summary - Increases the stock of media item by 1.
    // Post-conditions - Increases the stock of the media item by 1.
    bool increaseStock();
    
    //----------------------------------------------setter methods-------------------------------------------------------

    // setStock()
    // Summary - Sets the stock count for a valid media item.
    // Post-conditions - Stock count for a valid media item is set.
    void setStock(int stock);

    // setMediaType()
    // Summary - Sets the type for a media item.
    // Post-conditions - Type of the media is set for the media item.
    void setMediaType(char mediaType);

    //---------------------------------------------------getter methods------------------------------------------------------------

    // getStock() const
    // Summary - Gets the available stock count for a particular media.
    // Post-conditions - Returns the stock count for the media item.
    int getStock() const;

    // getMediaType() const
    // Summary - Gets the type of the media item.
    // Post-conditions - Returns the type of media item.
    char getMediaType() const;

    // getMediaId() const
    // Summary - Gets the unique identifier of a media item.
    // Post-conditions - Returns the unique identifier of a media item.
    string getMediaId() const;

   private:
    int stock;            // Stock available for the media item.
    char mediaType;       // Type of a media item.
    Movies* movie;        // Pointer to the associated Movies object.
};

#endif
