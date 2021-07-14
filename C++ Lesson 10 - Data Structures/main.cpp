#include <iostream>

using namespace std;

struct registerclients{ // defines and gives our object values
    char name[20];
    char surname[20];
    int regnum;
    int age;
};

int main()
{
    struct registerclients rc; // structure call
    cout<<"Enter a first name"<<endl;
    cin>>rc.name; // refeferencing values in the structure
    cout<<"Enter a surname"<<endl;
    cin>>rc.surname;
    cout<<"Enter a registration number"<<endl;
    cin>>rc.regnum;
    cout<<"Enter an age"<<endl;
    cin>>rc.age;
    cout<<"View Contents"<<endl;
    cout<<"Name: "<<rc.name<<endl;
    return 0;
}
