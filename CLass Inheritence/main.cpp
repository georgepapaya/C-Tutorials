#include <iostream>

using namespace std;

class Person{
public:
    std :: string username{}; // variables
    int userage{};

    Person (const std::string& name = "John", int age = 25 )
    :username{name}, userage{age}
    {

    }
};
int main()
{
    Person p;
    cout<<p.username<<" \n "<<p.userage<<endl;
    return 0;
}
