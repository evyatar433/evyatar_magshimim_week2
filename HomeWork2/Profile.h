#pragma once

class Profile
{
private:

    User _Owner;

public:

    void init(User owner);
    User getOwner();
};