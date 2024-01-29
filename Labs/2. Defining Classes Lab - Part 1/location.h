#include <iostream>
#include <cstring>

class Location
{
    std::string locationName;
    std::string locationAddress;
    std::string locationNotes;
    public:
    std::string getlocationsName();
    void setlocationName(std::string& locationName);
    std::string getAddress();
    void setAddress(std::string& locationAddress);
    std::string getLocationNotes();
    void setLocationNotes(std::string& locationNotes);

};