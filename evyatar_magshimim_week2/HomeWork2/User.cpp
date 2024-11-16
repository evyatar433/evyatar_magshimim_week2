#include <iostream>
#include <string>
#include "User.h"
#include "DeviceList.h"

void User::init(unsigned int id, std::string username, unsigned int age)
{
    _Id = id;
    _Username = username; 
    _Age = age;
    _UserDevices = 0;
}

void User::clear()
{
    delete this;
}

unsigned int User::getID() const
{
    return _Id;
}

std::string User::getUserName() const
{
    return _Username;
}

unsigned int User::getAge() const
{
    return _Age;
}

DevicesList& User::getDevices()
{
    return _MyDevices;
}

void User::addDevice(Device newDevice)
{
    _MyDevices.add(newDevice);
    _UserDevices += 1;

}

bool User::CheckIfDevicesAreOn() const
{

}