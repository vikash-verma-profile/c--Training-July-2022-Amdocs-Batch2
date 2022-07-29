#include <iostream>
using namespace std;
// Base
// Single level Inheritance
class Animal
{
public:
    void eat()
    {
        cout << "Eating" << endl;
    }
};
// Child class
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking...";
    }
};
int main()
{
    Dog d1;
    d1.eat();
    d1.bark();
}
