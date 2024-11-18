#include <iostream>
#include <string>
#include "User.h"
#include "Profile.h"
#include "DeviceList.h"
#include "UserList.h"
#include "ProfileList.h"
#include "SocialNetwork.h"

// init social network
void SocialNetwork::init(std::string networkName, int minAge)
{
    _NetworkName = networkName;
    _MinAge = minAge;
}
// clear social network
void SocialNetwork::clear()
{
    _Profiles.clear();
}

// return network name
std::string SocialNetwork::getNetworkName()
{
    return _NetworkName;
}

// return minimum age
int SocialNetwork::getMinAge()
{
    return _MinAge;
}

// add profile network
bool SocialNetwork::addProfile(Profile profile_to_add)
{
    User profile_owner = profile_to_add.getOwner();

    // check if the profile's age is below the minimum age
    if (profile_owner.getAge() < _MinAge)
    {
        return false;
    }

    _Profiles.add(profile_to_add);
    return true;
}

// get all devices that run windows
std::string SocialNetwork::getWindowsDevices() const
{
    ProfileNode* currentProfile = _Profiles.get_first();
    std::string windowsDevices;

    while (currentProfile != nullptr)
    {
        UserNode* currentUser = _MyFriends.get_first();

        while (currentUser != nullptr)
        {
            DeviceNode* currentDevice = _MyDevices.get_first();

            while (currentDevice != nullptr)
            {
                Device device = currentDevice->get_data();
                if (device.getOS().find("Windows") != std::string::npos)
                {
                    unsigned int id = device.getID();
                    std::string os = device.getOS();
                    /*windowsDevices += "["+ id + os +  "]";*/
                    windowsDevices = "dfwwafrewrwrweerwrw";
                }
                currentDevice = currentDevice->get_next();
            }
            currentUser = currentUser->get_next();
        }

        currentProfile = currentProfile->get_next();
    }

    return windowsDevices;
}

    
