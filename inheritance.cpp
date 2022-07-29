#include <iostream>
using namespace std;
//Base
//Single level Inheritance
class Account
{
public:
   float salary=60000;
};
//Child class
class Programmer:public Account{
public:
float bonus=5000;
};
int main()
{
    Programmer p1;
    cout<<"Salary : "<<p1.salary<<endl;
    cout<<"Bonus : "<<p1.bonus<<endl;
}
