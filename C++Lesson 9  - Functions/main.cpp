#include <iostream>

using namespace std;
void sum(); // function prototype
int main()
{
    sum(); // function call
    return 0;
}
void sum(){// function for sum
    int x,y;
    cout<<"Enter first value:"<<endl;
    cin>>x;
    cout<<"Enter second value:"<<endl;
    cin>>y;
    cout<<"sum is :"<<x + y << endl;
}
