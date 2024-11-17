#pragma once

#include <string>

///////////////////////////////////////////////////////////
/*														 //
	Those definitions are used for tests,                //
	you can add your own, but please do not delete any.  //
*/														 //
enum DeviceType { PHONE, PC, LAPTOP, TABLET };		     //
//
#define UbuntuOS "UbuntuLinux"                           //						
#define RedHatOS "RedHatLinux"							 //
#define MacOS "MacOS"									 //
#define IOS "IOS"										 //
#define WINDOWS7 "Windows7"                              //
#define WINDOWS10 "Windows10"                            //
#define WINDOWS11 "Windows11"                            //
#define ANDROID "Android"                                //
														 //
/// ///////////////////////////////////////////////////////

#pragma once
class Device
{
private:

	unsigned int _Id;
    DeviceType _Type;
    std::string _Os;
    bool _IsActive = false;

public:
	void init(unsigned int id, DeviceType type, std::string os);
	std::string getOS() const;
	bool isActive() const;
	void activate();
	unsigned int getID() const;
	void deactivate();
	DeviceType getType() const;
};

