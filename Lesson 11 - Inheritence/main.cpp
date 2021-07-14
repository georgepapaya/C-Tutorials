#include <iostream>

using namespace std;

class mammal {

public:
    void crawl()
    {
        cout<<"Can Crawl?"<<endl;
    }
};

class goat : public mammal{
    public:
    void eating()
    {
        cout<<"Chewing the cud!"<<endl;
    }
};

int main()
{
    goat g;
    g.crawl(); // derivied from the base class
    g.eating(); // original class that we have our normal eating
    return 0;
}
