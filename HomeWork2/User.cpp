#include <iostream>
#include <string>
#include "User.h"
#include "DeviceList.h"

// get list of all devices
void User::init(unsigned int id, std::string username, unsigned int age)
{
    _Id = id;
    _Username = username; 
    _Age = age;
    _UserDevices = 0;
}

// clear list
void User::clear()
{
    _MyDevices.clear();
}

// get the user id
unsigned int User::getID() const
{
    return _Id;
}

// get the user name
std::string User::getUserName() const
{
    return _Username;
}

// get the user age
unsigned int User::getAge() const
{
    return _Age;
}

// get list of all devices
DevicesList& User::getDevices()
{
    return _MyDevices;
}

// add device to the list
void User::addDevice(Device newDevice)
{
    _MyDevices.add(newDevice);
    _UserDevices += 1;
}

// check if all devices are active
bool User::checkIfDevicesAreOn() const
{
    DeviceNode* current = _MyDevices.get_first();

    while (current != nullptr)
    {
        Device& deviceData = current->get_data();  // get the Device reference from the current node
        bool isActive = deviceData.isActive();
        if (isActive == false) 
        {
            return false;  // return false if any device is not active
        }
        current = current->get_next(); // move to the next device 
    }

    return true;  // return true if all devices are active
}

