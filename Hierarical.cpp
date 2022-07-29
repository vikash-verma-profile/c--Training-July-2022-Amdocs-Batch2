#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle \n";
    }
};
class Bus : public Vehicle
{

public:
    Bus()
    {
        cout << "Bus is a Vehicle \n";
    }
};

class Car : public Vehicle
{
public:
    Car()
    {
        cout << "Car is a Vehicle \n";
    }
};
int main()
{
    Car p1;
    Bus b1;
}
