#pragma once

class Page
{
private:

    std::string _Status;
    std::string _Posts;

public:
    void init();
    std::string getPosts() const;
    std::string getStatus() const;
    void clearPage();
    void setStatus(std::string status);
    void addLineToPosts(std::string new_line);
};