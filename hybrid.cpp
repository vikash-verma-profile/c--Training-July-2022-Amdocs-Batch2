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
class Fare
{

public:
    Fare()
    {
        cout << "Fare of a Vehicle \n";
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

class Bus:public Vehicle,public Fare{

};
int main()
{
    Bus b1;
}
