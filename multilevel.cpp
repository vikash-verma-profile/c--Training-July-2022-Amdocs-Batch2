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
class FourWheeler : public Vehicle
{

public:
    FourWheeler()
    {
        cout << "This is a 4 wheeler Vehicle \n";
    }
};

class Car : public FourWheeler
{
public:
    Car()
    {
        cout << "Car is 4 wheeler";
    }
};
int main()
{
    Car p1;
}
