
class Page
{
private:

    std::string _status;
    std::string _posts;

public:
    void init();
    std::string getPosts();
    std::string getStatus();
    void clearPage();
    void setStatus(std::string status);
    void addLineToPosts(std::string new_line);
};