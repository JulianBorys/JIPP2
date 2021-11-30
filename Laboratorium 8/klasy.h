#include <iostream>
#include <string>
using namespace std;

class Note
{
private:
    string title;
public:
    string getTitle();
    void setTitle(string title);
    virtual string getContent() = 0;
    virtual void setContent(string content) = 0;
};

string Note::getTitle()
{
    return title;
}

void Note::setTitle(string title)
{
    this->title=title;
}

class TextNote: public Note
{
private:
    string content;
public:
    string getContent() override;
    void setContent(string content) override;
};

string TextNote::getContent()
{
    return content;
}

void TextNote::setContent(string content)
{
    this->content = content;
}


