#include <iostream>

using namespace std;
union numbers {
int num;
float fl;
};


int main()
{
    numbers n;
    n.num = 10;
    n.fl = 3.457;
    cout<<n.num<<endl;
    cout<<n.fl<<endl;
    return 0;
}
