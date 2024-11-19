#include <iostream>
#include <string>
#include "Page.h"

// init page attributes
void Page::init()
{
	_Status = "";
	_Posts = "";
}

// init page attributes
std::string Page::getPosts() const
{
	return _Posts;
}

// return the status 
std::string Page::getStatus() const
{
	return _Status;
}

// clear page
void Page::clearPage()
{
	_Posts = "";
}

// edit status
void Page::setStatus(std::string status)
{
	_Status = status;
}

// add new post
void Page::addLineToPosts(std::string new_line)
{
	std::string newPost = new_line;
	_Posts = _Posts + newPost +"\n";
}

