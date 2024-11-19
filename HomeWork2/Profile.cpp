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
    _Page.init();
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
}

// return profile page
std::string Profile::getPage() const
{
   return "Status: " + _Page.getStatus() +"\n*******************\n*******************\n" + _Page.getPosts();
}

// return profile friends
std::string Profile::getFriends() const
{
    UserNode* current = _MyFriends.get_first();
    std::string friends;

    while (current != nullptr)
    {
        User userData = current->get_data();
        friends += userData.getUserName();
        current = current->get_next();

        if (current != nullptr)  // Add a comma only if there's another friend
        {
            friends += ",";
        }
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
            if (!friendsWithSameLen.empty())
            {
                friendsWithSameLen += ",";
            }
            friendsWithSameLen += tempName;
        }
        current = current->get_next();
    }

    return friendsWithSameLen;
}   

// chenage all words in status to a new word
void Profile::changeAllWordsInStatus(std::string word)
{
    std::string status = _Page.getStatus(); 
    std::string newStatus;

    // bool that check if we are on word
    bool inWord = false;
    for (char c : status)
    {
        if (std::isspace(c)) // if its the end of the word
        {
            if (inWord)
            {
                newStatus += word; 
                inWord = false;
            }
            newStatus += c; 
        }
        else
        {
            if (!inWord)
            {
                inWord = true; // new word
            }
        }
    }

    // go to the last word if needed
    if (inWord)
    {
        newStatus += word;
    }

    _Page.setStatus(newStatus); // update page status
}

// chenage specific word in status to a new word
void Profile::changeWordInStatus(std::string word_to_replace, std::string new_word)
{
    std::string status = _Page.getStatus();
    std::string newStatus;
    std::string currentWord;
    bool inWord = false;

    for (char c : status)
    {
        if (std::isspace(c)) // end of a word
        {
            if (inWord)
            {
                if (currentWord == word_to_replace)
                {
                    newStatus += new_word; // replace word
                }
                else
                {
                    newStatus += currentWord; // keep original word
                }
                currentWord.clear();
                inWord = false;
            }
            newStatus += c; // add space 
        }
        else
        {
            inWord = true;
            currentWord += c; 
        }
    }

    // go to the last word if needed
    {
        if (currentWord == word_to_replace)
        {
            newStatus += new_word;
        }
        else
        {
            newStatus += currentWord;
        }
    }

    _Page.setStatus(newStatus); // update the page status
}