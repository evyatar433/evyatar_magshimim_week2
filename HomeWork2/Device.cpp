#include <iostream>
#include <string>
#include "Device.h"

// init device attributes
void Device::init(unsigned int id, DeviceType type, std::string os)
{
    _Id = id;
    _Type = type;
    _Os = os;
    _IsActive = true;
}

// get device os
std::string Device::getOS() const
{
    return _Os;
}

// get device id
unsigned int Device::getID() const
{
    return _Id;
}

// get device type
DeviceType Device::getType() const
{
    return _Type;
}

// check if device active
bool Device::isActive() const
{
    return _IsActive;
}

// turn on device
void Device::activate()
{
    _IsActive = true;
}

// turn off device
void Device::deactivate()
{
    _IsActive = false;
}

