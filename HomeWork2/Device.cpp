#include <iostream>
#include "Device.h"
// init device attributes
void Device::init(unsigned int id, DeviceType type, std::string os)
{
    _id = id;
    _type = type;
    _os = os;
    _isActive = false;
}

// get device os
std::string Device::getOS() const
{
    return _os;
}
