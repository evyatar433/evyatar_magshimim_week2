#pragma once
#include "DeviceList.h"
class User
{
private:
    unsigned int _Id;
    std::string _Username;
    unsigned int _Age;
    DevicesList _MyDevices;
    unsigned int _UserDevices;
    unsigned int _DevicesOn;

public:
    void init(unsigned int id, std::string username, unsigned int age);
    void clear();
    unsigned int getID() const;
    std::string getUserName() const;
    unsigned int getAge() const;
    DevicesList& getDevices();
    void addDevice(Device newDevice);
    bool CheckIfDevicesAreOn() const;
};