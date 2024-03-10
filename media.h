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

#include "content.h"

class Media
{
   public:
    enum availableMediaTypes {
        DvD
    };
    //--------------------------------------------Constructors & Destructor-----------------------------------------------------

    // Media()
    // Summary - Default constructor.
    // Post-conditions - A Media object is initialized with default values.
    Media();

    Media(int stock, availableMediaTypes mediaType, Content* content);

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
    bool setStock(int stock);

    // setMediaType()
    // Summary - Sets the type for a media item.
    // Post-conditions - Type of the media is set for the media item.
    bool setMediaType(availableMediaTypes mediaType);

    // setContent()
    // Summary - Sets the content that is present on this media.
    //           Media can only have content assigned to it once.
    // Post-conditions - content field is set for this media object permanently.
    //                   Returns true if content field was updated.
    //                   false otherwise.
    bool setContent(Content * content);

    //---------------------------------------------------getter methods------------------------------------------------------------

    // getStock() const
    // Summary - Gets the available stock count for a particular media.
    // Post-conditions - Returns the stock count for the media item.
    int getStock() const;

    // getMediaType() const
    // Summary - Gets the type of the media item.
    // Post-conditions - Returns the type of media item.
    availableMediaTypes getMediaType() const;

    // getContent()
    // Summary - Gets the content that is present on this media.
    // Post-conditions - Returns the content for on this media object.
    //                   nullptr if there is no content for this media object yet.
    const Content * getContent() const;

    // getMediaId() const
    // Summary - Gets the unique identifier of a media item.
    // Post-conditions - Returns the unique identifier of a media item.
    string getMediaId() const;

   private:
    int stock;            // Stock available for the media item.
    availableMediaTypes mediaType; // Type of a media item.
    Content * content;        // Pointer to the associated Movies object.

    // mediaTypeToString()
    // Summary - Converts the enum availableMediaTypes to a readable string
    // Post-conditions - Returns a string representing the passed mediaType
    static string mediaTypeToString(const availableMediaTypes mediaType); 
};

#endif
