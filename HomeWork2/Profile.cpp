#include <iostream>
#include <string>
#include "Profile.h"
#include "UserList.h"

void Profile::init(User owner)
{
    _Owner = owner;
}

//void clear()
//{
//
//}

User Profile::getOwner()
{
    return _Owner;
}