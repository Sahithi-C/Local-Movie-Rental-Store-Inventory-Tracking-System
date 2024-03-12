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
    // Pre-conditions - None.
    // Post-conditions - A Media object is initialized with default values.
Media::Media() {
    stock = 0;
    mediaType = availableMediaTypes::DvD;
    content = nullptr;
}

// Media(int stock, availableMediaTypes mediaType, Content* content)
// Summary - Constructs a Media object with the given stock, media type, and content.
// Pre-conditions - The `stock` parameter must be a non-negative integer representing the stock count of the media.
//                - The `mediaType` parameter must be one of the values defined in the `availableMediaTypes` enum, representing the type of media.
//                - The `content` parameter must point to a valid `Content` object representing the content associated with the media.
// Post-conditions - A Media object is constructed with the provided `stock`, `mediaType`, and `content`.
//                 - The member variables `stock`, `mediaType`, and `content` are initialized with the corresponding parameters.
Media::Media(int stock, availableMediaTypes mediaType, Content* content) {
    setStock(stock);
    setMediaType(mediaType);
    setContent(content);
}

// ~Media()
// Summary - Destructor.
// Pre-conditions - None.
// Post-conditions - Cleans any dynamically associated memory.
Media::~Media() {}

//--------------------------------------------comparison operators------------------------------------------------------------

// operator>()
// Summmary - Overloads the > operator to correctly compare Media.
// Pre-conditions - None.
// Post-conditions - Returns true if this is > c.
//                   false otherwise.
bool Media::operator>(const Media &m) const {
    return this->content > m.content;
}

// operator>=()
// Summmary - Overloads the >= operator to correctly compare Media.
// Pre-conditions - None.
// Post-conditions - Returns true if this is >= c.
//                   false otherwise.
bool Media::operator>=(const Media &m) const {
    return this->content >= m.content;
}

// operator<()
// Summmary - Overloads the < operator to correctly compare Media.
// Pre-conditions - None.
// Post-conditions - Returns true if this is < c.
//                   false otherwise.
bool Media::operator<(const Media &m) const {
    return this->content < m.content;
}

// operator<=()
// Summmary - Overloads the <= operator to correctly compare Media.
// Pre-conditions - None.
// Post-conditions - Returns true if this is <= c.
//                   false otherwise.
bool Media::operator<=(const Media &m) const {
    return this->content <= m.content;
}


// operator==()
// Summmary - Overloads the == operator to correctly compare Media.
// Pre-conditions - None.
// Post-conditions - Returns true if this is == c.
//                   false otherwise.
bool Media::operator==(const Media &m) const {
    return this->content == m.content;
}
    

//----------------------------------------------other member functions---------------------------------------------------------

// reduceStock()
// Summary - Reduces the stock of a media item by 1 if there's valid stock.
// Pre-conditions - stock count should be greater than zero.
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
// Pre-conditions - None.
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
// Pre-conditions - None.
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
// Pre-conditions - None.
// Post-conditions - Type of the media is set for the media item.
//                   Returns true if the media type was set.
//                   false otherwise.
bool Media::setMediaType(availableMediaTypes mediaType){
    this->mediaType = mediaType;
    return true;
}

// setContent()
// Summary - Sets the content that is present on this media.
// Pre-conditions - None.
// Post-conditions - content field is set for this media object permanently.
//                   Returns true if content field was updated.
//                   false otherwise.
bool Media::setContent(Content * content) {
    this->content = content;
    return true;
}

//---------------------------------------------------getter methods------------------------------------------------------------

// getStock() const
// Summary - Gets the available stock count for a particular media.
// Pre-conditions - None.
// Post-conditions - Returns the stock count for the media item.
int Media::getStock() const{
    return this->stock;
}

// getMediaType() const
// Summary - Gets the type of the media item.
// Pre-conditions - None.
// Post-conditions - Returns the type of media item.
Media::availableMediaTypes Media::getMediaType() const{
    return this->mediaType;
}

// getContent()
// Summary - Gets the content that is present on this media.
// Pre-conditions - None.
// Post-conditions - Returns the content for on this media object.
//                   nullptr if there is no content for this media object yet.
const Content * Media::getContent() const {
    return this->content;
}

// getMediaId() const
// Summary - Gets the unique identifier of a media item.
// Pre-conditions - None.
// Post-conditions - Returns the unique identifier of a media item.
string Media::getMediaId() const{

    return this->content->getContentId() + mediaTypeToString(this->mediaType);
}

//------------------------------------------------accessors---------------------------------------------------------------
// operator<<()
// Summary - Overloaded output stream operator for printing Media objects.
// Pre-conditions - None.
// Post-conditions - Media objects are printed to output.
ostream& operator<<(ostream& out, const Media m) {
    out << m.stock << ", " << m.content;
    return out; 
}

// mediaTypeToString()
// Summary - Converts the enum availableMediaTypes to a readable string.
// Pre-conditions - None.
// Post-conditions - Returns a string representing the passed mediaType.
string Media::mediaTypeToString(availableMediaTypes mediaType) {
    switch (mediaType) {
        case availableMediaTypes::DvD:
            return "DvD";
        default: 
            return "DvD";
    }
}
