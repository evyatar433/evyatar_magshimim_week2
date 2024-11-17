#include <iostream>
#include <string>
#include "Profile.h"
#include "UserList.h"
#include "Page.h"
#include "User.h"

// init profile attributes
void Profile::init(User owner)
{
    _Owner = owner;
    _ProfileFriends = 0;
}

// clear friends list
void Profile::clear()
{
    _MyFriends.clear();
}

// return page owner name
User Profile::getOwner() const
{
    return _Owner;
}

// edit status
void Profile::setStatus(std::string new_status)
{
    _Page.setStatus(new_status);
}

// add post to profile
void Profile::addPostToProfilePage(std::string post)
{
    _Page.addLineToPosts(post);
}

// add friend
void Profile::addFriend(User friend_to_add)
{
    _MyFriends.add(friend_to_add);
    _ProfileFriends++;
}

// return profile page
std::string Profile::getPage() const
{
    return "Status: " + _Page.getStatus() +"\n*******************\n*******************" "\nPosts:\n" + _Page.getPosts();
}

// return profile friends
std::string Profile::getFriends() const
{
    UserNode* current = _MyFriends.get_first();
    std::string friends = "";

    while (current != nullptr)
    {
        User userData = current->get_data();
        friends += userData.getUserName() + ", ";
        current = current->get_next();  
    }

    return friends;
}

// return profile friends with same length
std::string Profile::getFriendsWithSameNameLength() const
{
    UserNode* current = _MyFriends.get_first();
    std::string userName = _Owner.getUserName();
    std::string friendsWithSameLen = "";
    while (current != nullptr)
    {
        User userData = current->get_data();
        std::string tempName = userData.getUserName();
        if (tempName.length() == userName.length())
        {
            friendsWithSameLen += tempName + ", ";
        }
        current = current->get_next(); // Move outside the if block
    }

    return friendsWithSameLen;
}

//void Profile::changeAllWordsInStatus(std::string word)
//{
//
//}


//void Profile::changeWordInStatus(std::string word_to_replace,std::string new_word)
//{
//
//}