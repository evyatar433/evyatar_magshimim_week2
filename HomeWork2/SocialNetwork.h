#pragma once
#include "UserList.h"
#include "ProfileList.h"
#include "Page.h"

class SocialNetwork
{
private:
    ProfileList _Profiles;
    UserList _MyFriends;
    DevicesList _MyDevices;
    std::string _NetworkName; 
    int _MinAge;               

public:
    void init(std::string networkName, int minAge);
    void clear();
    std::string getNetworkName();
    int getMinAge();
    bool addProfile(Profile profile_to_add);
    std::string getWindowsDevices() const;
};