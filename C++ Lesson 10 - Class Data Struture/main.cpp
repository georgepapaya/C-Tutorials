#include <iostream>

using namespace std;

class automobiles{

public:
    string model;
    string color;
    string make;
};


int main()
{
    automobiles car1;
    car1.color = "Red";
    car1.make = "Ford";
    car1.model = "Ranger";
    cout<<car1.model<<endl;

    automobiles car2;
    car2.color = "Blue";
    car2.make = "Toyota";
    car2.model = "Starlet";
    cout<<car2.model<<endl;
    return 0;
}
