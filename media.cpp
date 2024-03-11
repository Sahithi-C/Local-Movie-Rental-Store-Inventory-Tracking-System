// media.cpp
// Jonah Kolar
// Made on: 3/8/2024
// Last updated: 3/9/2024
// CSS 502
// Assignment 4
// Summary: This file contains the implementation for Media.
// Assumptions: None

#include "media.h"
   
    //--------------------------------------------Constructors & Destructor-----------------------------------------------------

    // int stock;            // Stock available for the media item.
    // char mediaType;       // Type of a media item.
    // Movies* movie;        // Pointer to the associated Movies object.

    // Media()
    // Summary - Default constructor.
    // Post-conditions - A Media object is initialized with default values.
Media::Media() {
    stock = 0;
    mediaType = availableMediaTypes::DvD;
    content = nullptr;
}

Media::Media(int stock, availableMediaTypes mediaType, Content* content) {
    setStock(stock);
    setMediaType(mediaType);
    setContent(content);
}

// ~Media()
// Summary - Destructor.
// Post-conditions - Cleans any dynamically associated memory.
Media::~Media() {}

//----------------------------------------------other member functions---------------------------------------------------------

// reduceStock()
// Summary - Reduces the stock of a media item by 1 if there's valid stock.
// Post-conditions - Decreases the stock of the media item by 1.
//                   Returns true if the stock was descreased.
//                   false otherwise.
bool Media::reduceStock(){
    if (stock > 0) {
        stock = stock - 1;
        return true;
    }
    return false;
}

// increaseStock()
// Summary - Increases the stock of media item by 1.
// Post-conditions - Increases the stock of the media item by 1.
//                   Returns true if the stock was increased.
//                   false otherwise.
bool Media::increaseStock(){
    stock = stock + 1;
    return true;
}

//----------------------------------------------setter methods-------------------------------------------------------

// setStock()
// Summary - Sets the stock count for a valid media item.
//           Stock cannot be set to a negative number.
// Post-conditions - Stock count for a valid media item is set.
//                   Returns true if the stock was set.
//                   false otherwise.
bool Media::setStock(int stock){
    if (stock >= 0) {
        this->stock = stock;
        return true;
    }
    return false;
}

// setMediaType()
// Summary - Sets the type for a media item.
// Post-conditions - Type of the media is set for the media item.
//                   Returns true if the media type was set.
//                   false otherwise.
bool Media::setMediaType(availableMediaTypes mediaType){
    this->mediaType = mediaType;
    return true;
}

// setContent()
// Summary - Sets the content that is present on this media.
//           Media can only have content assigned to it once.
// Post-conditions - content field is set for this media object permanently.
//                   Returns true if content field was updated.
//                   false otherwise.
bool Media::setContent(Content * content) {
    if (this->content != nullptr) {
        this->content = content;
        return true;
    }
    return false;
}

//---------------------------------------------------getter methods------------------------------------------------------------

// getStock() const
// Summary - Gets the available stock count for a particular media.
// Post-conditions - Returns the stock count for the media item.
int Media::getStock() const{
    return this->stock;
}

// getMediaType() const
// Summary - Gets the type of the media item.
// Post-conditions - Returns the type of media item.
Media::availableMediaTypes Media::getMediaType() const{
    return this->mediaType;
}

// getContent()
// Summary - Gets the content that is present on this media.
// Post-conditions - Returns the content for on this media object.
//                   nullptr if there is no content for this media object yet.
const Content * Media::getContent() const {
    return this->content;
}

// getMediaId() const
// Summary - Gets the unique identifier of a media item.
// Post-conditions - Returns the unique identifier of a media item.
string Media::getMediaId() const{

    return this->content->getContentId() + mediaTypeToString(this->mediaType);
}

//------------------------------------------------accessors---------------------------------------------------------------
// operator<<()
ostream& operator<<(ostream& out, const Media m) {
    out << m.stock << ", " << m.content;
    return out;
}

// mediaTypeToString()
// Summary - Converts the enum availableMediaTypes to a readable string
// Post-conditions - Returns a string representing the passed mediaType
string Media::mediaTypeToString(availableMediaTypes mediaType) {
    switch (mediaType) {
        case availableMediaTypes::DvD:
            return "DvD";
        default: 
            return "";
    }
}
