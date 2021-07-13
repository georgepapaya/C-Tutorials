#include <iostream>
using namespace std;
void averageFun(int max1); // parameter intmax
int main(int mx) // parameter mx
{
    cout<<"Enter the maximum number? "<<endl;
    cin>>mx;
    averageFun(mx);
    return 0;
}
void averageFun(int max1){
   int getval; // input value
   int avg = 0; // get average
   int sum = 0; // get sum
   int i;
   cout<<"Enter numbers to be used: "<<endl;
    for(i=0;i<max1;i++)
    {
        cout<<"value: ["<< i <<"] "<<endl;
        cin>>getval;
        sum = sum + getval;
    }
    avg = sum / max1;
    cout<<"Average is : "<< avg<<endl;
}
