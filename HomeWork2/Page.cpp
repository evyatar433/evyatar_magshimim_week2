#include <iostream>
#include <string>
#include "Page.h"

void Page::init()
{
	_status = "";
	_posts = "";
}

std::string Page::getPosts()
{
	return _posts;
}

std::string Page::getStatus()
{
	return _status;
}

void Page::clearPage()
{
	_posts = "";
}

void Page::setStatus(std::string status)
{
	_status = status;
}

void Page::addLineToPosts(std::string new_line)
{
	std::string newPost = new_line;
	_posts = _posts + newPost;
}