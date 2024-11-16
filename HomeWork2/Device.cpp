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

//int main()
//{
//    // create a Device
//    Device myDevice;
//
//    // initialize the device with attributes
//    myDevice.init(101, DeviceType::PHONE, "Android");
//
//    // display device details
//    std::cout << "Device ID: " << myDevice.getID() << std::endl;
//    std::cout << "Device OS: " << myDevice.getOS() << std::endl;
//    std::cout << "Device Type: " << (myDevice.getType() == DeviceType::PHONE ? "Smartphone" : "Other") << std::endl;
//    std::cout << "Is Active: " << (myDevice.isActive() ? "Yes" : "No") << std::endl;
//
//    // activate the device
//    myDevice.activate();
//    std::cout << "Device activated." << std::endl;
//    std::cout << "Is Active: " << (myDevice.isActive() ? "Yes" : "No") << std::endl;
//
//    // deactivate the device
//    myDevice.deactivate();
//    std::cout << "Device deactivated." << std::endl;
//    std::cout << "Is Active: " << (myDevice.isActive() ? "Yes" : "No") << std::endl;
//
//    return 0;
//}