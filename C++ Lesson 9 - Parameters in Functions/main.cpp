#include <iostream>

using namespace std;
void numbers(int x, int y);// parameter called x, and y
int main()
{
    numbers(10,12);
    return 0;
}

void numbers(int x, int y){
cout<<"the product is: "<<x * y <<endl;
}
